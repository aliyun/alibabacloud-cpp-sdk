// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AITOKENRATELIMITCONFIGRULE_HPP_
#define ALIBABACLOUD_MODELS_AITOKENRATELIMITCONFIGRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiTokenRateLimitConfigRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiTokenRateLimitConfigRule& obj) { 
      DARABONBA_PTR_TO_JSON(limitMode, limitMode_);
      DARABONBA_PTR_TO_JSON(limitType, limitType_);
      DARABONBA_PTR_TO_JSON(limitValue, limitValue_);
      DARABONBA_PTR_TO_JSON(matchKey, matchKey_);
      DARABONBA_PTR_TO_JSON(matchType, matchType_);
      DARABONBA_PTR_TO_JSON(matchValue, matchValue_);
    };
    friend void from_json(const Darabonba::Json& j, AiTokenRateLimitConfigRule& obj) { 
      DARABONBA_PTR_FROM_JSON(limitMode, limitMode_);
      DARABONBA_PTR_FROM_JSON(limitType, limitType_);
      DARABONBA_PTR_FROM_JSON(limitValue, limitValue_);
      DARABONBA_PTR_FROM_JSON(matchKey, matchKey_);
      DARABONBA_PTR_FROM_JSON(matchType, matchType_);
      DARABONBA_PTR_FROM_JSON(matchValue, matchValue_);
    };
    AiTokenRateLimitConfigRule() = default ;
    AiTokenRateLimitConfigRule(const AiTokenRateLimitConfigRule &) = default ;
    AiTokenRateLimitConfigRule(AiTokenRateLimitConfigRule &&) = default ;
    AiTokenRateLimitConfigRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiTokenRateLimitConfigRule() = default ;
    AiTokenRateLimitConfigRule& operator=(const AiTokenRateLimitConfigRule &) = default ;
    AiTokenRateLimitConfigRule& operator=(AiTokenRateLimitConfigRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->limitMode_ == nullptr
        && this->limitType_ == nullptr && this->limitValue_ == nullptr && this->matchKey_ == nullptr && this->matchType_ == nullptr && this->matchValue_ == nullptr; };
    // limitMode Field Functions 
    bool hasLimitMode() const { return this->limitMode_ != nullptr;};
    void deleteLimitMode() { this->limitMode_ = nullptr;};
    inline string getLimitMode() const { DARABONBA_PTR_GET_DEFAULT(limitMode_, "") };
    inline AiTokenRateLimitConfigRule& setLimitMode(string limitMode) { DARABONBA_PTR_SET_VALUE(limitMode_, limitMode) };


    // limitType Field Functions 
    bool hasLimitType() const { return this->limitType_ != nullptr;};
    void deleteLimitType() { this->limitType_ = nullptr;};
    inline string getLimitType() const { DARABONBA_PTR_GET_DEFAULT(limitType_, "") };
    inline AiTokenRateLimitConfigRule& setLimitType(string limitType) { DARABONBA_PTR_SET_VALUE(limitType_, limitType) };


    // limitValue Field Functions 
    bool hasLimitValue() const { return this->limitValue_ != nullptr;};
    void deleteLimitValue() { this->limitValue_ = nullptr;};
    inline int32_t getLimitValue() const { DARABONBA_PTR_GET_DEFAULT(limitValue_, 0) };
    inline AiTokenRateLimitConfigRule& setLimitValue(int32_t limitValue) { DARABONBA_PTR_SET_VALUE(limitValue_, limitValue) };


    // matchKey Field Functions 
    bool hasMatchKey() const { return this->matchKey_ != nullptr;};
    void deleteMatchKey() { this->matchKey_ = nullptr;};
    inline string getMatchKey() const { DARABONBA_PTR_GET_DEFAULT(matchKey_, "") };
    inline AiTokenRateLimitConfigRule& setMatchKey(string matchKey) { DARABONBA_PTR_SET_VALUE(matchKey_, matchKey) };


    // matchType Field Functions 
    bool hasMatchType() const { return this->matchType_ != nullptr;};
    void deleteMatchType() { this->matchType_ = nullptr;};
    inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
    inline AiTokenRateLimitConfigRule& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


    // matchValue Field Functions 
    bool hasMatchValue() const { return this->matchValue_ != nullptr;};
    void deleteMatchValue() { this->matchValue_ = nullptr;};
    inline string getMatchValue() const { DARABONBA_PTR_GET_DEFAULT(matchValue_, "") };
    inline AiTokenRateLimitConfigRule& setMatchValue(string matchValue) { DARABONBA_PTR_SET_VALUE(matchValue_, matchValue) };


  protected:
    // The action to take when a request exceeds the token rate limit.
    shared_ptr<string> limitMode_ {};
    // The scope of the rate limit, such as per user or per project.
    shared_ptr<string> limitType_ {};
    // The maximum number of tokens allowed within the defined time period. For example, if the time unit is one minute, this value represents the tokens-per-minute (TPM) limit.
    shared_ptr<int32_t> limitValue_ {};
    // The key that identifies the request source. Its value is extracted from the request context to apply the rule.
    shared_ptr<string> matchKey_ {};
    // The matching logic applied to the value of `matchKey`.
    shared_ptr<string> matchType_ {};
    // The value to match. The rate limit applies only when the value of `matchKey` in the request matches this value, according to the `matchType`.
    shared_ptr<string> matchValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
