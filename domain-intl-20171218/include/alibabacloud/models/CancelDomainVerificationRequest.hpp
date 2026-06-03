// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELDOMAINVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELDOMAINVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DomainIntl20171218
{
namespace Models
{
  class CancelDomainVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelDomainVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, CancelDomainVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    CancelDomainVerificationRequest() = default ;
    CancelDomainVerificationRequest(const CancelDomainVerificationRequest &) = default ;
    CancelDomainVerificationRequest(CancelDomainVerificationRequest &&) = default ;
    CancelDomainVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelDomainVerificationRequest() = default ;
    CancelDomainVerificationRequest& operator=(const CancelDomainVerificationRequest &) = default ;
    CancelDomainVerificationRequest& operator=(CancelDomainVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline string getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, "") };
    inline CancelDomainVerificationRequest& setActionType(string actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CancelDomainVerificationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CancelDomainVerificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline CancelDomainVerificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> actionType_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DomainIntl20171218
#endif
