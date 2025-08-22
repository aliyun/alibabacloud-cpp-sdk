// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPROMETHEUSALERTRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListPrometheusAlertRulesResponseBodyPrometheusAlertRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListPrometheusAlertRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrometheusAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PrometheusAlertRules, prometheusAlertRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrometheusAlertRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PrometheusAlertRules, prometheusAlertRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListPrometheusAlertRulesResponseBody() = default ;
    ListPrometheusAlertRulesResponseBody(const ListPrometheusAlertRulesResponseBody &) = default ;
    ListPrometheusAlertRulesResponseBody(ListPrometheusAlertRulesResponseBody &&) = default ;
    ListPrometheusAlertRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrometheusAlertRulesResponseBody() = default ;
    ListPrometheusAlertRulesResponseBody& operator=(const ListPrometheusAlertRulesResponseBody &) = default ;
    ListPrometheusAlertRulesResponseBody& operator=(ListPrometheusAlertRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->prometheusAlertRules_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline ListPrometheusAlertRulesResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListPrometheusAlertRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // prometheusAlertRules Field Functions 
    bool hasPrometheusAlertRules() const { return this->prometheusAlertRules_ != nullptr;};
    void deletePrometheusAlertRules() { this->prometheusAlertRules_ = nullptr;};
    inline const vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules> & prometheusAlertRules() const { DARABONBA_PTR_GET_CONST(prometheusAlertRules_, vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules>) };
    inline vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules> prometheusAlertRules() { DARABONBA_PTR_GET(prometheusAlertRules_, vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules>) };
    inline ListPrometheusAlertRulesResponseBody& setPrometheusAlertRules(const vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules> & prometheusAlertRules) { DARABONBA_PTR_SET_VALUE(prometheusAlertRules_, prometheusAlertRules) };
    inline ListPrometheusAlertRulesResponseBody& setPrometheusAlertRules(vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules> && prometheusAlertRules) { DARABONBA_PTR_SET_RVALUE(prometheusAlertRules_, prometheusAlertRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPrometheusAlertRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListPrometheusAlertRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful. Other status codes indicate that the request failed.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The returned message.
    std::shared_ptr<string> message_ = nullptr;
    // The returned struct.
    std::shared_ptr<vector<ListPrometheusAlertRulesResponseBodyPrometheusAlertRules>> prometheusAlertRules_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
