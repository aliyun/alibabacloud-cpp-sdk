// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSETTLEBILLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSETTLEBILLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QuerySettleBillRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySettleBillRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_TO_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_TO_JSON(IsDisplayLocalCurrency, isDisplayLocalCurrency_);
      DARABONBA_PTR_TO_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductType, productType_);
      DARABONBA_PTR_TO_JSON(RecordID, recordID_);
      DARABONBA_PTR_TO_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySettleBillRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BillOwnerId, billOwnerId_);
      DARABONBA_PTR_FROM_JSON(BillingCycle, billingCycle_);
      DARABONBA_PTR_FROM_JSON(IsDisplayLocalCurrency, isDisplayLocalCurrency_);
      DARABONBA_PTR_FROM_JSON(IsHideZeroCharge, isHideZeroCharge_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductType, productType_);
      DARABONBA_PTR_FROM_JSON(RecordID, recordID_);
      DARABONBA_PTR_FROM_JSON(SubscriptionType, subscriptionType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    QuerySettleBillRequest() = default ;
    QuerySettleBillRequest(const QuerySettleBillRequest &) = default ;
    QuerySettleBillRequest(QuerySettleBillRequest &&) = default ;
    QuerySettleBillRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySettleBillRequest() = default ;
    QuerySettleBillRequest& operator=(const QuerySettleBillRequest &) = default ;
    QuerySettleBillRequest& operator=(QuerySettleBillRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->billOwnerId_ != nullptr
        && this->billingCycle_ != nullptr && this->isDisplayLocalCurrency_ != nullptr && this->isHideZeroCharge_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr
        && this->ownerId_ != nullptr && this->productCode_ != nullptr && this->productType_ != nullptr && this->recordID_ != nullptr && this->subscriptionType_ != nullptr
        && this->type_ != nullptr; };
    // billOwnerId Field Functions 
    bool hasBillOwnerId() const { return this->billOwnerId_ != nullptr;};
    void deleteBillOwnerId() { this->billOwnerId_ = nullptr;};
    inline int64_t billOwnerId() const { DARABONBA_PTR_GET_DEFAULT(billOwnerId_, 0L) };
    inline QuerySettleBillRequest& setBillOwnerId(int64_t billOwnerId) { DARABONBA_PTR_SET_VALUE(billOwnerId_, billOwnerId) };


    // billingCycle Field Functions 
    bool hasBillingCycle() const { return this->billingCycle_ != nullptr;};
    void deleteBillingCycle() { this->billingCycle_ = nullptr;};
    inline string billingCycle() const { DARABONBA_PTR_GET_DEFAULT(billingCycle_, "") };
    inline QuerySettleBillRequest& setBillingCycle(string billingCycle) { DARABONBA_PTR_SET_VALUE(billingCycle_, billingCycle) };


    // isDisplayLocalCurrency Field Functions 
    bool hasIsDisplayLocalCurrency() const { return this->isDisplayLocalCurrency_ != nullptr;};
    void deleteIsDisplayLocalCurrency() { this->isDisplayLocalCurrency_ = nullptr;};
    inline bool isDisplayLocalCurrency() const { DARABONBA_PTR_GET_DEFAULT(isDisplayLocalCurrency_, false) };
    inline QuerySettleBillRequest& setIsDisplayLocalCurrency(bool isDisplayLocalCurrency) { DARABONBA_PTR_SET_VALUE(isDisplayLocalCurrency_, isDisplayLocalCurrency) };


    // isHideZeroCharge Field Functions 
    bool hasIsHideZeroCharge() const { return this->isHideZeroCharge_ != nullptr;};
    void deleteIsHideZeroCharge() { this->isHideZeroCharge_ = nullptr;};
    inline bool isHideZeroCharge() const { DARABONBA_PTR_GET_DEFAULT(isHideZeroCharge_, false) };
    inline QuerySettleBillRequest& setIsHideZeroCharge(bool isHideZeroCharge) { DARABONBA_PTR_SET_VALUE(isHideZeroCharge_, isHideZeroCharge) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline QuerySettleBillRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline QuerySettleBillRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySettleBillRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline QuerySettleBillRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productType Field Functions 
    bool hasProductType() const { return this->productType_ != nullptr;};
    void deleteProductType() { this->productType_ = nullptr;};
    inline string productType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
    inline QuerySettleBillRequest& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


    // recordID Field Functions 
    bool hasRecordID() const { return this->recordID_ != nullptr;};
    void deleteRecordID() { this->recordID_ = nullptr;};
    inline string recordID() const { DARABONBA_PTR_GET_DEFAULT(recordID_, "") };
    inline QuerySettleBillRequest& setRecordID(string recordID) { DARABONBA_PTR_SET_VALUE(recordID_, recordID) };


    // subscriptionType Field Functions 
    bool hasSubscriptionType() const { return this->subscriptionType_ != nullptr;};
    void deleteSubscriptionType() { this->subscriptionType_ = nullptr;};
    inline string subscriptionType() const { DARABONBA_PTR_GET_DEFAULT(subscriptionType_, "") };
    inline QuerySettleBillRequest& setSubscriptionType(string subscriptionType) { DARABONBA_PTR_SET_VALUE(subscriptionType_, subscriptionType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline QuerySettleBillRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<int64_t> billOwnerId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> billingCycle_ = nullptr;
    std::shared_ptr<bool> isDisplayLocalCurrency_ = nullptr;
    std::shared_ptr<bool> isHideZeroCharge_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> productCode_ = nullptr;
    std::shared_ptr<string> productType_ = nullptr;
    std::shared_ptr<string> recordID_ = nullptr;
    std::shared_ptr<string> subscriptionType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
