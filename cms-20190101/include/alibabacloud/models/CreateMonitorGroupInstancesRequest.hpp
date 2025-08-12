// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORGROUPINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORGROUPINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMonitorGroupInstancesRequestInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMonitorGroupInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Instances, instances_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorGroupInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Instances, instances_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateMonitorGroupInstancesRequest() = default ;
    CreateMonitorGroupInstancesRequest(const CreateMonitorGroupInstancesRequest &) = default ;
    CreateMonitorGroupInstancesRequest(CreateMonitorGroupInstancesRequest &&) = default ;
    CreateMonitorGroupInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorGroupInstancesRequest() = default ;
    CreateMonitorGroupInstancesRequest& operator=(const CreateMonitorGroupInstancesRequest &) = default ;
    CreateMonitorGroupInstancesRequest& operator=(CreateMonitorGroupInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupId_ != nullptr
        && this->instances_ != nullptr && this->regionId_ != nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateMonitorGroupInstancesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instances Field Functions 
    bool hasInstances() const { return this->instances_ != nullptr;};
    void deleteInstances() { this->instances_ = nullptr;};
    inline const vector<CreateMonitorGroupInstancesRequestInstances> & instances() const { DARABONBA_PTR_GET_CONST(instances_, vector<CreateMonitorGroupInstancesRequestInstances>) };
    inline vector<CreateMonitorGroupInstancesRequestInstances> instances() { DARABONBA_PTR_GET(instances_, vector<CreateMonitorGroupInstancesRequestInstances>) };
    inline CreateMonitorGroupInstancesRequest& setInstances(const vector<CreateMonitorGroupInstancesRequestInstances> & instances) { DARABONBA_PTR_SET_VALUE(instances_, instances) };
    inline CreateMonitorGroupInstancesRequest& setInstances(vector<CreateMonitorGroupInstancesRequestInstances> && instances) { DARABONBA_PTR_SET_RVALUE(instances_, instances) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMonitorGroupInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The instances that you want to add to the application group.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateMonitorGroupInstancesRequestInstances>> instances_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
