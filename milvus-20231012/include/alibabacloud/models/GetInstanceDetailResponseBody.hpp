// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCEDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class GetInstanceDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceDetailResponseBody() = default ;
    GetInstanceDetailResponseBody(const GetInstanceDetailResponseBody &) = default ;
    GetInstanceDetailResponseBody(GetInstanceDetailResponseBody &&) = default ;
    GetInstanceDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceDetailResponseBody() = default ;
    GetInstanceDetailResponseBody& operator=(const GetInstanceDetailResponseBody &) = default ;
    GetInstanceDetailResponseBody& operator=(GetInstanceDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AclId, aclId_);
        DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(BucketPath, bucketPath_);
        DARABONBA_PTR_TO_JSON(ClusterInfo, clusterInfo_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(EnableHa, enableHa_);
        DARABONBA_PTR_TO_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_TO_JSON(HighAvailability, highAvailability_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_TO_JSON(MaintainablePeriod, maintainablePeriod_);
        DARABONBA_PTR_TO_JSON(MeasureConfig, measureConfig_);
        DARABONBA_PTR_TO_JSON(MultiZoneMode, multiZoneMode_);
        DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
        DARABONBA_PTR_TO_JSON(OpenPublicNet, openPublicNet_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_TO_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_TO_JSON(SgId, sgId_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_TO_JSON(UserConfig, userConfig_);
        DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
        DARABONBA_PTR_TO_JSON(Version, version_);
        DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
        DARABONBA_PTR_TO_JSON(VswId, vswId_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AclId, aclId_);
        DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(BucketPath, bucketPath_);
        DARABONBA_PTR_FROM_JSON(ClusterInfo, clusterInfo_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(EnableHa, enableHa_);
        DARABONBA_PTR_FROM_JSON(Encrypted, encrypted_);
        DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
        DARABONBA_PTR_FROM_JSON(HighAvailability, highAvailability_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
        DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
        DARABONBA_PTR_FROM_JSON(MaintainablePeriod, maintainablePeriod_);
        DARABONBA_PTR_FROM_JSON(MeasureConfig, measureConfig_);
        DARABONBA_PTR_FROM_JSON(MultiZoneMode, multiZoneMode_);
        DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
        DARABONBA_PTR_FROM_JSON(OpenPublicNet, openPublicNet_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
        DARABONBA_PTR_FROM_JSON(RunningTime, runningTime_);
        DARABONBA_PTR_FROM_JSON(SgId, sgId_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
        DARABONBA_PTR_FROM_JSON(UserConfig, userConfig_);
        DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
        DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
        DARABONBA_PTR_FROM_JSON(VswId, vswId_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      class VSwitches : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VSwitches& obj) { 
          DARABONBA_PTR_TO_JSON(VswId, vswId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, VSwitches& obj) { 
          DARABONBA_PTR_FROM_JSON(VswId, vswId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        VSwitches() = default ;
        VSwitches(const VSwitches &) = default ;
        VSwitches(VSwitches &&) = default ;
        VSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VSwitches() = default ;
        VSwitches& operator=(const VSwitches &) = default ;
        VSwitches& operator=(VSwitches &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->vswId_ == nullptr
        && this->zoneId_ == nullptr; };
        // vswId Field Functions 
        bool hasVswId() const { return this->vswId_ != nullptr;};
        void deleteVswId() { this->vswId_ = nullptr;};
        inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
        inline VSwitches& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline VSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> vswId_ {};
        shared_ptr<string> zoneId_ {};
      };

      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        shared_ptr<string> key_ {};
        shared_ptr<string> value_ {};
      };

      class MeasureConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeasureConfig& obj) { 
          DARABONBA_PTR_TO_JSON(DataNodeCuNum, dataNodeCuNum_);
          DARABONBA_PTR_TO_JSON(DataNodeReplica, dataNodeReplica_);
          DARABONBA_PTR_TO_JSON(IndexNodeCuNum, indexNodeCuNum_);
          DARABONBA_PTR_TO_JSON(IndexNodeReplica, indexNodeReplica_);
          DARABONBA_PTR_TO_JSON(MixCoodinatorNodeCuNum, mixCoodinatorNodeCuNum_);
          DARABONBA_PTR_TO_JSON(MixCoodinatorNodeReplica, mixCoodinatorNodeReplica_);
          DARABONBA_PTR_TO_JSON(ProxyNodeCuNum, proxyNodeCuNum_);
          DARABONBA_PTR_TO_JSON(ProxyNodeReplica, proxyNodeReplica_);
          DARABONBA_PTR_TO_JSON(QueryNodeCuNum, queryNodeCuNum_);
          DARABONBA_PTR_TO_JSON(QueryNodeReplica, queryNodeReplica_);
        };
        friend void from_json(const Darabonba::Json& j, MeasureConfig& obj) { 
          DARABONBA_PTR_FROM_JSON(DataNodeCuNum, dataNodeCuNum_);
          DARABONBA_PTR_FROM_JSON(DataNodeReplica, dataNodeReplica_);
          DARABONBA_PTR_FROM_JSON(IndexNodeCuNum, indexNodeCuNum_);
          DARABONBA_PTR_FROM_JSON(IndexNodeReplica, indexNodeReplica_);
          DARABONBA_PTR_FROM_JSON(MixCoodinatorNodeCuNum, mixCoodinatorNodeCuNum_);
          DARABONBA_PTR_FROM_JSON(MixCoodinatorNodeReplica, mixCoodinatorNodeReplica_);
          DARABONBA_PTR_FROM_JSON(ProxyNodeCuNum, proxyNodeCuNum_);
          DARABONBA_PTR_FROM_JSON(ProxyNodeReplica, proxyNodeReplica_);
          DARABONBA_PTR_FROM_JSON(QueryNodeCuNum, queryNodeCuNum_);
          DARABONBA_PTR_FROM_JSON(QueryNodeReplica, queryNodeReplica_);
        };
        MeasureConfig() = default ;
        MeasureConfig(const MeasureConfig &) = default ;
        MeasureConfig(MeasureConfig &&) = default ;
        MeasureConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeasureConfig() = default ;
        MeasureConfig& operator=(const MeasureConfig &) = default ;
        MeasureConfig& operator=(MeasureConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataNodeCuNum_ == nullptr
        && this->dataNodeReplica_ == nullptr && this->indexNodeCuNum_ == nullptr && this->indexNodeReplica_ == nullptr && this->mixCoodinatorNodeCuNum_ == nullptr && this->mixCoodinatorNodeReplica_ == nullptr
        && this->proxyNodeCuNum_ == nullptr && this->proxyNodeReplica_ == nullptr && this->queryNodeCuNum_ == nullptr && this->queryNodeReplica_ == nullptr; };
        // dataNodeCuNum Field Functions 
        bool hasDataNodeCuNum() const { return this->dataNodeCuNum_ != nullptr;};
        void deleteDataNodeCuNum() { this->dataNodeCuNum_ = nullptr;};
        inline int32_t getDataNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(dataNodeCuNum_, 0) };
        inline MeasureConfig& setDataNodeCuNum(int32_t dataNodeCuNum) { DARABONBA_PTR_SET_VALUE(dataNodeCuNum_, dataNodeCuNum) };


        // dataNodeReplica Field Functions 
        bool hasDataNodeReplica() const { return this->dataNodeReplica_ != nullptr;};
        void deleteDataNodeReplica() { this->dataNodeReplica_ = nullptr;};
        inline int32_t getDataNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(dataNodeReplica_, 0) };
        inline MeasureConfig& setDataNodeReplica(int32_t dataNodeReplica) { DARABONBA_PTR_SET_VALUE(dataNodeReplica_, dataNodeReplica) };


        // indexNodeCuNum Field Functions 
        bool hasIndexNodeCuNum() const { return this->indexNodeCuNum_ != nullptr;};
        void deleteIndexNodeCuNum() { this->indexNodeCuNum_ = nullptr;};
        inline int32_t getIndexNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(indexNodeCuNum_, 0) };
        inline MeasureConfig& setIndexNodeCuNum(int32_t indexNodeCuNum) { DARABONBA_PTR_SET_VALUE(indexNodeCuNum_, indexNodeCuNum) };


        // indexNodeReplica Field Functions 
        bool hasIndexNodeReplica() const { return this->indexNodeReplica_ != nullptr;};
        void deleteIndexNodeReplica() { this->indexNodeReplica_ = nullptr;};
        inline int32_t getIndexNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(indexNodeReplica_, 0) };
        inline MeasureConfig& setIndexNodeReplica(int32_t indexNodeReplica) { DARABONBA_PTR_SET_VALUE(indexNodeReplica_, indexNodeReplica) };


        // mixCoodinatorNodeCuNum Field Functions 
        bool hasMixCoodinatorNodeCuNum() const { return this->mixCoodinatorNodeCuNum_ != nullptr;};
        void deleteMixCoodinatorNodeCuNum() { this->mixCoodinatorNodeCuNum_ = nullptr;};
        inline int32_t getMixCoodinatorNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(mixCoodinatorNodeCuNum_, 0) };
        inline MeasureConfig& setMixCoodinatorNodeCuNum(int32_t mixCoodinatorNodeCuNum) { DARABONBA_PTR_SET_VALUE(mixCoodinatorNodeCuNum_, mixCoodinatorNodeCuNum) };


        // mixCoodinatorNodeReplica Field Functions 
        bool hasMixCoodinatorNodeReplica() const { return this->mixCoodinatorNodeReplica_ != nullptr;};
        void deleteMixCoodinatorNodeReplica() { this->mixCoodinatorNodeReplica_ = nullptr;};
        inline int32_t getMixCoodinatorNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(mixCoodinatorNodeReplica_, 0) };
        inline MeasureConfig& setMixCoodinatorNodeReplica(int32_t mixCoodinatorNodeReplica) { DARABONBA_PTR_SET_VALUE(mixCoodinatorNodeReplica_, mixCoodinatorNodeReplica) };


        // proxyNodeCuNum Field Functions 
        bool hasProxyNodeCuNum() const { return this->proxyNodeCuNum_ != nullptr;};
        void deleteProxyNodeCuNum() { this->proxyNodeCuNum_ = nullptr;};
        inline int32_t getProxyNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(proxyNodeCuNum_, 0) };
        inline MeasureConfig& setProxyNodeCuNum(int32_t proxyNodeCuNum) { DARABONBA_PTR_SET_VALUE(proxyNodeCuNum_, proxyNodeCuNum) };


        // proxyNodeReplica Field Functions 
        bool hasProxyNodeReplica() const { return this->proxyNodeReplica_ != nullptr;};
        void deleteProxyNodeReplica() { this->proxyNodeReplica_ = nullptr;};
        inline int32_t getProxyNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(proxyNodeReplica_, 0) };
        inline MeasureConfig& setProxyNodeReplica(int32_t proxyNodeReplica) { DARABONBA_PTR_SET_VALUE(proxyNodeReplica_, proxyNodeReplica) };


        // queryNodeCuNum Field Functions 
        bool hasQueryNodeCuNum() const { return this->queryNodeCuNum_ != nullptr;};
        void deleteQueryNodeCuNum() { this->queryNodeCuNum_ = nullptr;};
        inline int32_t getQueryNodeCuNum() const { DARABONBA_PTR_GET_DEFAULT(queryNodeCuNum_, 0) };
        inline MeasureConfig& setQueryNodeCuNum(int32_t queryNodeCuNum) { DARABONBA_PTR_SET_VALUE(queryNodeCuNum_, queryNodeCuNum) };


        // queryNodeReplica Field Functions 
        bool hasQueryNodeReplica() const { return this->queryNodeReplica_ != nullptr;};
        void deleteQueryNodeReplica() { this->queryNodeReplica_ = nullptr;};
        inline int32_t getQueryNodeReplica() const { DARABONBA_PTR_GET_DEFAULT(queryNodeReplica_, 0) };
        inline MeasureConfig& setQueryNodeReplica(int32_t queryNodeReplica) { DARABONBA_PTR_SET_VALUE(queryNodeReplica_, queryNodeReplica) };


      protected:
        shared_ptr<int32_t> dataNodeCuNum_ {};
        shared_ptr<int32_t> dataNodeReplica_ {};
        shared_ptr<int32_t> indexNodeCuNum_ {};
        shared_ptr<int32_t> indexNodeReplica_ {};
        shared_ptr<int32_t> mixCoodinatorNodeCuNum_ {};
        shared_ptr<int32_t> mixCoodinatorNodeReplica_ {};
        shared_ptr<int32_t> proxyNodeCuNum_ {};
        shared_ptr<int32_t> proxyNodeReplica_ {};
        shared_ptr<int32_t> queryNodeCuNum_ {};
        shared_ptr<int32_t> queryNodeReplica_ {};
      };

      class HighAvailability : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const HighAvailability& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentActiveAZ, currentActiveAZ_);
          DARABONBA_PTR_TO_JSON(Mode, mode_);
          DARABONBA_PTR_TO_JSON(PrimaryZoneId, primaryZoneId_);
          DARABONBA_PTR_TO_JSON(SecondaryZoneId, secondaryZoneId_);
        };
        friend void from_json(const Darabonba::Json& j, HighAvailability& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentActiveAZ, currentActiveAZ_);
          DARABONBA_PTR_FROM_JSON(Mode, mode_);
          DARABONBA_PTR_FROM_JSON(PrimaryZoneId, primaryZoneId_);
          DARABONBA_PTR_FROM_JSON(SecondaryZoneId, secondaryZoneId_);
        };
        HighAvailability() = default ;
        HighAvailability(const HighAvailability &) = default ;
        HighAvailability(HighAvailability &&) = default ;
        HighAvailability(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~HighAvailability() = default ;
        HighAvailability& operator=(const HighAvailability &) = default ;
        HighAvailability& operator=(HighAvailability &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentActiveAZ_ == nullptr
        && this->mode_ == nullptr && this->primaryZoneId_ == nullptr && this->secondaryZoneId_ == nullptr; };
        // currentActiveAZ Field Functions 
        bool hasCurrentActiveAZ() const { return this->currentActiveAZ_ != nullptr;};
        void deleteCurrentActiveAZ() { this->currentActiveAZ_ = nullptr;};
        inline string getCurrentActiveAZ() const { DARABONBA_PTR_GET_DEFAULT(currentActiveAZ_, "") };
        inline HighAvailability& setCurrentActiveAZ(string currentActiveAZ) { DARABONBA_PTR_SET_VALUE(currentActiveAZ_, currentActiveAZ) };


        // mode Field Functions 
        bool hasMode() const { return this->mode_ != nullptr;};
        void deleteMode() { this->mode_ = nullptr;};
        inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
        inline HighAvailability& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


        // primaryZoneId Field Functions 
        bool hasPrimaryZoneId() const { return this->primaryZoneId_ != nullptr;};
        void deletePrimaryZoneId() { this->primaryZoneId_ = nullptr;};
        inline string getPrimaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(primaryZoneId_, "") };
        inline HighAvailability& setPrimaryZoneId(string primaryZoneId) { DARABONBA_PTR_SET_VALUE(primaryZoneId_, primaryZoneId) };


        // secondaryZoneId Field Functions 
        bool hasSecondaryZoneId() const { return this->secondaryZoneId_ != nullptr;};
        void deleteSecondaryZoneId() { this->secondaryZoneId_ = nullptr;};
        inline string getSecondaryZoneId() const { DARABONBA_PTR_GET_DEFAULT(secondaryZoneId_, "") };
        inline HighAvailability& setSecondaryZoneId(string secondaryZoneId) { DARABONBA_PTR_SET_VALUE(secondaryZoneId_, secondaryZoneId) };


      protected:
        shared_ptr<string> currentActiveAZ_ {};
        shared_ptr<string> mode_ {};
        shared_ptr<string> primaryZoneId_ {};
        shared_ptr<string> secondaryZoneId_ {};
      };

      class ClusterInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ClusterInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AttuPort, attuPort_);
          DARABONBA_PTR_TO_JSON(InternetUrl, internetUrl_);
          DARABONBA_PTR_TO_JSON(IntranetUrl, intranetUrl_);
          DARABONBA_PTR_TO_JSON(MilvusResourceInfoList, milvusResourceInfoList_);
          DARABONBA_PTR_TO_JSON(OssStorageSize, ossStorageSize_);
          DARABONBA_PTR_TO_JSON(OssStorageTimestamp, ossStorageTimestamp_);
          DARABONBA_PTR_TO_JSON(ProxyPort, proxyPort_);
          DARABONBA_PTR_TO_JSON(TotalCuNum, totalCuNum_);
          DARABONBA_PTR_TO_JSON(TotalDiskSize, totalDiskSize_);
        };
        friend void from_json(const Darabonba::Json& j, ClusterInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AttuPort, attuPort_);
          DARABONBA_PTR_FROM_JSON(InternetUrl, internetUrl_);
          DARABONBA_PTR_FROM_JSON(IntranetUrl, intranetUrl_);
          DARABONBA_PTR_FROM_JSON(MilvusResourceInfoList, milvusResourceInfoList_);
          DARABONBA_PTR_FROM_JSON(OssStorageSize, ossStorageSize_);
          DARABONBA_PTR_FROM_JSON(OssStorageTimestamp, ossStorageTimestamp_);
          DARABONBA_PTR_FROM_JSON(ProxyPort, proxyPort_);
          DARABONBA_PTR_FROM_JSON(TotalCuNum, totalCuNum_);
          DARABONBA_PTR_FROM_JSON(TotalDiskSize, totalDiskSize_);
        };
        ClusterInfo() = default ;
        ClusterInfo(const ClusterInfo &) = default ;
        ClusterInfo(ClusterInfo &&) = default ;
        ClusterInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ClusterInfo() = default ;
        ClusterInfo& operator=(const ClusterInfo &) = default ;
        ClusterInfo& operator=(ClusterInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MilvusResourceInfoList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MilvusResourceInfoList& obj) { 
            DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
            DARABONBA_PTR_TO_JSON(CuNum, cuNum_);
            DARABONBA_PTR_TO_JSON(CuRatio, cuRatio_);
            DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
            DARABONBA_PTR_TO_JSON(DiskType, diskType_);
            DARABONBA_PTR_TO_JSON(PayType, payType_);
            DARABONBA_PTR_TO_JSON(Replica, replica_);
            DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
          };
          friend void from_json(const Darabonba::Json& j, MilvusResourceInfoList& obj) { 
            DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
            DARABONBA_PTR_FROM_JSON(CuNum, cuNum_);
            DARABONBA_PTR_FROM_JSON(CuRatio, cuRatio_);
            DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
            DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
            DARABONBA_PTR_FROM_JSON(PayType, payType_);
            DARABONBA_PTR_FROM_JSON(Replica, replica_);
            DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
          };
          MilvusResourceInfoList() = default ;
          MilvusResourceInfoList(const MilvusResourceInfoList &) = default ;
          MilvusResourceInfoList(MilvusResourceInfoList &&) = default ;
          MilvusResourceInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MilvusResourceInfoList() = default ;
          MilvusResourceInfoList& operator=(const MilvusResourceInfoList &) = default ;
          MilvusResourceInfoList& operator=(MilvusResourceInfoList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->componentType_ == nullptr
        && this->cuNum_ == nullptr && this->cuRatio_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr && this->payType_ == nullptr
        && this->replica_ == nullptr && this->zoneId_ == nullptr; };
          // componentType Field Functions 
          bool hasComponentType() const { return this->componentType_ != nullptr;};
          void deleteComponentType() { this->componentType_ = nullptr;};
          inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
          inline MilvusResourceInfoList& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


          // cuNum Field Functions 
          bool hasCuNum() const { return this->cuNum_ != nullptr;};
          void deleteCuNum() { this->cuNum_ = nullptr;};
          inline int32_t getCuNum() const { DARABONBA_PTR_GET_DEFAULT(cuNum_, 0) };
          inline MilvusResourceInfoList& setCuNum(int32_t cuNum) { DARABONBA_PTR_SET_VALUE(cuNum_, cuNum) };


          // cuRatio Field Functions 
          bool hasCuRatio() const { return this->cuRatio_ != nullptr;};
          void deleteCuRatio() { this->cuRatio_ = nullptr;};
          inline int32_t getCuRatio() const { DARABONBA_PTR_GET_DEFAULT(cuRatio_, 0) };
          inline MilvusResourceInfoList& setCuRatio(int32_t cuRatio) { DARABONBA_PTR_SET_VALUE(cuRatio_, cuRatio) };


          // diskSize Field Functions 
          bool hasDiskSize() const { return this->diskSize_ != nullptr;};
          void deleteDiskSize() { this->diskSize_ = nullptr;};
          inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
          inline MilvusResourceInfoList& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


          // diskType Field Functions 
          bool hasDiskType() const { return this->diskType_ != nullptr;};
          void deleteDiskType() { this->diskType_ = nullptr;};
          inline string getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
          inline MilvusResourceInfoList& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


          // payType Field Functions 
          bool hasPayType() const { return this->payType_ != nullptr;};
          void deletePayType() { this->payType_ = nullptr;};
          inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
          inline MilvusResourceInfoList& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


          // replica Field Functions 
          bool hasReplica() const { return this->replica_ != nullptr;};
          void deleteReplica() { this->replica_ = nullptr;};
          inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
          inline MilvusResourceInfoList& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


          // zoneId Field Functions 
          bool hasZoneId() const { return this->zoneId_ != nullptr;};
          void deleteZoneId() { this->zoneId_ = nullptr;};
          inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
          inline MilvusResourceInfoList& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


        protected:
          // The component type. Valid values:
          // 
          // *   standalone
          // *   proxy
          // *   mix_coordinator
          // *   query
          // *   index
          // *   data
          shared_ptr<string> componentType_ {};
          // The number of CUs.
          shared_ptr<int32_t> cuNum_ {};
          shared_ptr<int32_t> cuRatio_ {};
          // The disk size.
          shared_ptr<int32_t> diskSize_ {};
          // The disk type.
          shared_ptr<string> diskType_ {};
          shared_ptr<string> payType_ {};
          // The number of replicas.
          shared_ptr<int32_t> replica_ {};
          shared_ptr<string> zoneId_ {};
        };

        virtual bool empty() const override { return this->attuPort_ == nullptr
        && this->internetUrl_ == nullptr && this->intranetUrl_ == nullptr && this->milvusResourceInfoList_ == nullptr && this->ossStorageSize_ == nullptr && this->ossStorageTimestamp_ == nullptr
        && this->proxyPort_ == nullptr && this->totalCuNum_ == nullptr && this->totalDiskSize_ == nullptr; };
        // attuPort Field Functions 
        bool hasAttuPort() const { return this->attuPort_ != nullptr;};
        void deleteAttuPort() { this->attuPort_ = nullptr;};
        inline int32_t getAttuPort() const { DARABONBA_PTR_GET_DEFAULT(attuPort_, 0) };
        inline ClusterInfo& setAttuPort(int32_t attuPort) { DARABONBA_PTR_SET_VALUE(attuPort_, attuPort) };


        // internetUrl Field Functions 
        bool hasInternetUrl() const { return this->internetUrl_ != nullptr;};
        void deleteInternetUrl() { this->internetUrl_ = nullptr;};
        inline string getInternetUrl() const { DARABONBA_PTR_GET_DEFAULT(internetUrl_, "") };
        inline ClusterInfo& setInternetUrl(string internetUrl) { DARABONBA_PTR_SET_VALUE(internetUrl_, internetUrl) };


        // intranetUrl Field Functions 
        bool hasIntranetUrl() const { return this->intranetUrl_ != nullptr;};
        void deleteIntranetUrl() { this->intranetUrl_ = nullptr;};
        inline string getIntranetUrl() const { DARABONBA_PTR_GET_DEFAULT(intranetUrl_, "") };
        inline ClusterInfo& setIntranetUrl(string intranetUrl) { DARABONBA_PTR_SET_VALUE(intranetUrl_, intranetUrl) };


        // milvusResourceInfoList Field Functions 
        bool hasMilvusResourceInfoList() const { return this->milvusResourceInfoList_ != nullptr;};
        void deleteMilvusResourceInfoList() { this->milvusResourceInfoList_ = nullptr;};
        inline const vector<ClusterInfo::MilvusResourceInfoList> & getMilvusResourceInfoList() const { DARABONBA_PTR_GET_CONST(milvusResourceInfoList_, vector<ClusterInfo::MilvusResourceInfoList>) };
        inline vector<ClusterInfo::MilvusResourceInfoList> getMilvusResourceInfoList() { DARABONBA_PTR_GET(milvusResourceInfoList_, vector<ClusterInfo::MilvusResourceInfoList>) };
        inline ClusterInfo& setMilvusResourceInfoList(const vector<ClusterInfo::MilvusResourceInfoList> & milvusResourceInfoList) { DARABONBA_PTR_SET_VALUE(milvusResourceInfoList_, milvusResourceInfoList) };
        inline ClusterInfo& setMilvusResourceInfoList(vector<ClusterInfo::MilvusResourceInfoList> && milvusResourceInfoList) { DARABONBA_PTR_SET_RVALUE(milvusResourceInfoList_, milvusResourceInfoList) };


        // ossStorageSize Field Functions 
        bool hasOssStorageSize() const { return this->ossStorageSize_ != nullptr;};
        void deleteOssStorageSize() { this->ossStorageSize_ = nullptr;};
        inline string getOssStorageSize() const { DARABONBA_PTR_GET_DEFAULT(ossStorageSize_, "") };
        inline ClusterInfo& setOssStorageSize(string ossStorageSize) { DARABONBA_PTR_SET_VALUE(ossStorageSize_, ossStorageSize) };


        // ossStorageTimestamp Field Functions 
        bool hasOssStorageTimestamp() const { return this->ossStorageTimestamp_ != nullptr;};
        void deleteOssStorageTimestamp() { this->ossStorageTimestamp_ = nullptr;};
        inline int64_t getOssStorageTimestamp() const { DARABONBA_PTR_GET_DEFAULT(ossStorageTimestamp_, 0L) };
        inline ClusterInfo& setOssStorageTimestamp(int64_t ossStorageTimestamp) { DARABONBA_PTR_SET_VALUE(ossStorageTimestamp_, ossStorageTimestamp) };


        // proxyPort Field Functions 
        bool hasProxyPort() const { return this->proxyPort_ != nullptr;};
        void deleteProxyPort() { this->proxyPort_ = nullptr;};
        inline int32_t getProxyPort() const { DARABONBA_PTR_GET_DEFAULT(proxyPort_, 0) };
        inline ClusterInfo& setProxyPort(int32_t proxyPort) { DARABONBA_PTR_SET_VALUE(proxyPort_, proxyPort) };


        // totalCuNum Field Functions 
        bool hasTotalCuNum() const { return this->totalCuNum_ != nullptr;};
        void deleteTotalCuNum() { this->totalCuNum_ = nullptr;};
        inline int32_t getTotalCuNum() const { DARABONBA_PTR_GET_DEFAULT(totalCuNum_, 0) };
        inline ClusterInfo& setTotalCuNum(int32_t totalCuNum) { DARABONBA_PTR_SET_VALUE(totalCuNum_, totalCuNum) };


        // totalDiskSize Field Functions 
        bool hasTotalDiskSize() const { return this->totalDiskSize_ != nullptr;};
        void deleteTotalDiskSize() { this->totalDiskSize_ = nullptr;};
        inline int32_t getTotalDiskSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskSize_, 0) };
        inline ClusterInfo& setTotalDiskSize(int32_t totalDiskSize) { DARABONBA_PTR_SET_VALUE(totalDiskSize_, totalDiskSize) };


      protected:
        // The port of the Attu component.
        shared_ptr<int32_t> attuPort_ {};
        // The public IP address.
        shared_ptr<string> internetUrl_ {};
        // The internal IP address.
        shared_ptr<string> intranetUrl_ {};
        // The resource details.
        shared_ptr<vector<ClusterInfo::MilvusResourceInfoList>> milvusResourceInfoList_ {};
        // The size of the data stored in OSS.
        shared_ptr<string> ossStorageSize_ {};
        // The timestamp when the OSS metric is stored.
        shared_ptr<int64_t> ossStorageTimestamp_ {};
        // The proxy port.
        shared_ptr<int32_t> proxyPort_ {};
        // The total number of CUs.
        shared_ptr<int32_t> totalCuNum_ {};
        // The total number of disks.
        shared_ptr<int32_t> totalDiskSize_ {};
      };

      virtual bool empty() const override { return this->aclId_ == nullptr
        && this->beginTime_ == nullptr && this->bucketName_ == nullptr && this->bucketPath_ == nullptr && this->clusterInfo_ == nullptr && this->clusterName_ == nullptr
        && this->enableHa_ == nullptr && this->encrypted_ == nullptr && this->expireTime_ == nullptr && this->highAvailability_ == nullptr && this->instanceId_ == nullptr
        && this->instanceStatus_ == nullptr && this->kmsKeyId_ == nullptr && this->maintainablePeriod_ == nullptr && this->measureConfig_ == nullptr && this->multiZoneMode_ == nullptr
        && this->nodeType_ == nullptr && this->openPublicNet_ == nullptr && this->packageType_ == nullptr && this->payType_ == nullptr && this->productCode_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->runningTime_ == nullptr && this->sgId_ == nullptr && this->tags_ == nullptr
        && this->templateVersion_ == nullptr && this->userConfig_ == nullptr && this->vSwitches_ == nullptr && this->version_ == nullptr && this->vpcId_ == nullptr
        && this->vswId_ == nullptr && this->zoneId_ == nullptr; };
      // aclId Field Functions 
      bool hasAclId() const { return this->aclId_ != nullptr;};
      void deleteAclId() { this->aclId_ = nullptr;};
      inline string getAclId() const { DARABONBA_PTR_GET_DEFAULT(aclId_, "") };
      inline Data& setAclId(string aclId) { DARABONBA_PTR_SET_VALUE(aclId_, aclId) };


      // beginTime Field Functions 
      bool hasBeginTime() const { return this->beginTime_ != nullptr;};
      void deleteBeginTime() { this->beginTime_ = nullptr;};
      inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
      inline Data& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline Data& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // bucketPath Field Functions 
      bool hasBucketPath() const { return this->bucketPath_ != nullptr;};
      void deleteBucketPath() { this->bucketPath_ = nullptr;};
      inline string getBucketPath() const { DARABONBA_PTR_GET_DEFAULT(bucketPath_, "") };
      inline Data& setBucketPath(string bucketPath) { DARABONBA_PTR_SET_VALUE(bucketPath_, bucketPath) };


      // clusterInfo Field Functions 
      bool hasClusterInfo() const { return this->clusterInfo_ != nullptr;};
      void deleteClusterInfo() { this->clusterInfo_ = nullptr;};
      inline const Data::ClusterInfo & getClusterInfo() const { DARABONBA_PTR_GET_CONST(clusterInfo_, Data::ClusterInfo) };
      inline Data::ClusterInfo getClusterInfo() { DARABONBA_PTR_GET(clusterInfo_, Data::ClusterInfo) };
      inline Data& setClusterInfo(const Data::ClusterInfo & clusterInfo) { DARABONBA_PTR_SET_VALUE(clusterInfo_, clusterInfo) };
      inline Data& setClusterInfo(Data::ClusterInfo && clusterInfo) { DARABONBA_PTR_SET_RVALUE(clusterInfo_, clusterInfo) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // enableHa Field Functions 
      bool hasEnableHa() const { return this->enableHa_ != nullptr;};
      void deleteEnableHa() { this->enableHa_ = nullptr;};
      inline bool getEnableHa() const { DARABONBA_PTR_GET_DEFAULT(enableHa_, false) };
      inline Data& setEnableHa(bool enableHa) { DARABONBA_PTR_SET_VALUE(enableHa_, enableHa) };


      // encrypted Field Functions 
      bool hasEncrypted() const { return this->encrypted_ != nullptr;};
      void deleteEncrypted() { this->encrypted_ = nullptr;};
      inline string getEncrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, "") };
      inline Data& setEncrypted(string encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


      // expireTime Field Functions 
      bool hasExpireTime() const { return this->expireTime_ != nullptr;};
      void deleteExpireTime() { this->expireTime_ = nullptr;};
      inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
      inline Data& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


      // highAvailability Field Functions 
      bool hasHighAvailability() const { return this->highAvailability_ != nullptr;};
      void deleteHighAvailability() { this->highAvailability_ = nullptr;};
      inline const Data::HighAvailability & getHighAvailability() const { DARABONBA_PTR_GET_CONST(highAvailability_, Data::HighAvailability) };
      inline Data::HighAvailability getHighAvailability() { DARABONBA_PTR_GET(highAvailability_, Data::HighAvailability) };
      inline Data& setHighAvailability(const Data::HighAvailability & highAvailability) { DARABONBA_PTR_SET_VALUE(highAvailability_, highAvailability) };
      inline Data& setHighAvailability(Data::HighAvailability && highAvailability) { DARABONBA_PTR_SET_RVALUE(highAvailability_, highAvailability) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // instanceStatus Field Functions 
      bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
      void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
      inline string getInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
      inline Data& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


      // kmsKeyId Field Functions 
      bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
      void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
      inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
      inline Data& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


      // maintainablePeriod Field Functions 
      bool hasMaintainablePeriod() const { return this->maintainablePeriod_ != nullptr;};
      void deleteMaintainablePeriod() { this->maintainablePeriod_ = nullptr;};
      inline string getMaintainablePeriod() const { DARABONBA_PTR_GET_DEFAULT(maintainablePeriod_, "") };
      inline Data& setMaintainablePeriod(string maintainablePeriod) { DARABONBA_PTR_SET_VALUE(maintainablePeriod_, maintainablePeriod) };


      // measureConfig Field Functions 
      bool hasMeasureConfig() const { return this->measureConfig_ != nullptr;};
      void deleteMeasureConfig() { this->measureConfig_ = nullptr;};
      inline const Data::MeasureConfig & getMeasureConfig() const { DARABONBA_PTR_GET_CONST(measureConfig_, Data::MeasureConfig) };
      inline Data::MeasureConfig getMeasureConfig() { DARABONBA_PTR_GET(measureConfig_, Data::MeasureConfig) };
      inline Data& setMeasureConfig(const Data::MeasureConfig & measureConfig) { DARABONBA_PTR_SET_VALUE(measureConfig_, measureConfig) };
      inline Data& setMeasureConfig(Data::MeasureConfig && measureConfig) { DARABONBA_PTR_SET_RVALUE(measureConfig_, measureConfig) };


      // multiZoneMode Field Functions 
      bool hasMultiZoneMode() const { return this->multiZoneMode_ != nullptr;};
      void deleteMultiZoneMode() { this->multiZoneMode_ = nullptr;};
      inline string getMultiZoneMode() const { DARABONBA_PTR_GET_DEFAULT(multiZoneMode_, "") };
      inline Data& setMultiZoneMode(string multiZoneMode) { DARABONBA_PTR_SET_VALUE(multiZoneMode_, multiZoneMode) };


      // nodeType Field Functions 
      bool hasNodeType() const { return this->nodeType_ != nullptr;};
      void deleteNodeType() { this->nodeType_ = nullptr;};
      inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
      inline Data& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


      // openPublicNet Field Functions 
      bool hasOpenPublicNet() const { return this->openPublicNet_ != nullptr;};
      void deleteOpenPublicNet() { this->openPublicNet_ = nullptr;};
      inline bool getOpenPublicNet() const { DARABONBA_PTR_GET_DEFAULT(openPublicNet_, false) };
      inline Data& setOpenPublicNet(bool openPublicNet) { DARABONBA_PTR_SET_VALUE(openPublicNet_, openPublicNet) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline Data& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline int32_t getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, 0) };
      inline Data& setPayType(int32_t payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // productCode Field Functions 
      bool hasProductCode() const { return this->productCode_ != nullptr;};
      void deleteProductCode() { this->productCode_ = nullptr;};
      inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
      inline Data& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // resourceGroupId Field Functions 
      bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
      void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
      inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
      inline Data& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


      // runningTime Field Functions 
      bool hasRunningTime() const { return this->runningTime_ != nullptr;};
      void deleteRunningTime() { this->runningTime_ = nullptr;};
      inline int64_t getRunningTime() const { DARABONBA_PTR_GET_DEFAULT(runningTime_, 0L) };
      inline Data& setRunningTime(int64_t runningTime) { DARABONBA_PTR_SET_VALUE(runningTime_, runningTime) };


      // sgId Field Functions 
      bool hasSgId() const { return this->sgId_ != nullptr;};
      void deleteSgId() { this->sgId_ = nullptr;};
      inline string getSgId() const { DARABONBA_PTR_GET_DEFAULT(sgId_, "") };
      inline Data& setSgId(string sgId) { DARABONBA_PTR_SET_VALUE(sgId_, sgId) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Data::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Data::Tags>) };
      inline vector<Data::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Data::Tags>) };
      inline Data& setTags(const vector<Data::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Data& setTags(vector<Data::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


      // templateVersion Field Functions 
      bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
      void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
      inline string getTemplateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
      inline Data& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


      // userConfig Field Functions 
      bool hasUserConfig() const { return this->userConfig_ != nullptr;};
      void deleteUserConfig() { this->userConfig_ = nullptr;};
      inline string getUserConfig() const { DARABONBA_PTR_GET_DEFAULT(userConfig_, "") };
      inline Data& setUserConfig(string userConfig) { DARABONBA_PTR_SET_VALUE(userConfig_, userConfig) };


      // vSwitches Field Functions 
      bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
      void deleteVSwitches() { this->vSwitches_ = nullptr;};
      inline const vector<Data::VSwitches> & getVSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<Data::VSwitches>) };
      inline vector<Data::VSwitches> getVSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<Data::VSwitches>) };
      inline Data& setVSwitches(const vector<Data::VSwitches> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
      inline Data& setVSwitches(vector<Data::VSwitches> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Data& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // vpcId Field Functions 
      bool hasVpcId() const { return this->vpcId_ != nullptr;};
      void deleteVpcId() { this->vpcId_ = nullptr;};
      inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
      inline Data& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


      // vswId Field Functions 
      bool hasVswId() const { return this->vswId_ != nullptr;};
      void deleteVswId() { this->vswId_ = nullptr;};
      inline string getVswId() const { DARABONBA_PTR_GET_DEFAULT(vswId_, "") };
      inline Data& setVswId(string vswId) { DARABONBA_PTR_SET_VALUE(vswId_, vswId) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Data& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // AclId for Public Network Access Control.
      shared_ptr<string> aclId_ {};
      // The start time.
      shared_ptr<int64_t> beginTime_ {};
      // The name of the bucket.
      shared_ptr<string> bucketName_ {};
      // The address of the bucket.
      shared_ptr<string> bucketPath_ {};
      // The instance details.
      shared_ptr<Data::ClusterInfo> clusterInfo_ {};
      // The instance name.
      shared_ptr<string> clusterName_ {};
      shared_ptr<bool> enableHa_ {};
      shared_ptr<string> encrypted_ {};
      // The expiration time.
      shared_ptr<int64_t> expireTime_ {};
      shared_ptr<Data::HighAvailability> highAvailability_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The instance status. Valid values:
      // 
      // *   creating.
      // *   running.
      // *   updating. Cluster scaling (up/down), configuration changes, and enabling/disabling public network access.
      // *   disable. The cluster has expired and needs to be renewed for activation.
      // *   deleting.
      // *   deleted.
      shared_ptr<string> instanceStatus_ {};
      shared_ptr<string> kmsKeyId_ {};
      shared_ptr<string> maintainablePeriod_ {};
      shared_ptr<Data::MeasureConfig> measureConfig_ {};
      shared_ptr<string> multiZoneMode_ {};
      shared_ptr<string> nodeType_ {};
      // Indicates whether Internet access is enabled.
      shared_ptr<bool> openPublicNet_ {};
      // The specification details. Valid values:
      // 
      // *   trial.
      // *   standard.
      shared_ptr<string> packageType_ {};
      // The billing method of the instance. Valid values:
      // 
      // *   0: pay-as-you-go
      // *   1: subscription
      shared_ptr<int32_t> payType_ {};
      // The commodity code.
      shared_ptr<string> productCode_ {};
      // The region code.
      shared_ptr<string> regionId_ {};
      // The resource group ID.
      shared_ptr<string> resourceGroupId_ {};
      // The runtime.
      shared_ptr<int64_t> runningTime_ {};
      // The security group ID.
      shared_ptr<string> sgId_ {};
      shared_ptr<vector<Data::Tags>> tags_ {};
      // The version of the software stack.
      shared_ptr<string> templateVersion_ {};
      // User-defined configuration.
      shared_ptr<string> userConfig_ {};
      shared_ptr<vector<Data::VSwitches>> vSwitches_ {};
      // The kernel version.
      shared_ptr<string> version_ {};
      // The virtual private cloud (VPC) ID.
      shared_ptr<string> vpcId_ {};
      // The ID of the vSwitch.
      shared_ptr<string> vswId_ {};
      // The zone.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetInstanceDetailResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetInstanceDetailResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetInstanceDetailResponseBody::Data) };
    inline GetInstanceDetailResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetInstanceDetailResponseBody::Data) };
    inline GetInstanceDetailResponseBody& setData(const GetInstanceDetailResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetInstanceDetailResponseBody& setData(GetInstanceDetailResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetInstanceDetailResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetInstanceDetailResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetInstanceDetailResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceDetailResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The detailed information about the failed permission verification.
    shared_ptr<string> accessDeniedDetail_ {};
    // The returned result.
    shared_ptr<GetInstanceDetailResponseBody::Data> data_ {};
    // The error code returned.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
