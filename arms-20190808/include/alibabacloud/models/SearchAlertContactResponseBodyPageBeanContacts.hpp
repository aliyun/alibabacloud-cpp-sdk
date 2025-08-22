// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTCONTACTRESPONSEBODYPAGEBEANCONTACTS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTCONTACTRESPONSEBODYPAGEBEANCONTACTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertContactResponseBodyPageBeanContacts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertContactResponseBodyPageBeanContacts& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DingRobot, dingRobot_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemNoc, systemNoc_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Webhook, webhook_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertContactResponseBodyPageBeanContacts& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DingRobot, dingRobot_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemNoc, systemNoc_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Webhook, webhook_);
    };
    SearchAlertContactResponseBodyPageBeanContacts() = default ;
    SearchAlertContactResponseBodyPageBeanContacts(const SearchAlertContactResponseBodyPageBeanContacts &) = default ;
    SearchAlertContactResponseBodyPageBeanContacts(SearchAlertContactResponseBodyPageBeanContacts &&) = default ;
    SearchAlertContactResponseBodyPageBeanContacts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertContactResponseBodyPageBeanContacts() = default ;
    SearchAlertContactResponseBodyPageBeanContacts& operator=(const SearchAlertContactResponseBodyPageBeanContacts &) = default ;
    SearchAlertContactResponseBodyPageBeanContacts& operator=(SearchAlertContactResponseBodyPageBeanContacts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->contactName_ != nullptr && this->content_ != nullptr && this->createTime_ != nullptr && this->dingRobot_ != nullptr && this->email_ != nullptr
        && this->phone_ != nullptr && this->resourceGroupId_ != nullptr && this->systemNoc_ != nullptr && this->updateTime_ != nullptr && this->userId_ != nullptr
        && this->webhook_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline SearchAlertContactResponseBodyPageBeanContacts& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SearchAlertContactResponseBodyPageBeanContacts& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dingRobot Field Functions 
    bool hasDingRobot() const { return this->dingRobot_ != nullptr;};
    void deleteDingRobot() { this->dingRobot_ = nullptr;};
    inline string dingRobot() const { DARABONBA_PTR_GET_DEFAULT(dingRobot_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setDingRobot(string dingRobot) { DARABONBA_PTR_SET_VALUE(dingRobot_, dingRobot) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemNoc Field Functions 
    bool hasSystemNoc() const { return this->systemNoc_ != nullptr;};
    void deleteSystemNoc() { this->systemNoc_ = nullptr;};
    inline bool systemNoc() const { DARABONBA_PTR_GET_DEFAULT(systemNoc_, false) };
    inline SearchAlertContactResponseBodyPageBeanContacts& setSystemNoc(bool systemNoc) { DARABONBA_PTR_SET_VALUE(systemNoc_, systemNoc) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline SearchAlertContactResponseBodyPageBeanContacts& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // webhook Field Functions 
    bool hasWebhook() const { return this->webhook_ != nullptr;};
    void deleteWebhook() { this->webhook_ = nullptr;};
    inline string webhook() const { DARABONBA_PTR_GET_DEFAULT(webhook_, "") };
    inline SearchAlertContactResponseBodyPageBeanContacts& setWebhook(string webhook) { DARABONBA_PTR_SET_VALUE(webhook_, webhook) };


  protected:
    // The ID of the alert contact.
    std::shared_ptr<int64_t> contactId_ = nullptr;
    // The name of the alert contact.
    std::shared_ptr<string> contactName_ = nullptr;
    // The contact group to which the contact belongs. If your contacts are added to multiple contact groups, the contact groups are separated by vertical bars (|).
    std::shared_ptr<string> content_ = nullptr;
    // The timestamp generated when the alert contact was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The webhook URL of the DingTalk chatbot.
    std::shared_ptr<string> dingRobot_ = nullptr;
    // The email address of the alert contact.
    std::shared_ptr<string> email_ = nullptr;
    // The mobile number of the alert contact.
    std::shared_ptr<string> phone_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Indicates whether the alert contact receives system notifications. Valid values:
    // 
    // *   `true`: The alert contact receives system notifications.
    // *   `false`: The alert contact does not receive system notifications.
    std::shared_ptr<bool> systemNoc_ = nullptr;
    // The timestamp generated when the alert contact was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
    // The information about the webhook.
    std::shared_ptr<string> webhook_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
