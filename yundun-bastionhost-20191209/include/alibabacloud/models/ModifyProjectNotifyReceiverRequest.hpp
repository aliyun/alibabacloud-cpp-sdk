// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPROJECTNOTIFYRECEIVERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPROJECTNOTIFYRECEIVERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyProjectNotifyReceiverRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyProjectNotifyReceiverRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyProjectNotifyReceiverRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ReceiverId, receiverId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyProjectNotifyReceiverRequest() = default ;
    ModifyProjectNotifyReceiverRequest(const ModifyProjectNotifyReceiverRequest &) = default ;
    ModifyProjectNotifyReceiverRequest(ModifyProjectNotifyReceiverRequest &&) = default ;
    ModifyProjectNotifyReceiverRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyProjectNotifyReceiverRequest() = default ;
    ModifyProjectNotifyReceiverRequest& operator=(const ModifyProjectNotifyReceiverRequest &) = default ;
    ModifyProjectNotifyReceiverRequest& operator=(ModifyProjectNotifyReceiverRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && this->instanceId_ == nullptr && this->name_ == nullptr && this->phone_ == nullptr && this->receiverId_ == nullptr && this->regionId_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline ModifyProjectNotifyReceiverRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyProjectNotifyReceiverRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyProjectNotifyReceiverRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline ModifyProjectNotifyReceiverRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // receiverId Field Functions 
    bool hasReceiverId() const { return this->receiverId_ != nullptr;};
    void deleteReceiverId() { this->receiverId_ = nullptr;};
    inline int64_t getReceiverId() const { DARABONBA_PTR_GET_DEFAULT(receiverId_, 0L) };
    inline ModifyProjectNotifyReceiverRequest& setReceiverId(int64_t receiverId) { DARABONBA_PTR_SET_VALUE(receiverId_, receiverId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyProjectNotifyReceiverRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new email address of the notification recipient.
    shared_ptr<string> email_ {};
    // The ID of the bastion host instance.
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host instance ID.
    shared_ptr<string> instanceId_ {};
    // The new name of the notification recipient. The name must be 1 to 128 characters in length, cannot start with a special character, and can contain only the following special characters: periods (.), underscores (_), hyphens (-), backslashes (\\), and spaces.
    // > If this parameter is not specified, the name remains unchanged.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The new phone number of the notification recipient.
    shared_ptr<string> phone_ {};
    // The ID of the notification recipient.
    // > You can call the ListProjectNotifyReceivers operation to query this parameter.
    // 
    // This parameter is required.
    shared_ptr<int64_t> receiverId_ {};
    // The region ID of the bastion host.
    // > For the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
