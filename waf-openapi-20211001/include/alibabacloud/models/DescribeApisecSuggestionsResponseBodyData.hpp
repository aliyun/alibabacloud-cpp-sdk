// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSUGGESTIONSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSUGGESTIONSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecSuggestionsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecSuggestionsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(SuggestId, suggestId_);
      DARABONBA_PTR_TO_JSON(SuggestRule, suggestRule_);
      DARABONBA_PTR_TO_JSON(SuggestType, suggestType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecSuggestionsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(SuggestId, suggestId_);
      DARABONBA_PTR_FROM_JSON(SuggestRule, suggestRule_);
      DARABONBA_PTR_FROM_JSON(SuggestType, suggestType_);
    };
    DescribeApisecSuggestionsResponseBodyData() = default ;
    DescribeApisecSuggestionsResponseBodyData(const DescribeApisecSuggestionsResponseBodyData &) = default ;
    DescribeApisecSuggestionsResponseBodyData(DescribeApisecSuggestionsResponseBodyData &&) = default ;
    DescribeApisecSuggestionsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecSuggestionsResponseBodyData() = default ;
    DescribeApisecSuggestionsResponseBodyData& operator=(const DescribeApisecSuggestionsResponseBodyData &) = default ;
    DescribeApisecSuggestionsResponseBodyData& operator=(DescribeApisecSuggestionsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiFormat_ == nullptr
        && return this->matchedHost_ == nullptr && return this->suggestId_ == nullptr && return this->suggestRule_ == nullptr && return this->suggestType_ == nullptr; };
    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeApisecSuggestionsResponseBodyData& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeApisecSuggestionsResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // suggestId Field Functions 
    bool hasSuggestId() const { return this->suggestId_ != nullptr;};
    void deleteSuggestId() { this->suggestId_ = nullptr;};
    inline string suggestId() const { DARABONBA_PTR_GET_DEFAULT(suggestId_, "") };
    inline DescribeApisecSuggestionsResponseBodyData& setSuggestId(string suggestId) { DARABONBA_PTR_SET_VALUE(suggestId_, suggestId) };


    // suggestRule Field Functions 
    bool hasSuggestRule() const { return this->suggestRule_ != nullptr;};
    void deleteSuggestRule() { this->suggestRule_ = nullptr;};
    inline string suggestRule() const { DARABONBA_PTR_GET_DEFAULT(suggestRule_, "") };
    inline DescribeApisecSuggestionsResponseBodyData& setSuggestRule(string suggestRule) { DARABONBA_PTR_SET_VALUE(suggestRule_, suggestRule) };


    // suggestType Field Functions 
    bool hasSuggestType() const { return this->suggestType_ != nullptr;};
    void deleteSuggestType() { this->suggestType_ = nullptr;};
    inline string suggestType() const { DARABONBA_PTR_GET_DEFAULT(suggestType_, "") };
    inline DescribeApisecSuggestionsResponseBodyData& setSuggestType(string suggestType) { DARABONBA_PTR_SET_VALUE(suggestType_, suggestType) };


  protected:
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The domain name or IP address of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The rule ID of the protection suggestion.
    std::shared_ptr<string> suggestId_ = nullptr;
    // The rule content of the protection suggestion. The value is a string that consists of multiple parameters in the JSON format. Valid values:
    // 
    // *   **event_tags**: event type
    // *   **black_iplist**: IP address blacklist
    // *   **ip_baseline**: IP address
    // *   **freq_baseline**: throttling frequency
    // *   **client_id_baseline**: client information
    // *   **country_baseline**: country information
    // *   **province_baseline**: province information
    // *   **sensitive_type**: sensitive information
    std::shared_ptr<string> suggestRule_ = nullptr;
    // The rule type of the protection suggestion. Valid values:
    // 
    // *   **BotRule**: bot management rules
    // *   **BlackIPRule**: IP address blacklist rules
    // *   **WhiteIPRule**: IP address whitelist rules
    // *   **RateLimitRule**: throttling rules
    // *   **ClientRule**: client rules
    // *   **GeoRule**: region-related rules
    // *   **SensitiveRule**: sensitive information rules
    // *   **UnauthRule**: authentication rules
    std::shared_ptr<string> suggestType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
