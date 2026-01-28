// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINREALNAMEVERIFICATIONBYREGISTRANTPROFILEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVETASKFORSUBMITTINGDOMAINREALNAMEVERIFICATIONBYREGISTRANTPROFILEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegistrantProfileId, registrantProfileId_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest() = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &) = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest(SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &&) = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest() = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& operator=(const SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &) = default ;
    SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& operator=(SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->registrantProfileId_ == nullptr && this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // registrantProfileId Field Functions 
    bool hasRegistrantProfileId() const { return this->registrantProfileId_ != nullptr;};
    void deleteRegistrantProfileId() { this->registrantProfileId_ = nullptr;};
    inline int64_t getRegistrantProfileId() const { DARABONBA_PTR_GET_DEFAULT(registrantProfileId_, 0L) };
    inline SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& setRegistrantProfileId(int64_t registrantProfileId) { DARABONBA_PTR_SET_VALUE(registrantProfileId_, registrantProfileId) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> lang_ {};
    // This parameter is required.
    shared_ptr<int64_t> registrantProfileId_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
