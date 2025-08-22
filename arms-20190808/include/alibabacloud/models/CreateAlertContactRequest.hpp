// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateAlertContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(DingRobotWebhookUrl, dingRobotWebhookUrl_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SystemNoc, systemNoc_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(DingRobotWebhookUrl, dingRobotWebhookUrl_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(PhoneNum, phoneNum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SystemNoc, systemNoc_);
    };
    CreateAlertContactRequest() = default ;
    CreateAlertContactRequest(const CreateAlertContactRequest &) = default ;
    CreateAlertContactRequest(CreateAlertContactRequest &&) = default ;
    CreateAlertContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertContactRequest() = default ;
    CreateAlertContactRequest& operator=(const CreateAlertContactRequest &) = default ;
    CreateAlertContactRequest& operator=(CreateAlertContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactName_ != nullptr
        && this->dingRobotWebhookUrl_ != nullptr && this->email_ != nullptr && this->phoneNum_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->systemNoc_ != nullptr; };
    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CreateAlertContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // dingRobotWebhookUrl Field Functions 
    bool hasDingRobotWebhookUrl() const { return this->dingRobotWebhookUrl_ != nullptr;};
    void deleteDingRobotWebhookUrl() { this->dingRobotWebhookUrl_ = nullptr;};
    inline string dingRobotWebhookUrl() const { DARABONBA_PTR_GET_DEFAULT(dingRobotWebhookUrl_, "") };
    inline CreateAlertContactRequest& setDingRobotWebhookUrl(string dingRobotWebhookUrl) { DARABONBA_PTR_SET_VALUE(dingRobotWebhookUrl_, dingRobotWebhookUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateAlertContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string phoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline CreateAlertContactRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAlertContactRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateAlertContactRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // systemNoc Field Functions 
    bool hasSystemNoc() const { return this->systemNoc_ != nullptr;};
    void deleteSystemNoc() { this->systemNoc_ = nullptr;};
    inline bool systemNoc() const { DARABONBA_PTR_GET_DEFAULT(systemNoc_, false) };
    inline CreateAlertContactRequest& setSystemNoc(bool systemNoc) { DARABONBA_PTR_SET_VALUE(systemNoc_, systemNoc) };


  protected:
    // The name of the alert contact.
    std::shared_ptr<string> contactName_ = nullptr;
    // The webhook URL of the DingTalk chatbot. For more information about how to obtain the URL, see [Configure a DingTalk chatbot to send alert notifications](https://www.alibabacloud.com/help/zh/doc-detail/106247.htm). You must specify at least one of the following parameters: PhoneNum, Email, and DingRobotWebhookUrl.
    // 
    // >  Enter `alert` in the custom keyword field of DingTalk chatbot security settings.
    std::shared_ptr<string> dingRobotWebhookUrl_ = nullptr;
    // The email address of the alert contact. You must specify at least one of the following parameters: PhoneNum, Email, and DingRobotWebhookUrl.
    std::shared_ptr<string> email_ = nullptr;
    // The mobile number of the alert contact. You must specify at least one of the following parameters: PhoneNum, Email, and DingRobotWebhookUrl.
    std::shared_ptr<string> phoneNum_ = nullptr;
    // The ID of the region. Set the value to `cn-hangzhou`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group. You can obtain the resource group ID in the **Resource Management** console.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
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
