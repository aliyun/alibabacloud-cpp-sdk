// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateAlertContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(DingRobotWebhookUrl, dingRobotWebhookUrl_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SystemNoc, systemNoc_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(DingRobotWebhookUrl, dingRobotWebhookUrl_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SystemNoc, systemNoc_);
    };
    UpdateAlertContactRequest() = default ;
    UpdateAlertContactRequest(const UpdateAlertContactRequest &) = default ;
    UpdateAlertContactRequest(UpdateAlertContactRequest &&) = default ;
    UpdateAlertContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertContactRequest() = default ;
    UpdateAlertContactRequest& operator=(const UpdateAlertContactRequest &) = default ;
    UpdateAlertContactRequest& operator=(UpdateAlertContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->contactName_ != nullptr && this->dingRobotWebhookUrl_ != nullptr && this->email_ != nullptr && this->phoneNum_ != nullptr && this->regionId_ != nullptr
        && this->systemNoc_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline UpdateAlertContactRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline UpdateAlertContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // dingRobotWebhookUrl Field Functions 
    bool hasDingRobotWebhookUrl() const { return this->dingRobotWebhookUrl_ != nullptr;};
    void deleteDingRobotWebhookUrl() { this->dingRobotWebhookUrl_ = nullptr;};
    inline string dingRobotWebhookUrl() const { DARABONBA_PTR_GET_DEFAULT(dingRobotWebhookUrl_, "") };
    inline UpdateAlertContactRequest& setDingRobotWebhookUrl(string dingRobotWebhookUrl) { DARABONBA_PTR_SET_VALUE(dingRobotWebhookUrl_, dingRobotWebhookUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateAlertContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline UpdateAlertContactRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAlertContactRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // systemNoc Field Functions 
    bool hasSystemNoc() const { return this->systemNoc_ != nullptr;};
    void deleteSystemNoc() { this->systemNoc_ = nullptr;};
    inline bool systemNoc() const { DARABONBA_PTR_GET_DEFAULT(systemNoc_, false) };
    inline UpdateAlertContactRequest& setSystemNoc(bool systemNoc) { DARABONBA_PTR_SET_VALUE(systemNoc_, systemNoc) };


  protected:
    // The ID of the alert contact to be updated. You can call the SearchAlertContact operation to query the contact ID. For more information, see [SearchAlertContact](https://help.aliyun.com/document_detail/130703.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> contactId_ = nullptr;
    // The new name of the alert contact.
    std::shared_ptr<string> contactName_ = nullptr;
    // The new webhook URL of the DingTalk chatbot. For more information, see [Configure a DingTalk chatbot to send alert notifications](https://help.aliyun.com/document_detail/106247.html). You must specify at least one of the following parameters: PhoneNum, Email, and DingRobotWebhookUrl.
    // 
    // >  If you do not specify this parameter, the original parameter value is deleted. If you specify this parameter, the original parameter value is updated.
    std::shared_ptr<string> dingRobotWebhookUrl_ = nullptr;
    // The new email address of the alert contact. You must specify at least one of the following parameters: PhoneNum, Email, and DingRobotWebhookUrl.
    // 
    // >  If you do not specify this parameter, the original parameter value is deleted. If you specify this parameter, the original parameter value is updated.
    std::shared_ptr<string> email_ = nullptr;
    // The new mobile phone number of the alert contact. You must specify at least one of the following parameters: PhoneNum, Email, and DingRobotWebhookUrl.
    // 
    // >  If you do not specify this parameter, the original parameter value is deleted. If you specify this parameter, the original parameter value is updated.
    std::shared_ptr<string> phoneNum_ = nullptr;
    // The ID of the region. Set the value to `cn-hangzhou`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether the alert contact receives system notifications. Valid values:
    // 
    // *   `true`: The alert contact receives system notifications.
    // *   `false`: The alert contact does not receive system notifications.
    std::shared_ptr<bool> systemNoc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
