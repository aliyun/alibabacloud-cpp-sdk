// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWRESPONSEBODYOFFICESITEOVERVIEWRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTOFFICESITEOVERVIEWRESPONSEBODYOFFICESITEOVERVIEWRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& obj) { 
      DARABONBA_PTR_TO_JSON(HasExpiredEdsCount, hasExpiredEdsCount_);
      DARABONBA_PTR_TO_JSON(HasExpiredEdsCountForGroup, hasExpiredEdsCountForGroup_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_TO_JSON(OfficeSiteStatus, officeSiteStatus_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RunningEdsCount, runningEdsCount_);
      DARABONBA_PTR_TO_JSON(RunningEdsCountForGroup, runningEdsCountForGroup_);
      DARABONBA_PTR_TO_JSON(TotalEdsCount, totalEdsCount_);
      DARABONBA_PTR_TO_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
      DARABONBA_PTR_TO_JSON(VpcType, vpcType_);
      DARABONBA_PTR_TO_JSON(WillExpiredEdsCount, willExpiredEdsCount_);
      DARABONBA_PTR_TO_JSON(WillExpiredEdsCountForGroup, willExpiredEdsCountForGroup_);
    };
    friend void from_json(const Darabonba::Json& j, ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& obj) { 
      DARABONBA_PTR_FROM_JSON(HasExpiredEdsCount, hasExpiredEdsCount_);
      DARABONBA_PTR_FROM_JSON(HasExpiredEdsCountForGroup, hasExpiredEdsCountForGroup_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteName, officeSiteName_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteStatus, officeSiteStatus_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RunningEdsCount, runningEdsCount_);
      DARABONBA_PTR_FROM_JSON(RunningEdsCountForGroup, runningEdsCountForGroup_);
      DARABONBA_PTR_FROM_JSON(TotalEdsCount, totalEdsCount_);
      DARABONBA_PTR_FROM_JSON(TotalEdsCountForGroup, totalEdsCountForGroup_);
      DARABONBA_PTR_FROM_JSON(VpcType, vpcType_);
      DARABONBA_PTR_FROM_JSON(WillExpiredEdsCount, willExpiredEdsCount_);
      DARABONBA_PTR_FROM_JSON(WillExpiredEdsCountForGroup, willExpiredEdsCountForGroup_);
    };
    ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults() = default ;
    ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults(const ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults &) = default ;
    ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults(ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults &&) = default ;
    ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults() = default ;
    ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& operator=(const ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults &) = default ;
    ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& operator=(ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasExpiredEdsCount_ == nullptr
        && return this->hasExpiredEdsCountForGroup_ == nullptr && return this->officeSiteId_ == nullptr && return this->officeSiteName_ == nullptr && return this->officeSiteStatus_ == nullptr && return this->regionId_ == nullptr
        && return this->runningEdsCount_ == nullptr && return this->runningEdsCountForGroup_ == nullptr && return this->totalEdsCount_ == nullptr && return this->totalEdsCountForGroup_ == nullptr && return this->vpcType_ == nullptr
        && return this->willExpiredEdsCount_ == nullptr && return this->willExpiredEdsCountForGroup_ == nullptr; };
    // hasExpiredEdsCount Field Functions 
    bool hasHasExpiredEdsCount() const { return this->hasExpiredEdsCount_ != nullptr;};
    void deleteHasExpiredEdsCount() { this->hasExpiredEdsCount_ = nullptr;};
    inline int32_t hasExpiredEdsCount() const { DARABONBA_PTR_GET_DEFAULT(hasExpiredEdsCount_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setHasExpiredEdsCount(int32_t hasExpiredEdsCount) { DARABONBA_PTR_SET_VALUE(hasExpiredEdsCount_, hasExpiredEdsCount) };


    // hasExpiredEdsCountForGroup Field Functions 
    bool hasHasExpiredEdsCountForGroup() const { return this->hasExpiredEdsCountForGroup_ != nullptr;};
    void deleteHasExpiredEdsCountForGroup() { this->hasExpiredEdsCountForGroup_ = nullptr;};
    inline int32_t hasExpiredEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(hasExpiredEdsCountForGroup_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setHasExpiredEdsCountForGroup(int32_t hasExpiredEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(hasExpiredEdsCountForGroup_, hasExpiredEdsCountForGroup) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // officeSiteName Field Functions 
    bool hasOfficeSiteName() const { return this->officeSiteName_ != nullptr;};
    void deleteOfficeSiteName() { this->officeSiteName_ = nullptr;};
    inline string officeSiteName() const { DARABONBA_PTR_GET_DEFAULT(officeSiteName_, "") };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setOfficeSiteName(string officeSiteName) { DARABONBA_PTR_SET_VALUE(officeSiteName_, officeSiteName) };


    // officeSiteStatus Field Functions 
    bool hasOfficeSiteStatus() const { return this->officeSiteStatus_ != nullptr;};
    void deleteOfficeSiteStatus() { this->officeSiteStatus_ = nullptr;};
    inline string officeSiteStatus() const { DARABONBA_PTR_GET_DEFAULT(officeSiteStatus_, "") };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setOfficeSiteStatus(string officeSiteStatus) { DARABONBA_PTR_SET_VALUE(officeSiteStatus_, officeSiteStatus) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // runningEdsCount Field Functions 
    bool hasRunningEdsCount() const { return this->runningEdsCount_ != nullptr;};
    void deleteRunningEdsCount() { this->runningEdsCount_ = nullptr;};
    inline int32_t runningEdsCount() const { DARABONBA_PTR_GET_DEFAULT(runningEdsCount_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setRunningEdsCount(int32_t runningEdsCount) { DARABONBA_PTR_SET_VALUE(runningEdsCount_, runningEdsCount) };


    // runningEdsCountForGroup Field Functions 
    bool hasRunningEdsCountForGroup() const { return this->runningEdsCountForGroup_ != nullptr;};
    void deleteRunningEdsCountForGroup() { this->runningEdsCountForGroup_ = nullptr;};
    inline int32_t runningEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(runningEdsCountForGroup_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setRunningEdsCountForGroup(int32_t runningEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(runningEdsCountForGroup_, runningEdsCountForGroup) };


    // totalEdsCount Field Functions 
    bool hasTotalEdsCount() const { return this->totalEdsCount_ != nullptr;};
    void deleteTotalEdsCount() { this->totalEdsCount_ = nullptr;};
    inline int32_t totalEdsCount() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCount_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setTotalEdsCount(int32_t totalEdsCount) { DARABONBA_PTR_SET_VALUE(totalEdsCount_, totalEdsCount) };


    // totalEdsCountForGroup Field Functions 
    bool hasTotalEdsCountForGroup() const { return this->totalEdsCountForGroup_ != nullptr;};
    void deleteTotalEdsCountForGroup() { this->totalEdsCountForGroup_ = nullptr;};
    inline int32_t totalEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(totalEdsCountForGroup_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setTotalEdsCountForGroup(int32_t totalEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(totalEdsCountForGroup_, totalEdsCountForGroup) };


    // vpcType Field Functions 
    bool hasVpcType() const { return this->vpcType_ != nullptr;};
    void deleteVpcType() { this->vpcType_ = nullptr;};
    inline string vpcType() const { DARABONBA_PTR_GET_DEFAULT(vpcType_, "") };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setVpcType(string vpcType) { DARABONBA_PTR_SET_VALUE(vpcType_, vpcType) };


    // willExpiredEdsCount Field Functions 
    bool hasWillExpiredEdsCount() const { return this->willExpiredEdsCount_ != nullptr;};
    void deleteWillExpiredEdsCount() { this->willExpiredEdsCount_ = nullptr;};
    inline int32_t willExpiredEdsCount() const { DARABONBA_PTR_GET_DEFAULT(willExpiredEdsCount_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setWillExpiredEdsCount(int32_t willExpiredEdsCount) { DARABONBA_PTR_SET_VALUE(willExpiredEdsCount_, willExpiredEdsCount) };


    // willExpiredEdsCountForGroup Field Functions 
    bool hasWillExpiredEdsCountForGroup() const { return this->willExpiredEdsCountForGroup_ != nullptr;};
    void deleteWillExpiredEdsCountForGroup() { this->willExpiredEdsCountForGroup_ = nullptr;};
    inline int32_t willExpiredEdsCountForGroup() const { DARABONBA_PTR_GET_DEFAULT(willExpiredEdsCountForGroup_, 0) };
    inline ListOfficeSiteOverviewResponseBodyOfficeSiteOverviewResults& setWillExpiredEdsCountForGroup(int32_t willExpiredEdsCountForGroup) { DARABONBA_PTR_SET_VALUE(willExpiredEdsCountForGroup_, willExpiredEdsCountForGroup) };


  protected:
    // The number of expired cloud computers in the office network.
    std::shared_ptr<int32_t> hasExpiredEdsCount_ = nullptr;
    // The number of expired cloud computers in the cloud computer pool.
    std::shared_ptr<int32_t> hasExpiredEdsCountForGroup_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The office network name.
    std::shared_ptr<string> officeSiteName_ = nullptr;
    // The office network status.
    // 
    // Default values:
    // 
    // *   CONFIGUSERFAILED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   REGISTERING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   REGISTERED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NEEDCONFIGTRUST
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CONFIGUSERING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CONFIGTRUSTFAILED
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   ERROR
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   CONFIGTRUSTING
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    // *   NEEDCONFIGUSER
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    // 
    //     <!-- -->
    std::shared_ptr<string> officeSiteStatus_ = nullptr;
    // The ID of the region where the office network resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The number of cloud computers that are running in the office network.
    std::shared_ptr<int32_t> runningEdsCount_ = nullptr;
    // The number of running cloud computers in the cloud computer pool.
    std::shared_ptr<int32_t> runningEdsCountForGroup_ = nullptr;
    // The total number of cloud computers in the office network.
    std::shared_ptr<int32_t> totalEdsCount_ = nullptr;
    // The total number of cloud computers in the cloud computer pool.
    std::shared_ptr<int32_t> totalEdsCountForGroup_ = nullptr;
    // The office network type and its suitable VPC type.
    // 
    // Valid values:
    // 
    // *   standard (default): standard, exclusive VPC
    // *   customized: custom, user VPC
    // *   basic: basic, shared VPC
    std::shared_ptr<string> vpcType_ = nullptr;
    // The number of cloud computers that are about to expire in the office network.
    std::shared_ptr<int32_t> willExpiredEdsCount_ = nullptr;
    // The number of cloud computers that are about to expire in the cloud computer pool.
    std::shared_ptr<int32_t> willExpiredEdsCountForGroup_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
