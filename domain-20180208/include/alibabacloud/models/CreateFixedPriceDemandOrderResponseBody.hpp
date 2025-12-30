// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDPRICEDEMANDORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDPRICEDEMANDORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CreateFixedPriceDemandOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFixedPriceDemandOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFixedPriceDemandOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateFixedPriceDemandOrderResponseBody() = default ;
    CreateFixedPriceDemandOrderResponseBody(const CreateFixedPriceDemandOrderResponseBody &) = default ;
    CreateFixedPriceDemandOrderResponseBody(CreateFixedPriceDemandOrderResponseBody &&) = default ;
    CreateFixedPriceDemandOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFixedPriceDemandOrderResponseBody() = default ;
    CreateFixedPriceDemandOrderResponseBody& operator=(const CreateFixedPriceDemandOrderResponseBody &) = default ;
    CreateFixedPriceDemandOrderResponseBody& operator=(CreateFixedPriceDemandOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_TO_JSON(Price, price_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->domain_ == nullptr
        && this->orderNo_ == nullptr && this->price_ == nullptr; };
      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Module& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // orderNo Field Functions 
      bool hasOrderNo() const { return this->orderNo_ != nullptr;};
      void deleteOrderNo() { this->orderNo_ = nullptr;};
      inline string getOrderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
      inline Module& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline int64_t getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
      inline Module& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<string> orderNo_ {};
      shared_ptr<int64_t> price_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->httpStatusCode_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateFixedPriceDemandOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateFixedPriceDemandOrderResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateFixedPriceDemandOrderResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CreateFixedPriceDemandOrderResponseBody::Module) };
    inline CreateFixedPriceDemandOrderResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CreateFixedPriceDemandOrderResponseBody::Module) };
    inline CreateFixedPriceDemandOrderResponseBody& setModule(const CreateFixedPriceDemandOrderResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateFixedPriceDemandOrderResponseBody& setModule(CreateFixedPriceDemandOrderResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFixedPriceDemandOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateFixedPriceDemandOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<CreateFixedPriceDemandOrderResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
