// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETOTALATTACKMAXFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETOTALATTACKMAXFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeTotalAttackMaxFlowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTotalAttackMaxFlowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTotalAttackMaxFlowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeTotalAttackMaxFlowRequest() = default ;
    DescribeTotalAttackMaxFlowRequest(const DescribeTotalAttackMaxFlowRequest &) = default ;
    DescribeTotalAttackMaxFlowRequest(DescribeTotalAttackMaxFlowRequest &&) = default ;
    DescribeTotalAttackMaxFlowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTotalAttackMaxFlowRequest() = default ;
    DescribeTotalAttackMaxFlowRequest& operator=(const DescribeTotalAttackMaxFlowRequest &) = default ;
    DescribeTotalAttackMaxFlowRequest& operator=(DescribeTotalAttackMaxFlowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->instanceIds_ != nullptr && this->resourceGroupId_ != nullptr && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeTotalAttackMaxFlowRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline DescribeTotalAttackMaxFlowRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline DescribeTotalAttackMaxFlowRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeTotalAttackMaxFlowRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeTotalAttackMaxFlowRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // > This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The IDs of the Anti-DDoS Proxy instances. Separate multiple instance IDs with commas (,). Example: InstanceIds.1, InstanceIds.2, InstanceIds.3.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The ID of the resource group to which the instance belongs in Resource Management. If you do not configure this parameter, the instance belongs to the default resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The beginning of the time range to query. The value is a UNIX timestamp. Unit: seconds.
    // 
    // > This UNIX timestamp must indicate a point in time that is accurate to the minute.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
