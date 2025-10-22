// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPURCHASEDDOMAINSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYPURCHASEDDOMAINSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180208
{
namespace Models
{
  class QueryPurchasedDomainsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPurchasedDomainsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_TO_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(TradeMoney, tradeMoney_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPurchasedDomainsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeliveryTime, deliveryTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OperationStatus, operationStatus_);
      DARABONBA_PTR_FROM_JSON(OperationTime, operationTime_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(TradeMoney, tradeMoney_);
    };
    QueryPurchasedDomainsResponseBodyData() = default ;
    QueryPurchasedDomainsResponseBodyData(const QueryPurchasedDomainsResponseBodyData &) = default ;
    QueryPurchasedDomainsResponseBodyData(QueryPurchasedDomainsResponseBodyData &&) = default ;
    QueryPurchasedDomainsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPurchasedDomainsResponseBodyData() = default ;
    QueryPurchasedDomainsResponseBodyData& operator=(const QueryPurchasedDomainsResponseBodyData &) = default ;
    QueryPurchasedDomainsResponseBodyData& operator=(QueryPurchasedDomainsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deliveryTime_ == nullptr
        && return this->domainName_ == nullptr && return this->operationStatus_ == nullptr && return this->operationTime_ == nullptr && return this->productType_ == nullptr && return this->tradeMoney_ == nullptr; };
    // deliveryTime Field Functions 
    bool hasDeliveryTime() const { return this->deliveryTime_ != nullptr;};
    void deleteDeliveryTime() { this->deliveryTime_ = nullptr;};
    inline string deliveryTime() const { DARABONBA_PTR_GET_DEFAULT(deliveryTime_, "") };
    inline QueryPurchasedDomainsResponseBodyData& setDeliveryTime(string deliveryTime) { DARABONBA_PTR_SET_VALUE(deliveryTime_, deliveryTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline QueryPurchasedDomainsResponseBodyData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // operationStatus Field Functions 
    bool hasOperationStatus() const { return this->operationStatus_ != nullptr;};
    void deleteOperationStatus() { this->operationStatus_ = nullptr;};
    inline string operationStatus() const { DARABONBA_PTR_GET_DEFAULT(operationStatus_, "") };
    inline QueryPurchasedDomainsResponseBodyData& setOperationStatus(string operationStatus) { DARABONBA_PTR_SET_VALUE(operationStatus_, operationStatus) };


    // operationTime Field Functions 
    bool hasOperationTime() const { return this->operationTime_ != nullptr;};
    void deleteOperationTime() { this->operationTime_ = nullptr;};
    inline string operationTime() const { DARABONBA_PTR_GET_DEFAULT(operationTime_, "") };
    inline QueryPurchasedDomainsResponseBodyData& setOperationTime(string operationTime) { DARABONBA_PTR_SET_VALUE(operationTime_, operationTime) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QueryPurchasedDomainsResponseBodyData& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // tradeMoney Field Functions 
    bool hasTradeMoney() const { return this->tradeMoney_ != nullptr;};
    void deleteTradeMoney() { this->tradeMoney_ = nullptr;};
    inline double tradeMoney() const { DARABONBA_PTR_GET_DEFAULT(tradeMoney_, 0.0) };
    inline QueryPurchasedDomainsResponseBodyData& setTradeMoney(double tradeMoney) { DARABONBA_PTR_SET_VALUE(tradeMoney_, tradeMoney) };


  protected:
    std::shared_ptr<string> deliveryTime_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> operationStatus_ = nullptr;
    std::shared_ptr<string> operationTime_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<double> tradeMoney_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180208
#endif
