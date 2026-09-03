// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLOUDDRIVESERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCloudDriveServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCloudDriveServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(CdsChargeType, cdsChargeType_);
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_TO_JSON(Period, period_);
      DARABONBA_PTR_TO_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_TO_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_TO_JSON(UserCount, userCount_);
      DARABONBA_PTR_TO_JSON(UserMaxSize, userMaxSize_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCloudDriveServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(CdsChargeType, cdsChargeType_);
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(MaxSize, maxSize_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteType, officeSiteType_);
      DARABONBA_PTR_FROM_JSON(Period, period_);
      DARABONBA_PTR_FROM_JSON(PeriodUnit, periodUnit_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResellerOwnerUid, resellerOwnerUid_);
      DARABONBA_PTR_FROM_JSON(SolutionId, solutionId_);
      DARABONBA_PTR_FROM_JSON(UserCount, userCount_);
      DARABONBA_PTR_FROM_JSON(UserMaxSize, userMaxSize_);
    };
    CreateCloudDriveServiceRequest() = default ;
    CreateCloudDriveServiceRequest(const CreateCloudDriveServiceRequest &) = default ;
    CreateCloudDriveServiceRequest(CreateCloudDriveServiceRequest &&) = default ;
    CreateCloudDriveServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCloudDriveServiceRequest() = default ;
    CreateCloudDriveServiceRequest& operator=(const CreateCloudDriveServiceRequest &) = default ;
    CreateCloudDriveServiceRequest& operator=(CreateCloudDriveServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->autoRenew_ == nullptr && this->bizType_ == nullptr && this->cdsChargeType_ == nullptr && this->cenId_ == nullptr && this->domainName_ == nullptr
        && this->endUserId_ == nullptr && this->maxSize_ == nullptr && this->name_ == nullptr && this->officeSiteId_ == nullptr && this->officeSiteType_ == nullptr
        && this->period_ == nullptr && this->periodUnit_ == nullptr && this->regionId_ == nullptr && this->resellerOwnerUid_ == nullptr && this->solutionId_ == nullptr
        && this->userCount_ == nullptr && this->userMaxSize_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline CreateCloudDriveServiceRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool getAutoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline CreateCloudDriveServiceRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline int32_t getBizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, 0) };
    inline CreateCloudDriveServiceRequest& setBizType(int32_t bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // cdsChargeType Field Functions 
    bool hasCdsChargeType() const { return this->cdsChargeType_ != nullptr;};
    void deleteCdsChargeType() { this->cdsChargeType_ = nullptr;};
    inline string getCdsChargeType() const { DARABONBA_PTR_GET_DEFAULT(cdsChargeType_, "") };
    inline CreateCloudDriveServiceRequest& setCdsChargeType(string cdsChargeType) { DARABONBA_PTR_SET_VALUE(cdsChargeType_, cdsChargeType) };


    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline CreateCloudDriveServiceRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCloudDriveServiceRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline const vector<string> & getEndUserId() const { DARABONBA_PTR_GET_CONST(endUserId_, vector<string>) };
    inline vector<string> getEndUserId() { DARABONBA_PTR_GET(endUserId_, vector<string>) };
    inline CreateCloudDriveServiceRequest& setEndUserId(const vector<string> & endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };
    inline CreateCloudDriveServiceRequest& setEndUserId(vector<string> && endUserId) { DARABONBA_PTR_SET_RVALUE(endUserId_, endUserId) };


    // maxSize Field Functions 
    bool hasMaxSize() const { return this->maxSize_ != nullptr;};
    void deleteMaxSize() { this->maxSize_ = nullptr;};
    inline int64_t getMaxSize() const { DARABONBA_PTR_GET_DEFAULT(maxSize_, 0L) };
    inline CreateCloudDriveServiceRequest& setMaxSize(int64_t maxSize) { DARABONBA_PTR_SET_VALUE(maxSize_, maxSize) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCloudDriveServiceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline CreateCloudDriveServiceRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteType Field Functions 
    bool hasOfficeSiteType() const { return this->officeSiteType_ != nullptr;};
    void deleteOfficeSiteType() { this->officeSiteType_ = nullptr;};
    inline string getOfficeSiteType() const { DARABONBA_PTR_GET_DEFAULT(officeSiteType_, "") };
    inline CreateCloudDriveServiceRequest& setOfficeSiteType(string officeSiteType) { DARABONBA_PTR_SET_VALUE(officeSiteType_, officeSiteType) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline CreateCloudDriveServiceRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // periodUnit Field Functions 
    bool hasPeriodUnit() const { return this->periodUnit_ != nullptr;};
    void deletePeriodUnit() { this->periodUnit_ = nullptr;};
    inline string getPeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(periodUnit_, "") };
    inline CreateCloudDriveServiceRequest& setPeriodUnit(string periodUnit) { DARABONBA_PTR_SET_VALUE(periodUnit_, periodUnit) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCloudDriveServiceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resellerOwnerUid Field Functions 
    bool hasResellerOwnerUid() const { return this->resellerOwnerUid_ != nullptr;};
    void deleteResellerOwnerUid() { this->resellerOwnerUid_ = nullptr;};
    inline int64_t getResellerOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(resellerOwnerUid_, 0L) };
    inline CreateCloudDriveServiceRequest& setResellerOwnerUid(int64_t resellerOwnerUid) { DARABONBA_PTR_SET_VALUE(resellerOwnerUid_, resellerOwnerUid) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string getSolutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline CreateCloudDriveServiceRequest& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


    // userCount Field Functions 
    bool hasUserCount() const { return this->userCount_ != nullptr;};
    void deleteUserCount() { this->userCount_ = nullptr;};
    inline int64_t getUserCount() const { DARABONBA_PTR_GET_DEFAULT(userCount_, 0L) };
    inline CreateCloudDriveServiceRequest& setUserCount(int64_t userCount) { DARABONBA_PTR_SET_VALUE(userCount_, userCount) };


    // userMaxSize Field Functions 
    bool hasUserMaxSize() const { return this->userMaxSize_ != nullptr;};
    void deleteUserMaxSize() { this->userMaxSize_ = nullptr;};
    inline int64_t getUserMaxSize() const { DARABONBA_PTR_GET_DEFAULT(userMaxSize_, 0L) };
    inline CreateCloudDriveServiceRequest& setUserMaxSize(int64_t userMaxSize) { DARABONBA_PTR_SET_VALUE(userMaxSize_, userMaxSize) };


  protected:
    // Specifies whether to enable automatic payment.
    shared_ptr<bool> autoPay_ {};
    // Specifies whether to enable auto-renewal. This parameter takes effect and is optional only when CdsChargeType is set to `PrePaid`.
    shared_ptr<bool> autoRenew_ {};
    // > This parameter is not publicly available.
    shared_ptr<int32_t> bizType_ {};
    // The billing method of the NAS drive.
    shared_ptr<string> cdsChargeType_ {};
    // The instance ID of the Cloud Enterprise Network (CEN) associated with the AD office network. This parameter takes effect only when `OfficeSiteType` is set to `AD_CONNECTOR`. If `OfficeSiteId` is specified, you do not need to specify this parameter.
    shared_ptr<string> cenId_ {};
    // The domain controller name of the AD office network. This parameter takes effect only when `OfficeSiteType` is set to `AD_CONNECTOR`. If `OfficeSiteId` is specified, you do not need to specify this parameter.
    shared_ptr<string> domainName_ {};
    // The list of user IDs.
    shared_ptr<vector<string>> endUserId_ {};
    // The Peak Volume of the NAS drive storage space.
    // 
    // - When you create a pay-as-you-go NAS drive, the unit is bytes.
    // - When you create an upfront NAS drive, the unit is GiB. For example, to create a 500 GiB upfront NAS drive, set this parameter to 500. To create a 2 TiB upfront NAS drive, set this parameter to 2048.
    // 
    // This parameter is required.
    shared_ptr<int64_t> maxSize_ {};
    // The name of the enterprise NAS drive.
    shared_ptr<string> name_ {};
    // The ID of the office network. This parameter takes effect only when the network type is set to `AD_CONNECTOR`.
    shared_ptr<string> officeSiteId_ {};
    // The network type of the office network.
    shared_ptr<string> officeSiteType_ {};
    // The subscription duration. The unit is specified by `PeriodUnit`. This parameter takes effect and is required only when `CdsChargeType` is set to `PrePaid`.
    shared_ptr<int64_t> period_ {};
    // The unit of the subscription duration for the subscription NAS drive. This parameter takes effect and is required only when `CdsChargeType` is set to `PrePaid`.
    shared_ptr<string> periodUnit_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The user ID for resource ownership in reseller pattern. You do not need to specify this parameter if you are not in reseller pattern.
    shared_ptr<int64_t> resellerOwnerUid_ {};
    // > This parameter is not publicly available.
    shared_ptr<string> solutionId_ {};
    // The maximum number of users for the subscription NAS drive. This parameter takes effect and is required only when `CdsChargeType` is set to `PrePaid`.
    shared_ptr<int64_t> userCount_ {};
    // The maximum storage capacity of a personal drive when you assign a personal drive to a user. Unit: bytes.
    shared_ptr<int64_t> userMaxSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
