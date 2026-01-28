// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELQUALIFICATIONVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELQUALIFICATIONVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CancelQualificationVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelQualificationVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(QualificationType, qualificationType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, CancelQualificationVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(QualificationType, qualificationType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    CancelQualificationVerificationRequest() = default ;
    CancelQualificationVerificationRequest(const CancelQualificationVerificationRequest &) = default ;
    CancelQualificationVerificationRequest(CancelQualificationVerificationRequest &&) = default ;
    CancelQualificationVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelQualificationVerificationRequest() = default ;
    CancelQualificationVerificationRequest& operator=(const CancelQualificationVerificationRequest &) = default ;
    CancelQualificationVerificationRequest& operator=(CancelQualificationVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->lang_ == nullptr && this->qualificationType_ == nullptr && this->userClientIp_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CancelQualificationVerificationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CancelQualificationVerificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // qualificationType Field Functions 
    bool hasQualificationType() const { return this->qualificationType_ != nullptr;};
    void deleteQualificationType() { this->qualificationType_ = nullptr;};
    inline string getQualificationType() const { DARABONBA_PTR_GET_DEFAULT(qualificationType_, "") };
    inline CancelQualificationVerificationRequest& setQualificationType(string qualificationType) { DARABONBA_PTR_SET_VALUE(qualificationType_, qualificationType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline CancelQualificationVerificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<string> qualificationType_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
