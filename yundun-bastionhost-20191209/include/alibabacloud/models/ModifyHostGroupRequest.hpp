// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(HostGroupName, hostGroupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyHostGroupRequest() = default ;
    ModifyHostGroupRequest(const ModifyHostGroupRequest &) = default ;
    ModifyHostGroupRequest(ModifyHostGroupRequest &&) = default ;
    ModifyHostGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostGroupRequest() = default ;
    ModifyHostGroupRequest& operator=(const ModifyHostGroupRequest &) = default ;
    ModifyHostGroupRequest& operator=(ModifyHostGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->hostGroupId_ == nullptr && this->hostGroupName_ == nullptr && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyHostGroupRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline ModifyHostGroupRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // hostGroupName Field Functions 
    bool hasHostGroupName() const { return this->hostGroupName_ != nullptr;};
    void deleteHostGroupName() { this->hostGroupName_ = nullptr;};
    inline string getHostGroupName() const { DARABONBA_PTR_GET_DEFAULT(hostGroupName_, "") };
    inline ModifyHostGroupRequest& setHostGroupName(string hostGroupName) { DARABONBA_PTR_SET_VALUE(hostGroupName_, hostGroupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHostGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new remarks of the asset group. The remarks can be up to 500 characters in length.
    shared_ptr<string> comment_ {};
    // The ID of the asset group that you want to modify.
    // 
    // >  You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to query the ID of the host group.
    // 
    // This parameter is required.
    shared_ptr<string> hostGroupId_ {};
    // The new name of the asset group. The name can be up to 128 characters in length.
    shared_ptr<string> hostGroupName_ {};
    // The ID of the bastion host whose asset group you want to modify.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the bastion host whose asset group you want to modify.
    // 
    // >  For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
