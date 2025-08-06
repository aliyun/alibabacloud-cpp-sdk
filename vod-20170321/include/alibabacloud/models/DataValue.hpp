// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#define ALIBABACLOUD_MODELS_DATAVALUE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DataValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DataValue& obj) { 
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
      DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(PurchaseStatus, purchaseStatus_);
      DARABONBA_PTR_TO_JSON(ExpiredOn, expiredOn_);
    };
    friend void from_json(const Darabonba::Json& j, DataValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
      DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(PurchaseStatus, purchaseStatus_);
      DARABONBA_PTR_FROM_JSON(ExpiredOn, expiredOn_);
    };
    DataValue() = default ;
    DataValue(const DataValue &) = default ;
    DataValue(DataValue &&) = default ;
    DataValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DataValue() = default ;
    DataValue& operator=(const DataValue &) = default ;
    DataValue& operator=(DataValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->itemId_ != nullptr
        && this->businessType_ != nullptr && this->appName_ != nullptr && this->status_ != nullptr && this->purchaseStatus_ != nullptr && this->expiredOn_ != nullptr; };
    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string itemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline DataValue& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // businessType Field Functions 
    bool hasBusinessType() const { return this->businessType_ != nullptr;};
    void deleteBusinessType() { this->businessType_ = nullptr;};
    inline string businessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
    inline DataValue& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline DataValue& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DataValue& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // purchaseStatus Field Functions 
    bool hasPurchaseStatus() const { return this->purchaseStatus_ != nullptr;};
    void deletePurchaseStatus() { this->purchaseStatus_ = nullptr;};
    inline string purchaseStatus() const { DARABONBA_PTR_GET_DEFAULT(purchaseStatus_, "") };
    inline DataValue& setPurchaseStatus(string purchaseStatus) { DARABONBA_PTR_SET_VALUE(purchaseStatus_, purchaseStatus) };


    // expiredOn Field Functions 
    bool hasExpiredOn() const { return this->expiredOn_ != nullptr;};
    void deleteExpiredOn() { this->expiredOn_ = nullptr;};
    inline string expiredOn() const { DARABONBA_PTR_GET_DEFAULT(expiredOn_, "") };
    inline DataValue& setExpiredOn(string expiredOn) { DARABONBA_PTR_SET_VALUE(expiredOn_, expiredOn) };


  protected:
    std::shared_ptr<string> itemId_ = nullptr;
    std::shared_ptr<string> businessType_ = nullptr;
    std::shared_ptr<string> appName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> purchaseStatus_ = nullptr;
    std::shared_ptr<string> expiredOn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
