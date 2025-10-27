// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTRATEGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTRATEGYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyStrategyResponseBodyResult.hpp>
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
    virtual bool empty() const override { return this->httpStatusCode_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr && return this->success_ == nullptr; };
    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ModifyStrategyResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyStrategyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ModifyStrategyResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, ModifyStrategyResponseBodyResult) };
    inline ModifyStrategyResponseBodyResult result() { DARABONBA_PTR_GET(result_, ModifyStrategyResponseBodyResult) };
    inline ModifyStrategyResponseBody& setResult(const ModifyStrategyResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ModifyStrategyResponseBody& setResult(ModifyStrategyResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ModifyStrategyResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The result returned.
    std::shared_ptr<ModifyStrategyResponseBodyResult> result_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
