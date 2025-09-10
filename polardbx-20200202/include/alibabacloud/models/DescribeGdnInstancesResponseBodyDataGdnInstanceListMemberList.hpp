// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODYDATAGDNINSTANCELISTMEMBERLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODYDATAGDNINSTANCELISTMEMBERLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& obj) { 
      DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
      DARABONBA_PTR_TO_JSON(CnNodeClassCode, cnNodeClassCode_);
      DARABONBA_PTR_TO_JSON(CnNodeCount, cnNodeCount_);
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(DnNodeClassCode, dnNodeClassCode_);
      DARABONBA_PTR_TO_JSON(DnNodeCount, dnNodeCount_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(MemberName, memberName_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_TO_JSON(SecondsBehindMaster, secondsBehindMaster_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
      DARABONBA_PTR_FROM_JSON(CnNodeClassCode, cnNodeClassCode_);
      DARABONBA_PTR_FROM_JSON(CnNodeCount, cnNodeCount_);
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(DnNodeClassCode, dnNodeClassCode_);
      DARABONBA_PTR_FROM_JSON(DnNodeCount, dnNodeCount_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
      DARABONBA_PTR_FROM_JSON(SecondsBehindMaster, secondsBehindMaster_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(TertiaryZone, tertiaryZone_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList() = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList(const DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList &) = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList(DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList &&) = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList() = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& operator=(const DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList &) = default ;
    DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& operator=(DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->classCode_ != nullptr
        && this->cnNodeClassCode_ != nullptr && this->cnNodeCount_ != nullptr && this->commodityCode_ != nullptr && this->dnNodeClassCode_ != nullptr && this->dnNodeCount_ != nullptr
        && this->expireTime_ != nullptr && this->gmtCreated_ != nullptr && this->memberName_ != nullptr && this->payType_ != nullptr && this->primaryZone_ != nullptr
        && this->regionId_ != nullptr && this->role_ != nullptr && this->secondaryZone_ != nullptr && this->secondsBehindMaster_ != nullptr && this->status_ != nullptr
        && this->taskStatus_ != nullptr && this->tertiaryZone_ != nullptr && this->zoneId_ != nullptr; };
    // classCode Field Functions 
    bool hasClassCode() const { return this->classCode_ != nullptr;};
    void deleteClassCode() { this->classCode_ = nullptr;};
    inline string classCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


    // cnNodeClassCode Field Functions 
    bool hasCnNodeClassCode() const { return this->cnNodeClassCode_ != nullptr;};
    void deleteCnNodeClassCode() { this->cnNodeClassCode_ = nullptr;};
    inline string cnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(cnNodeClassCode_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setCnNodeClassCode(string cnNodeClassCode) { DARABONBA_PTR_SET_VALUE(cnNodeClassCode_, cnNodeClassCode) };


    // cnNodeCount Field Functions 
    bool hasCnNodeCount() const { return this->cnNodeCount_ != nullptr;};
    void deleteCnNodeCount() { this->cnNodeCount_ = nullptr;};
    inline string cnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(cnNodeCount_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setCnNodeCount(string cnNodeCount) { DARABONBA_PTR_SET_VALUE(cnNodeCount_, cnNodeCount) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // dnNodeClassCode Field Functions 
    bool hasDnNodeClassCode() const { return this->dnNodeClassCode_ != nullptr;};
    void deleteDnNodeClassCode() { this->dnNodeClassCode_ = nullptr;};
    inline string dnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(dnNodeClassCode_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setDnNodeClassCode(string dnNodeClassCode) { DARABONBA_PTR_SET_VALUE(dnNodeClassCode_, dnNodeClassCode) };


    // dnNodeCount Field Functions 
    bool hasDnNodeCount() const { return this->dnNodeCount_ != nullptr;};
    void deleteDnNodeCount() { this->dnNodeCount_ = nullptr;};
    inline string dnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dnNodeCount_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setDnNodeCount(string dnNodeCount) { DARABONBA_PTR_SET_VALUE(dnNodeCount_, dnNodeCount) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // memberName Field Functions 
    bool hasMemberName() const { return this->memberName_ != nullptr;};
    void deleteMemberName() { this->memberName_ = nullptr;};
    inline string memberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // primaryZone Field Functions 
    bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
    void deletePrimaryZone() { this->primaryZone_ = nullptr;};
    inline string primaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // secondaryZone Field Functions 
    bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
    void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
    inline string secondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


    // secondsBehindMaster Field Functions 
    bool hasSecondsBehindMaster() const { return this->secondsBehindMaster_ != nullptr;};
    void deleteSecondsBehindMaster() { this->secondsBehindMaster_ = nullptr;};
    inline string secondsBehindMaster() const { DARABONBA_PTR_GET_DEFAULT(secondsBehindMaster_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setSecondsBehindMaster(string secondsBehindMaster) { DARABONBA_PTR_SET_VALUE(secondsBehindMaster_, secondsBehindMaster) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // tertiaryZone Field Functions 
    bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
    void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
    inline string tertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeGdnInstancesResponseBodyDataGdnInstanceListMemberList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> classCode_ = nullptr;
    std::shared_ptr<string> cnNodeClassCode_ = nullptr;
    std::shared_ptr<string> cnNodeCount_ = nullptr;
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> dnNodeClassCode_ = nullptr;
    std::shared_ptr<string> dnNodeCount_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> gmtCreated_ = nullptr;
    std::shared_ptr<string> memberName_ = nullptr;
    std::shared_ptr<string> payType_ = nullptr;
    std::shared_ptr<string> primaryZone_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
    std::shared_ptr<string> secondaryZone_ = nullptr;
    std::shared_ptr<string> secondsBehindMaster_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskStatus_ = nullptr;
    std::shared_ptr<string> tertiaryZone_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
