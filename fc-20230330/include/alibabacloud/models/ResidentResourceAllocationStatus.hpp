// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESIDENTRESOURCEALLOCATIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_RESIDENTRESOURCEALLOCATIONSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ResidentResourceAllocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FC20230330
{
namespace Models
{
  class ResidentResourceAllocationStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResidentResourceAllocationStatus& obj) { 
      DARABONBA_PTR_TO_JSON(lastAllocatedTime, lastAllocatedTime_);
      DARABONBA_PTR_TO_JSON(lastAllocation, lastAllocation_);
    };
    friend void from_json(const Darabonba::Json& j, ResidentResourceAllocationStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(lastAllocatedTime, lastAllocatedTime_);
      DARABONBA_PTR_FROM_JSON(lastAllocation, lastAllocation_);
    };
    ResidentResourceAllocationStatus() = default ;
    ResidentResourceAllocationStatus(const ResidentResourceAllocationStatus &) = default ;
    ResidentResourceAllocationStatus(ResidentResourceAllocationStatus &&) = default ;
    ResidentResourceAllocationStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResidentResourceAllocationStatus() = default ;
    ResidentResourceAllocationStatus& operator=(const ResidentResourceAllocationStatus &) = default ;
    ResidentResourceAllocationStatus& operator=(ResidentResourceAllocationStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->lastAllocatedTime_ != nullptr
        && this->lastAllocation_ != nullptr; };
    // lastAllocatedTime Field Functions 
    bool hasLastAllocatedTime() const { return this->lastAllocatedTime_ != nullptr;};
    void deleteLastAllocatedTime() { this->lastAllocatedTime_ = nullptr;};
    inline string lastAllocatedTime() const { DARABONBA_PTR_GET_DEFAULT(lastAllocatedTime_, "") };
    inline ResidentResourceAllocationStatus& setLastAllocatedTime(string lastAllocatedTime) { DARABONBA_PTR_SET_VALUE(lastAllocatedTime_, lastAllocatedTime) };


    // lastAllocation Field Functions 
    bool hasLastAllocation() const { return this->lastAllocation_ != nullptr;};
    void deleteLastAllocation() { this->lastAllocation_ = nullptr;};
    inline const vector<ResidentResourceAllocation> & lastAllocation() const { DARABONBA_PTR_GET_CONST(lastAllocation_, vector<ResidentResourceAllocation>) };
    inline vector<ResidentResourceAllocation> lastAllocation() { DARABONBA_PTR_GET(lastAllocation_, vector<ResidentResourceAllocation>) };
    inline ResidentResourceAllocationStatus& setLastAllocation(const vector<ResidentResourceAllocation> & lastAllocation) { DARABONBA_PTR_SET_VALUE(lastAllocation_, lastAllocation) };
    inline ResidentResourceAllocationStatus& setLastAllocation(vector<ResidentResourceAllocation> && lastAllocation) { DARABONBA_PTR_SET_RVALUE(lastAllocation_, lastAllocation) };


  protected:
    std::shared_ptr<string> lastAllocatedTime_ = nullptr;
    std::shared_ptr<vector<ResidentResourceAllocation>> lastAllocation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FC20230330
#endif
