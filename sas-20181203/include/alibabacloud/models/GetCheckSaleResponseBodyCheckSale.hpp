// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHECKSALERESPONSEBODYCHECKSALE_HPP_
#define ALIBABACLOUD_MODELS_GETCHECKSALERESPONSEBODYCHECKSALE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCheckSaleResponseBodyCheckSale : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCheckSaleResponseBodyCheckSale& obj) { 
      DARABONBA_PTR_TO_JSON(ConsumeCount, consumeCount_);
      DARABONBA_PTR_TO_JSON(LoyalUser, loyalUser_);
      DARABONBA_PTR_TO_JSON(PurchaseCount, purchaseCount_);
      DARABONBA_PTR_TO_JSON(SaleUserType, saleUserType_);
    };
    friend void from_json(const Darabonba::Json& j, GetCheckSaleResponseBodyCheckSale& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsumeCount, consumeCount_);
      DARABONBA_PTR_FROM_JSON(LoyalUser, loyalUser_);
      DARABONBA_PTR_FROM_JSON(PurchaseCount, purchaseCount_);
      DARABONBA_PTR_FROM_JSON(SaleUserType, saleUserType_);
    };
    GetCheckSaleResponseBodyCheckSale() = default ;
    GetCheckSaleResponseBodyCheckSale(const GetCheckSaleResponseBodyCheckSale &) = default ;
    GetCheckSaleResponseBodyCheckSale(GetCheckSaleResponseBodyCheckSale &&) = default ;
    GetCheckSaleResponseBodyCheckSale(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCheckSaleResponseBodyCheckSale() = default ;
    GetCheckSaleResponseBodyCheckSale& operator=(const GetCheckSaleResponseBodyCheckSale &) = default ;
    GetCheckSaleResponseBodyCheckSale& operator=(GetCheckSaleResponseBodyCheckSale &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consumeCount_ != nullptr
        && this->loyalUser_ != nullptr && this->purchaseCount_ != nullptr && this->saleUserType_ != nullptr; };
    // consumeCount Field Functions 
    bool hasConsumeCount() const { return this->consumeCount_ != nullptr;};
    void deleteConsumeCount() { this->consumeCount_ = nullptr;};
    inline int64_t consumeCount() const { DARABONBA_PTR_GET_DEFAULT(consumeCount_, 0L) };
    inline GetCheckSaleResponseBodyCheckSale& setConsumeCount(int64_t consumeCount) { DARABONBA_PTR_SET_VALUE(consumeCount_, consumeCount) };


    // loyalUser Field Functions 
    bool hasLoyalUser() const { return this->loyalUser_ != nullptr;};
    void deleteLoyalUser() { this->loyalUser_ = nullptr;};
    inline bool loyalUser() const { DARABONBA_PTR_GET_DEFAULT(loyalUser_, false) };
    inline GetCheckSaleResponseBodyCheckSale& setLoyalUser(bool loyalUser) { DARABONBA_PTR_SET_VALUE(loyalUser_, loyalUser) };


    // purchaseCount Field Functions 
    bool hasPurchaseCount() const { return this->purchaseCount_ != nullptr;};
    void deletePurchaseCount() { this->purchaseCount_ = nullptr;};
    inline int64_t purchaseCount() const { DARABONBA_PTR_GET_DEFAULT(purchaseCount_, 0L) };
    inline GetCheckSaleResponseBodyCheckSale& setPurchaseCount(int64_t purchaseCount) { DARABONBA_PTR_SET_VALUE(purchaseCount_, purchaseCount) };


    // saleUserType Field Functions 
    bool hasSaleUserType() const { return this->saleUserType_ != nullptr;};
    void deleteSaleUserType() { this->saleUserType_ = nullptr;};
    inline int32_t saleUserType() const { DARABONBA_PTR_GET_DEFAULT(saleUserType_, 0) };
    inline GetCheckSaleResponseBodyCheckSale& setSaleUserType(int32_t saleUserType) { DARABONBA_PTR_SET_VALUE(saleUserType_, saleUserType) };


  protected:
    // The consumed quota.
    std::shared_ptr<int64_t> consumeCount_ = nullptr;
    // Indicates whether the user is an existing user and whether the user uses the configuration assessment feature before the feature is released for sale on July 07, 2023. Valid values:
    // 
    // *   **true**: existing user
    // *   **false**: new user
    std::shared_ptr<bool> loyalUser_ = nullptr;
    // The purchased quota.
    std::shared_ptr<int64_t> purchaseCount_ = nullptr;
    // The type of the user. Valid values:
    // 
    // *   **1**: a user who can use all check items.
    // *   **2**: an user who can only use the check items before the release of the feature on July 07, 2023. This type of users must upgrade Security Center before the users can use all check items.
    // *   **3**: a new user who cannot use the configuration assessment feature. This type of users must make a purchase before the users can use the feature.
    std::shared_ptr<int32_t> saleUserType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
