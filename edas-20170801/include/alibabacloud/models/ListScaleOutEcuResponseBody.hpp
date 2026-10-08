// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSCALEOUTECURESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSCALEOUTECURESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListScaleOutEcuResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListScaleOutEcuResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EcuInfoList, ecuInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListScaleOutEcuResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EcuInfoList, ecuInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListScaleOutEcuResponseBody() = default ;
    ListScaleOutEcuResponseBody(const ListScaleOutEcuResponseBody &) = default ;
    ListScaleOutEcuResponseBody(ListScaleOutEcuResponseBody &&) = default ;
    ListScaleOutEcuResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListScaleOutEcuResponseBody() = default ;
    ListScaleOutEcuResponseBody& operator=(const ListScaleOutEcuResponseBody &) = default ;
    ListScaleOutEcuResponseBody& operator=(ListScaleOutEcuResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcuInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcuInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(EcuInfo, ecuInfo_);
      };
      friend void from_json(const Darabonba::Json& j, EcuInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(EcuInfo, ecuInfo_);
      };
      EcuInfoList() = default ;
      EcuInfoList(const EcuInfoList &) = default ;
      EcuInfoList(EcuInfoList &&) = default ;
      EcuInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcuInfoList() = default ;
      EcuInfoList& operator=(const EcuInfoList &) = default ;
      EcuInfoList& operator=(EcuInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EcuInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcuInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableCpu, availableCpu_);
          DARABONBA_PTR_TO_JSON(AvailableMem, availableMem_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DockerEnv, dockerEnv_);
          DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
          DARABONBA_PTR_TO_JSON(HeartbeatTime, heartbeatTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IpAddr, ipAddr_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Online, online_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, EcuInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableCpu, availableCpu_);
          DARABONBA_PTR_FROM_JSON(AvailableMem, availableMem_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DockerEnv, dockerEnv_);
          DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
          DARABONBA_PTR_FROM_JSON(HeartbeatTime, heartbeatTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IpAddr, ipAddr_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Online, online_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        EcuInfo() = default ;
        EcuInfo(const EcuInfo &) = default ;
        EcuInfo(EcuInfo &&) = default ;
        EcuInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcuInfo() = default ;
        EcuInfo& operator=(const EcuInfo &) = default ;
        EcuInfo& operator=(EcuInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableCpu_ == nullptr
        && this->availableMem_ == nullptr && this->createTime_ == nullptr && this->dockerEnv_ == nullptr && this->ecuId_ == nullptr && this->heartbeatTime_ == nullptr
        && this->instanceId_ == nullptr && this->ipAddr_ == nullptr && this->name_ == nullptr && this->online_ == nullptr && this->regionId_ == nullptr
        && this->updateTime_ == nullptr && this->userId_ == nullptr && this->vpcId_ == nullptr && this->zoneId_ == nullptr; };
        // availableCpu Field Functions 
        bool hasAvailableCpu() const { return this->availableCpu_ != nullptr;};
        void deleteAvailableCpu() { this->availableCpu_ = nullptr;};
        inline int32_t getAvailableCpu() const { DARABONBA_PTR_GET_DEFAULT(availableCpu_, 0) };
        inline EcuInfo& setAvailableCpu(int32_t availableCpu) { DARABONBA_PTR_SET_VALUE(availableCpu_, availableCpu) };


        // availableMem Field Functions 
        bool hasAvailableMem() const { return this->availableMem_ != nullptr;};
        void deleteAvailableMem() { this->availableMem_ = nullptr;};
        inline int32_t getAvailableMem() const { DARABONBA_PTR_GET_DEFAULT(availableMem_, 0) };
        inline EcuInfo& setAvailableMem(int32_t availableMem) { DARABONBA_PTR_SET_VALUE(availableMem_, availableMem) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline EcuInfo& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dockerEnv Field Functions 
        bool hasDockerEnv() const { return this->dockerEnv_ != nullptr;};
        void deleteDockerEnv() { this->dockerEnv_ = nullptr;};
        inline bool getDockerEnv() const { DARABONBA_PTR_GET_DEFAULT(dockerEnv_, false) };
        inline EcuInfo& setDockerEnv(bool dockerEnv) { DARABONBA_PTR_SET_VALUE(dockerEnv_, dockerEnv) };


        // ecuId Field Functions 
        bool hasEcuId() const { return this->ecuId_ != nullptr;};
        void deleteEcuId() { this->ecuId_ = nullptr;};
        inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
        inline EcuInfo& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


        // heartbeatTime Field Functions 
        bool hasHeartbeatTime() const { return this->heartbeatTime_ != nullptr;};
        void deleteHeartbeatTime() { this->heartbeatTime_ = nullptr;};
        inline int64_t getHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTime_, 0L) };
        inline EcuInfo& setHeartbeatTime(int64_t heartbeatTime) { DARABONBA_PTR_SET_VALUE(heartbeatTime_, heartbeatTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EcuInfo& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ipAddr Field Functions 
        bool hasIpAddr() const { return this->ipAddr_ != nullptr;};
        void deleteIpAddr() { this->ipAddr_ = nullptr;};
        inline string getIpAddr() const { DARABONBA_PTR_GET_DEFAULT(ipAddr_, "") };
        inline EcuInfo& setIpAddr(string ipAddr) { DARABONBA_PTR_SET_VALUE(ipAddr_, ipAddr) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EcuInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // online Field Functions 
        bool hasOnline() const { return this->online_ != nullptr;};
        void deleteOnline() { this->online_ = nullptr;};
        inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
        inline EcuInfo& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EcuInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline EcuInfo& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline EcuInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline EcuInfo& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline EcuInfo& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<int32_t> availableCpu_ {};
        shared_ptr<int32_t> availableMem_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<bool> dockerEnv_ {};
        shared_ptr<string> ecuId_ {};
        shared_ptr<int64_t> heartbeatTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> ipAddr_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> online_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->ecuInfo_ == nullptr; };
      // ecuInfo Field Functions 
      bool hasEcuInfo() const { return this->ecuInfo_ != nullptr;};
      void deleteEcuInfo() { this->ecuInfo_ = nullptr;};
      inline const vector<EcuInfoList::EcuInfo> & getEcuInfo() const { DARABONBA_PTR_GET_CONST(ecuInfo_, vector<EcuInfoList::EcuInfo>) };
      inline vector<EcuInfoList::EcuInfo> getEcuInfo() { DARABONBA_PTR_GET(ecuInfo_, vector<EcuInfoList::EcuInfo>) };
      inline EcuInfoList& setEcuInfo(const vector<EcuInfoList::EcuInfo> & ecuInfo) { DARABONBA_PTR_SET_VALUE(ecuInfo_, ecuInfo) };
      inline EcuInfoList& setEcuInfo(vector<EcuInfoList::EcuInfo> && ecuInfo) { DARABONBA_PTR_SET_RVALUE(ecuInfo_, ecuInfo) };


    protected:
      shared_ptr<vector<EcuInfoList::EcuInfo>> ecuInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ecuInfoList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListScaleOutEcuResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ecuInfoList Field Functions 
    bool hasEcuInfoList() const { return this->ecuInfoList_ != nullptr;};
    void deleteEcuInfoList() { this->ecuInfoList_ = nullptr;};
    inline const ListScaleOutEcuResponseBody::EcuInfoList & getEcuInfoList() const { DARABONBA_PTR_GET_CONST(ecuInfoList_, ListScaleOutEcuResponseBody::EcuInfoList) };
    inline ListScaleOutEcuResponseBody::EcuInfoList getEcuInfoList() { DARABONBA_PTR_GET(ecuInfoList_, ListScaleOutEcuResponseBody::EcuInfoList) };
    inline ListScaleOutEcuResponseBody& setEcuInfoList(const ListScaleOutEcuResponseBody::EcuInfoList & ecuInfoList) { DARABONBA_PTR_SET_VALUE(ecuInfoList_, ecuInfoList) };
    inline ListScaleOutEcuResponseBody& setEcuInfoList(ListScaleOutEcuResponseBody::EcuInfoList && ecuInfoList) { DARABONBA_PTR_SET_RVALUE(ecuInfoList_, ecuInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListScaleOutEcuResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListScaleOutEcuResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListScaleOutEcuResponseBody::EcuInfoList> ecuInfoList_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
