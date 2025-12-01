// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIXEDPRICESELECTEDORDERRESPONSEBODYMODULE_HPP_
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
  class CreateFixedPriceSelectedOrderResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFixedPriceSelectedOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(BizIds, bizIds_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainBlockTrade, domainBlockTrade_);
      DARABONBA_PTR_TO_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_TO_JSON(Price, price_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFixedPriceSelectedOrderResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(BizIds, bizIds_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainBlockTrade, domainBlockTrade_);
      DARABONBA_PTR_FROM_JSON(OrderNo, orderNo_);
      DARABONBA_PTR_FROM_JSON(Price, price_);
    };
    CreateFixedPriceSelectedOrderResponseBodyModule() = default ;
    CreateFixedPriceSelectedOrderResponseBodyModule(const CreateFixedPriceSelectedOrderResponseBodyModule &) = default ;
    CreateFixedPriceSelectedOrderResponseBodyModule(CreateFixedPriceSelectedOrderResponseBodyModule &&) = default ;
    CreateFixedPriceSelectedOrderResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFixedPriceSelectedOrderResponseBodyModule() = default ;
    CreateFixedPriceSelectedOrderResponseBodyModule& operator=(const CreateFixedPriceSelectedOrderResponseBodyModule &) = default ;
    CreateFixedPriceSelectedOrderResponseBodyModule& operator=(CreateFixedPriceSelectedOrderResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizIds_ == nullptr
        && return this->domain_ == nullptr && return this->domainBlockTrade_ == nullptr && return this->orderNo_ == nullptr && return this->price_ == nullptr; };
    // bizIds Field Functions 
    bool hasBizIds() const { return this->bizIds_ != nullptr;};
    void deleteBizIds() { this->bizIds_ = nullptr;};
    inline const map<string, string> & bizIds() const { DARABONBA_PTR_GET_CONST(bizIds_, map<string, string>) };
    inline map<string, string> bizIds() { DARABONBA_PTR_GET(bizIds_, map<string, string>) };
    inline CreateFixedPriceSelectedOrderResponseBodyModule& setBizIds(const map<string, string> & bizIds) { DARABONBA_PTR_SET_VALUE(bizIds_, bizIds) };
    inline CreateFixedPriceSelectedOrderResponseBodyModule& setBizIds(map<string, string> && bizIds) { DARABONBA_PTR_SET_RVALUE(bizIds_, bizIds) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline CreateFixedPriceSelectedOrderResponseBodyModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainBlockTrade Field Functions 
    bool hasDomainBlockTrade() const { return this->domainBlockTrade_ != nullptr;};
    void deleteDomainBlockTrade() { this->domainBlockTrade_ = nullptr;};
    inline const vector<string> & domainBlockTrade() const { DARABONBA_PTR_GET_CONST(domainBlockTrade_, vector<string>) };
    inline vector<string> domainBlockTrade() { DARABONBA_PTR_GET(domainBlockTrade_, vector<string>) };
    inline CreateFixedPriceSelectedOrderResponseBodyModule& setDomainBlockTrade(const vector<string> & domainBlockTrade) { DARABONBA_PTR_SET_VALUE(domainBlockTrade_, domainBlockTrade) };
    inline CreateFixedPriceSelectedOrderResponseBodyModule& setDomainBlockTrade(vector<string> && domainBlockTrade) { DARABONBA_PTR_SET_RVALUE(domainBlockTrade_, domainBlockTrade) };


    // orderNo Field Functions 
    bool hasOrderNo() const { return this->orderNo_ != nullptr;};
    void deleteOrderNo() { this->orderNo_ = nullptr;};
    inline string orderNo() const { DARABONBA_PTR_GET_DEFAULT(orderNo_, "") };
    inline CreateFixedPriceSelectedOrderResponseBodyModule& setOrderNo(string orderNo) { DARABONBA_PTR_SET_VALUE(orderNo_, orderNo) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline int64_t price() const { DARABONBA_PTR_GET_DEFAULT(price_, 0L) };
    inline CreateFixedPriceSelectedOrderResponseBodyModule& setPrice(int64_t price) { DARABONBA_PTR_SET_VALUE(price_, price) };


  protected:
    std::shared_ptr<map<string, string>> bizIds_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<vector<string>> domainBlockTrade_ = nullptr;
    std::shared_ptr<string> orderNo_ = nullptr;
    std::shared_ptr<int64_t> price_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
