// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMONITORGROUPINSTANCESREQUESTINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEMONITORGROUPINSTANCESREQUESTINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class CreateMonitorGroupInstancesRequestInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMonitorGroupInstancesRequestInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMonitorGroupInstancesRequestInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateMonitorGroupInstancesRequestInstances() = default ;
    CreateMonitorGroupInstancesRequestInstances(const CreateMonitorGroupInstancesRequestInstances &) = default ;
    CreateMonitorGroupInstancesRequestInstances(CreateMonitorGroupInstancesRequestInstances &&) = default ;
    CreateMonitorGroupInstancesRequestInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMonitorGroupInstancesRequestInstances() = default ;
    CreateMonitorGroupInstancesRequestInstances& operator=(const CreateMonitorGroupInstancesRequestInstances &) = default ;
    CreateMonitorGroupInstancesRequestInstances& operator=(CreateMonitorGroupInstancesRequestInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->regionId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline CreateMonitorGroupInstancesRequestInstances& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateMonitorGroupInstancesRequestInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline CreateMonitorGroupInstancesRequestInstances& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateMonitorGroupInstancesRequestInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // To obtain the abbreviation of an Alibaba Cloud service name, call the [DescribeProjectMeta](https://help.aliyun.com/document_detail/114916.html) operation. The `metricCategory` tag in the `Labels` response parameter indicates the abbreviation of the Alibaba Cloud service name.
    // 
    // This parameter is required.
    std::shared_ptr<string> category_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The region ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
