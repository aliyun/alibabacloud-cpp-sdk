// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDINSTANCEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedInstanceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExposedChains, exposedChains_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExposedChains, exposedChains_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeExposedInstanceDetailResponseBody() = default ;
    DescribeExposedInstanceDetailResponseBody(const DescribeExposedInstanceDetailResponseBody &) = default ;
    DescribeExposedInstanceDetailResponseBody(DescribeExposedInstanceDetailResponseBody &&) = default ;
    DescribeExposedInstanceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedInstanceDetailResponseBody() = default ;
    DescribeExposedInstanceDetailResponseBody& operator=(const DescribeExposedInstanceDetailResponseBody &) = default ;
    DescribeExposedInstanceDetailResponseBody& operator=(DescribeExposedInstanceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ExposedChains : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ExposedChains& obj) { 
        DARABONBA_PTR_TO_JSON(AllVulList, allVulList_);
        DARABONBA_PTR_TO_JSON(CspmRiskList, cspmRiskList_);
        DARABONBA_PTR_TO_JSON(ExposureComponent, exposureComponent_);
        DARABONBA_PTR_TO_JSON(ExposureIp, exposureIp_);
        DARABONBA_PTR_TO_JSON(ExposurePort, exposurePort_);
        DARABONBA_PTR_TO_JSON(ExposureType, exposureType_);
        DARABONBA_PTR_TO_JSON(ExposureTypeId, exposureTypeId_);
        DARABONBA_PTR_TO_JSON(GroupNo, groupNo_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_TO_JSON(RealVulList, realVulList_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, ExposedChains& obj) { 
        DARABONBA_PTR_FROM_JSON(AllVulList, allVulList_);
        DARABONBA_PTR_FROM_JSON(CspmRiskList, cspmRiskList_);
        DARABONBA_PTR_FROM_JSON(ExposureComponent, exposureComponent_);
        DARABONBA_PTR_FROM_JSON(ExposureIp, exposureIp_);
        DARABONBA_PTR_FROM_JSON(ExposurePort, exposurePort_);
        DARABONBA_PTR_FROM_JSON(ExposureType, exposureType_);
        DARABONBA_PTR_FROM_JSON(ExposureTypeId, exposureTypeId_);
        DARABONBA_PTR_FROM_JSON(GroupNo, groupNo_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
        DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
        DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
        DARABONBA_PTR_FROM_JSON(RealVulList, realVulList_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      ExposedChains() = default ;
      ExposedChains(const ExposedChains &) = default ;
      ExposedChains(ExposedChains &&) = default ;
      ExposedChains(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ExposedChains() = default ;
      ExposedChains& operator=(const ExposedChains &) = default ;
      ExposedChains& operator=(ExposedChains &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RealVulList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RealVulList& obj) { 
          DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Necessity, necessity_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, RealVulList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        RealVulList() = default ;
        RealVulList(const RealVulList &) = default ;
        RealVulList(RealVulList &&) = default ;
        RealVulList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RealVulList() = default ;
        RealVulList& operator=(const RealVulList &) = default ;
        RealVulList& operator=(RealVulList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->name_ == nullptr && this->necessity_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
        // aliasName Field Functions 
        bool hasAliasName() const { return this->aliasName_ != nullptr;};
        void deleteAliasName() { this->aliasName_ = nullptr;};
        inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
        inline RealVulList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RealVulList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // necessity Field Functions 
        bool hasNecessity() const { return this->necessity_ != nullptr;};
        void deleteNecessity() { this->necessity_ = nullptr;};
        inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
        inline RealVulList& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RealVulList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline RealVulList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The alias of the vulnerability.
        shared_ptr<string> aliasName_ {};
        // The name of the vulnerability.
        shared_ptr<string> name_ {};
        // The priority to fix the vulnerability. Valid values:
        // 
        // *   **asap**: high
        // *   **later**: medium
        // *   **nntf**: low
        // 
        // >  We recommend that you fix the vulnerabilities that have the **high** priority at the earliest opportunity.
        shared_ptr<string> necessity_ {};
        // The type of the vulnerability. Valid values:
        // 
        // *   **cve**: Linux software vulnerabilities
        // *   **sys**: Windows system vulnerabilities
        // *   **cms**: Web-CMS vulnerabilities
        // *   **app**: application vulnerabilities
        // *   **emg**: urgent vulnerabilities
        // *   **sca**: middleware vulnerabilities
        shared_ptr<string> type_ {};
        // The UUID of the server.
        shared_ptr<string> uuid_ {};
      };

      class CspmRiskList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CspmRiskList& obj) { 
          DARABONBA_PTR_TO_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_TO_JSON(AssetSubTypeName, assetSubTypeName_);
          DARABONBA_PTR_TO_JSON(AssetType, assetType_);
          DARABONBA_PTR_TO_JSON(AssetTypeName, assetTypeName_);
          DARABONBA_PTR_TO_JSON(CheckName, checkName_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Vendor, vendor_);
        };
        friend void from_json(const Darabonba::Json& j, CspmRiskList& obj) { 
          DARABONBA_PTR_FROM_JSON(AssetSubType, assetSubType_);
          DARABONBA_PTR_FROM_JSON(AssetSubTypeName, assetSubTypeName_);
          DARABONBA_PTR_FROM_JSON(AssetType, assetType_);
          DARABONBA_PTR_FROM_JSON(AssetTypeName, assetTypeName_);
          DARABONBA_PTR_FROM_JSON(CheckName, checkName_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
        };
        CspmRiskList() = default ;
        CspmRiskList(const CspmRiskList &) = default ;
        CspmRiskList(CspmRiskList &&) = default ;
        CspmRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CspmRiskList() = default ;
        CspmRiskList& operator=(const CspmRiskList &) = default ;
        CspmRiskList& operator=(CspmRiskList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->assetSubType_ == nullptr
        && this->assetSubTypeName_ == nullptr && this->assetType_ == nullptr && this->assetTypeName_ == nullptr && this->checkName_ == nullptr && this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->riskLevel_ == nullptr && this->vendor_ == nullptr; };
        // assetSubType Field Functions 
        bool hasAssetSubType() const { return this->assetSubType_ != nullptr;};
        void deleteAssetSubType() { this->assetSubType_ = nullptr;};
        inline int32_t getAssetSubType() const { DARABONBA_PTR_GET_DEFAULT(assetSubType_, 0) };
        inline CspmRiskList& setAssetSubType(int32_t assetSubType) { DARABONBA_PTR_SET_VALUE(assetSubType_, assetSubType) };


        // assetSubTypeName Field Functions 
        bool hasAssetSubTypeName() const { return this->assetSubTypeName_ != nullptr;};
        void deleteAssetSubTypeName() { this->assetSubTypeName_ = nullptr;};
        inline string getAssetSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetSubTypeName_, "") };
        inline CspmRiskList& setAssetSubTypeName(string assetSubTypeName) { DARABONBA_PTR_SET_VALUE(assetSubTypeName_, assetSubTypeName) };


        // assetType Field Functions 
        bool hasAssetType() const { return this->assetType_ != nullptr;};
        void deleteAssetType() { this->assetType_ = nullptr;};
        inline int32_t getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, 0) };
        inline CspmRiskList& setAssetType(int32_t assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


        // assetTypeName Field Functions 
        bool hasAssetTypeName() const { return this->assetTypeName_ != nullptr;};
        void deleteAssetTypeName() { this->assetTypeName_ = nullptr;};
        inline string getAssetTypeName() const { DARABONBA_PTR_GET_DEFAULT(assetTypeName_, "") };
        inline CspmRiskList& setAssetTypeName(string assetTypeName) { DARABONBA_PTR_SET_VALUE(assetTypeName_, assetTypeName) };


        // checkName Field Functions 
        bool hasCheckName() const { return this->checkName_ != nullptr;};
        void deleteCheckName() { this->checkName_ = nullptr;};
        inline string getCheckName() const { DARABONBA_PTR_GET_DEFAULT(checkName_, "") };
        inline CspmRiskList& setCheckName(string checkName) { DARABONBA_PTR_SET_VALUE(checkName_, checkName) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline CspmRiskList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline CspmRiskList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline CspmRiskList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // vendor Field Functions 
        bool hasVendor() const { return this->vendor_ != nullptr;};
        void deleteVendor() { this->vendor_ = nullptr;};
        inline int32_t getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
        inline CspmRiskList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


      protected:
        // The subtype of the cloud asset. Valid values:
        // 
        // *   **0**: Elastic Compute Service (ECS).
        // 
        //     *   **100**: instance.
        // 
        // *   **3**: ApsaraDB RDS.
        // 
        //     *   **0**: instance.
        // 
        // *   **4**: ApsaraDB for MongoDB (MongoDB).
        // 
        //     *   **0**: instance.
        // 
        // *   **5**: ApsaraDB for Redis (Redis).
        // 
        //     *   **0**: instance.
        shared_ptr<int32_t> assetSubType_ {};
        // The subtype name of the cloud asset. Valid values:
        // 
        // *   **INSTANCE**: MongoDB instance, Apsara DB for RDS instance, and ApsaraDB for Redis instance.
        // *   **ECS_INSTANCE**: ECS instance.
        shared_ptr<string> assetSubTypeName_ {};
        // The instance type. Valid values:
        // 
        // *   0: an ECS instance.
        // *   3: an ApsaraDB RDS instance.
        // *   4: an ApsaraDB for MongoDB instance.
        // *   5: an ApsaraDB for Redis instance.
        shared_ptr<int32_t> assetType_ {};
        // The name of the cloud asset type. Valid values:
        // 
        // *   **ECS**
        // *   **RDS**
        // *   **KVSTORE**
        // *   **MONGODB**
        shared_ptr<string> assetTypeName_ {};
        // The name of the check item.
        shared_ptr<string> checkName_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The region ID.
        shared_ptr<string> regionId_ {};
        // The risk level. Valid values:
        // 
        // *   **HIGH**
        // *   **MEDIUM**
        // *   **LOW**
        shared_ptr<string> riskLevel_ {};
        // The type of the cloud asset by source. Valid values:
        // 
        // *   **0**: an asset provided by Alibaba Cloud.
        shared_ptr<int32_t> vendor_ {};
      };

      class AllVulList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllVulList& obj) { 
          DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Necessity, necessity_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, AllVulList& obj) { 
          DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Necessity, necessity_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        AllVulList() = default ;
        AllVulList(const AllVulList &) = default ;
        AllVulList(AllVulList &&) = default ;
        AllVulList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllVulList() = default ;
        AllVulList& operator=(const AllVulList &) = default ;
        AllVulList& operator=(AllVulList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliasName_ == nullptr
        && this->name_ == nullptr && this->necessity_ == nullptr && this->type_ == nullptr && this->uuid_ == nullptr; };
        // aliasName Field Functions 
        bool hasAliasName() const { return this->aliasName_ != nullptr;};
        void deleteAliasName() { this->aliasName_ = nullptr;};
        inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
        inline AllVulList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AllVulList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // necessity Field Functions 
        bool hasNecessity() const { return this->necessity_ != nullptr;};
        void deleteNecessity() { this->necessity_ = nullptr;};
        inline string getNecessity() const { DARABONBA_PTR_GET_DEFAULT(necessity_, "") };
        inline AllVulList& setNecessity(string necessity) { DARABONBA_PTR_SET_VALUE(necessity_, necessity) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AllVulList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline AllVulList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The alias of the vulnerability.
        shared_ptr<string> aliasName_ {};
        // The name of the vulnerability.
        shared_ptr<string> name_ {};
        // The priority to fix the vulnerability. Valid values:
        // 
        // *   **asap**: high
        // *   **later**: medium
        // *   **nntf**: low
        // 
        // >  We recommend that you fix the vulnerabilities that have the **high** priority at the earliest opportunity.
        shared_ptr<string> necessity_ {};
        // The type of the vulnerability. Valid values:
        // 
        // *   **cve**: Linux software vulnerabilities
        // *   **sys**: Windows system vulnerabilities
        // *   **cms**: Web-CMS vulnerabilities
        // *   **app**: application vulnerabilities
        // *   **emg**: urgent vulnerabilities
        // *   **sca**: middleware vulnerabilities
        shared_ptr<string> type_ {};
        // The UUID of the server.
        shared_ptr<string> uuid_ {};
      };

      virtual bool empty() const override { return this->allVulList_ == nullptr
        && this->cspmRiskList_ == nullptr && this->exposureComponent_ == nullptr && this->exposureIp_ == nullptr && this->exposurePort_ == nullptr && this->exposureType_ == nullptr
        && this->exposureTypeId_ == nullptr && this->groupNo_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->internetIp_ == nullptr
        && this->intranetIp_ == nullptr && this->realVulList_ == nullptr && this->regionId_ == nullptr && this->uuid_ == nullptr; };
      // allVulList Field Functions 
      bool hasAllVulList() const { return this->allVulList_ != nullptr;};
      void deleteAllVulList() { this->allVulList_ = nullptr;};
      inline const vector<ExposedChains::AllVulList> & getAllVulList() const { DARABONBA_PTR_GET_CONST(allVulList_, vector<ExposedChains::AllVulList>) };
      inline vector<ExposedChains::AllVulList> getAllVulList() { DARABONBA_PTR_GET(allVulList_, vector<ExposedChains::AllVulList>) };
      inline ExposedChains& setAllVulList(const vector<ExposedChains::AllVulList> & allVulList) { DARABONBA_PTR_SET_VALUE(allVulList_, allVulList) };
      inline ExposedChains& setAllVulList(vector<ExposedChains::AllVulList> && allVulList) { DARABONBA_PTR_SET_RVALUE(allVulList_, allVulList) };


      // cspmRiskList Field Functions 
      bool hasCspmRiskList() const { return this->cspmRiskList_ != nullptr;};
      void deleteCspmRiskList() { this->cspmRiskList_ = nullptr;};
      inline const vector<ExposedChains::CspmRiskList> & getCspmRiskList() const { DARABONBA_PTR_GET_CONST(cspmRiskList_, vector<ExposedChains::CspmRiskList>) };
      inline vector<ExposedChains::CspmRiskList> getCspmRiskList() { DARABONBA_PTR_GET(cspmRiskList_, vector<ExposedChains::CspmRiskList>) };
      inline ExposedChains& setCspmRiskList(const vector<ExposedChains::CspmRiskList> & cspmRiskList) { DARABONBA_PTR_SET_VALUE(cspmRiskList_, cspmRiskList) };
      inline ExposedChains& setCspmRiskList(vector<ExposedChains::CspmRiskList> && cspmRiskList) { DARABONBA_PTR_SET_RVALUE(cspmRiskList_, cspmRiskList) };


      // exposureComponent Field Functions 
      bool hasExposureComponent() const { return this->exposureComponent_ != nullptr;};
      void deleteExposureComponent() { this->exposureComponent_ = nullptr;};
      inline string getExposureComponent() const { DARABONBA_PTR_GET_DEFAULT(exposureComponent_, "") };
      inline ExposedChains& setExposureComponent(string exposureComponent) { DARABONBA_PTR_SET_VALUE(exposureComponent_, exposureComponent) };


      // exposureIp Field Functions 
      bool hasExposureIp() const { return this->exposureIp_ != nullptr;};
      void deleteExposureIp() { this->exposureIp_ = nullptr;};
      inline string getExposureIp() const { DARABONBA_PTR_GET_DEFAULT(exposureIp_, "") };
      inline ExposedChains& setExposureIp(string exposureIp) { DARABONBA_PTR_SET_VALUE(exposureIp_, exposureIp) };


      // exposurePort Field Functions 
      bool hasExposurePort() const { return this->exposurePort_ != nullptr;};
      void deleteExposurePort() { this->exposurePort_ = nullptr;};
      inline string getExposurePort() const { DARABONBA_PTR_GET_DEFAULT(exposurePort_, "") };
      inline ExposedChains& setExposurePort(string exposurePort) { DARABONBA_PTR_SET_VALUE(exposurePort_, exposurePort) };


      // exposureType Field Functions 
      bool hasExposureType() const { return this->exposureType_ != nullptr;};
      void deleteExposureType() { this->exposureType_ = nullptr;};
      inline string getExposureType() const { DARABONBA_PTR_GET_DEFAULT(exposureType_, "") };
      inline ExposedChains& setExposureType(string exposureType) { DARABONBA_PTR_SET_VALUE(exposureType_, exposureType) };


      // exposureTypeId Field Functions 
      bool hasExposureTypeId() const { return this->exposureTypeId_ != nullptr;};
      void deleteExposureTypeId() { this->exposureTypeId_ = nullptr;};
      inline string getExposureTypeId() const { DARABONBA_PTR_GET_DEFAULT(exposureTypeId_, "") };
      inline ExposedChains& setExposureTypeId(string exposureTypeId) { DARABONBA_PTR_SET_VALUE(exposureTypeId_, exposureTypeId) };


      // groupNo Field Functions 
      bool hasGroupNo() const { return this->groupNo_ != nullptr;};
      void deleteGroupNo() { this->groupNo_ = nullptr;};
      inline string getGroupNo() const { DARABONBA_PTR_GET_DEFAULT(groupNo_, "") };
      inline ExposedChains& setGroupNo(string groupNo) { DARABONBA_PTR_SET_VALUE(groupNo_, groupNo) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline ExposedChains& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceName Field Functions 
      bool hasInstanceName() const { return this->instanceName_ != nullptr;};
      void deleteInstanceName() { this->instanceName_ = nullptr;};
      inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
      inline ExposedChains& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


      // internetIp Field Functions 
      bool hasInternetIp() const { return this->internetIp_ != nullptr;};
      void deleteInternetIp() { this->internetIp_ = nullptr;};
      inline string getInternetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
      inline ExposedChains& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


      // intranetIp Field Functions 
      bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
      void deleteIntranetIp() { this->intranetIp_ = nullptr;};
      inline string getIntranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
      inline ExposedChains& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


      // realVulList Field Functions 
      bool hasRealVulList() const { return this->realVulList_ != nullptr;};
      void deleteRealVulList() { this->realVulList_ = nullptr;};
      inline const vector<ExposedChains::RealVulList> & getRealVulList() const { DARABONBA_PTR_GET_CONST(realVulList_, vector<ExposedChains::RealVulList>) };
      inline vector<ExposedChains::RealVulList> getRealVulList() { DARABONBA_PTR_GET(realVulList_, vector<ExposedChains::RealVulList>) };
      inline ExposedChains& setRealVulList(const vector<ExposedChains::RealVulList> & realVulList) { DARABONBA_PTR_SET_VALUE(realVulList_, realVulList) };
      inline ExposedChains& setRealVulList(vector<ExposedChains::RealVulList> && realVulList) { DARABONBA_PTR_SET_RVALUE(realVulList_, realVulList) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline ExposedChains& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline ExposedChains& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The information about all vulnerabilities on the server.
      shared_ptr<vector<ExposedChains::AllVulList>> allVulList_ {};
      // The list of configuration risks.
      shared_ptr<vector<ExposedChains::CspmRiskList>> cspmRiskList_ {};
      // The server component that is exposed on the Internet.
      shared_ptr<string> exposureComponent_ {};
      // The IP address of the server or the public endpoint of the database.
      shared_ptr<string> exposureIp_ {};
      // The port that is exposed on the Internet.
      shared_ptr<string> exposurePort_ {};
      // The resource from which the server or database is exposed. Valid values:
      // 
      // *   **INTERNET_IP**: the public IP address of an Elastic Compute Service (ECS) instance.
      // *   **SLB**: the public IP address of a Server Load Balancer (SLB) instance.
      // *   **EIP**: an elastic IP address (EIP).
      // *   **DNAT**: the Network Address Translation (NAT) gateway that connects to the Internet by using the Destination Network Address Translation (DNAT) feature
      // *   **DB_CONNECTION**: the public endpoint of a database.
      shared_ptr<string> exposureType_ {};
      // The ID of the instance to which the resource belongs. The valid values of this parameter vary based on the value of the ExposureType parameter.
      // 
      // *   If the value of the ExposureType parameter is **INTERNET_IP**, this parameter is empty.
      // *   If the value of the ExposureType parameter is **SLB**, the value of this parameter is the ID of the SLB instance.
      // *   If the value of the ExposureType parameter is **EIP**, the value of this parameter is the ID of the EIP.
      // *   If the value of the ExposureType parameter is **DNAT**, the value of this parameter is the ID of the NAT gateway.
      // *   If the value of the ExposureType parameter is **DB_CONNECTION**, the value of this parameter is the ID of the database.
      shared_ptr<string> exposureTypeId_ {};
      // The server group to which the server belongs.
      shared_ptr<string> groupNo_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The instance name.
      shared_ptr<string> instanceName_ {};
      // The public IP address of the server.
      shared_ptr<string> internetIp_ {};
      // The private IP address of the server.
      shared_ptr<string> intranetIp_ {};
      // The information about the vulnerabilities that are exposed on the Internet and can be exploited by attackers.
      shared_ptr<vector<ExposedChains::RealVulList>> realVulList_ {};
      // The region ID.
      // 
      // >  For information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
      shared_ptr<string> regionId_ {};
      // The UUID of the server or the instance ID of the database.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->exposedChains_ == nullptr
        && this->requestId_ == nullptr; };
    // exposedChains Field Functions 
    bool hasExposedChains() const { return this->exposedChains_ != nullptr;};
    void deleteExposedChains() { this->exposedChains_ = nullptr;};
    inline const vector<DescribeExposedInstanceDetailResponseBody::ExposedChains> & getExposedChains() const { DARABONBA_PTR_GET_CONST(exposedChains_, vector<DescribeExposedInstanceDetailResponseBody::ExposedChains>) };
    inline vector<DescribeExposedInstanceDetailResponseBody::ExposedChains> getExposedChains() { DARABONBA_PTR_GET(exposedChains_, vector<DescribeExposedInstanceDetailResponseBody::ExposedChains>) };
    inline DescribeExposedInstanceDetailResponseBody& setExposedChains(const vector<DescribeExposedInstanceDetailResponseBody::ExposedChains> & exposedChains) { DARABONBA_PTR_SET_VALUE(exposedChains_, exposedChains) };
    inline DescribeExposedInstanceDetailResponseBody& setExposedChains(vector<DescribeExposedInstanceDetailResponseBody::ExposedChains> && exposedChains) { DARABONBA_PTR_SET_RVALUE(exposedChains_, exposedChains) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedInstanceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The list of exposure details of the server or database.
    shared_ptr<vector<DescribeExposedInstanceDetailResponseBody::ExposedChains>> exposedChains_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
