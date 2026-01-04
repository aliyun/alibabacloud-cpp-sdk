// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeARMServerInstancesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeARMServerInstancesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Servers, servers_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeARMServerInstancesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Servers, servers_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeARMServerInstancesResponseBody() = default ;
    DescribeARMServerInstancesResponseBody(const DescribeARMServerInstancesResponseBody &) = default ;
    DescribeARMServerInstancesResponseBody(DescribeARMServerInstancesResponseBody &&) = default ;
    DescribeARMServerInstancesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeARMServerInstancesResponseBody() = default ;
    DescribeARMServerInstancesResponseBody& operator=(const DescribeARMServerInstancesResponseBody &) = default ;
    DescribeARMServerInstancesResponseBody& operator=(DescribeARMServerInstancesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Servers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Servers& obj) { 
        DARABONBA_PTR_TO_JSON(AICInstances, AICInstances_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_TO_JSON(LatestAction, latestAction_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(PayType, payType_);
        DARABONBA_PTR_TO_JSON(ServerId, serverId_);
        DARABONBA_PTR_TO_JSON(SpecName, specName_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, Servers& obj) { 
        DARABONBA_PTR_FROM_JSON(AICInstances, AICInstances_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
        DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
        DARABONBA_PTR_FROM_JSON(LatestAction, latestAction_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(PayType, payType_);
        DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
        DARABONBA_PTR_FROM_JSON(SpecName, specName_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      Servers() = default ;
      Servers(const Servers &) = default ;
      Servers(Servers &&) = default ;
      Servers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Servers() = default ;
      Servers& operator=(const Servers &) = default ;
      Servers& operator=(Servers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

      class AICInstances : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AICInstances& obj) { 
          DARABONBA_PTR_TO_JSON(Frequency, frequency_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LatestAction, latestAction_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(NetworkAttributes, networkAttributes_);
          DARABONBA_PTR_TO_JSON(Resolution, resolution_);
          DARABONBA_PTR_TO_JSON(SdgDeployInfo, sdgDeployInfo_);
          DARABONBA_PTR_TO_JSON(Spec, spec_);
          DARABONBA_PTR_TO_JSON(State, state_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AICInstances& obj) { 
          DARABONBA_PTR_FROM_JSON(Frequency, frequency_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LatestAction, latestAction_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(NetworkAttributes, networkAttributes_);
          DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
          DARABONBA_PTR_FROM_JSON(SdgDeployInfo, sdgDeployInfo_);
          DARABONBA_PTR_FROM_JSON(Spec, spec_);
          DARABONBA_PTR_FROM_JSON(State, state_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AICInstances() = default ;
        AICInstances(const AICInstances &) = default ;
        AICInstances(AICInstances &&) = default ;
        AICInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AICInstances() = default ;
        AICInstances& operator=(const AICInstances &) = default ;
        AICInstances& operator=(AICInstances &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SdgDeployInfo : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SdgDeployInfo& obj) { 
            DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
            DARABONBA_PTR_TO_JSON(Status, status_);
          };
          friend void from_json(const Darabonba::Json& j, SdgDeployInfo& obj) { 
            DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
          };
          SdgDeployInfo() = default ;
          SdgDeployInfo(const SdgDeployInfo &) = default ;
          SdgDeployInfo(SdgDeployInfo &&) = default ;
          SdgDeployInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SdgDeployInfo() = default ;
          SdgDeployInfo& operator=(const SdgDeployInfo &) = default ;
          SdgDeployInfo& operator=(SdgDeployInfo &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->SDGId_ == nullptr
        && this->status_ == nullptr; };
          // SDGId Field Functions 
          bool hasSDGId() const { return this->SDGId_ != nullptr;};
          void deleteSDGId() { this->SDGId_ = nullptr;};
          inline string getSDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
          inline SdgDeployInfo& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline SdgDeployInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        protected:
          // The ID of the SDG.
          shared_ptr<string> SDGId_ {};
          // The deployment status of the SDG. Valid values:
          // 
          // *   **sdg_deploying**
          // *   **failed**
          // *   **success**
          shared_ptr<string> status_ {};
        };

        class NetworkAttributes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NetworkAttributes& obj) { 
            DARABONBA_PTR_TO_JSON(IpAddress, ipAddress_);
            DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          };
          friend void from_json(const Darabonba::Json& j, NetworkAttributes& obj) { 
            DARABONBA_PTR_FROM_JSON(IpAddress, ipAddress_);
            DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          };
          NetworkAttributes() = default ;
          NetworkAttributes(const NetworkAttributes &) = default ;
          NetworkAttributes(NetworkAttributes &&) = default ;
          NetworkAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NetworkAttributes() = default ;
          NetworkAttributes& operator=(const NetworkAttributes &) = default ;
          NetworkAttributes& operator=(NetworkAttributes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->ipAddress_ == nullptr
        && this->networkId_ == nullptr && this->vSwitchId_ == nullptr; };
          // ipAddress Field Functions 
          bool hasIpAddress() const { return this->ipAddress_ != nullptr;};
          void deleteIpAddress() { this->ipAddress_ = nullptr;};
          inline string getIpAddress() const { DARABONBA_PTR_GET_DEFAULT(ipAddress_, "") };
          inline NetworkAttributes& setIpAddress(string ipAddress) { DARABONBA_PTR_SET_VALUE(ipAddress_, ipAddress) };


          // networkId Field Functions 
          bool hasNetworkId() const { return this->networkId_ != nullptr;};
          void deleteNetworkId() { this->networkId_ = nullptr;};
          inline string getNetworkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
          inline NetworkAttributes& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline NetworkAttributes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        protected:
          // The IP address of the AIC instance.
          shared_ptr<string> ipAddress_ {};
          // The network ID of the AIC instance.
          shared_ptr<string> networkId_ {};
          // The vSwitch ID of the AIC instance.
          shared_ptr<string> vSwitchId_ {};
        };

        virtual bool empty() const override { return this->frequency_ == nullptr
        && this->imageId_ == nullptr && this->instanceId_ == nullptr && this->latestAction_ == nullptr && this->name_ == nullptr && this->networkAttributes_ == nullptr
        && this->resolution_ == nullptr && this->sdgDeployInfo_ == nullptr && this->spec_ == nullptr && this->state_ == nullptr && this->status_ == nullptr; };
        // frequency Field Functions 
        bool hasFrequency() const { return this->frequency_ != nullptr;};
        void deleteFrequency() { this->frequency_ = nullptr;};
        inline int64_t getFrequency() const { DARABONBA_PTR_GET_DEFAULT(frequency_, 0L) };
        inline AICInstances& setFrequency(int64_t frequency) { DARABONBA_PTR_SET_VALUE(frequency_, frequency) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline AICInstances& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline AICInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // latestAction Field Functions 
        bool hasLatestAction() const { return this->latestAction_ != nullptr;};
        void deleteLatestAction() { this->latestAction_ = nullptr;};
        inline string getLatestAction() const { DARABONBA_PTR_GET_DEFAULT(latestAction_, "") };
        inline AICInstances& setLatestAction(string latestAction) { DARABONBA_PTR_SET_VALUE(latestAction_, latestAction) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AICInstances& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // networkAttributes Field Functions 
        bool hasNetworkAttributes() const { return this->networkAttributes_ != nullptr;};
        void deleteNetworkAttributes() { this->networkAttributes_ = nullptr;};
        inline const AICInstances::NetworkAttributes & getNetworkAttributes() const { DARABONBA_PTR_GET_CONST(networkAttributes_, AICInstances::NetworkAttributes) };
        inline AICInstances::NetworkAttributes getNetworkAttributes() { DARABONBA_PTR_GET(networkAttributes_, AICInstances::NetworkAttributes) };
        inline AICInstances& setNetworkAttributes(const AICInstances::NetworkAttributes & networkAttributes) { DARABONBA_PTR_SET_VALUE(networkAttributes_, networkAttributes) };
        inline AICInstances& setNetworkAttributes(AICInstances::NetworkAttributes && networkAttributes) { DARABONBA_PTR_SET_RVALUE(networkAttributes_, networkAttributes) };


        // resolution Field Functions 
        bool hasResolution() const { return this->resolution_ != nullptr;};
        void deleteResolution() { this->resolution_ = nullptr;};
        inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
        inline AICInstances& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


        // sdgDeployInfo Field Functions 
        bool hasSdgDeployInfo() const { return this->sdgDeployInfo_ != nullptr;};
        void deleteSdgDeployInfo() { this->sdgDeployInfo_ = nullptr;};
        inline const AICInstances::SdgDeployInfo & getSdgDeployInfo() const { DARABONBA_PTR_GET_CONST(sdgDeployInfo_, AICInstances::SdgDeployInfo) };
        inline AICInstances::SdgDeployInfo getSdgDeployInfo() { DARABONBA_PTR_GET(sdgDeployInfo_, AICInstances::SdgDeployInfo) };
        inline AICInstances& setSdgDeployInfo(const AICInstances::SdgDeployInfo & sdgDeployInfo) { DARABONBA_PTR_SET_VALUE(sdgDeployInfo_, sdgDeployInfo) };
        inline AICInstances& setSdgDeployInfo(AICInstances::SdgDeployInfo && sdgDeployInfo) { DARABONBA_PTR_SET_RVALUE(sdgDeployInfo_, sdgDeployInfo) };


        // spec Field Functions 
        bool hasSpec() const { return this->spec_ != nullptr;};
        void deleteSpec() { this->spec_ = nullptr;};
        inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
        inline AICInstances& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline AICInstances& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AICInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The refresh rate of the AIC instance. Unit: Hz.
        shared_ptr<int64_t> frequency_ {};
        // The ID of the AIC image.
        shared_ptr<string> imageId_ {};
        // The ID of the AIC instance.
        shared_ptr<string> instanceId_ {};
        // The operation that was most recently performed.
        shared_ptr<string> latestAction_ {};
        // The name of the container.
        shared_ptr<string> name_ {};
        // The network attributes of the AIC instance.
        shared_ptr<AICInstances::NetworkAttributes> networkAttributes_ {};
        // The resolution of the AIC instance.
        shared_ptr<string> resolution_ {};
        // The information about the shared data group (SDG) that is deployed on the AIC instance.
        shared_ptr<AICInstances::SdgDeployInfo> sdgDeployInfo_ {};
        // The specification of the AIC instance.
        shared_ptr<string> spec_ {};
        // The operation status of the AIC instance. Valid values:
        // 
        // *   **success**
        // *   **failed**
        // *   **creating**
        // *   **releasing**
        // *   **rebooting**
        // *   **reseting**
        shared_ptr<string> state_ {};
        // The running status of the AIC instance. Valid values:
        // 
        // *   **running**
        // *   **pending**
        // *   **terminating**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->AICInstances_ == nullptr
        && this->creationTime_ == nullptr && this->ensRegionId_ == nullptr && this->expiredTime_ == nullptr && this->latestAction_ == nullptr && this->name_ == nullptr
        && this->namespace_ == nullptr && this->payType_ == nullptr && this->serverId_ == nullptr && this->specName_ == nullptr && this->state_ == nullptr
        && this->status_ == nullptr && this->tags_ == nullptr; };
      // AICInstances Field Functions 
      bool hasAICInstances() const { return this->AICInstances_ != nullptr;};
      void deleteAICInstances() { this->AICInstances_ = nullptr;};
      inline const vector<Servers::AICInstances> & getAICInstances() const { DARABONBA_PTR_GET_CONST(AICInstances_, vector<Servers::AICInstances>) };
      inline vector<Servers::AICInstances> getAICInstances() { DARABONBA_PTR_GET(AICInstances_, vector<Servers::AICInstances>) };
      inline Servers& setAICInstances(const vector<Servers::AICInstances> & aICInstances) { DARABONBA_PTR_SET_VALUE(AICInstances_, aICInstances) };
      inline Servers& setAICInstances(vector<Servers::AICInstances> && aICInstances) { DARABONBA_PTR_SET_RVALUE(AICInstances_, aICInstances) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline Servers& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // ensRegionId Field Functions 
      bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
      void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
      inline string getEnsRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
      inline Servers& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


      // expiredTime Field Functions 
      bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
      void deleteExpiredTime() { this->expiredTime_ = nullptr;};
      inline string getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
      inline Servers& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


      // latestAction Field Functions 
      bool hasLatestAction() const { return this->latestAction_ != nullptr;};
      void deleteLatestAction() { this->latestAction_ = nullptr;};
      inline string getLatestAction() const { DARABONBA_PTR_GET_DEFAULT(latestAction_, "") };
      inline Servers& setLatestAction(string latestAction) { DARABONBA_PTR_SET_VALUE(latestAction_, latestAction) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Servers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Servers& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // payType Field Functions 
      bool hasPayType() const { return this->payType_ != nullptr;};
      void deletePayType() { this->payType_ = nullptr;};
      inline string getPayType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
      inline Servers& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


      // serverId Field Functions 
      bool hasServerId() const { return this->serverId_ != nullptr;};
      void deleteServerId() { this->serverId_ = nullptr;};
      inline string getServerId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
      inline Servers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


      // specName Field Functions 
      bool hasSpecName() const { return this->specName_ != nullptr;};
      void deleteSpecName() { this->specName_ = nullptr;};
      inline string getSpecName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
      inline Servers& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline Servers& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Servers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<Servers::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Servers::Tags>) };
      inline vector<Servers::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<Servers::Tags>) };
      inline Servers& setTags(const vector<Servers::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline Servers& setTags(vector<Servers::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The information about the AIC instances.
      shared_ptr<vector<Servers::AICInstances>> AICInstances_ {};
      // The time when the instance was created.
      shared_ptr<string> creationTime_ {};
      // The ID of the ENS node.
      shared_ptr<string> ensRegionId_ {};
      // The time when the instance expires.
      shared_ptr<string> expiredTime_ {};
      // The operation that was most recently performed.
      shared_ptr<string> latestAction_ {};
      // The name of the server.
      shared_ptr<string> name_ {};
      // The namespace of the cluster to which the server belongs.
      shared_ptr<string> namespace_ {};
      // The billing method.
      shared_ptr<string> payType_ {};
      // The ID of the server.
      shared_ptr<string> serverId_ {};
      // The server specification.
      shared_ptr<string> specName_ {};
      // The operation status of the server. Valid values:
      // 
      // *   **success**
      // *   **failed**
      // *   **creating**
      // *   **releasing**
      // *   **rebooting**
      // *   **upgrading**
      shared_ptr<string> state_ {};
      // The running status of the server. Valid values:
      // 
      // *   **running**
      // *   **stopping**
      // *   **down**
      // *   **starting**
      shared_ptr<string> status_ {};
      shared_ptr<vector<Servers::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->servers_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeARMServerInstancesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeARMServerInstancesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeARMServerInstancesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // servers Field Functions 
    bool hasServers() const { return this->servers_ != nullptr;};
    void deleteServers() { this->servers_ = nullptr;};
    inline const vector<DescribeARMServerInstancesResponseBody::Servers> & getServers() const { DARABONBA_PTR_GET_CONST(servers_, vector<DescribeARMServerInstancesResponseBody::Servers>) };
    inline vector<DescribeARMServerInstancesResponseBody::Servers> getServers() { DARABONBA_PTR_GET(servers_, vector<DescribeARMServerInstancesResponseBody::Servers>) };
    inline DescribeARMServerInstancesResponseBody& setServers(const vector<DescribeARMServerInstancesResponseBody::Servers> & servers) { DARABONBA_PTR_SET_VALUE(servers_, servers) };
    inline DescribeARMServerInstancesResponseBody& setServers(vector<DescribeARMServerInstancesResponseBody::Servers> && servers) { DARABONBA_PTR_SET_RVALUE(servers_, servers) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeARMServerInstancesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the servers and the AIC instances.
    shared_ptr<vector<DescribeARMServerInstancesResponseBody::Servers>> servers_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
