// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FUZZYMATCHDOMAINSENSITIVEWORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class FuzzyMatchDomainSensitiveWordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FuzzyMatchDomainSensitiveWordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, FuzzyMatchDomainSensitiveWordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    FuzzyMatchDomainSensitiveWordRequest() = default ;
    FuzzyMatchDomainSensitiveWordRequest(const FuzzyMatchDomainSensitiveWordRequest &) = default ;
    FuzzyMatchDomainSensitiveWordRequest(FuzzyMatchDomainSensitiveWordRequest &&) = default ;
    FuzzyMatchDomainSensitiveWordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FuzzyMatchDomainSensitiveWordRequest() = default ;
    FuzzyMatchDomainSensitiveWordRequest& operator=(const FuzzyMatchDomainSensitiveWordRequest &) = default ;
    FuzzyMatchDomainSensitiveWordRequest& operator=(FuzzyMatchDomainSensitiveWordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyword_ == nullptr
        && this->lang_ == nullptr && this->userClientIp_ == nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline FuzzyMatchDomainSensitiveWordRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline FuzzyMatchDomainSensitiveWordRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline FuzzyMatchDomainSensitiveWordRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // This parameter is required.
    shared_ptr<string> keyword_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
