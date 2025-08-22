// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATECONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateContactRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateContactRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactId, contactId_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(CorpUserId, corpUserId_);
      DARABONBA_PTR_TO_JSON(DingRobotUrl, dingRobotUrl_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(IsEmailVerify, isEmailVerify_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
      DARABONBA_PTR_TO_JSON(ReissueSendNotice, reissueSendNotice_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateContactRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactId, contactId_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(CorpUserId, corpUserId_);
      DARABONBA_PTR_FROM_JSON(DingRobotUrl, dingRobotUrl_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(IsEmailVerify, isEmailVerify_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
      DARABONBA_PTR_FROM_JSON(ReissueSendNotice, reissueSendNotice_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    CreateOrUpdateContactRequest() = default ;
    CreateOrUpdateContactRequest(const CreateOrUpdateContactRequest &) = default ;
    CreateOrUpdateContactRequest(CreateOrUpdateContactRequest &&) = default ;
    CreateOrUpdateContactRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateContactRequest() = default ;
    CreateOrUpdateContactRequest& operator=(const CreateOrUpdateContactRequest &) = default ;
    CreateOrUpdateContactRequest& operator=(CreateOrUpdateContactRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactId_ != nullptr
        && this->contactName_ != nullptr && this->corpUserId_ != nullptr && this->dingRobotUrl_ != nullptr && this->email_ != nullptr && this->isEmailVerify_ != nullptr
        && this->phone_ != nullptr && this->reissueSendNotice_ != nullptr && this->resourceGroupId_ != nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t contactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline CreateOrUpdateContactRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CreateOrUpdateContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // corpUserId Field Functions 
    bool hasCorpUserId() const { return this->corpUserId_ != nullptr;};
    void deleteCorpUserId() { this->corpUserId_ = nullptr;};
    inline string corpUserId() const { DARABONBA_PTR_GET_DEFAULT(corpUserId_, "") };
    inline CreateOrUpdateContactRequest& setCorpUserId(string corpUserId) { DARABONBA_PTR_SET_VALUE(corpUserId_, corpUserId) };


    // dingRobotUrl Field Functions 
    bool hasDingRobotUrl() const { return this->dingRobotUrl_ != nullptr;};
    void deleteDingRobotUrl() { this->dingRobotUrl_ = nullptr;};
    inline string dingRobotUrl() const { DARABONBA_PTR_GET_DEFAULT(dingRobotUrl_, "") };
    inline CreateOrUpdateContactRequest& setDingRobotUrl(string dingRobotUrl) { DARABONBA_PTR_SET_VALUE(dingRobotUrl_, dingRobotUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateOrUpdateContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // isEmailVerify Field Functions 
    bool hasIsEmailVerify() const { return this->isEmailVerify_ != nullptr;};
    void deleteIsEmailVerify() { this->isEmailVerify_ = nullptr;};
    inline bool isEmailVerify() const { DARABONBA_PTR_GET_DEFAULT(isEmailVerify_, false) };
    inline CreateOrUpdateContactRequest& setIsEmailVerify(bool isEmailVerify) { DARABONBA_PTR_SET_VALUE(isEmailVerify_, isEmailVerify) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateOrUpdateContactRequest& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


    // reissueSendNotice Field Functions 
    bool hasReissueSendNotice() const { return this->reissueSendNotice_ != nullptr;};
    void deleteReissueSendNotice() { this->reissueSendNotice_ = nullptr;};
    inline int64_t reissueSendNotice() const { DARABONBA_PTR_GET_DEFAULT(reissueSendNotice_, 0L) };
    inline CreateOrUpdateContactRequest& setReissueSendNotice(int64_t reissueSendNotice) { DARABONBA_PTR_SET_VALUE(reissueSendNotice_, reissueSendNotice) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateOrUpdateContactRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the alert contact.
    // 
    // *   If you do not specify this parameter, a new alert contact is created.
    // *   If you specify this parameter, the specified alert contact is modified.
    std::shared_ptr<int64_t> contactId_ = nullptr;
    // The name of the alert contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactName_ = nullptr;
    // The ID of the alert contact that is shown to the enterprise when the contact is mentioned with the at sign (@) by a third-party instant messaging (IM) tool.
    std::shared_ptr<string> corpUserId_ = nullptr;
    // The webhook URL of the DingTalk chatbot.
    std::shared_ptr<string> dingRobotUrl_ = nullptr;
    // The email address of the alert contact.
    // 
    // > You must specify at least one of the **Phone** and **Email** parameters. Each mobile number or email address can be used for only one alert contact.
    std::shared_ptr<string> email_ = nullptr;
    // Specifies whether the email address is verified.
    std::shared_ptr<bool> isEmailVerify_ = nullptr;
    // The mobile number of the alert contact.
    // 
    // > You must specify at least one of the **Phone** and **Email** parameters. Each mobile number or email address can be used for only one alert contact.
    std::shared_ptr<string> phone_ = nullptr;
    // The operation that you want to perform if phone calls fail to be answered. Valid values:
    // 
    // *   0: No operation is performed.
    // *   1: A phone call is made again.
    // *   2: A text message is sent.
    // *   3 (default value): The global default value is used.
    std::shared_ptr<int64_t> reissueSendNotice_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
