// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDHOSTSTOGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDHOSTSTOGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AddHostsToGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddHostsToGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(HostIds, hostIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, AddHostsToGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(HostIds, hostIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    AddHostsToGroupRequest() = default ;
    AddHostsToGroupRequest(const AddHostsToGroupRequest &) = default ;
    AddHostsToGroupRequest(AddHostsToGroupRequest &&) = default ;
    AddHostsToGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddHostsToGroupRequest() = default ;
    AddHostsToGroupRequest& operator=(const AddHostsToGroupRequest &) = default ;
    AddHostsToGroupRequest& operator=(AddHostsToGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostGroupId_ == nullptr
        && this->hostIds_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline AddHostsToGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // hostIds Field Functions 
    bool hasHostIds() const { return this->hostIds_ != nullptr;};
    void deleteHostIds() { this->hostIds_ = nullptr;};
    inline string getHostIds() const { DARABONBA_PTR_GET_DEFAULT(hostIds_, "") };
    inline AddHostsToGroupRequest& setHostIds(string hostIds) { DARABONBA_PTR_SET_VALUE(hostIds_, hostIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline AddHostsToGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddHostsToGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the asset group to which you want to add hosts.
    // 
    // >You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query the asset group ID.
    // 
    // This parameter is required.
    shared_ptr<string> hostGroupId_ {};
    // The IDs of the hosts that you want to add to the asset group. Specify a JSON string. You can specify up to 100 host IDs.
    // 
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query the host IDs.
    // 
    // This parameter is required.
    shared_ptr<string> hostIds_ {};
    // The ID of the bastion host whose asset group you want to add hosts to.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host whose asset group you want to add hosts to.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
