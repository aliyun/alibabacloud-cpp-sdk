// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyStrategyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStrategyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStrategyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ModifyStrategyResponseBody() = default ;
    ModifyStrategyResponseBody(const ModifyStrategyResponseBody &) = default ;
    ModifyStrategyResponseBody(ModifyStrategyResponseBody &&) = default ;
    ModifyStrategyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStrategyResponseBody() = default ;
    ModifyStrategyResponseBody& operator=(const ModifyStrategyResponseBody &) = default ;
    ModifyStrategyResponseBody& operator=(ModifyStrategyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->strategyId_ == nullptr; };
      // strategyId Field Functions 
      bool hasStrategyId() const { return this->strategyId_ != nullptr;};
      void deleteStrategyId() { this->strategyId_ = nullptr;};
      inline int32_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0) };
      inline Result& setStrategyId(int32_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    protected:
      // The ID of the baseline check policy.
      shared_ptr<int32_t> strategyId_ {};
    };

    virtual bool empty() const override { return this->httpStatusCode_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyStrategyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ModifyStrategyResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ModifyStrategyResponseBody::Result) };
    inline ModifyStrategyResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ModifyStrategyResponseBody::Result) };
    inline ModifyStrategyResponseBody& setResult(const ModifyStrategyResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ModifyStrategyResponseBody& setResult(ModifyStrategyResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyStrategyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The result returned.
    shared_ptr<ModifyStrategyResponseBody::Result> result_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
