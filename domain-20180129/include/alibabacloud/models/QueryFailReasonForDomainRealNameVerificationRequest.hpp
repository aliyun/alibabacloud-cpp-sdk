// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYFAILREASONFORDOMAINREALNAMEVERIFICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYFAILREASONFORDOMAINREALNAMEVERIFICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryFailReasonForDomainRealNameVerificationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryFailReasonForDomainRealNameVerificationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RealNameVerificationAction, realNameVerificationAction_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryFailReasonForDomainRealNameVerificationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RealNameVerificationAction, realNameVerificationAction_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryFailReasonForDomainRealNameVerificationRequest() = default ;
    QueryFailReasonForDomainRealNameVerificationRequest(const QueryFailReasonForDomainRealNameVerificationRequest &) = default ;
    QueryFailReasonForDomainRealNameVerificationRequest(QueryFailReasonForDomainRealNameVerificationRequest &&) = default ;
    QueryFailReasonForDomainRealNameVerificationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryFailReasonForDomainRealNameVerificationRequest() = default ;
    QueryFailReasonForDomainRealNameVerificationRequest& operator=(const QueryFailReasonForDomainRealNameVerificationRequest &) = default ;
    QueryFailReasonForDomainRealNameVerificationRequest& operator=(QueryFailReasonForDomainRealNameVerificationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->lang_ == nullptr && return this->realNameVerificationAction_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryFailReasonForDomainRealNameVerificationRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryFailReasonForDomainRealNameVerificationRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // realNameVerificationAction Field Functions 
    bool hasRealNameVerificationAction() const { return this->realNameVerificationAction_ != nullptr;};
    void deleteRealNameVerificationAction() { this->realNameVerificationAction_ = nullptr;};
    inline string realNameVerificationAction() const { DARABONBA_PTR_GET_DEFAULT(realNameVerificationAction_, "") };
    inline QueryFailReasonForDomainRealNameVerificationRequest& setRealNameVerificationAction(string realNameVerificationAction) { DARABONBA_PTR_SET_VALUE(realNameVerificationAction_, realNameVerificationAction) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryFailReasonForDomainRealNameVerificationRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> realNameVerificationAction_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
