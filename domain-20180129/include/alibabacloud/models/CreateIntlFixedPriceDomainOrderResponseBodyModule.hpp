// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEINTLFIXEDPRICEDOMAINORDERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CreateIntlFixedPriceDomainOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIntlFixedPriceDomainOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(PayPrice, payPrice_);
      DARABONBA_PTR_TO_JSON(PayUrl, payUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIntlFixedPriceDomainOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(PayPrice, payPrice_);
      DARABONBA_PTR_FROM_JSON(PayUrl, payUrl_);
    };
    CreateIntlFixedPriceDomainOrderResponseBodyModule() = default ;
    CreateIntlFixedPriceDomainOrderResponseBodyModule(const CreateIntlFixedPriceDomainOrderResponseBodyModule &) = default ;
    CreateIntlFixedPriceDomainOrderResponseBodyModule(CreateIntlFixedPriceDomainOrderResponseBodyModule &&) = default ;
    CreateIntlFixedPriceDomainOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIntlFixedPriceDomainOrderResponseBodyModule() = default ;
    CreateIntlFixedPriceDomainOrderResponseBodyModule& operator=(const CreateIntlFixedPriceDomainOrderResponseBodyModule &) = default ;
    CreateIntlFixedPriceDomainOrderResponseBodyModule& operator=(CreateIntlFixedPriceDomainOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->orderNo_ == nullptr && return this->payPrice_ == nullptr && return this->payUrl_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateIntlFixedPriceDomainOrderResponseBodyModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string orderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline CreateIntlFixedPriceDomainOrderResponseBodyModule& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // payPrice Field Functions 
    bool hasPayPrice() const { return this->payPrice_ != nullptr;};
    void deletePayPrice() { this->payPrice_ = nullptr;};
    inline int64_t payPrice() const { DARABONBA_PTR_GET_DEFAULT(payPrice_, 0L) };
    inline CreateIntlFixedPriceDomainOrderResponseBodyModule& setPayPrice(int64_t payPrice) { DARABONBA_PTR_SET_VALUE(payPrice_, payPrice) };


    // payUrl Field Functions 
    bool hasPayUrl() const { return this->payUrl_ != nullptr;};
    void deletePayUrl() { this->payUrl_ = nullptr;};
    inline string payUrl() const { DARABONBA_PTR_GET_DEFAULT(payUrl_, "") };
    inline CreateIntlFixedPriceDomainOrderResponseBodyModule& setPayUrl(string payUrl) { DARABONBA_PTR_SET_VALUE(payUrl_, payUrl) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> orderNo_ = nullptr;
    std::shared_ptr<int64_t> payPrice_ = nullptr;
    std::shared_ptr<string> payUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
