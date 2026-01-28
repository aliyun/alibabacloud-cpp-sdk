// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CreateIntlFixedPriceDomainOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntlFixedPriceDomainOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntlFixedPriceDomainOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateIntlFixedPriceDomainOrderResponseBody() = default ;
    CreateIntlFixedPriceDomainOrderResponseBody(const CreateIntlFixedPriceDomainOrderResponseBody &) = default ;
    CreateIntlFixedPriceDomainOrderResponseBody(CreateIntlFixedPriceDomainOrderResponseBody &&) = default ;
    CreateIntlFixedPriceDomainOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntlFixedPriceDomainOrderResponseBody() = default ;
    CreateIntlFixedPriceDomainOrderResponseBody& operator=(const CreateIntlFixedPriceDomainOrderResponseBody &) = default ;
    CreateIntlFixedPriceDomainOrderResponseBody& operator=(CreateIntlFixedPriceDomainOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_TO_JSON(PayPrice, payPrice_);
        DARABONBA_PTR_TO_JSON(PayUrl, payUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
        DARABONBA_PTR_FROM_JSON(PayPrice, payPrice_);
        DARABONBA_PTR_FROM_JSON(PayUrl, payUrl_);
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
        && this->orderNo_ == nullptr && this->payPrice_ == nullptr && this->payUrl_ == nullptr; };
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


      // payPrice Field Functions 
      bool hasPayPrice() const { return this->payPrice_ != nullptr;};
      void deletePayPrice() { this->payPrice_ = nullptr;};
      inline int64_t getPayPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0L) };
      inline Module& setPayPrice(int64_t payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


      // payUrl Field Functions 
      bool hasPayUrl() const { return this->payUrl_ != nullptr;};
      void deletePayUrl() { this->payUrl_ = nullptr;};
      inline string getPayUrl() const { DARABONBA_PTR_GET_DEFAULT(payUrl_, "") };
      inline Module& setPayUrl(string payUrl) { DARABONBA_PTR_SET_VALUE(payUrl_, payUrl) };


    protected:
      shared_ptr<string> domain_ {};
      shared_ptr<string> orderNo_ {};
      shared_ptr<int64_t> payPrice_ {};
      shared_ptr<string> payUrl_ {};
    };

    virtual bool empty() const override { return this->module_ == nullptr
        && this->requestId_ == nullptr; };
    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const CreateIntlFixedPriceDomainOrderResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, CreateIntlFixedPriceDomainOrderResponseBody::Module) };
    inline CreateIntlFixedPriceDomainOrderResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, CreateIntlFixedPriceDomainOrderResponseBody::Module) };
    inline CreateIntlFixedPriceDomainOrderResponseBody& setModule(const CreateIntlFixedPriceDomainOrderResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline CreateIntlFixedPriceDomainOrderResponseBody& setModule(CreateIntlFixedPriceDomainOrderResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateIntlFixedPriceDomainOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateIntlFixedPriceDomainOrderResponseBody::Module> module_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
