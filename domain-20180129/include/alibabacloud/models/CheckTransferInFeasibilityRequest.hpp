// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTRANSFERINFEASIBILITYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKTRANSFERINFEASIBILITYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckTransferInFeasibilityRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTransferInFeasibilityRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(TransferAuthorizationCode, transferAuthorizationCode_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTransferInFeasibilityRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(TransferAuthorizationCode, transferAuthorizationCode_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    CheckTransferInFeasibilityRequest() = default ;
    CheckTransferInFeasibilityRequest(const CheckTransferInFeasibilityRequest &) = default ;
    CheckTransferInFeasibilityRequest(CheckTransferInFeasibilityRequest &&) = default ;
    CheckTransferInFeasibilityRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTransferInFeasibilityRequest() = default ;
    CheckTransferInFeasibilityRequest& operator=(const CheckTransferInFeasibilityRequest &) = default ;
    CheckTransferInFeasibilityRequest& operator=(CheckTransferInFeasibilityRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && return this->lang_ == nullptr && return this->transferAuthorizationCode_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CheckTransferInFeasibilityRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckTransferInFeasibilityRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // transferAuthorizationCode Field Functions 
    bool hasTransferAuthorizationCode() const { return this->transferAuthorizationCode_ != nullptr;};
    void deleteTransferAuthorizationCode() { this->transferAuthorizationCode_ = nullptr;};
    inline string transferAuthorizationCode() const { DARABONBA_PTR_GET_DEFAULT(transferAuthorizationCode_, "") };
    inline CheckTransferInFeasibilityRequest& setTransferAuthorizationCode(string transferAuthorizationCode) { DARABONBA_PTR_SET_VALUE(transferAuthorizationCode_, transferAuthorizationCode) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline CheckTransferInFeasibilityRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    std::shared_ptr<string> transferAuthorizationCode_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
