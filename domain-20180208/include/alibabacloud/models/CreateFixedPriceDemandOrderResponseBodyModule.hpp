// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDPRICEDEMANDORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDPRICEDEMANDORDERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class CreateFixedPriceDemandOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFixedPriceDemandOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(Price, price_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFixedPriceDemandOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
    };
    CreateFixedPriceDemandOrderResponseBodyModule() = default ;
    CreateFixedPriceDemandOrderResponseBodyModule(const CreateFixedPriceDemandOrderResponseBodyModule &) = default ;
    CreateFixedPriceDemandOrderResponseBodyModule(CreateFixedPriceDemandOrderResponseBodyModule &&) = default ;
    CreateFixedPriceDemandOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFixedPriceDemandOrderResponseBodyModule() = default ;
    CreateFixedPriceDemandOrderResponseBodyModule& operator=(const CreateFixedPriceDemandOrderResponseBodyModule &) = default ;
    CreateFixedPriceDemandOrderResponseBodyModule& operator=(CreateFixedPriceDemandOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domain_ == nullptr
        && return this->orderNo_ == nullptr && return this->price_ == nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateFixedPriceDemandOrderResponseBodyModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string orderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline CreateFixedPriceDemandOrderResponseBodyModule& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline CreateFixedPriceDemandOrderResponseBodyModule& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> orderNo_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
