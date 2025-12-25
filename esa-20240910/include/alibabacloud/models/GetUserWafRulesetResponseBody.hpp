// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERWAFRULESETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserWafRulesetResponseBodyRuleset.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetUserWafRulesetResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserWafRulesetResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Ruleset, ruleset_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserWafRulesetResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Ruleset, ruleset_);
    };
    GetUserWafRulesetResponseBody() = default ;
    GetUserWafRulesetResponseBody(const GetUserWafRulesetResponseBody &) = default ;
    GetUserWafRulesetResponseBody(GetUserWafRulesetResponseBody &&) = default ;
    GetUserWafRulesetResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserWafRulesetResponseBody() = default ;
    GetUserWafRulesetResponseBody& operator=(const GetUserWafRulesetResponseBody &) = default ;
    GetUserWafRulesetResponseBody& operator=(GetUserWafRulesetResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleset_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserWafRulesetResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleset Field Functions 
    bool hasRuleset() const { return this->ruleset_ != nullptr;};
    void deleteRuleset() { this->ruleset_ = nullptr;};
    inline const GetUserWafRulesetResponseBodyRuleset & ruleset() const { DARABONBA_PTR_GET_CONST(ruleset_, GetUserWafRulesetResponseBodyRuleset) };
    inline GetUserWafRulesetResponseBodyRuleset ruleset() { DARABONBA_PTR_GET(ruleset_, GetUserWafRulesetResponseBodyRuleset) };
    inline GetUserWafRulesetResponseBody& setRuleset(const GetUserWafRulesetResponseBodyRuleset & ruleset) { DARABONBA_PTR_SET_VALUE(ruleset_, ruleset) };
    inline GetUserWafRulesetResponseBody& setRuleset(GetUserWafRulesetResponseBodyRuleset && ruleset) { DARABONBA_PTR_SET_RVALUE(ruleset_, ruleset) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<GetUserWafRulesetResponseBodyRuleset> ruleset_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
