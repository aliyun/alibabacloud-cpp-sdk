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
        DARABONBA_PTR_TO_JSON(LoyalUser, loyalUser_);
        DARABONBA_PTR_TO_JSON(PurchaseCount, purchaseCount_);
        DARABONBA_PTR_TO_JSON(SaleUserType, saleUserType_);
      };
      friend void from_json(const Darabonba::Json& j, CheckSale& obj) { 
        DARABONBA_PTR_FROM_JSON(ConsumeCount, consumeCount_);
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
        && this->loyalUser_ == nullptr && this->purchaseCount_ == nullptr && this->saleUserType_ == nullptr; };
      // consumeCount Field Functions 
      bool hasConsumeCount() const { return this->consumeCount_ != nullptr;};
      void deleteConsumeCount() { this->consumeCount_ = nullptr;};
      inline int64_t getConsumeCount() const { DARABONBA_PTR_GET_DEFAULT(consumeCount_, 0L) };
      inline CheckSale& setConsumeCount(int64_t consumeCount) { DARABONBA_PTR_SET_VALUE(consumeCount_, consumeCount) };


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
      // The consumed quota.
      shared_ptr<int64_t> consumeCount_ {};
      // Indicates whether the user is an existing user and whether the user uses the configuration assessment feature before the feature is released for sale on July 07, 2023. Valid values:
      // 
      // *   **true**: existing user
      // *   **false**: new user
      shared_ptr<bool> loyalUser_ {};
      // The purchased quota.
      shared_ptr<int64_t> purchaseCount_ {};
      // The type of the user. Valid values:
      // 
      // *   **1**: a user who can use all check items.
      // *   **2**: an user who can only use the check items before the release of the feature on July 07, 2023. This type of users must upgrade Security Center before the users can use all check items.
      // *   **3**: a new user who cannot use the configuration assessment feature. This type of users must make a purchase before the users can use the feature.
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
    // The sales information about the configuration assessment quota.
    shared_ptr<GetCheckSaleResponseBody::CheckSale> checkSale_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
