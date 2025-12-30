// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDISKSPECREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDISKSPECREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyDiskSpecRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDiskSpecRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_TO_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(RootDiskPerformanceLevel, rootDiskPerformanceLevel_);
      DARABONBA_PTR_TO_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDiskSpecRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(DesktopId, desktopId_);
      DARABONBA_PTR_FROM_JSON(PromotionId, promotionId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(RootDiskPerformanceLevel, rootDiskPerformanceLevel_);
      DARABONBA_PTR_FROM_JSON(UserDiskPerformanceLevel, userDiskPerformanceLevel_);
    };
    ModifyDiskSpecRequest() = default ;
    ModifyDiskSpecRequest(const ModifyDiskSpecRequest &) = default ;
    ModifyDiskSpecRequest(ModifyDiskSpecRequest &&) = default ;
    ModifyDiskSpecRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDiskSpecRequest() = default ;
    ModifyDiskSpecRequest& operator=(const ModifyDiskSpecRequest &) = default ;
    ModifyDiskSpecRequest& operator=(ModifyDiskSpecRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->desktopId_ == nullptr && this->promotionId_ == nullptr && this->regionId_ == nullptr && this->resellerOwnerUid_ == nullptr && this->rootDiskPerformanceLevel_ == nullptr
        && this->userDiskPerformanceLevel_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline ModifyDiskSpecRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // desktopId Field Functions 
    bool hasDesktopId() const { return this->desktopId_ != nullptr;};
    void deleteDesktopId() { this->desktopId_ = nullptr;};
    inline string getDesktopId() const { DARABONBA_PTR_GET_DEFAULT(desktopId_, "") };
    inline ModifyDiskSpecRequest& setDesktopId(string desktopId) { DARABONBA_PTR_SET_VALUE(desktopId_, desktopId) };


    // promotionId Field Functions 
    bool hasPromotionId() const { return this->promotionId_ != nullptr;};
    void deletePromotionId() { this->promotionId_ = nullptr;};
    inline string getPromotionId() const { DARABONBA_PTR_GET_DEFAULT(promotionId_, "") };
    inline ModifyDiskSpecRequest& setPromotionId(string promotionId) { DARABONBA_PTR_SET_VALUE(promotionId_, promotionId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDiskSpecRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline ModifyDiskSpecRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // rootDiskPerformanceLevel Field Functions 
    bool hasRootDiskPerformanceLevel() const { return this->rootDiskPerformanceLevel_ != nullptr;};
    void deleteRootDiskPerformanceLevel() { this->rootDiskPerformanceLevel_ = nullptr;};
    inline string getRootDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(rootDiskPerformanceLevel_, "") };
    inline ModifyDiskSpecRequest& setRootDiskPerformanceLevel(string rootDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(rootDiskPerformanceLevel_, rootDiskPerformanceLevel) };


    // userDiskPerformanceLevel Field Functions 
    bool hasUserDiskPerformanceLevel() const { return this->userDiskPerformanceLevel_ != nullptr;};
    void deleteUserDiskPerformanceLevel() { this->userDiskPerformanceLevel_ = nullptr;};
    inline string getUserDiskPerformanceLevel() const { DARABONBA_PTR_GET_DEFAULT(userDiskPerformanceLevel_, "") };
    inline ModifyDiskSpecRequest& setUserDiskPerformanceLevel(string userDiskPerformanceLevel) { DARABONBA_PTR_SET_VALUE(userDiskPerformanceLevel_, userDiskPerformanceLevel) };


  protected:
    // Specifies whether to enable the automatic payment feature.
    // 
    // *   If you set the value to `true`, ensure your account has sufficient balance to avoid generating abnormal orders.
    // *   If you set the value to `false`, go to the **Expenses and Costs** page to complete the payment based on the order number.
    // 
    // Valid values:
    // 
    // *   true (default): enables the automatic payment feature.
    // *   false: generates the order and manually complete the payment.
    shared_ptr<bool> autoPay_ {};
    // The ID of the cloud computer.
    // 
    // This parameter is required.
    shared_ptr<string> desktopId_ {};
    // The ID of the sales promotion activity. You can call the DescribePrice operation to obtain the IDs of matching sales promotion activities.
    shared_ptr<string> promotionId_ {};
    // The ID of the region. You can call the [DescribeRegions](~~DescribeRegions~~) operation to query the list of regions where Elastic Desktop Service (EDS) Enterprise is available.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // The PL of the system disk. Only Enterprise Graphics or High Frequency cloud computers support disk PL adjustments.
    // 
    // Valid values:
    // 
    // *   PL1
    // *   PL0
    // *   PL3
    // *   PL2
    shared_ptr<string> rootDiskPerformanceLevel_ {};
    // The PL of the data disk. Only Enterprise Graphics or High Frequency cloud computers support disk PL adjustments.
    // 
    // Valid values:
    // 
    // *   PL1
    // *   PL0
    // *   PL3
    // *   PL2
    shared_ptr<string> userDiskPerformanceLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
