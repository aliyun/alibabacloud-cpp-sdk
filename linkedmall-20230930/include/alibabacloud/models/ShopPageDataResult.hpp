// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHOPPAGEDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_SHOPPAGEDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CooperationShop.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ShopPageDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShopPageDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(cooperationShops, cooperationShops_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_TO_JSON(shopId, shopId_);
      DARABONBA_PTR_TO_JSON(shopName, shopName_);
      DARABONBA_PTR_TO_JSON(shopType, shopType_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ShopPageDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(cooperationShops, cooperationShops_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(purchaserId, purchaserId_);
      DARABONBA_PTR_FROM_JSON(shopId, shopId_);
      DARABONBA_PTR_FROM_JSON(shopName, shopName_);
      DARABONBA_PTR_FROM_JSON(shopType, shopType_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ShopPageDataResult() = default ;
    ShopPageDataResult(const ShopPageDataResult &) = default ;
    ShopPageDataResult(ShopPageDataResult &&) = default ;
    ShopPageDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShopPageDataResult() = default ;
    ShopPageDataResult& operator=(const ShopPageDataResult &) = default ;
    ShopPageDataResult& operator=(ShopPageDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cooperationShops_ == nullptr
        && this->endDate_ == nullptr && this->purchaserId_ == nullptr && this->shopId_ == nullptr && this->shopName_ == nullptr && this->shopType_ == nullptr
        && this->startDate_ == nullptr && this->status_ == nullptr; };
    // cooperationShops Field Functions 
    bool hasCooperationShops() const { return this->cooperationShops_ != nullptr;};
    void deleteCooperationShops() { this->cooperationShops_ = nullptr;};
    inline const vector<CooperationShop> & getCooperationShops() const { DARABONBA_PTR_GET_CONST(cooperationShops_, vector<CooperationShop>) };
    inline vector<CooperationShop> getCooperationShops() { DARABONBA_PTR_GET(cooperationShops_, vector<CooperationShop>) };
    inline ShopPageDataResult& setCooperationShops(const vector<CooperationShop> & cooperationShops) { DARABONBA_PTR_SET_VALUE(cooperationShops_, cooperationShops) };
    inline ShopPageDataResult& setCooperationShops(vector<CooperationShop> && cooperationShops) { DARABONBA_PTR_SET_RVALUE(cooperationShops_, cooperationShops) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ShopPageDataResult& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // purchaserId Field Functions 
    bool hasPurchaserId() const { return this->purchaserId_ != nullptr;};
    void deletePurchaserId() { this->purchaserId_ = nullptr;};
    inline string getPurchaserId() const { DARABONBA_PTR_GET_DEFAULT(purchaserId_, "") };
    inline ShopPageDataResult& setPurchaserId(string purchaserId) { DARABONBA_PTR_SET_VALUE(purchaserId_, purchaserId) };


    // shopId Field Functions 
    bool hasShopId() const { return this->shopId_ != nullptr;};
    void deleteShopId() { this->shopId_ = nullptr;};
    inline string getShopId() const { DARABONBA_PTR_GET_DEFAULT(shopId_, "") };
    inline ShopPageDataResult& setShopId(string shopId) { DARABONBA_PTR_SET_VALUE(shopId_, shopId) };


    // shopName Field Functions 
    bool hasShopName() const { return this->shopName_ != nullptr;};
    void deleteShopName() { this->shopName_ = nullptr;};
    inline string getShopName() const { DARABONBA_PTR_GET_DEFAULT(shopName_, "") };
    inline ShopPageDataResult& setShopName(string shopName) { DARABONBA_PTR_SET_VALUE(shopName_, shopName) };


    // shopType Field Functions 
    bool hasShopType() const { return this->shopType_ != nullptr;};
    void deleteShopType() { this->shopType_ = nullptr;};
    inline string getShopType() const { DARABONBA_PTR_GET_DEFAULT(shopType_, "") };
    inline ShopPageDataResult& setShopType(string shopType) { DARABONBA_PTR_SET_VALUE(shopType_, shopType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ShopPageDataResult& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ShopPageDataResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<vector<CooperationShop>> cooperationShops_ {};
    shared_ptr<string> endDate_ {};
    shared_ptr<string> purchaserId_ {};
    shared_ptr<string> shopId_ {};
    shared_ptr<string> shopName_ {};
    shared_ptr<string> shopType_ {};
    shared_ptr<string> startDate_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
