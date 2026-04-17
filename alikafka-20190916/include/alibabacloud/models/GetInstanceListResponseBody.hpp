// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetInstanceListResponseBody() = default ;
    GetInstanceListResponseBody(const GetInstanceListResponseBody &) = default ;
    GetInstanceListResponseBody(GetInstanceListResponseBody &&) = default ;
    GetInstanceListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBody() = default ;
    GetInstanceListResponseBody& operator=(const GetInstanceListResponseBody &) = default ;
    GetInstanceListResponseBody& operator=(GetInstanceListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceVO, instanceVO_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceVO, instanceVO_);
      };
      InstanceList() = default ;
      InstanceList(const InstanceList &) = default ;
      InstanceList(InstanceList &&) = default ;
      InstanceList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceList() = default ;
      InstanceList& operator=(const InstanceList &) = default ;
      InstanceList& operator=(InstanceList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InstanceVO : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InstanceVO& obj) { 
          DARABONBA_PTR_TO_JSON(AllConfig, allConfig_);
          DARABONBA_PTR_TO_JSON(AutoCreateGroupEnable, autoCreateGroupEnable_);
          DARABONBA_PTR_TO_JSON(AutoCreateTopicEnable, autoCreateTopicEnable_);
          DARABONBA_PTR_TO_JSON(BackupZoneId, backupZoneId_);
          DARABONBA_PTR_TO_JSON(ConfluentConfig, confluentConfig_);
          DARABONBA_PTR_TO_JSON(ConfluentInstanceComponents, confluentInstanceComponents_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DefaultPartitionNum, defaultPartitionNum_);
          DARABONBA_PTR_TO_JSON(DeployType, deployType_);
          DARABONBA_PTR_TO_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_TO_JSON(DiskType, diskType_);
          DARABONBA_PTR_TO_JSON(DomainEndpoint, domainEndpoint_);
          DARABONBA_PTR_TO_JSON(EipMax, eipMax_);
          DARABONBA_PTR_TO_JSON(EndPoint, endPoint_);
          DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IoMax, ioMax_);
          DARABONBA_PTR_TO_JSON(IoMaxRead, ioMaxRead_);
          DARABONBA_PTR_TO_JSON(IoMaxSpec, ioMaxSpec_);
          DARABONBA_PTR_TO_JSON(IoMaxWrite, ioMaxWrite_);
          DARABONBA_PTR_TO_JSON(KmsKeyId, kmsKeyId_);
          DARABONBA_PTR_TO_JSON(MsgRetain, msgRetain_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PaidType, paidType_);
          DARABONBA_PTR_TO_JSON(RecommendedPartitionCount, recommendedPartitionCount_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
          DARABONBA_PTR_TO_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
          DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_TO_JSON(SaslDomainEndpoint, saslDomainEndpoint_);
          DARABONBA_PTR_TO_JSON(SaslEndPoint, saslEndPoint_);
          DARABONBA_PTR_TO_JSON(ScheduledRetirement, scheduledRetirement_);
          DARABONBA_PTR_TO_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_TO_JSON(Series, series_);
          DARABONBA_PTR_TO_JSON(ServiceStatus, serviceStatus_);
          DARABONBA_PTR_TO_JSON(SpecType, specType_);
          DARABONBA_PTR_TO_JSON(SslDomainEndpoint, sslDomainEndpoint_);
          DARABONBA_PTR_TO_JSON(SslEndPoint, sslEndPoint_);
          DARABONBA_PTR_TO_JSON(StandardZoneId, standardZoneId_);
          DARABONBA_PTR_TO_JSON(Tags, tags_);
          DARABONBA_PTR_TO_JSON(TopicNumLimit, topicNumLimit_);
          DARABONBA_PTR_TO_JSON(UpgradeServiceDetailInfo, upgradeServiceDetailInfo_);
          DARABONBA_PTR_TO_JSON(UsedGroupCount, usedGroupCount_);
          DARABONBA_PTR_TO_JSON(UsedPartitionCount, usedPartitionCount_);
          DARABONBA_PTR_TO_JSON(UsedTopicCount, usedTopicCount_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_TO_JSON(ViewInstanceStatusCode, viewInstanceStatusCode_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcSaslDomainEndpoint, vpcSaslDomainEndpoint_);
          DARABONBA_PTR_TO_JSON(VpcSaslEndPoint, vpcSaslEndPoint_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, InstanceVO& obj) { 
          DARABONBA_PTR_FROM_JSON(AllConfig, allConfig_);
          DARABONBA_PTR_FROM_JSON(AutoCreateGroupEnable, autoCreateGroupEnable_);
          DARABONBA_PTR_FROM_JSON(AutoCreateTopicEnable, autoCreateTopicEnable_);
          DARABONBA_PTR_FROM_JSON(BackupZoneId, backupZoneId_);
          DARABONBA_PTR_FROM_JSON(ConfluentConfig, confluentConfig_);
          DARABONBA_PTR_FROM_JSON(ConfluentInstanceComponents, confluentInstanceComponents_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DefaultPartitionNum, defaultPartitionNum_);
          DARABONBA_PTR_FROM_JSON(DeployType, deployType_);
          DARABONBA_PTR_FROM_JSON(DiskSize, diskSize_);
          DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
          DARABONBA_PTR_FROM_JSON(DomainEndpoint, domainEndpoint_);
          DARABONBA_PTR_FROM_JSON(EipMax, eipMax_);
          DARABONBA_PTR_FROM_JSON(EndPoint, endPoint_);
          DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IoMax, ioMax_);
          DARABONBA_PTR_FROM_JSON(IoMaxRead, ioMaxRead_);
          DARABONBA_PTR_FROM_JSON(IoMaxSpec, ioMaxSpec_);
          DARABONBA_PTR_FROM_JSON(IoMaxWrite, ioMaxWrite_);
          DARABONBA_PTR_FROM_JSON(KmsKeyId, kmsKeyId_);
          DARABONBA_PTR_FROM_JSON(MsgRetain, msgRetain_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PaidType, paidType_);
          DARABONBA_PTR_FROM_JSON(RecommendedPartitionCount, recommendedPartitionCount_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(ReservedPublishCapacity, reservedPublishCapacity_);
          DARABONBA_PTR_FROM_JSON(ReservedSubscribeCapacity, reservedSubscribeCapacity_);
          DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
          DARABONBA_PTR_FROM_JSON(SaslDomainEndpoint, saslDomainEndpoint_);
          DARABONBA_PTR_FROM_JSON(SaslEndPoint, saslEndPoint_);
          DARABONBA_PTR_FROM_JSON(ScheduledRetirement, scheduledRetirement_);
          DARABONBA_PTR_FROM_JSON(SecurityGroup, securityGroup_);
          DARABONBA_PTR_FROM_JSON(Series, series_);
          DARABONBA_PTR_FROM_JSON(ServiceStatus, serviceStatus_);
          DARABONBA_PTR_FROM_JSON(SpecType, specType_);
          DARABONBA_PTR_FROM_JSON(SslDomainEndpoint, sslDomainEndpoint_);
          DARABONBA_PTR_FROM_JSON(SslEndPoint, sslEndPoint_);
          DARABONBA_PTR_FROM_JSON(StandardZoneId, standardZoneId_);
          DARABONBA_PTR_FROM_JSON(Tags, tags_);
          DARABONBA_PTR_FROM_JSON(TopicNumLimit, topicNumLimit_);
          DARABONBA_PTR_FROM_JSON(UpgradeServiceDetailInfo, upgradeServiceDetailInfo_);
          DARABONBA_PTR_FROM_JSON(UsedGroupCount, usedGroupCount_);
          DARABONBA_PTR_FROM_JSON(UsedPartitionCount, usedPartitionCount_);
          DARABONBA_PTR_FROM_JSON(UsedTopicCount, usedTopicCount_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          DARABONBA_PTR_FROM_JSON(ViewInstanceStatusCode, viewInstanceStatusCode_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcSaslDomainEndpoint, vpcSaslDomainEndpoint_);
          DARABONBA_PTR_FROM_JSON(VpcSaslEndPoint, vpcSaslEndPoint_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        InstanceVO() = default ;
        InstanceVO(const InstanceVO &) = default ;
        InstanceVO(InstanceVO &&) = default ;
        InstanceVO(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InstanceVO() = default ;
        InstanceVO& operator=(const InstanceVO &) = default ;
        InstanceVO& operator=(InstanceVO &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class VSwitchIds : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const VSwitchIds& obj) { 
            DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
          };
          friend void from_json(const Darabonba::Json& j, VSwitchIds& obj) { 
            DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
          };
          VSwitchIds() = default ;
          VSwitchIds(const VSwitchIds &) = default ;
          VSwitchIds(VSwitchIds &&) = default ;
          VSwitchIds(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~VSwitchIds() = default ;
          VSwitchIds& operator=(const VSwitchIds &) = default ;
          VSwitchIds& operator=(VSwitchIds &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->vSwitchIds_ == nullptr; };
          // vSwitchIds Field Functions 
          bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
          void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
          inline const vector<string> & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
          inline vector<string> getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
          inline VSwitchIds& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
          inline VSwitchIds& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        protected:
          shared_ptr<vector<string>> vSwitchIds_ {};
        };

        class UpgradeServiceDetailInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const UpgradeServiceDetailInfo& obj) { 
            DARABONBA_PTR_TO_JSON(Current2OpenSourceVersion, current2OpenSourceVersion_);
          };
          friend void from_json(const Darabonba::Json& j, UpgradeServiceDetailInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(Current2OpenSourceVersion, current2OpenSourceVersion_);
          };
          UpgradeServiceDetailInfo() = default ;
          UpgradeServiceDetailInfo(const UpgradeServiceDetailInfo &) = default ;
          UpgradeServiceDetailInfo(UpgradeServiceDetailInfo &&) = default ;
          UpgradeServiceDetailInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~UpgradeServiceDetailInfo() = default ;
          UpgradeServiceDetailInfo& operator=(const UpgradeServiceDetailInfo &) = default ;
          UpgradeServiceDetailInfo& operator=(UpgradeServiceDetailInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->current2OpenSourceVersion_ == nullptr; };
          // current2OpenSourceVersion Field Functions 
          bool hasCurrent2OpenSourceVersion() const { return this->current2OpenSourceVersion_ != nullptr;};
          void deleteCurrent2OpenSourceVersion() { this->current2OpenSourceVersion_ = nullptr;};
          inline string getCurrent2OpenSourceVersion() const { DARABONBA_PTR_GET_DEFAULT(current2OpenSourceVersion_, "") };
          inline UpgradeServiceDetailInfo& setCurrent2OpenSourceVersion(string current2OpenSourceVersion) { DARABONBA_PTR_SET_VALUE(current2OpenSourceVersion_, current2OpenSourceVersion) };


        protected:
          shared_ptr<string> current2OpenSourceVersion_ {};
        };

        class Tags : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tags& obj) { 
            DARABONBA_PTR_TO_JSON(TagVO, tagVO_);
          };
          friend void from_json(const Darabonba::Json& j, Tags& obj) { 
            DARABONBA_PTR_FROM_JSON(TagVO, tagVO_);
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
          class TagVO : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TagVO& obj) { 
              DARABONBA_PTR_TO_JSON(Key, key_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, TagVO& obj) { 
              DARABONBA_PTR_FROM_JSON(Key, key_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
            };
            TagVO() = default ;
            TagVO(const TagVO &) = default ;
            TagVO(TagVO &&) = default ;
            TagVO(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TagVO() = default ;
            TagVO& operator=(const TagVO &) = default ;
            TagVO& operator=(TagVO &&) = default ;
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
            inline TagVO& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline TagVO& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> key_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->tagVO_ == nullptr; };
          // tagVO Field Functions 
          bool hasTagVO() const { return this->tagVO_ != nullptr;};
          void deleteTagVO() { this->tagVO_ = nullptr;};
          inline const vector<Tags::TagVO> & getTagVO() const { DARABONBA_PTR_GET_CONST(tagVO_, vector<Tags::TagVO>) };
          inline vector<Tags::TagVO> getTagVO() { DARABONBA_PTR_GET(tagVO_, vector<Tags::TagVO>) };
          inline Tags& setTagVO(const vector<Tags::TagVO> & tagVO) { DARABONBA_PTR_SET_VALUE(tagVO_, tagVO) };
          inline Tags& setTagVO(vector<Tags::TagVO> && tagVO) { DARABONBA_PTR_SET_RVALUE(tagVO_, tagVO) };


        protected:
          shared_ptr<vector<Tags::TagVO>> tagVO_ {};
        };

        class ConfluentInstanceComponents : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfluentInstanceComponents& obj) { 
            DARABONBA_PTR_TO_JSON(ConfluentInstanceComponentVO, confluentInstanceComponentVO_);
          };
          friend void from_json(const Darabonba::Json& j, ConfluentInstanceComponents& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfluentInstanceComponentVO, confluentInstanceComponentVO_);
          };
          ConfluentInstanceComponents() = default ;
          ConfluentInstanceComponents(const ConfluentInstanceComponents &) = default ;
          ConfluentInstanceComponents(ConfluentInstanceComponents &&) = default ;
          ConfluentInstanceComponents(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfluentInstanceComponents() = default ;
          ConfluentInstanceComponents& operator=(const ConfluentInstanceComponents &) = default ;
          ConfluentInstanceComponents& operator=(ConfluentInstanceComponents &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConfluentInstanceComponentVO : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfluentInstanceComponentVO& obj) { 
              DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
              DARABONBA_PTR_TO_JSON(DeployModule, deployModule_);
              DARABONBA_PTR_TO_JSON(PubEndpoint, pubEndpoint_);
              DARABONBA_PTR_TO_JSON(VpcEndpoint, vpcEndpoint_);
              DARABONBA_PTR_TO_JSON(internalId, internalId_);
            };
            friend void from_json(const Darabonba::Json& j, ConfluentInstanceComponentVO& obj) { 
              DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
              DARABONBA_PTR_FROM_JSON(DeployModule, deployModule_);
              DARABONBA_PTR_FROM_JSON(PubEndpoint, pubEndpoint_);
              DARABONBA_PTR_FROM_JSON(VpcEndpoint, vpcEndpoint_);
              DARABONBA_PTR_FROM_JSON(internalId, internalId_);
            };
            ConfluentInstanceComponentVO() = default ;
            ConfluentInstanceComponentVO(const ConfluentInstanceComponentVO &) = default ;
            ConfluentInstanceComponentVO(ConfluentInstanceComponentVO &&) = default ;
            ConfluentInstanceComponentVO(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfluentInstanceComponentVO() = default ;
            ConfluentInstanceComponentVO& operator=(const ConfluentInstanceComponentVO &) = default ;
            ConfluentInstanceComponentVO& operator=(ConfluentInstanceComponentVO &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->componentType_ == nullptr
        && this->deployModule_ == nullptr && this->pubEndpoint_ == nullptr && this->vpcEndpoint_ == nullptr && this->internalId_ == nullptr; };
            // componentType Field Functions 
            bool hasComponentType() const { return this->componentType_ != nullptr;};
            void deleteComponentType() { this->componentType_ = nullptr;};
            inline string getComponentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
            inline ConfluentInstanceComponentVO& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


            // deployModule Field Functions 
            bool hasDeployModule() const { return this->deployModule_ != nullptr;};
            void deleteDeployModule() { this->deployModule_ = nullptr;};
            inline string getDeployModule() const { DARABONBA_PTR_GET_DEFAULT(deployModule_, "") };
            inline ConfluentInstanceComponentVO& setDeployModule(string deployModule) { DARABONBA_PTR_SET_VALUE(deployModule_, deployModule) };


            // pubEndpoint Field Functions 
            bool hasPubEndpoint() const { return this->pubEndpoint_ != nullptr;};
            void deletePubEndpoint() { this->pubEndpoint_ = nullptr;};
            inline string getPubEndpoint() const { DARABONBA_PTR_GET_DEFAULT(pubEndpoint_, "") };
            inline ConfluentInstanceComponentVO& setPubEndpoint(string pubEndpoint) { DARABONBA_PTR_SET_VALUE(pubEndpoint_, pubEndpoint) };


            // vpcEndpoint Field Functions 
            bool hasVpcEndpoint() const { return this->vpcEndpoint_ != nullptr;};
            void deleteVpcEndpoint() { this->vpcEndpoint_ = nullptr;};
            inline string getVpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(vpcEndpoint_, "") };
            inline ConfluentInstanceComponentVO& setVpcEndpoint(string vpcEndpoint) { DARABONBA_PTR_SET_VALUE(vpcEndpoint_, vpcEndpoint) };


            // internalId Field Functions 
            bool hasInternalId() const { return this->internalId_ != nullptr;};
            void deleteInternalId() { this->internalId_ = nullptr;};
            inline string getInternalId() const { DARABONBA_PTR_GET_DEFAULT(internalId_, "") };
            inline ConfluentInstanceComponentVO& setInternalId(string internalId) { DARABONBA_PTR_SET_VALUE(internalId_, internalId) };


          protected:
            shared_ptr<string> componentType_ {};
            shared_ptr<string> deployModule_ {};
            shared_ptr<string> pubEndpoint_ {};
            shared_ptr<string> vpcEndpoint_ {};
            shared_ptr<string> internalId_ {};
          };

          virtual bool empty() const override { return this->confluentInstanceComponentVO_ == nullptr; };
          // confluentInstanceComponentVO Field Functions 
          bool hasConfluentInstanceComponentVO() const { return this->confluentInstanceComponentVO_ != nullptr;};
          void deleteConfluentInstanceComponentVO() { this->confluentInstanceComponentVO_ = nullptr;};
          inline const vector<ConfluentInstanceComponents::ConfluentInstanceComponentVO> & getConfluentInstanceComponentVO() const { DARABONBA_PTR_GET_CONST(confluentInstanceComponentVO_, vector<ConfluentInstanceComponents::ConfluentInstanceComponentVO>) };
          inline vector<ConfluentInstanceComponents::ConfluentInstanceComponentVO> getConfluentInstanceComponentVO() { DARABONBA_PTR_GET(confluentInstanceComponentVO_, vector<ConfluentInstanceComponents::ConfluentInstanceComponentVO>) };
          inline ConfluentInstanceComponents& setConfluentInstanceComponentVO(const vector<ConfluentInstanceComponents::ConfluentInstanceComponentVO> & confluentInstanceComponentVO) { DARABONBA_PTR_SET_VALUE(confluentInstanceComponentVO_, confluentInstanceComponentVO) };
          inline ConfluentInstanceComponents& setConfluentInstanceComponentVO(vector<ConfluentInstanceComponents::ConfluentInstanceComponentVO> && confluentInstanceComponentVO) { DARABONBA_PTR_SET_RVALUE(confluentInstanceComponentVO_, confluentInstanceComponentVO) };


        protected:
          shared_ptr<vector<ConfluentInstanceComponents::ConfluentInstanceComponentVO>> confluentInstanceComponentVO_ {};
        };

        class ConfluentConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfluentConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ConnectCU, connectCU_);
            DARABONBA_PTR_TO_JSON(ConnectReplica, connectReplica_);
            DARABONBA_PTR_TO_JSON(ControlCenterCU, controlCenterCU_);
            DARABONBA_PTR_TO_JSON(ControlCenterReplica, controlCenterReplica_);
            DARABONBA_PTR_TO_JSON(ControlCenterStorage, controlCenterStorage_);
            DARABONBA_PTR_TO_JSON(KafkaCU, kafkaCU_);
            DARABONBA_PTR_TO_JSON(KafkaReplica, kafkaReplica_);
            DARABONBA_PTR_TO_JSON(KafkaRestProxyCU, kafkaRestProxyCU_);
            DARABONBA_PTR_TO_JSON(KafkaRestProxyReplica, kafkaRestProxyReplica_);
            DARABONBA_PTR_TO_JSON(KafkaStorage, kafkaStorage_);
            DARABONBA_PTR_TO_JSON(KsqlCU, ksqlCU_);
            DARABONBA_PTR_TO_JSON(KsqlList, ksqlList_);
            DARABONBA_PTR_TO_JSON(KsqlReplica, ksqlReplica_);
            DARABONBA_PTR_TO_JSON(KsqlStorage, ksqlStorage_);
            DARABONBA_PTR_TO_JSON(SchemaRegistryCU, schemaRegistryCU_);
            DARABONBA_PTR_TO_JSON(SchemaRegistryReplica, schemaRegistryReplica_);
            DARABONBA_PTR_TO_JSON(ZooKeeperCU, zooKeeperCU_);
            DARABONBA_PTR_TO_JSON(ZooKeeperReplica, zooKeeperReplica_);
            DARABONBA_PTR_TO_JSON(ZooKeeperStorage, zooKeeperStorage_);
          };
          friend void from_json(const Darabonba::Json& j, ConfluentConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ConnectCU, connectCU_);
            DARABONBA_PTR_FROM_JSON(ConnectReplica, connectReplica_);
            DARABONBA_PTR_FROM_JSON(ControlCenterCU, controlCenterCU_);
            DARABONBA_PTR_FROM_JSON(ControlCenterReplica, controlCenterReplica_);
            DARABONBA_PTR_FROM_JSON(ControlCenterStorage, controlCenterStorage_);
            DARABONBA_PTR_FROM_JSON(KafkaCU, kafkaCU_);
            DARABONBA_PTR_FROM_JSON(KafkaReplica, kafkaReplica_);
            DARABONBA_PTR_FROM_JSON(KafkaRestProxyCU, kafkaRestProxyCU_);
            DARABONBA_PTR_FROM_JSON(KafkaRestProxyReplica, kafkaRestProxyReplica_);
            DARABONBA_PTR_FROM_JSON(KafkaStorage, kafkaStorage_);
            DARABONBA_PTR_FROM_JSON(KsqlCU, ksqlCU_);
            DARABONBA_PTR_FROM_JSON(KsqlList, ksqlList_);
            DARABONBA_PTR_FROM_JSON(KsqlReplica, ksqlReplica_);
            DARABONBA_PTR_FROM_JSON(KsqlStorage, ksqlStorage_);
            DARABONBA_PTR_FROM_JSON(SchemaRegistryCU, schemaRegistryCU_);
            DARABONBA_PTR_FROM_JSON(SchemaRegistryReplica, schemaRegistryReplica_);
            DARABONBA_PTR_FROM_JSON(ZooKeeperCU, zooKeeperCU_);
            DARABONBA_PTR_FROM_JSON(ZooKeeperReplica, zooKeeperReplica_);
            DARABONBA_PTR_FROM_JSON(ZooKeeperStorage, zooKeeperStorage_);
          };
          ConfluentConfig() = default ;
          ConfluentConfig(const ConfluentConfig &) = default ;
          ConfluentConfig(ConfluentConfig &&) = default ;
          ConfluentConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfluentConfig() = default ;
          ConfluentConfig& operator=(const ConfluentConfig &) = default ;
          ConfluentConfig& operator=(ConfluentConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class KsqlList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const KsqlList& obj) { 
              DARABONBA_PTR_TO_JSON(ConfluentInstanceComponentResourceVO, confluentInstanceComponentResourceVO_);
            };
            friend void from_json(const Darabonba::Json& j, KsqlList& obj) { 
              DARABONBA_PTR_FROM_JSON(ConfluentInstanceComponentResourceVO, confluentInstanceComponentResourceVO_);
            };
            KsqlList() = default ;
            KsqlList(const KsqlList &) = default ;
            KsqlList(KsqlList &&) = default ;
            KsqlList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~KsqlList() = default ;
            KsqlList& operator=(const KsqlList &) = default ;
            KsqlList& operator=(KsqlList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class ConfluentInstanceComponentResourceVO : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const ConfluentInstanceComponentResourceVO& obj) { 
                DARABONBA_PTR_TO_JSON(Cu, cu_);
                DARABONBA_PTR_TO_JSON(InternalId, internalId_);
                DARABONBA_PTR_TO_JSON(Replica, replica_);
                DARABONBA_PTR_TO_JSON(Storage, storage_);
                DARABONBA_PTR_TO_JSON(Type, type_);
              };
              friend void from_json(const Darabonba::Json& j, ConfluentInstanceComponentResourceVO& obj) { 
                DARABONBA_PTR_FROM_JSON(Cu, cu_);
                DARABONBA_PTR_FROM_JSON(InternalId, internalId_);
                DARABONBA_PTR_FROM_JSON(Replica, replica_);
                DARABONBA_PTR_FROM_JSON(Storage, storage_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
              };
              ConfluentInstanceComponentResourceVO() = default ;
              ConfluentInstanceComponentResourceVO(const ConfluentInstanceComponentResourceVO &) = default ;
              ConfluentInstanceComponentResourceVO(ConfluentInstanceComponentResourceVO &&) = default ;
              ConfluentInstanceComponentResourceVO(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~ConfluentInstanceComponentResourceVO() = default ;
              ConfluentInstanceComponentResourceVO& operator=(const ConfluentInstanceComponentResourceVO &) = default ;
              ConfluentInstanceComponentResourceVO& operator=(ConfluentInstanceComponentResourceVO &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->cu_ == nullptr
        && this->internalId_ == nullptr && this->replica_ == nullptr && this->storage_ == nullptr && this->type_ == nullptr; };
              // cu Field Functions 
              bool hasCu() const { return this->cu_ != nullptr;};
              void deleteCu() { this->cu_ = nullptr;};
              inline int32_t getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0) };
              inline ConfluentInstanceComponentResourceVO& setCu(int32_t cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


              // internalId Field Functions 
              bool hasInternalId() const { return this->internalId_ != nullptr;};
              void deleteInternalId() { this->internalId_ = nullptr;};
              inline string getInternalId() const { DARABONBA_PTR_GET_DEFAULT(internalId_, "") };
              inline ConfluentInstanceComponentResourceVO& setInternalId(string internalId) { DARABONBA_PTR_SET_VALUE(internalId_, internalId) };


              // replica Field Functions 
              bool hasReplica() const { return this->replica_ != nullptr;};
              void deleteReplica() { this->replica_ = nullptr;};
              inline int32_t getReplica() const { DARABONBA_PTR_GET_DEFAULT(replica_, 0) };
              inline ConfluentInstanceComponentResourceVO& setReplica(int32_t replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


              // storage Field Functions 
              bool hasStorage() const { return this->storage_ != nullptr;};
              void deleteStorage() { this->storage_ = nullptr;};
              inline int32_t getStorage() const { DARABONBA_PTR_GET_DEFAULT(storage_, 0) };
              inline ConfluentInstanceComponentResourceVO& setStorage(int32_t storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline ConfluentInstanceComponentResourceVO& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              shared_ptr<int32_t> cu_ {};
              shared_ptr<string> internalId_ {};
              shared_ptr<int32_t> replica_ {};
              shared_ptr<int32_t> storage_ {};
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->confluentInstanceComponentResourceVO_ == nullptr; };
            // confluentInstanceComponentResourceVO Field Functions 
            bool hasConfluentInstanceComponentResourceVO() const { return this->confluentInstanceComponentResourceVO_ != nullptr;};
            void deleteConfluentInstanceComponentResourceVO() { this->confluentInstanceComponentResourceVO_ = nullptr;};
            inline const vector<KsqlList::ConfluentInstanceComponentResourceVO> & getConfluentInstanceComponentResourceVO() const { DARABONBA_PTR_GET_CONST(confluentInstanceComponentResourceVO_, vector<KsqlList::ConfluentInstanceComponentResourceVO>) };
            inline vector<KsqlList::ConfluentInstanceComponentResourceVO> getConfluentInstanceComponentResourceVO() { DARABONBA_PTR_GET(confluentInstanceComponentResourceVO_, vector<KsqlList::ConfluentInstanceComponentResourceVO>) };
            inline KsqlList& setConfluentInstanceComponentResourceVO(const vector<KsqlList::ConfluentInstanceComponentResourceVO> & confluentInstanceComponentResourceVO) { DARABONBA_PTR_SET_VALUE(confluentInstanceComponentResourceVO_, confluentInstanceComponentResourceVO) };
            inline KsqlList& setConfluentInstanceComponentResourceVO(vector<KsqlList::ConfluentInstanceComponentResourceVO> && confluentInstanceComponentResourceVO) { DARABONBA_PTR_SET_RVALUE(confluentInstanceComponentResourceVO_, confluentInstanceComponentResourceVO) };


          protected:
            shared_ptr<vector<KsqlList::ConfluentInstanceComponentResourceVO>> confluentInstanceComponentResourceVO_ {};
          };

          virtual bool empty() const override { return this->connectCU_ == nullptr
        && this->connectReplica_ == nullptr && this->controlCenterCU_ == nullptr && this->controlCenterReplica_ == nullptr && this->controlCenterStorage_ == nullptr && this->kafkaCU_ == nullptr
        && this->kafkaReplica_ == nullptr && this->kafkaRestProxyCU_ == nullptr && this->kafkaRestProxyReplica_ == nullptr && this->kafkaStorage_ == nullptr && this->ksqlCU_ == nullptr
        && this->ksqlList_ == nullptr && this->ksqlReplica_ == nullptr && this->ksqlStorage_ == nullptr && this->schemaRegistryCU_ == nullptr && this->schemaRegistryReplica_ == nullptr
        && this->zooKeeperCU_ == nullptr && this->zooKeeperReplica_ == nullptr && this->zooKeeperStorage_ == nullptr; };
          // connectCU Field Functions 
          bool hasConnectCU() const { return this->connectCU_ != nullptr;};
          void deleteConnectCU() { this->connectCU_ = nullptr;};
          inline int32_t getConnectCU() const { DARABONBA_PTR_GET_DEFAULT(connectCU_, 0) };
          inline ConfluentConfig& setConnectCU(int32_t connectCU) { DARABONBA_PTR_SET_VALUE(connectCU_, connectCU) };


          // connectReplica Field Functions 
          bool hasConnectReplica() const { return this->connectReplica_ != nullptr;};
          void deleteConnectReplica() { this->connectReplica_ = nullptr;};
          inline int32_t getConnectReplica() const { DARABONBA_PTR_GET_DEFAULT(connectReplica_, 0) };
          inline ConfluentConfig& setConnectReplica(int32_t connectReplica) { DARABONBA_PTR_SET_VALUE(connectReplica_, connectReplica) };


          // controlCenterCU Field Functions 
          bool hasControlCenterCU() const { return this->controlCenterCU_ != nullptr;};
          void deleteControlCenterCU() { this->controlCenterCU_ = nullptr;};
          inline int32_t getControlCenterCU() const { DARABONBA_PTR_GET_DEFAULT(controlCenterCU_, 0) };
          inline ConfluentConfig& setControlCenterCU(int32_t controlCenterCU) { DARABONBA_PTR_SET_VALUE(controlCenterCU_, controlCenterCU) };


          // controlCenterReplica Field Functions 
          bool hasControlCenterReplica() const { return this->controlCenterReplica_ != nullptr;};
          void deleteControlCenterReplica() { this->controlCenterReplica_ = nullptr;};
          inline int32_t getControlCenterReplica() const { DARABONBA_PTR_GET_DEFAULT(controlCenterReplica_, 0) };
          inline ConfluentConfig& setControlCenterReplica(int32_t controlCenterReplica) { DARABONBA_PTR_SET_VALUE(controlCenterReplica_, controlCenterReplica) };


          // controlCenterStorage Field Functions 
          bool hasControlCenterStorage() const { return this->controlCenterStorage_ != nullptr;};
          void deleteControlCenterStorage() { this->controlCenterStorage_ = nullptr;};
          inline int32_t getControlCenterStorage() const { DARABONBA_PTR_GET_DEFAULT(controlCenterStorage_, 0) };
          inline ConfluentConfig& setControlCenterStorage(int32_t controlCenterStorage) { DARABONBA_PTR_SET_VALUE(controlCenterStorage_, controlCenterStorage) };


          // kafkaCU Field Functions 
          bool hasKafkaCU() const { return this->kafkaCU_ != nullptr;};
          void deleteKafkaCU() { this->kafkaCU_ = nullptr;};
          inline int32_t getKafkaCU() const { DARABONBA_PTR_GET_DEFAULT(kafkaCU_, 0) };
          inline ConfluentConfig& setKafkaCU(int32_t kafkaCU) { DARABONBA_PTR_SET_VALUE(kafkaCU_, kafkaCU) };


          // kafkaReplica Field Functions 
          bool hasKafkaReplica() const { return this->kafkaReplica_ != nullptr;};
          void deleteKafkaReplica() { this->kafkaReplica_ = nullptr;};
          inline int32_t getKafkaReplica() const { DARABONBA_PTR_GET_DEFAULT(kafkaReplica_, 0) };
          inline ConfluentConfig& setKafkaReplica(int32_t kafkaReplica) { DARABONBA_PTR_SET_VALUE(kafkaReplica_, kafkaReplica) };


          // kafkaRestProxyCU Field Functions 
          bool hasKafkaRestProxyCU() const { return this->kafkaRestProxyCU_ != nullptr;};
          void deleteKafkaRestProxyCU() { this->kafkaRestProxyCU_ = nullptr;};
          inline int32_t getKafkaRestProxyCU() const { DARABONBA_PTR_GET_DEFAULT(kafkaRestProxyCU_, 0) };
          inline ConfluentConfig& setKafkaRestProxyCU(int32_t kafkaRestProxyCU) { DARABONBA_PTR_SET_VALUE(kafkaRestProxyCU_, kafkaRestProxyCU) };


          // kafkaRestProxyReplica Field Functions 
          bool hasKafkaRestProxyReplica() const { return this->kafkaRestProxyReplica_ != nullptr;};
          void deleteKafkaRestProxyReplica() { this->kafkaRestProxyReplica_ = nullptr;};
          inline int32_t getKafkaRestProxyReplica() const { DARABONBA_PTR_GET_DEFAULT(kafkaRestProxyReplica_, 0) };
          inline ConfluentConfig& setKafkaRestProxyReplica(int32_t kafkaRestProxyReplica) { DARABONBA_PTR_SET_VALUE(kafkaRestProxyReplica_, kafkaRestProxyReplica) };


          // kafkaStorage Field Functions 
          bool hasKafkaStorage() const { return this->kafkaStorage_ != nullptr;};
          void deleteKafkaStorage() { this->kafkaStorage_ = nullptr;};
          inline int32_t getKafkaStorage() const { DARABONBA_PTR_GET_DEFAULT(kafkaStorage_, 0) };
          inline ConfluentConfig& setKafkaStorage(int32_t kafkaStorage) { DARABONBA_PTR_SET_VALUE(kafkaStorage_, kafkaStorage) };


          // ksqlCU Field Functions 
          bool hasKsqlCU() const { return this->ksqlCU_ != nullptr;};
          void deleteKsqlCU() { this->ksqlCU_ = nullptr;};
          inline int32_t getKsqlCU() const { DARABONBA_PTR_GET_DEFAULT(ksqlCU_, 0) };
          inline ConfluentConfig& setKsqlCU(int32_t ksqlCU) { DARABONBA_PTR_SET_VALUE(ksqlCU_, ksqlCU) };


          // ksqlList Field Functions 
          bool hasKsqlList() const { return this->ksqlList_ != nullptr;};
          void deleteKsqlList() { this->ksqlList_ = nullptr;};
          inline const ConfluentConfig::KsqlList & getKsqlList() const { DARABONBA_PTR_GET_CONST(ksqlList_, ConfluentConfig::KsqlList) };
          inline ConfluentConfig::KsqlList getKsqlList() { DARABONBA_PTR_GET(ksqlList_, ConfluentConfig::KsqlList) };
          inline ConfluentConfig& setKsqlList(const ConfluentConfig::KsqlList & ksqlList) { DARABONBA_PTR_SET_VALUE(ksqlList_, ksqlList) };
          inline ConfluentConfig& setKsqlList(ConfluentConfig::KsqlList && ksqlList) { DARABONBA_PTR_SET_RVALUE(ksqlList_, ksqlList) };


          // ksqlReplica Field Functions 
          bool hasKsqlReplica() const { return this->ksqlReplica_ != nullptr;};
          void deleteKsqlReplica() { this->ksqlReplica_ = nullptr;};
          inline int32_t getKsqlReplica() const { DARABONBA_PTR_GET_DEFAULT(ksqlReplica_, 0) };
          inline ConfluentConfig& setKsqlReplica(int32_t ksqlReplica) { DARABONBA_PTR_SET_VALUE(ksqlReplica_, ksqlReplica) };


          // ksqlStorage Field Functions 
          bool hasKsqlStorage() const { return this->ksqlStorage_ != nullptr;};
          void deleteKsqlStorage() { this->ksqlStorage_ = nullptr;};
          inline int32_t getKsqlStorage() const { DARABONBA_PTR_GET_DEFAULT(ksqlStorage_, 0) };
          inline ConfluentConfig& setKsqlStorage(int32_t ksqlStorage) { DARABONBA_PTR_SET_VALUE(ksqlStorage_, ksqlStorage) };


          // schemaRegistryCU Field Functions 
          bool hasSchemaRegistryCU() const { return this->schemaRegistryCU_ != nullptr;};
          void deleteSchemaRegistryCU() { this->schemaRegistryCU_ = nullptr;};
          inline int32_t getSchemaRegistryCU() const { DARABONBA_PTR_GET_DEFAULT(schemaRegistryCU_, 0) };
          inline ConfluentConfig& setSchemaRegistryCU(int32_t schemaRegistryCU) { DARABONBA_PTR_SET_VALUE(schemaRegistryCU_, schemaRegistryCU) };


          // schemaRegistryReplica Field Functions 
          bool hasSchemaRegistryReplica() const { return this->schemaRegistryReplica_ != nullptr;};
          void deleteSchemaRegistryReplica() { this->schemaRegistryReplica_ = nullptr;};
          inline int32_t getSchemaRegistryReplica() const { DARABONBA_PTR_GET_DEFAULT(schemaRegistryReplica_, 0) };
          inline ConfluentConfig& setSchemaRegistryReplica(int32_t schemaRegistryReplica) { DARABONBA_PTR_SET_VALUE(schemaRegistryReplica_, schemaRegistryReplica) };


          // zooKeeperCU Field Functions 
          bool hasZooKeeperCU() const { return this->zooKeeperCU_ != nullptr;};
          void deleteZooKeeperCU() { this->zooKeeperCU_ = nullptr;};
          inline int32_t getZooKeeperCU() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperCU_, 0) };
          inline ConfluentConfig& setZooKeeperCU(int32_t zooKeeperCU) { DARABONBA_PTR_SET_VALUE(zooKeeperCU_, zooKeeperCU) };


          // zooKeeperReplica Field Functions 
          bool hasZooKeeperReplica() const { return this->zooKeeperReplica_ != nullptr;};
          void deleteZooKeeperReplica() { this->zooKeeperReplica_ = nullptr;};
          inline int32_t getZooKeeperReplica() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperReplica_, 0) };
          inline ConfluentConfig& setZooKeeperReplica(int32_t zooKeeperReplica) { DARABONBA_PTR_SET_VALUE(zooKeeperReplica_, zooKeeperReplica) };


          // zooKeeperStorage Field Functions 
          bool hasZooKeeperStorage() const { return this->zooKeeperStorage_ != nullptr;};
          void deleteZooKeeperStorage() { this->zooKeeperStorage_ = nullptr;};
          inline int32_t getZooKeeperStorage() const { DARABONBA_PTR_GET_DEFAULT(zooKeeperStorage_, 0) };
          inline ConfluentConfig& setZooKeeperStorage(int32_t zooKeeperStorage) { DARABONBA_PTR_SET_VALUE(zooKeeperStorage_, zooKeeperStorage) };


        protected:
          shared_ptr<int32_t> connectCU_ {};
          shared_ptr<int32_t> connectReplica_ {};
          shared_ptr<int32_t> controlCenterCU_ {};
          shared_ptr<int32_t> controlCenterReplica_ {};
          shared_ptr<int32_t> controlCenterStorage_ {};
          shared_ptr<int32_t> kafkaCU_ {};
          shared_ptr<int32_t> kafkaReplica_ {};
          shared_ptr<int32_t> kafkaRestProxyCU_ {};
          shared_ptr<int32_t> kafkaRestProxyReplica_ {};
          shared_ptr<int32_t> kafkaStorage_ {};
          shared_ptr<int32_t> ksqlCU_ {};
          shared_ptr<ConfluentConfig::KsqlList> ksqlList_ {};
          shared_ptr<int32_t> ksqlReplica_ {};
          shared_ptr<int32_t> ksqlStorage_ {};
          shared_ptr<int32_t> schemaRegistryCU_ {};
          shared_ptr<int32_t> schemaRegistryReplica_ {};
          shared_ptr<int32_t> zooKeeperCU_ {};
          shared_ptr<int32_t> zooKeeperReplica_ {};
          shared_ptr<int32_t> zooKeeperStorage_ {};
        };

        virtual bool empty() const override { return this->allConfig_ == nullptr
        && this->autoCreateGroupEnable_ == nullptr && this->autoCreateTopicEnable_ == nullptr && this->backupZoneId_ == nullptr && this->confluentConfig_ == nullptr && this->confluentInstanceComponents_ == nullptr
        && this->createTime_ == nullptr && this->defaultPartitionNum_ == nullptr && this->deployType_ == nullptr && this->diskSize_ == nullptr && this->diskType_ == nullptr
        && this->domainEndpoint_ == nullptr && this->eipMax_ == nullptr && this->endPoint_ == nullptr && this->expiredTime_ == nullptr && this->instanceId_ == nullptr
        && this->ioMax_ == nullptr && this->ioMaxRead_ == nullptr && this->ioMaxSpec_ == nullptr && this->ioMaxWrite_ == nullptr && this->kmsKeyId_ == nullptr
        && this->msgRetain_ == nullptr && this->name_ == nullptr && this->paidType_ == nullptr && this->recommendedPartitionCount_ == nullptr && this->regionId_ == nullptr
        && this->reservedPublishCapacity_ == nullptr && this->reservedSubscribeCapacity_ == nullptr && this->resourceGroupId_ == nullptr && this->saslDomainEndpoint_ == nullptr && this->saslEndPoint_ == nullptr
        && this->scheduledRetirement_ == nullptr && this->securityGroup_ == nullptr && this->series_ == nullptr && this->serviceStatus_ == nullptr && this->specType_ == nullptr
        && this->sslDomainEndpoint_ == nullptr && this->sslEndPoint_ == nullptr && this->standardZoneId_ == nullptr && this->tags_ == nullptr && this->topicNumLimit_ == nullptr
        && this->upgradeServiceDetailInfo_ == nullptr && this->usedGroupCount_ == nullptr && this->usedPartitionCount_ == nullptr && this->usedTopicCount_ == nullptr && this->vSwitchId_ == nullptr
        && this->vSwitchIds_ == nullptr && this->viewInstanceStatusCode_ == nullptr && this->vpcId_ == nullptr && this->vpcSaslDomainEndpoint_ == nullptr && this->vpcSaslEndPoint_ == nullptr
        && this->zoneId_ == nullptr; };
        // allConfig Field Functions 
        bool hasAllConfig() const { return this->allConfig_ != nullptr;};
        void deleteAllConfig() { this->allConfig_ = nullptr;};
        inline string getAllConfig() const { DARABONBA_PTR_GET_DEFAULT(allConfig_, "") };
        inline InstanceVO& setAllConfig(string allConfig) { DARABONBA_PTR_SET_VALUE(allConfig_, allConfig) };


        // autoCreateGroupEnable Field Functions 
        bool hasAutoCreateGroupEnable() const { return this->autoCreateGroupEnable_ != nullptr;};
        void deleteAutoCreateGroupEnable() { this->autoCreateGroupEnable_ = nullptr;};
        inline bool getAutoCreateGroupEnable() const { DARABONBA_PTR_GET_DEFAULT(autoCreateGroupEnable_, false) };
        inline InstanceVO& setAutoCreateGroupEnable(bool autoCreateGroupEnable) { DARABONBA_PTR_SET_VALUE(autoCreateGroupEnable_, autoCreateGroupEnable) };


        // autoCreateTopicEnable Field Functions 
        bool hasAutoCreateTopicEnable() const { return this->autoCreateTopicEnable_ != nullptr;};
        void deleteAutoCreateTopicEnable() { this->autoCreateTopicEnable_ = nullptr;};
        inline bool getAutoCreateTopicEnable() const { DARABONBA_PTR_GET_DEFAULT(autoCreateTopicEnable_, false) };
        inline InstanceVO& setAutoCreateTopicEnable(bool autoCreateTopicEnable) { DARABONBA_PTR_SET_VALUE(autoCreateTopicEnable_, autoCreateTopicEnable) };


        // backupZoneId Field Functions 
        bool hasBackupZoneId() const { return this->backupZoneId_ != nullptr;};
        void deleteBackupZoneId() { this->backupZoneId_ = nullptr;};
        inline string getBackupZoneId() const { DARABONBA_PTR_GET_DEFAULT(backupZoneId_, "") };
        inline InstanceVO& setBackupZoneId(string backupZoneId) { DARABONBA_PTR_SET_VALUE(backupZoneId_, backupZoneId) };


        // confluentConfig Field Functions 
        bool hasConfluentConfig() const { return this->confluentConfig_ != nullptr;};
        void deleteConfluentConfig() { this->confluentConfig_ = nullptr;};
        inline const InstanceVO::ConfluentConfig & getConfluentConfig() const { DARABONBA_PTR_GET_CONST(confluentConfig_, InstanceVO::ConfluentConfig) };
        inline InstanceVO::ConfluentConfig getConfluentConfig() { DARABONBA_PTR_GET(confluentConfig_, InstanceVO::ConfluentConfig) };
        inline InstanceVO& setConfluentConfig(const InstanceVO::ConfluentConfig & confluentConfig) { DARABONBA_PTR_SET_VALUE(confluentConfig_, confluentConfig) };
        inline InstanceVO& setConfluentConfig(InstanceVO::ConfluentConfig && confluentConfig) { DARABONBA_PTR_SET_RVALUE(confluentConfig_, confluentConfig) };


        // confluentInstanceComponents Field Functions 
        bool hasConfluentInstanceComponents() const { return this->confluentInstanceComponents_ != nullptr;};
        void deleteConfluentInstanceComponents() { this->confluentInstanceComponents_ = nullptr;};
        inline const InstanceVO::ConfluentInstanceComponents & getConfluentInstanceComponents() const { DARABONBA_PTR_GET_CONST(confluentInstanceComponents_, InstanceVO::ConfluentInstanceComponents) };
        inline InstanceVO::ConfluentInstanceComponents getConfluentInstanceComponents() { DARABONBA_PTR_GET(confluentInstanceComponents_, InstanceVO::ConfluentInstanceComponents) };
        inline InstanceVO& setConfluentInstanceComponents(const InstanceVO::ConfluentInstanceComponents & confluentInstanceComponents) { DARABONBA_PTR_SET_VALUE(confluentInstanceComponents_, confluentInstanceComponents) };
        inline InstanceVO& setConfluentInstanceComponents(InstanceVO::ConfluentInstanceComponents && confluentInstanceComponents) { DARABONBA_PTR_SET_RVALUE(confluentInstanceComponents_, confluentInstanceComponents) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline InstanceVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // defaultPartitionNum Field Functions 
        bool hasDefaultPartitionNum() const { return this->defaultPartitionNum_ != nullptr;};
        void deleteDefaultPartitionNum() { this->defaultPartitionNum_ = nullptr;};
        inline int32_t getDefaultPartitionNum() const { DARABONBA_PTR_GET_DEFAULT(defaultPartitionNum_, 0) };
        inline InstanceVO& setDefaultPartitionNum(int32_t defaultPartitionNum) { DARABONBA_PTR_SET_VALUE(defaultPartitionNum_, defaultPartitionNum) };


        // deployType Field Functions 
        bool hasDeployType() const { return this->deployType_ != nullptr;};
        void deleteDeployType() { this->deployType_ = nullptr;};
        inline int32_t getDeployType() const { DARABONBA_PTR_GET_DEFAULT(deployType_, 0) };
        inline InstanceVO& setDeployType(int32_t deployType) { DARABONBA_PTR_SET_VALUE(deployType_, deployType) };


        // diskSize Field Functions 
        bool hasDiskSize() const { return this->diskSize_ != nullptr;};
        void deleteDiskSize() { this->diskSize_ = nullptr;};
        inline int32_t getDiskSize() const { DARABONBA_PTR_GET_DEFAULT(diskSize_, 0) };
        inline InstanceVO& setDiskSize(int32_t diskSize) { DARABONBA_PTR_SET_VALUE(diskSize_, diskSize) };


        // diskType Field Functions 
        bool hasDiskType() const { return this->diskType_ != nullptr;};
        void deleteDiskType() { this->diskType_ = nullptr;};
        inline int32_t getDiskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, 0) };
        inline InstanceVO& setDiskType(int32_t diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


        // domainEndpoint Field Functions 
        bool hasDomainEndpoint() const { return this->domainEndpoint_ != nullptr;};
        void deleteDomainEndpoint() { this->domainEndpoint_ = nullptr;};
        inline string getDomainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(domainEndpoint_, "") };
        inline InstanceVO& setDomainEndpoint(string domainEndpoint) { DARABONBA_PTR_SET_VALUE(domainEndpoint_, domainEndpoint) };


        // eipMax Field Functions 
        bool hasEipMax() const { return this->eipMax_ != nullptr;};
        void deleteEipMax() { this->eipMax_ = nullptr;};
        inline int32_t getEipMax() const { DARABONBA_PTR_GET_DEFAULT(eipMax_, 0) };
        inline InstanceVO& setEipMax(int32_t eipMax) { DARABONBA_PTR_SET_VALUE(eipMax_, eipMax) };


        // endPoint Field Functions 
        bool hasEndPoint() const { return this->endPoint_ != nullptr;};
        void deleteEndPoint() { this->endPoint_ = nullptr;};
        inline string getEndPoint() const { DARABONBA_PTR_GET_DEFAULT(endPoint_, "") };
        inline InstanceVO& setEndPoint(string endPoint) { DARABONBA_PTR_SET_VALUE(endPoint_, endPoint) };


        // expiredTime Field Functions 
        bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
        void deleteExpiredTime() { this->expiredTime_ = nullptr;};
        inline int64_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
        inline InstanceVO& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline InstanceVO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ioMax Field Functions 
        bool hasIoMax() const { return this->ioMax_ != nullptr;};
        void deleteIoMax() { this->ioMax_ = nullptr;};
        inline int32_t getIoMax() const { DARABONBA_PTR_GET_DEFAULT(ioMax_, 0) };
        inline InstanceVO& setIoMax(int32_t ioMax) { DARABONBA_PTR_SET_VALUE(ioMax_, ioMax) };


        // ioMaxRead Field Functions 
        bool hasIoMaxRead() const { return this->ioMaxRead_ != nullptr;};
        void deleteIoMaxRead() { this->ioMaxRead_ = nullptr;};
        inline int32_t getIoMaxRead() const { DARABONBA_PTR_GET_DEFAULT(ioMaxRead_, 0) };
        inline InstanceVO& setIoMaxRead(int32_t ioMaxRead) { DARABONBA_PTR_SET_VALUE(ioMaxRead_, ioMaxRead) };


        // ioMaxSpec Field Functions 
        bool hasIoMaxSpec() const { return this->ioMaxSpec_ != nullptr;};
        void deleteIoMaxSpec() { this->ioMaxSpec_ = nullptr;};
        inline string getIoMaxSpec() const { DARABONBA_PTR_GET_DEFAULT(ioMaxSpec_, "") };
        inline InstanceVO& setIoMaxSpec(string ioMaxSpec) { DARABONBA_PTR_SET_VALUE(ioMaxSpec_, ioMaxSpec) };


        // ioMaxWrite Field Functions 
        bool hasIoMaxWrite() const { return this->ioMaxWrite_ != nullptr;};
        void deleteIoMaxWrite() { this->ioMaxWrite_ = nullptr;};
        inline int32_t getIoMaxWrite() const { DARABONBA_PTR_GET_DEFAULT(ioMaxWrite_, 0) };
        inline InstanceVO& setIoMaxWrite(int32_t ioMaxWrite) { DARABONBA_PTR_SET_VALUE(ioMaxWrite_, ioMaxWrite) };


        // kmsKeyId Field Functions 
        bool hasKmsKeyId() const { return this->kmsKeyId_ != nullptr;};
        void deleteKmsKeyId() { this->kmsKeyId_ = nullptr;};
        inline string getKmsKeyId() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyId_, "") };
        inline InstanceVO& setKmsKeyId(string kmsKeyId) { DARABONBA_PTR_SET_VALUE(kmsKeyId_, kmsKeyId) };


        // msgRetain Field Functions 
        bool hasMsgRetain() const { return this->msgRetain_ != nullptr;};
        void deleteMsgRetain() { this->msgRetain_ = nullptr;};
        inline int32_t getMsgRetain() const { DARABONBA_PTR_GET_DEFAULT(msgRetain_, 0) };
        inline InstanceVO& setMsgRetain(int32_t msgRetain) { DARABONBA_PTR_SET_VALUE(msgRetain_, msgRetain) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline InstanceVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // paidType Field Functions 
        bool hasPaidType() const { return this->paidType_ != nullptr;};
        void deletePaidType() { this->paidType_ = nullptr;};
        inline int32_t getPaidType() const { DARABONBA_PTR_GET_DEFAULT(paidType_, 0) };
        inline InstanceVO& setPaidType(int32_t paidType) { DARABONBA_PTR_SET_VALUE(paidType_, paidType) };


        // recommendedPartitionCount Field Functions 
        bool hasRecommendedPartitionCount() const { return this->recommendedPartitionCount_ != nullptr;};
        void deleteRecommendedPartitionCount() { this->recommendedPartitionCount_ = nullptr;};
        inline int32_t getRecommendedPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(recommendedPartitionCount_, 0) };
        inline InstanceVO& setRecommendedPartitionCount(int32_t recommendedPartitionCount) { DARABONBA_PTR_SET_VALUE(recommendedPartitionCount_, recommendedPartitionCount) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline InstanceVO& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // reservedPublishCapacity Field Functions 
        bool hasReservedPublishCapacity() const { return this->reservedPublishCapacity_ != nullptr;};
        void deleteReservedPublishCapacity() { this->reservedPublishCapacity_ = nullptr;};
        inline int32_t getReservedPublishCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedPublishCapacity_, 0) };
        inline InstanceVO& setReservedPublishCapacity(int32_t reservedPublishCapacity) { DARABONBA_PTR_SET_VALUE(reservedPublishCapacity_, reservedPublishCapacity) };


        // reservedSubscribeCapacity Field Functions 
        bool hasReservedSubscribeCapacity() const { return this->reservedSubscribeCapacity_ != nullptr;};
        void deleteReservedSubscribeCapacity() { this->reservedSubscribeCapacity_ = nullptr;};
        inline int32_t getReservedSubscribeCapacity() const { DARABONBA_PTR_GET_DEFAULT(reservedSubscribeCapacity_, 0) };
        inline InstanceVO& setReservedSubscribeCapacity(int32_t reservedSubscribeCapacity) { DARABONBA_PTR_SET_VALUE(reservedSubscribeCapacity_, reservedSubscribeCapacity) };


        // resourceGroupId Field Functions 
        bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
        void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
        inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
        inline InstanceVO& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


        // saslDomainEndpoint Field Functions 
        bool hasSaslDomainEndpoint() const { return this->saslDomainEndpoint_ != nullptr;};
        void deleteSaslDomainEndpoint() { this->saslDomainEndpoint_ = nullptr;};
        inline string getSaslDomainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(saslDomainEndpoint_, "") };
        inline InstanceVO& setSaslDomainEndpoint(string saslDomainEndpoint) { DARABONBA_PTR_SET_VALUE(saslDomainEndpoint_, saslDomainEndpoint) };


        // saslEndPoint Field Functions 
        bool hasSaslEndPoint() const { return this->saslEndPoint_ != nullptr;};
        void deleteSaslEndPoint() { this->saslEndPoint_ = nullptr;};
        inline string getSaslEndPoint() const { DARABONBA_PTR_GET_DEFAULT(saslEndPoint_, "") };
        inline InstanceVO& setSaslEndPoint(string saslEndPoint) { DARABONBA_PTR_SET_VALUE(saslEndPoint_, saslEndPoint) };


        // scheduledRetirement Field Functions 
        bool hasScheduledRetirement() const { return this->scheduledRetirement_ != nullptr;};
        void deleteScheduledRetirement() { this->scheduledRetirement_ = nullptr;};
        inline bool getScheduledRetirement() const { DARABONBA_PTR_GET_DEFAULT(scheduledRetirement_, false) };
        inline InstanceVO& setScheduledRetirement(bool scheduledRetirement) { DARABONBA_PTR_SET_VALUE(scheduledRetirement_, scheduledRetirement) };


        // securityGroup Field Functions 
        bool hasSecurityGroup() const { return this->securityGroup_ != nullptr;};
        void deleteSecurityGroup() { this->securityGroup_ = nullptr;};
        inline string getSecurityGroup() const { DARABONBA_PTR_GET_DEFAULT(securityGroup_, "") };
        inline InstanceVO& setSecurityGroup(string securityGroup) { DARABONBA_PTR_SET_VALUE(securityGroup_, securityGroup) };


        // series Field Functions 
        bool hasSeries() const { return this->series_ != nullptr;};
        void deleteSeries() { this->series_ = nullptr;};
        inline string getSeries() const { DARABONBA_PTR_GET_DEFAULT(series_, "") };
        inline InstanceVO& setSeries(string series) { DARABONBA_PTR_SET_VALUE(series_, series) };


        // serviceStatus Field Functions 
        bool hasServiceStatus() const { return this->serviceStatus_ != nullptr;};
        void deleteServiceStatus() { this->serviceStatus_ = nullptr;};
        inline int32_t getServiceStatus() const { DARABONBA_PTR_GET_DEFAULT(serviceStatus_, 0) };
        inline InstanceVO& setServiceStatus(int32_t serviceStatus) { DARABONBA_PTR_SET_VALUE(serviceStatus_, serviceStatus) };


        // specType Field Functions 
        bool hasSpecType() const { return this->specType_ != nullptr;};
        void deleteSpecType() { this->specType_ = nullptr;};
        inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
        inline InstanceVO& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


        // sslDomainEndpoint Field Functions 
        bool hasSslDomainEndpoint() const { return this->sslDomainEndpoint_ != nullptr;};
        void deleteSslDomainEndpoint() { this->sslDomainEndpoint_ = nullptr;};
        inline string getSslDomainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(sslDomainEndpoint_, "") };
        inline InstanceVO& setSslDomainEndpoint(string sslDomainEndpoint) { DARABONBA_PTR_SET_VALUE(sslDomainEndpoint_, sslDomainEndpoint) };


        // sslEndPoint Field Functions 
        bool hasSslEndPoint() const { return this->sslEndPoint_ != nullptr;};
        void deleteSslEndPoint() { this->sslEndPoint_ = nullptr;};
        inline string getSslEndPoint() const { DARABONBA_PTR_GET_DEFAULT(sslEndPoint_, "") };
        inline InstanceVO& setSslEndPoint(string sslEndPoint) { DARABONBA_PTR_SET_VALUE(sslEndPoint_, sslEndPoint) };


        // standardZoneId Field Functions 
        bool hasStandardZoneId() const { return this->standardZoneId_ != nullptr;};
        void deleteStandardZoneId() { this->standardZoneId_ = nullptr;};
        inline string getStandardZoneId() const { DARABONBA_PTR_GET_DEFAULT(standardZoneId_, "") };
        inline InstanceVO& setStandardZoneId(string standardZoneId) { DARABONBA_PTR_SET_VALUE(standardZoneId_, standardZoneId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const InstanceVO::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, InstanceVO::Tags) };
        inline InstanceVO::Tags getTags() { DARABONBA_PTR_GET(tags_, InstanceVO::Tags) };
        inline InstanceVO& setTags(const InstanceVO::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline InstanceVO& setTags(InstanceVO::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // topicNumLimit Field Functions 
        bool hasTopicNumLimit() const { return this->topicNumLimit_ != nullptr;};
        void deleteTopicNumLimit() { this->topicNumLimit_ = nullptr;};
        inline int32_t getTopicNumLimit() const { DARABONBA_PTR_GET_DEFAULT(topicNumLimit_, 0) };
        inline InstanceVO& setTopicNumLimit(int32_t topicNumLimit) { DARABONBA_PTR_SET_VALUE(topicNumLimit_, topicNumLimit) };


        // upgradeServiceDetailInfo Field Functions 
        bool hasUpgradeServiceDetailInfo() const { return this->upgradeServiceDetailInfo_ != nullptr;};
        void deleteUpgradeServiceDetailInfo() { this->upgradeServiceDetailInfo_ = nullptr;};
        inline const InstanceVO::UpgradeServiceDetailInfo & getUpgradeServiceDetailInfo() const { DARABONBA_PTR_GET_CONST(upgradeServiceDetailInfo_, InstanceVO::UpgradeServiceDetailInfo) };
        inline InstanceVO::UpgradeServiceDetailInfo getUpgradeServiceDetailInfo() { DARABONBA_PTR_GET(upgradeServiceDetailInfo_, InstanceVO::UpgradeServiceDetailInfo) };
        inline InstanceVO& setUpgradeServiceDetailInfo(const InstanceVO::UpgradeServiceDetailInfo & upgradeServiceDetailInfo) { DARABONBA_PTR_SET_VALUE(upgradeServiceDetailInfo_, upgradeServiceDetailInfo) };
        inline InstanceVO& setUpgradeServiceDetailInfo(InstanceVO::UpgradeServiceDetailInfo && upgradeServiceDetailInfo) { DARABONBA_PTR_SET_RVALUE(upgradeServiceDetailInfo_, upgradeServiceDetailInfo) };


        // usedGroupCount Field Functions 
        bool hasUsedGroupCount() const { return this->usedGroupCount_ != nullptr;};
        void deleteUsedGroupCount() { this->usedGroupCount_ = nullptr;};
        inline int32_t getUsedGroupCount() const { DARABONBA_PTR_GET_DEFAULT(usedGroupCount_, 0) };
        inline InstanceVO& setUsedGroupCount(int32_t usedGroupCount) { DARABONBA_PTR_SET_VALUE(usedGroupCount_, usedGroupCount) };


        // usedPartitionCount Field Functions 
        bool hasUsedPartitionCount() const { return this->usedPartitionCount_ != nullptr;};
        void deleteUsedPartitionCount() { this->usedPartitionCount_ = nullptr;};
        inline int32_t getUsedPartitionCount() const { DARABONBA_PTR_GET_DEFAULT(usedPartitionCount_, 0) };
        inline InstanceVO& setUsedPartitionCount(int32_t usedPartitionCount) { DARABONBA_PTR_SET_VALUE(usedPartitionCount_, usedPartitionCount) };


        // usedTopicCount Field Functions 
        bool hasUsedTopicCount() const { return this->usedTopicCount_ != nullptr;};
        void deleteUsedTopicCount() { this->usedTopicCount_ = nullptr;};
        inline int32_t getUsedTopicCount() const { DARABONBA_PTR_GET_DEFAULT(usedTopicCount_, 0) };
        inline InstanceVO& setUsedTopicCount(int32_t usedTopicCount) { DARABONBA_PTR_SET_VALUE(usedTopicCount_, usedTopicCount) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline InstanceVO& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // vSwitchIds Field Functions 
        bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
        void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
        inline const InstanceVO::VSwitchIds & getVSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, InstanceVO::VSwitchIds) };
        inline InstanceVO::VSwitchIds getVSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, InstanceVO::VSwitchIds) };
        inline InstanceVO& setVSwitchIds(const InstanceVO::VSwitchIds & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
        inline InstanceVO& setVSwitchIds(InstanceVO::VSwitchIds && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


        // viewInstanceStatusCode Field Functions 
        bool hasViewInstanceStatusCode() const { return this->viewInstanceStatusCode_ != nullptr;};
        void deleteViewInstanceStatusCode() { this->viewInstanceStatusCode_ = nullptr;};
        inline int32_t getViewInstanceStatusCode() const { DARABONBA_PTR_GET_DEFAULT(viewInstanceStatusCode_, 0) };
        inline InstanceVO& setViewInstanceStatusCode(int32_t viewInstanceStatusCode) { DARABONBA_PTR_SET_VALUE(viewInstanceStatusCode_, viewInstanceStatusCode) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline InstanceVO& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcSaslDomainEndpoint Field Functions 
        bool hasVpcSaslDomainEndpoint() const { return this->vpcSaslDomainEndpoint_ != nullptr;};
        void deleteVpcSaslDomainEndpoint() { this->vpcSaslDomainEndpoint_ = nullptr;};
        inline string getVpcSaslDomainEndpoint() const { DARABONBA_PTR_GET_DEFAULT(vpcSaslDomainEndpoint_, "") };
        inline InstanceVO& setVpcSaslDomainEndpoint(string vpcSaslDomainEndpoint) { DARABONBA_PTR_SET_VALUE(vpcSaslDomainEndpoint_, vpcSaslDomainEndpoint) };


        // vpcSaslEndPoint Field Functions 
        bool hasVpcSaslEndPoint() const { return this->vpcSaslEndPoint_ != nullptr;};
        void deleteVpcSaslEndPoint() { this->vpcSaslEndPoint_ = nullptr;};
        inline string getVpcSaslEndPoint() const { DARABONBA_PTR_GET_DEFAULT(vpcSaslEndPoint_, "") };
        inline InstanceVO& setVpcSaslEndPoint(string vpcSaslEndPoint) { DARABONBA_PTR_SET_VALUE(vpcSaslEndPoint_, vpcSaslEndPoint) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline InstanceVO& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> allConfig_ {};
        shared_ptr<bool> autoCreateGroupEnable_ {};
        shared_ptr<bool> autoCreateTopicEnable_ {};
        shared_ptr<string> backupZoneId_ {};
        shared_ptr<InstanceVO::ConfluentConfig> confluentConfig_ {};
        shared_ptr<InstanceVO::ConfluentInstanceComponents> confluentInstanceComponents_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<int32_t> defaultPartitionNum_ {};
        shared_ptr<int32_t> deployType_ {};
        shared_ptr<int32_t> diskSize_ {};
        shared_ptr<int32_t> diskType_ {};
        shared_ptr<string> domainEndpoint_ {};
        shared_ptr<int32_t> eipMax_ {};
        shared_ptr<string> endPoint_ {};
        shared_ptr<int64_t> expiredTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> ioMax_ {};
        shared_ptr<int32_t> ioMaxRead_ {};
        shared_ptr<string> ioMaxSpec_ {};
        shared_ptr<int32_t> ioMaxWrite_ {};
        shared_ptr<string> kmsKeyId_ {};
        shared_ptr<int32_t> msgRetain_ {};
        shared_ptr<string> name_ {};
        shared_ptr<int32_t> paidType_ {};
        shared_ptr<int32_t> recommendedPartitionCount_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<int32_t> reservedPublishCapacity_ {};
        shared_ptr<int32_t> reservedSubscribeCapacity_ {};
        shared_ptr<string> resourceGroupId_ {};
        shared_ptr<string> saslDomainEndpoint_ {};
        shared_ptr<string> saslEndPoint_ {};
        shared_ptr<bool> scheduledRetirement_ {};
        shared_ptr<string> securityGroup_ {};
        shared_ptr<string> series_ {};
        shared_ptr<int32_t> serviceStatus_ {};
        shared_ptr<string> specType_ {};
        shared_ptr<string> sslDomainEndpoint_ {};
        shared_ptr<string> sslEndPoint_ {};
        shared_ptr<string> standardZoneId_ {};
        shared_ptr<InstanceVO::Tags> tags_ {};
        shared_ptr<int32_t> topicNumLimit_ {};
        shared_ptr<InstanceVO::UpgradeServiceDetailInfo> upgradeServiceDetailInfo_ {};
        shared_ptr<int32_t> usedGroupCount_ {};
        shared_ptr<int32_t> usedPartitionCount_ {};
        shared_ptr<int32_t> usedTopicCount_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<InstanceVO::VSwitchIds> vSwitchIds_ {};
        shared_ptr<int32_t> viewInstanceStatusCode_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcSaslDomainEndpoint_ {};
        shared_ptr<string> vpcSaslEndPoint_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->instanceVO_ == nullptr; };
      // instanceVO Field Functions 
      bool hasInstanceVO() const { return this->instanceVO_ != nullptr;};
      void deleteInstanceVO() { this->instanceVO_ = nullptr;};
      inline const vector<InstanceList::InstanceVO> & getInstanceVO() const { DARABONBA_PTR_GET_CONST(instanceVO_, vector<InstanceList::InstanceVO>) };
      inline vector<InstanceList::InstanceVO> getInstanceVO() { DARABONBA_PTR_GET(instanceVO_, vector<InstanceList::InstanceVO>) };
      inline InstanceList& setInstanceVO(const vector<InstanceList::InstanceVO> & instanceVO) { DARABONBA_PTR_SET_VALUE(instanceVO_, instanceVO) };
      inline InstanceList& setInstanceVO(vector<InstanceList::InstanceVO> && instanceVO) { DARABONBA_PTR_SET_RVALUE(instanceVO_, instanceVO) };


    protected:
      shared_ptr<vector<InstanceList::InstanceVO>> instanceVO_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline GetInstanceListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const GetInstanceListResponseBody::InstanceList & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, GetInstanceListResponseBody::InstanceList) };
    inline GetInstanceListResponseBody::InstanceList getInstanceList() { DARABONBA_PTR_GET(instanceList_, GetInstanceListResponseBody::InstanceList) };
    inline GetInstanceListResponseBody& setInstanceList(const GetInstanceListResponseBody::InstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline GetInstanceListResponseBody& setInstanceList(GetInstanceListResponseBody::InstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetInstanceListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetInstanceListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetInstanceListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned. The HTTP status code 200 indicates that the call is successful.
    shared_ptr<int32_t> code_ {};
    shared_ptr<GetInstanceListResponseBody::InstanceList> instanceList_ {};
    // The message returned.
    shared_ptr<string> message_ {};
    // The ID of the region.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
