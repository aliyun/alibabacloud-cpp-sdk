// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LOCKUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class LockUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(UserIds, userIds_);
    };
    friend void from_json(const Darabonba::Json& j, LockUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(UserIds, userIds_);
    };
    LockUsersRequest() = default ;
    LockUsersRequest(const LockUsersRequest &) = default ;
    LockUsersRequest(LockUsersRequest &&) = default ;
    LockUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockUsersRequest() = default ;
    LockUsersRequest& operator=(const LockUsersRequest &) = default ;
    LockUsersRequest& operator=(LockUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->regionId_ != nullptr && this->userIds_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LockUsersRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline LockUsersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline string userIds() const { DARABONBA_PTR_GET_DEFAULT(userIds_, "") };
    inline LockUsersRequest& setUserIds(string userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };


  protected:
    // The ID of the bastion host to which the users to be locked belong.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The region ID of the bastion host to which the users to be locked belong.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the user to be locked. The value is a JSON string. You can add up to 100 user IDs. If you specify multiple IDs, separate the IDs with commas (,).
    // 
    // > You can call the [ListUsers](https://help.aliyun.com/document_detail/204522.html) operation to query the ID of the user.
    // 
    // This parameter is required.
    std::shared_ptr<string> userIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
