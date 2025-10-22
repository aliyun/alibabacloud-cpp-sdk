// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFixedPriceSelectedOrderResponseBodyModule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CreateFixedPriceSelectedOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFixedPriceSelectedOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFixedPriceSelectedOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateFixedPriceSelectedOrderResponseBody() = default ;
    CreateFixedPriceSelectedOrderResponseBody(const CreateFixedPriceSelectedOrderResponseBody &) = default ;
    CreateFixedPriceSelectedOrderResponseBody(CreateFixedPriceSelectedOrderResponseBody &&) = default ;
    CreateFixedPriceSelectedOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFixedPriceSelectedOrderResponseBody() = default ;
    CreateFixedPriceSelectedOrderResponseBody& operator=(const CreateFixedPriceSelectedOrderResponseBody &) = default ;
    CreateFixedPriceSelectedOrderResponseBody& operator=(CreateFixedPriceSelectedOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->httpStatusCode_ == nullptr && return this->module_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateFixedPriceSelectedOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t httpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateFixedPriceSelectedOrderResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateFixedPriceSelectedOrderResponseBodyModule & module() const { DARABONBA_PTR_GET_CONST(module_, CreateFixedPriceSelectedOrderResponseBodyModule) };
    inline CreateFixedPriceSelectedOrderResponseBodyModule module() { DARABONBA_PTR_GET(module_, CreateFixedPriceSelectedOrderResponseBodyModule) };
    inline CreateFixedPriceSelectedOrderResponseBody& setModule(const CreateFixedPriceSelectedOrderResponseBodyModule & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateFixedPriceSelectedOrderResponseBody& setModule(CreateFixedPriceSelectedOrderResponseBodyModule && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFixedPriceSelectedOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateFixedPriceSelectedOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<int32_t> httpStatusCode_ = nullptr;
    std::shared_ptr<CreateFixedPriceSelectedOrderResponseBodyModule> module_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
