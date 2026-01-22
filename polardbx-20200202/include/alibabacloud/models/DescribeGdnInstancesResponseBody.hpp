// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGDNINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DescribeGdnInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGdnInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGdnInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeGdnInstancesResponseBody() = default ;
    DescribeGdnInstancesResponseBody(const DescribeGdnInstancesResponseBody &) = default ;
    DescribeGdnInstancesResponseBody(DescribeGdnInstancesResponseBody &&) = default ;
    DescribeGdnInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGdnInstancesResponseBody() = default ;
    DescribeGdnInstancesResponseBody& operator=(const DescribeGdnInstancesResponseBody &) = default ;
    DescribeGdnInstancesResponseBody& operator=(DescribeGdnInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(GdnInstanceList, gdnInstanceList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalNumber, totalNumber_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(GdnInstanceList, gdnInstanceList_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalNumber, totalNumber_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class GdnInstanceList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GdnInstanceList& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(GdnInstanceName, gdnInstanceName_);
          DARABONBA_PTR_TO_JSON(GdnMode, gdnMode_);
          DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_TO_JSON(MemberList, memberList_);
          DARABONBA_PTR_TO_JSON(MysqlVersion, mysqlVersion_);
          DARABONBA_PTR_TO_JSON(RplConflictStrategy, rplConflictStrategy_);
          DARABONBA_PTR_TO_JSON(RplDmlStrategy, rplDmlStrategy_);
          DARABONBA_PTR_TO_JSON(RplSyncDdl, rplSyncDdl_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SwitchHistory, switchHistory_);
        };
        friend void from_json(const Darabonba::Json& j, GdnInstanceList& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(GdnInstanceName, gdnInstanceName_);
          DARABONBA_PTR_FROM_JSON(GdnMode, gdnMode_);
          DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
          DARABONBA_PTR_FROM_JSON(MemberList, memberList_);
          DARABONBA_PTR_FROM_JSON(MysqlVersion, mysqlVersion_);
          DARABONBA_PTR_FROM_JSON(RplConflictStrategy, rplConflictStrategy_);
          DARABONBA_PTR_FROM_JSON(RplDmlStrategy, rplDmlStrategy_);
          DARABONBA_PTR_FROM_JSON(RplSyncDdl, rplSyncDdl_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SwitchHistory, switchHistory_);
        };
        GdnInstanceList() = default ;
        GdnInstanceList(const GdnInstanceList &) = default ;
        GdnInstanceList(GdnInstanceList &&) = default ;
        GdnInstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GdnInstanceList() = default ;
        GdnInstanceList& operator=(const GdnInstanceList &) = default ;
        GdnInstanceList& operator=(GdnInstanceList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MemberList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MemberList& obj) { 
            DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
            DARABONBA_PTR_TO_JSON(CnNodeClassCode, cnNodeClassCode_);
            DARABONBA_PTR_TO_JSON(CnNodeCount, cnNodeCount_);
            DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_TO_JSON(DataSyncStatus, dataSyncStatus_);
            DARABONBA_PTR_TO_JSON(DnNodeClassCode, dnNodeClassCode_);
            DARABONBA_PTR_TO_JSON(DnNodeCount, dnNodeCount_);
            DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
            DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_TO_JSON(MemberName, memberName_);
            DARABONBA_PTR_TO_JSON(PayType, payType_);
            DARABONBA_PTR_TO_JSON(PrimaryZone, primaryZone_);
            DARABONBA_PTR_TO_JSON(ReadWriteStatus, readWriteStatus_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(Role, role_);
            DARABONBA_PTR_TO_JSON(SecondaryZone, secondaryZone_);
            DARABONBA_PTR_TO_JSON(SecondsBehindMaster, secondsBehindMaster_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
            DARABONBA_PTR_TO_JSON(TertiaryZone, tertiaryZone_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, MemberList& obj) { 
            DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
            DARABONBA_PTR_FROM_JSON(CnNodeClassCode, cnNodeClassCode_);
            DARABONBA_PTR_FROM_JSON(CnNodeCount, cnNodeCount_);
            DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
            DARABONBA_PTR_FROM_JSON(DataSyncStatus, dataSyncStatus_);
            DARABONBA_PTR_FROM_JSON(DnNodeClassCode, dnNodeClassCode_);
            DARABONBA_PTR_FROM_JSON(DnNodeCount, dnNodeCount_);
            DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
            DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
            DARABONBA_PTR_FROM_JSON(MemberName, memberName_);
            DARABONBA_PTR_FROM_JSON(PayType, payType_);
            DARABONBA_PTR_FROM_JSON(PrimaryZone, primaryZone_);
            DARABONBA_PTR_FROM_JSON(ReadWriteStatus, readWriteStatus_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(Role, role_);
            DARABONBA_PTR_FROM_JSON(SecondaryZone, secondaryZone_);
            DARABONBA_PTR_FROM_JSON(SecondsBehindMaster, secondsBehindMaster_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
            DARABONBA_PTR_FROM_JSON(TertiaryZone, tertiaryZone_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          MemberList() = default ;
          MemberList(const MemberList &) = default ;
          MemberList(MemberList &&) = default ;
          MemberList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MemberList() = default ;
          MemberList& operator=(const MemberList &) = default ;
          MemberList& operator=(MemberList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->classCode_ == nullptr
        && this->cnNodeClassCode_ == nullptr && this->cnNodeCount_ == nullptr && this->commodityCode_ == nullptr && this->dataSyncStatus_ == nullptr && this->dnNodeClassCode_ == nullptr
        && this->dnNodeCount_ == nullptr && this->expireTime_ == nullptr && this->gmtCreated_ == nullptr && this->memberName_ == nullptr && this->payType_ == nullptr
        && this->primaryZone_ == nullptr && this->readWriteStatus_ == nullptr && this->regionId_ == nullptr && this->role_ == nullptr && this->secondaryZone_ == nullptr
        && this->secondsBehindMaster_ == nullptr && this->status_ == nullptr && this->taskStatus_ == nullptr && this->tertiaryZone_ == nullptr && this->zoneId_ == nullptr; };
          // classCode Field Functions 
          bool hasClassCode() const { return this->classCode_ != nullptr;};
          void deleteClassCode() { this->classCode_ = nullptr;};
          inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
          inline MemberList& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


          // cnNodeClassCode Field Functions 
          bool hasCnNodeClassCode() const { return this->cnNodeClassCode_ != nullptr;};
          void deleteCnNodeClassCode() { this->cnNodeClassCode_ = nullptr;};
          inline string getCnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(cnNodeClassCode_, "") };
          inline MemberList& setCnNodeClassCode(string cnNodeClassCode) { DARABONBA_PTR_SET_VALUE(cnNodeClassCode_, cnNodeClassCode) };


          // cnNodeCount Field Functions 
          bool hasCnNodeCount() const { return this->cnNodeCount_ != nullptr;};
          void deleteCnNodeCount() { this->cnNodeCount_ = nullptr;};
          inline string getCnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(cnNodeCount_, "") };
          inline MemberList& setCnNodeCount(string cnNodeCount) { DARABONBA_PTR_SET_VALUE(cnNodeCount_, cnNodeCount) };


          // commodityCode Field Functions 
          bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
          void deleteCommodityCode() { this->commodityCode_ = nullptr;};
          inline string getCommodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
          inline MemberList& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


          // dataSyncStatus Field Functions 
          bool hasDataSyncStatus() const { return this->dataSyncStatus_ != nullptr;};
          void deleteDataSyncStatus() { this->dataSyncStatus_ = nullptr;};
          inline string getDataSyncStatus() const { DARABONBA_PTR_GET_DEFAULT(dataSyncStatus_, "") };
          inline MemberList& setDataSyncStatus(string dataSyncStatus) { DARABONBA_PTR_SET_VALUE(dataSyncStatus_, dataSyncStatus) };


          // dnNodeClassCode Field Functions 
          bool hasDnNodeClassCode() const { return this->dnNodeClassCode_ != nullptr;};
          void deleteDnNodeClassCode() { this->dnNodeClassCode_ = nullptr;};
          inline string getDnNodeClassCode() const { DARABONBA_PTR_GET_DEFAULT(dnNodeClassCode_, "") };
          inline MemberList& setDnNodeClassCode(string dnNodeClassCode) { DARABONBA_PTR_SET_VALUE(dnNodeClassCode_, dnNodeClassCode) };


          // dnNodeCount Field Functions 
          bool hasDnNodeCount() const { return this->dnNodeCount_ != nullptr;};
          void deleteDnNodeCount() { this->dnNodeCount_ = nullptr;};
          inline string getDnNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dnNodeCount_, "") };
          inline MemberList& setDnNodeCount(string dnNodeCount) { DARABONBA_PTR_SET_VALUE(dnNodeCount_, dnNodeCount) };


          // expireTime Field Functions 
          bool hasExpireTime() const { return this->expireTime_ != nullptr;};
          void deleteExpireTime() { this->expireTime_ = nullptr;};
          inline string getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
          inline MemberList& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


          // gmtCreated Field Functions 
          bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
          void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
          inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
          inline MemberList& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


          // memberName Field Functions 
          bool hasMemberName() const { return this->memberName_ != nullptr;};
          void deleteMemberName() { this->memberName_ = nullptr;};
          inline string getMemberName() const { DARABONBA_PTR_GET_DEFAULT(memberName_, "") };
          inline MemberList& setMemberName(string memberName) { DARABONBA_PTR_SET_VALUE(memberName_, memberName) };


          // payType Field Functions 
          bool hasPayType() const { return this->payType_ != nullptr;};
          void deletePayType() { this->payType_ = nullptr;};
          inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
          inline MemberList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


          // primaryZone Field Functions 
          bool hasPrimaryZone() const { return this->primaryZone_ != nullptr;};
          void deletePrimaryZone() { this->primaryZone_ = nullptr;};
          inline string getPrimaryZone() const { DARABONBA_PTR_GET_DEFAULT(primaryZone_, "") };
          inline MemberList& setPrimaryZone(string primaryZone) { DARABONBA_PTR_SET_VALUE(primaryZone_, primaryZone) };


          // readWriteStatus Field Functions 
          bool hasReadWriteStatus() const { return this->readWriteStatus_ != nullptr;};
          void deleteReadWriteStatus() { this->readWriteStatus_ = nullptr;};
          inline string getReadWriteStatus() const { DARABONBA_PTR_GET_DEFAULT(readWriteStatus_, "") };
          inline MemberList& setReadWriteStatus(string readWriteStatus) { DARABONBA_PTR_SET_VALUE(readWriteStatus_, readWriteStatus) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline MemberList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // role Field Functions 
          bool hasRole() const { return this->role_ != nullptr;};
          void deleteRole() { this->role_ = nullptr;};
          inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
          inline MemberList& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


          // secondaryZone Field Functions 
          bool hasSecondaryZone() const { return this->secondaryZone_ != nullptr;};
          void deleteSecondaryZone() { this->secondaryZone_ = nullptr;};
          inline string getSecondaryZone() const { DARABONBA_PTR_GET_DEFAULT(secondaryZone_, "") };
          inline MemberList& setSecondaryZone(string secondaryZone) { DARABONBA_PTR_SET_VALUE(secondaryZone_, secondaryZone) };


          // secondsBehindMaster Field Functions 
          bool hasSecondsBehindMaster() const { return this->secondsBehindMaster_ != nullptr;};
          void deleteSecondsBehindMaster() { this->secondsBehindMaster_ = nullptr;};
          inline string getSecondsBehindMaster() const { DARABONBA_PTR_GET_DEFAULT(secondsBehindMaster_, "") };
          inline MemberList& setSecondsBehindMaster(string secondsBehindMaster) { DARABONBA_PTR_SET_VALUE(secondsBehindMaster_, secondsBehindMaster) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline MemberList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // taskStatus Field Functions 
          bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
          void deleteTaskStatus() { this->taskStatus_ = nullptr;};
          inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
          inline MemberList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


          // tertiaryZone Field Functions 
          bool hasTertiaryZone() const { return this->tertiaryZone_ != nullptr;};
          void deleteTertiaryZone() { this->tertiaryZone_ = nullptr;};
          inline string getTertiaryZone() const { DARABONBA_PTR_GET_DEFAULT(tertiaryZone_, "") };
          inline MemberList& setTertiaryZone(string tertiaryZone) { DARABONBA_PTR_SET_VALUE(tertiaryZone_, tertiaryZone) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline MemberList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          shared_ptr<string> classCode_ {};
          shared_ptr<string> cnNodeClassCode_ {};
          shared_ptr<string> cnNodeCount_ {};
          shared_ptr<string> commodityCode_ {};
          shared_ptr<string> dataSyncStatus_ {};
          shared_ptr<string> dnNodeClassCode_ {};
          shared_ptr<string> dnNodeCount_ {};
          shared_ptr<string> expireTime_ {};
          shared_ptr<string> gmtCreated_ {};
          shared_ptr<string> memberName_ {};
          shared_ptr<string> payType_ {};
          shared_ptr<string> primaryZone_ {};
          shared_ptr<string> readWriteStatus_ {};
          shared_ptr<string> regionId_ {};
          shared_ptr<string> role_ {};
          shared_ptr<string> secondaryZone_ {};
          shared_ptr<string> secondsBehindMaster_ {};
          shared_ptr<string> status_ {};
          shared_ptr<string> taskStatus_ {};
          shared_ptr<string> tertiaryZone_ {};
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->gdnInstanceName_ == nullptr && this->gdnMode_ == nullptr && this->gmtCreated_ == nullptr && this->memberList_ == nullptr && this->mysqlVersion_ == nullptr
        && this->rplConflictStrategy_ == nullptr && this->rplDmlStrategy_ == nullptr && this->rplSyncDdl_ == nullptr && this->status_ == nullptr && this->switchHistory_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline GdnInstanceList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // gdnInstanceName Field Functions 
        bool hasGdnInstanceName() const { return this->gdnInstanceName_ != nullptr;};
        void deleteGdnInstanceName() { this->gdnInstanceName_ = nullptr;};
        inline string getGdnInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gdnInstanceName_, "") };
        inline GdnInstanceList& setGdnInstanceName(string gdnInstanceName) { DARABONBA_PTR_SET_VALUE(gdnInstanceName_, gdnInstanceName) };


        // gdnMode Field Functions 
        bool hasGdnMode() const { return this->gdnMode_ != nullptr;};
        void deleteGdnMode() { this->gdnMode_ = nullptr;};
        inline string getGdnMode() const { DARABONBA_PTR_GET_DEFAULT(gdnMode_, "") };
        inline GdnInstanceList& setGdnMode(string gdnMode) { DARABONBA_PTR_SET_VALUE(gdnMode_, gdnMode) };


        // gmtCreated Field Functions 
        bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
        void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
        inline string getGmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
        inline GdnInstanceList& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


        // memberList Field Functions 
        bool hasMemberList() const { return this->memberList_ != nullptr;};
        void deleteMemberList() { this->memberList_ = nullptr;};
        inline const vector<GdnInstanceList::MemberList> & getMemberList() const { DARABONBA_PTR_GET_CONST(memberList_, vector<GdnInstanceList::MemberList>) };
        inline vector<GdnInstanceList::MemberList> getMemberList() { DARABONBA_PTR_GET(memberList_, vector<GdnInstanceList::MemberList>) };
        inline GdnInstanceList& setMemberList(const vector<GdnInstanceList::MemberList> & memberList) { DARABONBA_PTR_SET_VALUE(memberList_, memberList) };
        inline GdnInstanceList& setMemberList(vector<GdnInstanceList::MemberList> && memberList) { DARABONBA_PTR_SET_RVALUE(memberList_, memberList) };


        // mysqlVersion Field Functions 
        bool hasMysqlVersion() const { return this->mysqlVersion_ != nullptr;};
        void deleteMysqlVersion() { this->mysqlVersion_ = nullptr;};
        inline string getMysqlVersion() const { DARABONBA_PTR_GET_DEFAULT(mysqlVersion_, "") };
        inline GdnInstanceList& setMysqlVersion(string mysqlVersion) { DARABONBA_PTR_SET_VALUE(mysqlVersion_, mysqlVersion) };


        // rplConflictStrategy Field Functions 
        bool hasRplConflictStrategy() const { return this->rplConflictStrategy_ != nullptr;};
        void deleteRplConflictStrategy() { this->rplConflictStrategy_ = nullptr;};
        inline string getRplConflictStrategy() const { DARABONBA_PTR_GET_DEFAULT(rplConflictStrategy_, "") };
        inline GdnInstanceList& setRplConflictStrategy(string rplConflictStrategy) { DARABONBA_PTR_SET_VALUE(rplConflictStrategy_, rplConflictStrategy) };


        // rplDmlStrategy Field Functions 
        bool hasRplDmlStrategy() const { return this->rplDmlStrategy_ != nullptr;};
        void deleteRplDmlStrategy() { this->rplDmlStrategy_ = nullptr;};
        inline string getRplDmlStrategy() const { DARABONBA_PTR_GET_DEFAULT(rplDmlStrategy_, "") };
        inline GdnInstanceList& setRplDmlStrategy(string rplDmlStrategy) { DARABONBA_PTR_SET_VALUE(rplDmlStrategy_, rplDmlStrategy) };


        // rplSyncDdl Field Functions 
        bool hasRplSyncDdl() const { return this->rplSyncDdl_ != nullptr;};
        void deleteRplSyncDdl() { this->rplSyncDdl_ = nullptr;};
        inline bool getRplSyncDdl() const { DARABONBA_PTR_GET_DEFAULT(rplSyncDdl_, false) };
        inline GdnInstanceList& setRplSyncDdl(bool rplSyncDdl) { DARABONBA_PTR_SET_VALUE(rplSyncDdl_, rplSyncDdl) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline GdnInstanceList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // switchHistory Field Functions 
        bool hasSwitchHistory() const { return this->switchHistory_ != nullptr;};
        void deleteSwitchHistory() { this->switchHistory_ = nullptr;};
        inline string getSwitchHistory() const { DARABONBA_PTR_GET_DEFAULT(switchHistory_, "") };
        inline GdnInstanceList& setSwitchHistory(string switchHistory) { DARABONBA_PTR_SET_VALUE(switchHistory_, switchHistory) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<string> gdnInstanceName_ {};
        shared_ptr<string> gdnMode_ {};
        shared_ptr<string> gmtCreated_ {};
        shared_ptr<vector<GdnInstanceList::MemberList>> memberList_ {};
        shared_ptr<string> mysqlVersion_ {};
        shared_ptr<string> rplConflictStrategy_ {};
        shared_ptr<string> rplDmlStrategy_ {};
        shared_ptr<bool> rplSyncDdl_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> switchHistory_ {};
      };

      virtual bool empty() const override { return this->gdnInstanceList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalNumber_ == nullptr; };
      // gdnInstanceList Field Functions 
      bool hasGdnInstanceList() const { return this->gdnInstanceList_ != nullptr;};
      void deleteGdnInstanceList() { this->gdnInstanceList_ = nullptr;};
      inline const vector<Data::GdnInstanceList> & getGdnInstanceList() const { DARABONBA_PTR_GET_CONST(gdnInstanceList_, vector<Data::GdnInstanceList>) };
      inline vector<Data::GdnInstanceList> getGdnInstanceList() { DARABONBA_PTR_GET(gdnInstanceList_, vector<Data::GdnInstanceList>) };
      inline Data& setGdnInstanceList(const vector<Data::GdnInstanceList> & gdnInstanceList) { DARABONBA_PTR_SET_VALUE(gdnInstanceList_, gdnInstanceList) };
      inline Data& setGdnInstanceList(vector<Data::GdnInstanceList> && gdnInstanceList) { DARABONBA_PTR_SET_RVALUE(gdnInstanceList_, gdnInstanceList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
      inline Data& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
      inline Data& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalNumber Field Functions 
      bool hasTotalNumber() const { return this->totalNumber_ != nullptr;};
      void deleteTotalNumber() { this->totalNumber_ = nullptr;};
      inline string getTotalNumber() const { DARABONBA_PTR_GET_DEFAULT(totalNumber_, "") };
      inline Data& setTotalNumber(string totalNumber) { DARABONBA_PTR_SET_VALUE(totalNumber_, totalNumber) };


    protected:
      shared_ptr<vector<Data::GdnInstanceList>> gdnInstanceList_ {};
      shared_ptr<string> pageNumber_ {};
      shared_ptr<string> pageSize_ {};
      shared_ptr<string> totalNumber_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeGdnInstancesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeGdnInstancesResponseBody::Data) };
    inline DescribeGdnInstancesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeGdnInstancesResponseBody::Data) };
    inline DescribeGdnInstancesResponseBody& setData(const DescribeGdnInstancesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeGdnInstancesResponseBody& setData(DescribeGdnInstancesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGdnInstancesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGdnInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGdnInstancesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<DescribeGdnInstancesResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
