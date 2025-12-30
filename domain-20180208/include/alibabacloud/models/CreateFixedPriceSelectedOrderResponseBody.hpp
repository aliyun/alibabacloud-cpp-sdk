// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
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
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(BizIds, bizIds_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(DomainBlockTrade, domainBlockTrade_);
        DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_TO_JSON(Price, price_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(BizIds, bizIds_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(DomainBlockTrade, domainBlockTrade_);
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
      virtual bool empty() const override { return this->bizIds_ == nullptr
        && this->domain_ == nullptr && this->domainBlockTrade_ == nullptr && this->orderNo_ == nullptr && this->price_ == nullptr; };
      // bizIds Field Functions 
      bool hasBizIds() const { return this->bizIds_ != nullptr;};
      void deleteBizIds() { this->bizIds_ = nullptr;};
      inline const map<string, string> & getBizIds() const { DARABONBA_PTR_GET_CONST(bizIds_, map<string, string>) };
      inline map<string, string> getBizIds() { DARABONBA_PTR_GET(bizIds_, map<string, string>) };
      inline Module& setBizIds(const map<string, string> & bizIds) { DARABONBA_PTR_SET_VALUE(bizIds_, bizIds) };
      inline Module& setBizIds(map<string, string> && bizIds) { DARABONBA_PTR_SET_RVALUE(bizIds_, bizIds) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Module& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // domainBlockTrade Field Functions 
      bool hasDomainBlockTrade() const { return this->domainBlockTrade_ != nullptr;};
      void deleteDomainBlockTrade() { this->domainBlockTrade_ = nullptr;};
      inline const vector<string> & getDomainBlockTrade() const { DARABONBA_PTR_GET_CONST(domainBlockTrade_, vector<string>) };
      inline vector<string> getDomainBlockTrade() { DARABONBA_PTR_GET(domainBlockTrade_, vector<string>) };
      inline Module& setDomainBlockTrade(const vector<string> & domainBlockTrade) { DARABONBA_PTR_SET_VALUE(domainBlockTrade_, domainBlockTrade) };
      inline Module& setDomainBlockTrade(vector<string> && domainBlockTrade) { DARABONBA_PTR_SET_RVALUE(domainBlockTrade_, domainBlockTrade) };


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
      shared_ptr<map<string, string>> bizIds_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<vector<string>> domainBlockTrade_ {};
      shared_ptr<string> orderNo_ {};
      shared_ptr<int64_t> price_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->httpStatusCode_ == nullptr && this->module_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateFixedPriceSelectedOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateFixedPriceSelectedOrderResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateFixedPriceSelectedOrderResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CreateFixedPriceSelectedOrderResponseBody::Module) };
    inline CreateFixedPriceSelectedOrderResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CreateFixedPriceSelectedOrderResponseBody::Module) };
    inline CreateFixedPriceSelectedOrderResponseBody& setModule(const CreateFixedPriceSelectedOrderResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateFixedPriceSelectedOrderResponseBody& setModule(CreateFixedPriceSelectedOrderResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFixedPriceSelectedOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateFixedPriceSelectedOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> errorCode_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<CreateFixedPriceSelectedOrderResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
