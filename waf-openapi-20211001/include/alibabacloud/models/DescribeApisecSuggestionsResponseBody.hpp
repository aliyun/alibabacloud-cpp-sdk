// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECSUGGESTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECSUGGESTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecSuggestionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecSuggestionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecSuggestionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApisecSuggestionsResponseBody() = default ;
    DescribeApisecSuggestionsResponseBody(const DescribeApisecSuggestionsResponseBody &) = default ;
    DescribeApisecSuggestionsResponseBody(DescribeApisecSuggestionsResponseBody &&) = default ;
    DescribeApisecSuggestionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecSuggestionsResponseBody() = default ;
    DescribeApisecSuggestionsResponseBody& operator=(const DescribeApisecSuggestionsResponseBody &) = default ;
    DescribeApisecSuggestionsResponseBody& operator=(DescribeApisecSuggestionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_TO_JSON(SuggestId, suggestId_);
        DARABONBA_PTR_TO_JSON(SuggestRule, suggestRule_);
        DARABONBA_PTR_TO_JSON(SuggestType, suggestType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
        DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
        DARABONBA_PTR_FROM_JSON(SuggestId, suggestId_);
        DARABONBA_PTR_FROM_JSON(SuggestRule, suggestRule_);
        DARABONBA_PTR_FROM_JSON(SuggestType, suggestType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiFormat_ == nullptr
        && this->matchedHost_ == nullptr && this->suggestId_ == nullptr && this->suggestRule_ == nullptr && this->suggestType_ == nullptr; };
      // apiFormat Field Functions 
      bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
      void deleteApiFormat() { this->apiFormat_ = nullptr;};
      inline string getApiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
      inline Data& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


      // matchedHost Field Functions 
      bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
      void deleteMatchedHost() { this->matchedHost_ = nullptr;};
      inline string getMatchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
      inline Data& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


      // suggestId Field Functions 
      bool hasSuggestId() const { return this->suggestId_ != nullptr;};
      void deleteSuggestId() { this->suggestId_ = nullptr;};
      inline string getSuggestId() const { DARABONBA_PTR_GET_DEFAULT(suggestId_, "") };
      inline Data& setSuggestId(string suggestId) { DARABONBA_PTR_SET_VALUE(suggestId_, suggestId) };


      // suggestRule Field Functions 
      bool hasSuggestRule() const { return this->suggestRule_ != nullptr;};
      void deleteSuggestRule() { this->suggestRule_ = nullptr;};
      inline string getSuggestRule() const { DARABONBA_PTR_GET_DEFAULT(suggestRule_, "") };
      inline Data& setSuggestRule(string suggestRule) { DARABONBA_PTR_SET_VALUE(suggestRule_, suggestRule) };


      // suggestType Field Functions 
      bool hasSuggestType() const { return this->suggestType_ != nullptr;};
      void deleteSuggestType() { this->suggestType_ = nullptr;};
      inline string getSuggestType() const { DARABONBA_PTR_GET_DEFAULT(suggestType_, "") };
      inline Data& setSuggestType(string suggestType) { DARABONBA_PTR_SET_VALUE(suggestType_, suggestType) };


    protected:
      // The API.
      shared_ptr<string> apiFormat_ {};
      // The domain name or IP address of the API.
      shared_ptr<string> matchedHost_ {};
      // The rule ID of the protection suggestion.
      shared_ptr<string> suggestId_ {};
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
      shared_ptr<string> suggestRule_ {};
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
      shared_ptr<string> suggestType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<DescribeApisecSuggestionsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<DescribeApisecSuggestionsResponseBody::Data>) };
    inline vector<DescribeApisecSuggestionsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<DescribeApisecSuggestionsResponseBody::Data>) };
    inline DescribeApisecSuggestionsResponseBody& setData(const vector<DescribeApisecSuggestionsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeApisecSuggestionsResponseBody& setData(vector<DescribeApisecSuggestionsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApisecSuggestionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The protection suggestions.
    shared_ptr<vector<DescribeApisecSuggestionsResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
