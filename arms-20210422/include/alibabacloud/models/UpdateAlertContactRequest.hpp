// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTCONTACTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTCONTACTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
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
    virtual bool empty() const override { return this->contactId_ == nullptr
        && this->contactName_ == nullptr && this->dingRobotWebhookUrl_ == nullptr && this->email_ == nullptr && this->phoneNum_ == nullptr && this->regionId_ == nullptr
        && this->systemNoc_ == nullptr; };
    // contactId Field Functions 
    bool hasContactId() const { return this->contactId_ != nullptr;};
    void deleteContactId() { this->contactId_ = nullptr;};
    inline int64_t getContactId() const { DARABONBA_PTR_GET_DEFAULT(contactId_, 0L) };
    inline UpdateAlertContactRequest& setContactId(int64_t contactId) { DARABONBA_PTR_SET_VALUE(contactId_, contactId) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string getContactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline UpdateAlertContactRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // dingRobotWebhookUrl Field Functions 
    bool hasDingRobotWebhookUrl() const { return this->dingRobotWebhookUrl_ != nullptr;};
    void deleteDingRobotWebhookUrl() { this->dingRobotWebhookUrl_ = nullptr;};
    inline string getDingRobotWebhookUrl() const { DARABONBA_PTR_GET_DEFAULT(dingRobotWebhookUrl_, "") };
    inline UpdateAlertContactRequest& setDingRobotWebhookUrl(string dingRobotWebhookUrl) { DARABONBA_PTR_SET_VALUE(dingRobotWebhookUrl_, dingRobotWebhookUrl) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline UpdateAlertContactRequest& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // phoneNum Field Functions 
    bool hasPhoneNum() const { return this->phoneNum_ != nullptr;};
    void deletePhoneNum() { this->phoneNum_ = nullptr;};
    inline string getPhoneNum() const { DARABONBA_PTR_GET_DEFAULT(phoneNum_, "") };
    inline UpdateAlertContactRequest& setPhoneNum(string phoneNum) { DARABONBA_PTR_SET_VALUE(phoneNum_, phoneNum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAlertContactRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // systemNoc Field Functions 
    bool hasSystemNoc() const { return this->systemNoc_ != nullptr;};
    void deleteSystemNoc() { this->systemNoc_ = nullptr;};
    inline bool getSystemNoc() const { DARABONBA_PTR_GET_DEFAULT(systemNoc_, false) };
    inline UpdateAlertContactRequest& setSystemNoc(bool systemNoc) { DARABONBA_PTR_SET_VALUE(systemNoc_, systemNoc) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> contactId_ {};
    shared_ptr<string> contactName_ {};
    shared_ptr<string> dingRobotWebhookUrl_ {};
    shared_ptr<string> email_ {};
    shared_ptr<string> phoneNum_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<bool> systemNoc_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
