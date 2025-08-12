// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYMONITORGROUPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYMONITORGROUPINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyMonitorGroupInstancesRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class ModifyMonitorGroupInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyMonitorGroupInstancesRequest() = default ;
    ModifyMonitorGroupInstancesRequest(const ModifyMonitorGroupInstancesRequest &) = default ;
    ModifyMonitorGroupInstancesRequest(ModifyMonitorGroupInstancesRequest &&) = default ;
    ModifyMonitorGroupInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyMonitorGroupInstancesRequest() = default ;
    ModifyMonitorGroupInstancesRequest& operator=(const ModifyMonitorGroupInstancesRequest &) = default ;
    ModifyMonitorGroupInstancesRequest& operator=(ModifyMonitorGroupInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->instances_ != nullptr && this->regionId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline ModifyMonitorGroupInstancesRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<ModifyMonitorGroupInstancesRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<ModifyMonitorGroupInstancesRequestInstances>) };
    inline vector<ModifyMonitorGroupInstancesRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<ModifyMonitorGroupInstancesRequestInstances>) };
    inline ModifyMonitorGroupInstancesRequest& setInstances(const vector<ModifyMonitorGroupInstancesRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline ModifyMonitorGroupInstancesRequest& setInstances(vector<ModifyMonitorGroupInstancesRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyMonitorGroupInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<ModifyMonitorGroupInstancesRequestInstances>> instances_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
