
#ifndef HOSTELMANAGER_H
#define HOSTELMANAGER_H

#include "accomodation.h"
#include "reportable.h"
#include "hostelblock.h"
#include <string>
#include <iostream>
using namespace std;
class HostelManager : public Accomodation, public Reportable //multiple inheritance
{
private:
    HostelBlock* block;   // composition — pointer se reference rakha hai ,that's allow to make memory dynamicallyand cleanup through destructor

public:
    HostelManager(string blockName);
    ~HostelManager();

    void allocateRoom() override;
    void vacateRoom() override;
    void generateReport() const override;

    HostelBlock* getBlock() const;
};

#endif // HOSTELMANAGER_H