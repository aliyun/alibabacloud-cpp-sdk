// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebCCRules, webCCRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebCCRules, webCCRules_);
    };
    DescribeWebCCRulesResponseBody() = default ;
    DescribeWebCCRulesResponseBody(const DescribeWebCCRulesResponseBody &) = default ;
    DescribeWebCCRulesResponseBody(DescribeWebCCRulesResponseBody &&) = default ;
    DescribeWebCCRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesResponseBody() = default ;
    DescribeWebCCRulesResponseBody& operator=(const DescribeWebCCRulesResponseBody &) = default ;
    DescribeWebCCRulesResponseBody& operator=(DescribeWebCCRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebCCRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebCCRules& obj) { 
        DARABONBA_PTR_TO_JSON(Act, act_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Interval, interval_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Ttl, ttl_);
        DARABONBA_PTR_TO_JSON(Uri, uri_);
      };
      friend void from_json(const Darabonba::Json& j, WebCCRules& obj) { 
        DARABONBA_PTR_FROM_JSON(Act, act_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Interval, interval_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
        DARABONBA_PTR_FROM_JSON(Uri, uri_);
      };
      WebCCRules() = default ;
      WebCCRules(const WebCCRules &) = default ;
      WebCCRules(WebCCRules &&) = default ;
      WebCCRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebCCRules() = default ;
      WebCCRules& operator=(const WebCCRules &) = default ;
      WebCCRules& operator=(WebCCRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->act_ == nullptr
        && this->count_ == nullptr && this->interval_ == nullptr && this->mode_ == nullptr && this->name_ == nullptr && this->ttl_ == nullptr
        && this->uri_ == nullptr; };
      // act Field Functions 
      bool hasAct() const { return this->act_ != nullptr;};
      void deleteAct() { this->act_ = nullptr;};
      inline string getAct() const { DARABONBA_PTR_GET_DEFAULT(act_, "") };
      inline WebCCRules& setAct(string act) { DARABONBA_PTR_SET_VALUE(act_, act) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline WebCCRules& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // interval Field Functions 
      bool hasInterval() const { return this->interval_ != nullptr;};
      void deleteInterval() { this->interval_ = nullptr;};
      inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
      inline WebCCRules& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
      inline WebCCRules& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline WebCCRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ttl Field Functions 
      bool hasTtl() const { return this->ttl_ != nullptr;};
      void deleteTtl() { this->ttl_ = nullptr;};
      inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
      inline WebCCRules& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


      // uri Field Functions 
      bool hasUri() const { return this->uri_ != nullptr;};
      void deleteUri() { this->uri_ = nullptr;};
      inline string getUri() const { DARABONBA_PTR_GET_DEFAULT(uri_, "") };
      inline WebCCRules& setUri(string uri) { DARABONBA_PTR_SET_VALUE(uri_, uri) };


    protected:
      // The action triggered if the rule is matched. Valid values:
      // 
      // *   **close**: The requests that match the rule are blocked.
      // *   **captcha**: Completely Automated Public Turing test to tell Computers and Humans Apart (CAPTCHA) verification for the requests that match the rule is implemented.
      shared_ptr<string> act_ {};
      // The number of requests that are allowed from a single IP address. Valid values: **2** to **2000**.
      shared_ptr<int32_t> count_ {};
      // The check interval. Valid values: **5** to **10800**. Unit: seconds.
      shared_ptr<int32_t> interval_ {};
      // The match mode. Valid values:
      // 
      // *   **prefix**: prefix match.
      // *   **match**: exact match.
      shared_ptr<string> mode_ {};
      // The name of the rule.
      shared_ptr<string> name_ {};
      // The validity period. Valid values: **1** to **1440**. Unit: minutes.
      shared_ptr<int32_t> ttl_ {};
      // The check path.
      shared_ptr<string> uri_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->webCCRules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCCRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeWebCCRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webCCRules Field Functions 
    bool hasWebCCRules() const { return this->webCCRules_ != nullptr;};
    void deleteWebCCRules() { this->webCCRules_ = nullptr;};
    inline const vector<DescribeWebCCRulesResponseBody::WebCCRules> & getWebCCRules() const { DARABONBA_PTR_GET_CONST(webCCRules_, vector<DescribeWebCCRulesResponseBody::WebCCRules>) };
    inline vector<DescribeWebCCRulesResponseBody::WebCCRules> getWebCCRules() { DARABONBA_PTR_GET(webCCRules_, vector<DescribeWebCCRulesResponseBody::WebCCRules>) };
    inline DescribeWebCCRulesResponseBody& setWebCCRules(const vector<DescribeWebCCRulesResponseBody::WebCCRules> & webCCRules) { DARABONBA_PTR_SET_VALUE(webCCRules_, webCCRules) };
    inline DescribeWebCCRulesResponseBody& setWebCCRules(vector<DescribeWebCCRulesResponseBody::WebCCRules> && webCCRules) { DARABONBA_PTR_SET_RVALUE(webCCRules_, webCCRules) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of custom frequency control rules.
    shared_ptr<int64_t> totalCount_ {};
    // The custom frequency control rule.
    shared_ptr<vector<DescribeWebCCRulesResponseBody::WebCCRules>> webCCRules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
