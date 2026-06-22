// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSALERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSALERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSaleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSaleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckSale, checkSale_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSaleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckSale, checkSale_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCheckSaleResponseBody() = default ;
    GetCheckSaleResponseBody(const GetCheckSaleResponseBody &) = default ;
    GetCheckSaleResponseBody(GetCheckSaleResponseBody &&) = default ;
    GetCheckSaleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSaleResponseBody() = default ;
    GetCheckSaleResponseBody& operator=(const GetCheckSaleResponseBody &) = default ;
    GetCheckSaleResponseBody& operator=(GetCheckSaleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckSale : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckSale& obj) { 
        DARABONBA_PTR_TO_JSON(ConsumeCount, consumeCount_);
        DARABONBA_PTR_TO_JSON(InstanceConsumeCount, instanceConsumeCount_);
        DARABONBA_PTR_TO_JSON(InstanceHybridPostLatestCycledResourceCount, instanceHybridPostLatestCycledResourceCount_);
        DARABONBA_PTR_TO_JSON(InstancePostConsumeCount, instancePostConsumeCount_);
        DARABONBA_PTR_TO_JSON(InstancePurchaseCount, instancePurchaseCount_);
        DARABONBA_PTR_TO_JSON(LoyalUser, loyalUser_);
        DARABONBA_PTR_TO_JSON(PurchaseCount, purchaseCount_);
        DARABONBA_PTR_TO_JSON(SaleUserType, saleUserType_);
      };
      friend void from_json(const Darabonba::Json& j, CheckSale& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumeCount, consumeCount_);
        DARABONBA_PTR_FROM_JSON(InstanceConsumeCount, instanceConsumeCount_);
        DARABONBA_PTR_FROM_JSON(InstanceHybridPostLatestCycledResourceCount, instanceHybridPostLatestCycledResourceCount_);
        DARABONBA_PTR_FROM_JSON(InstancePostConsumeCount, instancePostConsumeCount_);
        DARABONBA_PTR_FROM_JSON(InstancePurchaseCount, instancePurchaseCount_);
        DARABONBA_PTR_FROM_JSON(LoyalUser, loyalUser_);
        DARABONBA_PTR_FROM_JSON(PurchaseCount, purchaseCount_);
        DARABONBA_PTR_FROM_JSON(SaleUserType, saleUserType_);
      };
      CheckSale() = default ;
      CheckSale(const CheckSale &) = default ;
      CheckSale(CheckSale &&) = default ;
      CheckSale(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckSale() = default ;
      CheckSale& operator=(const CheckSale &) = default ;
      CheckSale& operator=(CheckSale &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->consumeCount_ == nullptr
        && this->instanceConsumeCount_ == nullptr && this->instanceHybridPostLatestCycledResourceCount_ == nullptr && this->instancePostConsumeCount_ == nullptr && this->instancePurchaseCount_ == nullptr && this->loyalUser_ == nullptr
        && this->purchaseCount_ == nullptr && this->saleUserType_ == nullptr; };
      // consumeCount Field Functions 
      bool hasConsumeCount() const { return this->consumeCount_ != nullptr;};
      void deleteConsumeCount() { this->consumeCount_ = nullptr;};
      inline int64_t getConsumeCount() const { DARABONBA_PTR_GET_DEFAULT(consumeCount_, 0L) };
      inline CheckSale& setConsumeCount(int64_t consumeCount) { DARABONBA_PTR_SET_VALUE(consumeCount_, consumeCount) };


      // instanceConsumeCount Field Functions 
      bool hasInstanceConsumeCount() const { return this->instanceConsumeCount_ != nullptr;};
      void deleteInstanceConsumeCount() { this->instanceConsumeCount_ = nullptr;};
      inline int64_t getInstanceConsumeCount() const { DARABONBA_PTR_GET_DEFAULT(instanceConsumeCount_, 0L) };
      inline CheckSale& setInstanceConsumeCount(int64_t instanceConsumeCount) { DARABONBA_PTR_SET_VALUE(instanceConsumeCount_, instanceConsumeCount) };


      // instanceHybridPostLatestCycledResourceCount Field Functions 
      bool hasInstanceHybridPostLatestCycledResourceCount() const { return this->instanceHybridPostLatestCycledResourceCount_ != nullptr;};
      void deleteInstanceHybridPostLatestCycledResourceCount() { this->instanceHybridPostLatestCycledResourceCount_ = nullptr;};
      inline int64_t getInstanceHybridPostLatestCycledResourceCount() const { DARABONBA_PTR_GET_DEFAULT(instanceHybridPostLatestCycledResourceCount_, 0L) };
      inline CheckSale& setInstanceHybridPostLatestCycledResourceCount(int64_t instanceHybridPostLatestCycledResourceCount) { DARABONBA_PTR_SET_VALUE(instanceHybridPostLatestCycledResourceCount_, instanceHybridPostLatestCycledResourceCount) };


      // instancePostConsumeCount Field Functions 
      bool hasInstancePostConsumeCount() const { return this->instancePostConsumeCount_ != nullptr;};
      void deleteInstancePostConsumeCount() { this->instancePostConsumeCount_ = nullptr;};
      inline int64_t getInstancePostConsumeCount() const { DARABONBA_PTR_GET_DEFAULT(instancePostConsumeCount_, 0L) };
      inline CheckSale& setInstancePostConsumeCount(int64_t instancePostConsumeCount) { DARABONBA_PTR_SET_VALUE(instancePostConsumeCount_, instancePostConsumeCount) };


      // instancePurchaseCount Field Functions 
      bool hasInstancePurchaseCount() const { return this->instancePurchaseCount_ != nullptr;};
      void deleteInstancePurchaseCount() { this->instancePurchaseCount_ = nullptr;};
      inline int64_t getInstancePurchaseCount() const { DARABONBA_PTR_GET_DEFAULT(instancePurchaseCount_, 0L) };
      inline CheckSale& setInstancePurchaseCount(int64_t instancePurchaseCount) { DARABONBA_PTR_SET_VALUE(instancePurchaseCount_, instancePurchaseCount) };


      // loyalUser Field Functions 
      bool hasLoyalUser() const { return this->loyalUser_ != nullptr;};
      void deleteLoyalUser() { this->loyalUser_ = nullptr;};
      inline bool getLoyalUser() const { DARABONBA_PTR_GET_DEFAULT(loyalUser_, false) };
      inline CheckSale& setLoyalUser(bool loyalUser) { DARABONBA_PTR_SET_VALUE(loyalUser_, loyalUser) };


      // purchaseCount Field Functions 
      bool hasPurchaseCount() const { return this->purchaseCount_ != nullptr;};
      void deletePurchaseCount() { this->purchaseCount_ = nullptr;};
      inline int64_t getPurchaseCount() const { DARABONBA_PTR_GET_DEFAULT(purchaseCount_, 0L) };
      inline CheckSale& setPurchaseCount(int64_t purchaseCount) { DARABONBA_PTR_SET_VALUE(purchaseCount_, purchaseCount) };


      // saleUserType Field Functions 
      bool hasSaleUserType() const { return this->saleUserType_ != nullptr;};
      void deleteSaleUserType() { this->saleUserType_ = nullptr;};
      inline int32_t getSaleUserType() const { DARABONBA_PTR_GET_DEFAULT(saleUserType_, 0) };
      inline CheckSale& setSaleUserType(int32_t saleUserType) { DARABONBA_PTR_SET_VALUE(saleUserType_, saleUserType) };


    protected:
      // The number of consumed authorized quotas.
      shared_ptr<int64_t> consumeCount_ {};
      shared_ptr<int64_t> instanceConsumeCount_ {};
      shared_ptr<int64_t> instanceHybridPostLatestCycledResourceCount_ {};
      shared_ptr<int64_t> instancePostConsumeCount_ {};
      shared_ptr<int64_t> instancePurchaseCount_ {};
      // Indicates whether the user is an existing user who used the cloud service configuration check feature before the sales feature was released on July 7, 2023. Valid values:
      // - **true**: The user is an existing user.
      // - **false**: The user is not an existing user.
      shared_ptr<bool> loyalUser_ {};
      // The number of purchased authorized quotas.
      shared_ptr<int64_t> purchaseCount_ {};
      // The type of the sales user. Valid values:
      // - **1**: full-feature user who can use all check items.
      // - **2**: user who needs to upgrade and can only use check items that were available before the sales feature was released on July 7, 2023.
      // - **3**: user who needs to purchase the feature and cannot use the cloud service configuration check feature.
      shared_ptr<int32_t> saleUserType_ {};
    };

    virtual bool empty() const override { return this->checkSale_ == nullptr
        && this->requestId_ == nullptr; };
    // checkSale Field Functions 
    bool hasCheckSale() const { return this->checkSale_ != nullptr;};
    void deleteCheckSale() { this->checkSale_ = nullptr;};
    inline const GetCheckSaleResponseBody::CheckSale & getCheckSale() const { DARABONBA_PTR_GET_CONST(checkSale_, GetCheckSaleResponseBody::CheckSale) };
    inline GetCheckSaleResponseBody::CheckSale getCheckSale() { DARABONBA_PTR_GET(checkSale_, GetCheckSaleResponseBody::CheckSale) };
    inline GetCheckSaleResponseBody& setCheckSale(const GetCheckSaleResponseBody::CheckSale & checkSale) { DARABONBA_PTR_SET_VALUE(checkSale_, checkSale) };
    inline GetCheckSaleResponseBody& setCheckSale(GetCheckSaleResponseBody::CheckSale && checkSale) { DARABONBA_PTR_SET_RVALUE(checkSale_, checkSale) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCheckSaleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The sales information of cloud service configuration check.
    shared_ptr<GetCheckSaleResponseBody::CheckSale> checkSale_ {};
    // The ID of the request. The ID is a unique identifier that Alibaba Cloud generates for the request and can be used to troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
