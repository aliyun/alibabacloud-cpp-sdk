// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPURLRESPONSEBODY_HPP_
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
  class DescribeFlowTopUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowTopUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopUrl, ruleHitsTopUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowTopUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopUrl, ruleHitsTopUrl_);
    };
    DescribeFlowTopUrlResponseBody() = default ;
    DescribeFlowTopUrlResponseBody(const DescribeFlowTopUrlResponseBody &) = default ;
    DescribeFlowTopUrlResponseBody(DescribeFlowTopUrlResponseBody &&) = default ;
    DescribeFlowTopUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowTopUrlResponseBody() = default ;
    DescribeFlowTopUrlResponseBody& operator=(const DescribeFlowTopUrlResponseBody &) = default ;
    DescribeFlowTopUrlResponseBody& operator=(DescribeFlowTopUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleHitsTopUrl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleHitsTopUrl& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, RuleHitsTopUrl& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      RuleHitsTopUrl() = default ;
      RuleHitsTopUrl(const RuleHitsTopUrl &) = default ;
      RuleHitsTopUrl(RuleHitsTopUrl &&) = default ;
      RuleHitsTopUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleHitsTopUrl() = default ;
      RuleHitsTopUrl& operator=(const RuleHitsTopUrl &) = default ;
      RuleHitsTopUrl& operator=(RuleHitsTopUrl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->url_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline RuleHitsTopUrl& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline RuleHitsTopUrl& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      // The total number of requests that are initiated by using the URL.
      shared_ptr<int64_t> count_ {};
      // The URL that is used to initiate requests.
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleHitsTopUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowTopUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopUrl Field Functions 
    bool hasRuleHitsTopUrl() const { return this->ruleHitsTopUrl_ != nullptr;};
    void deleteRuleHitsTopUrl() { this->ruleHitsTopUrl_ = nullptr;};
    inline const vector<DescribeFlowTopUrlResponseBody::RuleHitsTopUrl> & getRuleHitsTopUrl() const { DARABONBA_PTR_GET_CONST(ruleHitsTopUrl_, vector<DescribeFlowTopUrlResponseBody::RuleHitsTopUrl>) };
    inline vector<DescribeFlowTopUrlResponseBody::RuleHitsTopUrl> getRuleHitsTopUrl() { DARABONBA_PTR_GET(ruleHitsTopUrl_, vector<DescribeFlowTopUrlResponseBody::RuleHitsTopUrl>) };
    inline DescribeFlowTopUrlResponseBody& setRuleHitsTopUrl(const vector<DescribeFlowTopUrlResponseBody::RuleHitsTopUrl> & ruleHitsTopUrl) { DARABONBA_PTR_SET_VALUE(ruleHitsTopUrl_, ruleHitsTopUrl) };
    inline DescribeFlowTopUrlResponseBody& setRuleHitsTopUrl(vector<DescribeFlowTopUrlResponseBody::RuleHitsTopUrl> && ruleHitsTopUrl) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopUrl_, ruleHitsTopUrl) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the top 10 URLs that are used to initiate requests.
    shared_ptr<vector<DescribeFlowTopUrlResponseBody::RuleHitsTopUrl>> ruleHitsTopUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
