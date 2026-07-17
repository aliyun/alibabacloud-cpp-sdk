// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEELASTICPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEELASTICPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class RemoveElasticPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpCode, httpCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpCode, httpCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(result, result_);
    };
    RemoveElasticPlanResponseBody() = default ;
    RemoveElasticPlanResponseBody(const RemoveElasticPlanResponseBody &) = default ;
    RemoveElasticPlanResponseBody(RemoveElasticPlanResponseBody &&) = default ;
    RemoveElasticPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveElasticPlanResponseBody() = default ;
    RemoveElasticPlanResponseBody& operator=(const RemoveElasticPlanResponseBody &) = default ;
    RemoveElasticPlanResponseBody& operator=(RemoveElasticPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RemoveElasticPlanResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpCode Field Functions 
    bool hasHttpCode() const { return this->httpCode_ != nullptr;};
    void deleteHttpCode() { this->httpCode_ = nullptr;};
    inline int64_t getHttpCode() const { DARABONBA_PTR_GET_DEFAULT(httpCode_, 0L) };
    inline RemoveElasticPlanResponseBody& setHttpCode(int64_t httpCode) { DARABONBA_PTR_SET_VALUE(httpCode_, httpCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveElasticPlanResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveElasticPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline     const Darabonba::Json & getResult() const { DARABONBA_GET(result_) };
    Darabonba::Json & getResult() { DARABONBA_GET(result_) };
    inline RemoveElasticPlanResponseBody& setResult(const Darabonba::Json & result) { DARABONBA_SET_VALUE(result_, result) };
    inline RemoveElasticPlanResponseBody& setResult(Darabonba::Json && result) { DARABONBA_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> httpCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    Darabonba::Json result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
