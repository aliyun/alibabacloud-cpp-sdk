// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(FeeCommand, feeCommand_);
      DARABONBA_PTR_TO_JSON(FeeCurrency, feeCurrency_);
      DARABONBA_PTR_TO_JSON(FeePeriod, feePeriod_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(FeeCommand, feeCommand_);
      DARABONBA_PTR_FROM_JSON(FeeCurrency, feeCurrency_);
      DARABONBA_PTR_FROM_JSON(FeePeriod, feePeriod_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    CheckDomainRequest() = default ;
    CheckDomainRequest(const CheckDomainRequest &) = default ;
    CheckDomainRequest(CheckDomainRequest &&) = default ;
    CheckDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDomainRequest() = default ;
    CheckDomainRequest& operator=(const CheckDomainRequest &) = default ;
    CheckDomainRequest& operator=(CheckDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->feeCommand_ == nullptr && this->feeCurrency_ == nullptr && this->feePeriod_ == nullptr && this->lang_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CheckDomainRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // feeCommand Field Functions 
    bool hasFeeCommand() const { return this->feeCommand_ != nullptr;};
    void deleteFeeCommand() { this->feeCommand_ = nullptr;};
    inline string getFeeCommand() const { DARABONBA_PTR_GET_DEFAULT(feeCommand_, "") };
    inline CheckDomainRequest& setFeeCommand(string feeCommand) { DARABONBA_PTR_SET_VALUE(feeCommand_, feeCommand) };


    // feeCurrency Field Functions 
    bool hasFeeCurrency() const { return this->feeCurrency_ != nullptr;};
    void deleteFeeCurrency() { this->feeCurrency_ = nullptr;};
    inline string getFeeCurrency() const { DARABONBA_PTR_GET_DEFAULT(feeCurrency_, "") };
    inline CheckDomainRequest& setFeeCurrency(string feeCurrency) { DARABONBA_PTR_SET_VALUE(feeCurrency_, feeCurrency) };


    // feePeriod Field Functions 
    bool hasFeePeriod() const { return this->feePeriod_ != nullptr;};
    void deleteFeePeriod() { this->feePeriod_ = nullptr;};
    inline int32_t getFeePeriod() const { DARABONBA_PTR_GET_DEFAULT(feePeriod_, 0) };
    inline CheckDomainRequest& setFeePeriod(int32_t feePeriod) { DARABONBA_PTR_SET_VALUE(feePeriod_, feePeriod) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CheckDomainRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<string> feeCommand_ {};
    shared_ptr<string> feeCurrency_ {};
    shared_ptr<int32_t> feePeriod_ {};
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
