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
    // Specifies whether to enable automatic payment.
    // 
    // - If you set this parameter to `true`, make sure that your account balance is sufficient. Otherwise, abnormal orders are generated.
    // - If you set this parameter to `false`, you can log on to the console and make the payment on the **Expenses and Costs** page based on the returned order ID.
    shared_ptr<bool> autoPay_ {};
    // The cloud computer ID.
    // 
    // This parameter is required.
    shared_ptr<string> desktopId_ {};
    // The promotion ID. You can obtain the list of matched promotion IDs by calling the pricing query operation.
    shared_ptr<string> promotionId_ {};
    // The region ID. You can call [DescribeRegions](~~DescribeRegions~~) to query the list of regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The user ID of the resource ownership in reseller mode. You do not need to specify this parameter if you are not in reseller mode.
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // The performance level (PL) of the system cloud disk. You can set the disk performance level when the cloud computer specification is Enterprise Graphics or High Frequency.
    shared_ptr<string> rootDiskPerformanceLevel_ {};
    // The performance level (PL) of the data cloud disk. You can set the disk performance level when the cloud computer specification is Enterprise Graphics or High Frequency.
    shared_ptr<string> userDiskPerformanceLevel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
