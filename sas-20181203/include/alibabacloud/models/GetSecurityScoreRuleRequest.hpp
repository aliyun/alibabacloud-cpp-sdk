// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSECURITYSCORERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSECURITYSCORERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetSecurityScoreRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSecurityScoreRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalType, calType_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
    };
    friend void from_json(const Darabonba::Json& j, GetSecurityScoreRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalType, calType_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
    };
    GetSecurityScoreRuleRequest() = default ;
    GetSecurityScoreRuleRequest(const GetSecurityScoreRuleRequest &) = default ;
    GetSecurityScoreRuleRequest(GetSecurityScoreRuleRequest &&) = default ;
    GetSecurityScoreRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSecurityScoreRuleRequest() = default ;
    GetSecurityScoreRuleRequest& operator=(const GetSecurityScoreRuleRequest &) = default ;
    GetSecurityScoreRuleRequest& operator=(GetSecurityScoreRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calType_ == nullptr
        && this->lang_ == nullptr; };
    // calType Field Functions 
    bool hasCalType() const { return this->calType_ != nullptr;};
    void deleteCalType() { this->calType_ = nullptr;};
    inline string getCalType() const { DARABONBA_PTR_GET_DEFAULT(calType_, "") };
    inline GetSecurityScoreRuleRequest& setCalType(string calType) { DARABONBA_PTR_SET_VALUE(calType_, calType) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetSecurityScoreRuleRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


  protected:
    // The old or new version of the security score rule. If you set this parameter to **home_security_score**, the new version of the security score rule is returned. Otherwise, the old version of the security score rule is returned by default.
    shared_ptr<string> calType_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    shared_ptr<string> lang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
