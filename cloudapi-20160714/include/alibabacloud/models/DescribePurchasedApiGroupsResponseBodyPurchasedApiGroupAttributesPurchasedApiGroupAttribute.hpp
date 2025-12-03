// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODYPURCHASEDAPIGROUPATTRIBUTESPURCHASEDAPIGROUPATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPURCHASEDAPIGROUPSRESPONSEBODYPURCHASEDAPIGROUPATTRIBUTESPURCHASEDAPIGROUPATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(BillingType, billingType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InvokeTimesMax, invokeTimesMax_);
      DARABONBA_PTR_TO_JSON(InvokeTimesNow, invokeTimesNow_);
      DARABONBA_PTR_TO_JSON(PurchasedTime, purchasedTime_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(BillingType, billingType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InvokeTimesMax, invokeTimesMax_);
      DARABONBA_PTR_FROM_JSON(InvokeTimesNow, invokeTimesNow_);
      DARABONBA_PTR_FROM_JSON(PurchasedTime, purchasedTime_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute() = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute(const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute &) = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute(DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute &&) = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute() = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& operator=(const DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute &) = default ;
    DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& operator=(DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billingType_ == nullptr
        && return this->description_ == nullptr && return this->expireTime_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->invokeTimesMax_ == nullptr
        && return this->invokeTimesNow_ == nullptr && return this->purchasedTime_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr; };
    // billingType Field Functions 
    bool hasBillingType() const { return this->billingType_ != nullptr;};
    void deleteBillingType() { this->billingType_ = nullptr;};
    inline string billingType() const { DARABONBA_PTR_GET_DEFAULT(billingType_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setBillingType(string billingType) { DARABONBA_PTR_SET_VALUE(billingType_, billingType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // invokeTimesMax Field Functions 
    bool hasInvokeTimesMax() const { return this->invokeTimesMax_ != nullptr;};
    void deleteInvokeTimesMax() { this->invokeTimesMax_ = nullptr;};
    inline int64_t invokeTimesMax() const { DARABONBA_PTR_GET_DEFAULT(invokeTimesMax_, 0L) };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setInvokeTimesMax(int64_t invokeTimesMax) { DARABONBA_PTR_SET_VALUE(invokeTimesMax_, invokeTimesMax) };


    // invokeTimesNow Field Functions 
    bool hasInvokeTimesNow() const { return this->invokeTimesNow_ != nullptr;};
    void deleteInvokeTimesNow() { this->invokeTimesNow_ = nullptr;};
    inline int64_t invokeTimesNow() const { DARABONBA_PTR_GET_DEFAULT(invokeTimesNow_, 0L) };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setInvokeTimesNow(int64_t invokeTimesNow) { DARABONBA_PTR_SET_VALUE(invokeTimesNow_, invokeTimesNow) };


    // purchasedTime Field Functions 
    bool hasPurchasedTime() const { return this->purchasedTime_ != nullptr;};
    void deletePurchasedTime() { this->purchasedTime_ = nullptr;};
    inline string purchasedTime() const { DARABONBA_PTR_GET_DEFAULT(purchasedTime_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setPurchasedTime(string purchasedTime) { DARABONBA_PTR_SET_VALUE(purchasedTime_, purchasedTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribePurchasedApiGroupsResponseBodyPurchasedApiGroupAttributesPurchasedApiGroupAttribute& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The billing method.
    std::shared_ptr<string> billingType_ = nullptr;
    // The description of the API group.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the API group expires.
    std::shared_ptr<string> expireTime_ = nullptr;
    // The ID of the API group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the API group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The maximum number of calls.
    std::shared_ptr<int64_t> invokeTimesMax_ = nullptr;
    // The current number of calls.
    std::shared_ptr<int64_t> invokeTimesNow_ = nullptr;
    // The time when the API group was purchased.
    std::shared_ptr<string> purchasedTime_ = nullptr;
    // The ID of the region where the API group is located.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the API group.
    // 
    // *   **NORMAL**: The API group is normal.
    // *   **DELETE**: The API group is deleted.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
