// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMIGRATEECULISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYMIGRATEECULISTRESPONSEBODY_HPP_
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
  class QueryMigrateEcuListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMigrateEcuListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EcuEntityList, ecuEntityList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMigrateEcuListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EcuEntityList, ecuEntityList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryMigrateEcuListResponseBody() = default ;
    QueryMigrateEcuListResponseBody(const QueryMigrateEcuListResponseBody &) = default ;
    QueryMigrateEcuListResponseBody(QueryMigrateEcuListResponseBody &&) = default ;
    QueryMigrateEcuListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMigrateEcuListResponseBody() = default ;
    QueryMigrateEcuListResponseBody& operator=(const QueryMigrateEcuListResponseBody &) = default ;
    QueryMigrateEcuListResponseBody& operator=(QueryMigrateEcuListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcuEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcuEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(EcuEntity, ecuEntity_);
      };
      friend void from_json(const Darabonba::Json& j, EcuEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(EcuEntity, ecuEntity_);
      };
      EcuEntityList() = default ;
      EcuEntityList(const EcuEntityList &) = default ;
      EcuEntityList(EcuEntityList &&) = default ;
      EcuEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcuEntityList() = default ;
      EcuEntityList& operator=(const EcuEntityList &) = default ;
      EcuEntityList& operator=(EcuEntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EcuEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcuEntity& obj) { 
          DARABONBA_PTR_TO_JSON(AvailableCpu, availableCpu_);
          DARABONBA_PTR_TO_JSON(AvailableMem, availableMem_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DockerEnv, dockerEnv_);
          DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
          DARABONBA_PTR_TO_JSON(HeartbeatTime, heartbeatTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(IpAddr, ipAddr_);
          DARABONBA_PTR_TO_JSON(Mem, mem_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Online, online_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_TO_JSON(UserId, userId_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, EcuEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailableCpu, availableCpu_);
          DARABONBA_PTR_FROM_JSON(AvailableMem, availableMem_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DockerEnv, dockerEnv_);
          DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
          DARABONBA_PTR_FROM_JSON(HeartbeatTime, heartbeatTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(IpAddr, ipAddr_);
          DARABONBA_PTR_FROM_JSON(Mem, mem_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Online, online_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
          DARABONBA_PTR_FROM_JSON(UserId, userId_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        EcuEntity() = default ;
        EcuEntity(const EcuEntity &) = default ;
        EcuEntity(EcuEntity &&) = default ;
        EcuEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcuEntity() = default ;
        EcuEntity& operator=(const EcuEntity &) = default ;
        EcuEntity& operator=(EcuEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availableCpu_ == nullptr
        && this->availableMem_ == nullptr && this->cpu_ == nullptr && this->createTime_ == nullptr && this->dockerEnv_ == nullptr && this->ecuId_ == nullptr
        && this->heartbeatTime_ == nullptr && this->instanceId_ == nullptr && this->ipAddr_ == nullptr && this->mem_ == nullptr && this->name_ == nullptr
        && this->online_ == nullptr && this->regionId_ == nullptr && this->updateTime_ == nullptr && this->userId_ == nullptr && this->vpcId_ == nullptr
        && this->zoneId_ == nullptr; };
        // availableCpu Field Functions 
        bool hasAvailableCpu() const { return this->availableCpu_ != nullptr;};
        void deleteAvailableCpu() { this->availableCpu_ = nullptr;};
        inline int32_t getAvailableCpu() const { DARABONBA_PTR_GET_DEFAULT(availableCpu_, 0) };
        inline EcuEntity& setAvailableCpu(int32_t availableCpu) { DARABONBA_PTR_SET_VALUE(availableCpu_, availableCpu) };


        // availableMem Field Functions 
        bool hasAvailableMem() const { return this->availableMem_ != nullptr;};
        void deleteAvailableMem() { this->availableMem_ = nullptr;};
        inline int32_t getAvailableMem() const { DARABONBA_PTR_GET_DEFAULT(availableMem_, 0) };
        inline EcuEntity& setAvailableMem(int32_t availableMem) { DARABONBA_PTR_SET_VALUE(availableMem_, availableMem) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline EcuEntity& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline EcuEntity& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dockerEnv Field Functions 
        bool hasDockerEnv() const { return this->dockerEnv_ != nullptr;};
        void deleteDockerEnv() { this->dockerEnv_ = nullptr;};
        inline bool getDockerEnv() const { DARABONBA_PTR_GET_DEFAULT(dockerEnv_, false) };
        inline EcuEntity& setDockerEnv(bool dockerEnv) { DARABONBA_PTR_SET_VALUE(dockerEnv_, dockerEnv) };


        // ecuId Field Functions 
        bool hasEcuId() const { return this->ecuId_ != nullptr;};
        void deleteEcuId() { this->ecuId_ = nullptr;};
        inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
        inline EcuEntity& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


        // heartbeatTime Field Functions 
        bool hasHeartbeatTime() const { return this->heartbeatTime_ != nullptr;};
        void deleteHeartbeatTime() { this->heartbeatTime_ = nullptr;};
        inline int64_t getHeartbeatTime() const { DARABONBA_PTR_GET_DEFAULT(heartbeatTime_, 0L) };
        inline EcuEntity& setHeartbeatTime(int64_t heartbeatTime) { DARABONBA_PTR_SET_VALUE(heartbeatTime_, heartbeatTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EcuEntity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // ipAddr Field Functions 
        bool hasIpAddr() const { return this->ipAddr_ != nullptr;};
        void deleteIpAddr() { this->ipAddr_ = nullptr;};
        inline string getIpAddr() const { DARABONBA_PTR_GET_DEFAULT(ipAddr_, "") };
        inline EcuEntity& setIpAddr(string ipAddr) { DARABONBA_PTR_SET_VALUE(ipAddr_, ipAddr) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
        inline EcuEntity& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline EcuEntity& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // online Field Functions 
        bool hasOnline() const { return this->online_ != nullptr;};
        void deleteOnline() { this->online_ = nullptr;};
        inline bool getOnline() const { DARABONBA_PTR_GET_DEFAULT(online_, false) };
        inline EcuEntity& setOnline(bool online) { DARABONBA_PTR_SET_VALUE(online_, online) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EcuEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline EcuEntity& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


        // userId Field Functions 
        bool hasUserId() const { return this->userId_ != nullptr;};
        void deleteUserId() { this->userId_ = nullptr;};
        inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
        inline EcuEntity& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline EcuEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline EcuEntity& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<int32_t> availableCpu_ {};
        shared_ptr<int32_t> availableMem_ {};
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<bool> dockerEnv_ {};
        shared_ptr<string> ecuId_ {};
        shared_ptr<int64_t> heartbeatTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> ipAddr_ {};
        shared_ptr<int32_t> mem_ {};
        shared_ptr<string> name_ {};
        shared_ptr<bool> online_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<int64_t> updateTime_ {};
        shared_ptr<string> userId_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->ecuEntity_ == nullptr; };
      // ecuEntity Field Functions 
      bool hasEcuEntity() const { return this->ecuEntity_ != nullptr;};
      void deleteEcuEntity() { this->ecuEntity_ = nullptr;};
      inline const vector<EcuEntityList::EcuEntity> & getEcuEntity() const { DARABONBA_PTR_GET_CONST(ecuEntity_, vector<EcuEntityList::EcuEntity>) };
      inline vector<EcuEntityList::EcuEntity> getEcuEntity() { DARABONBA_PTR_GET(ecuEntity_, vector<EcuEntityList::EcuEntity>) };
      inline EcuEntityList& setEcuEntity(const vector<EcuEntityList::EcuEntity> & ecuEntity) { DARABONBA_PTR_SET_VALUE(ecuEntity_, ecuEntity) };
      inline EcuEntityList& setEcuEntity(vector<EcuEntityList::EcuEntity> && ecuEntity) { DARABONBA_PTR_SET_RVALUE(ecuEntity_, ecuEntity) };


    protected:
      shared_ptr<vector<EcuEntityList::EcuEntity>> ecuEntity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ecuEntityList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryMigrateEcuListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ecuEntityList Field Functions 
    bool hasEcuEntityList() const { return this->ecuEntityList_ != nullptr;};
    void deleteEcuEntityList() { this->ecuEntityList_ = nullptr;};
    inline const QueryMigrateEcuListResponseBody::EcuEntityList & getEcuEntityList() const { DARABONBA_PTR_GET_CONST(ecuEntityList_, QueryMigrateEcuListResponseBody::EcuEntityList) };
    inline QueryMigrateEcuListResponseBody::EcuEntityList getEcuEntityList() { DARABONBA_PTR_GET(ecuEntityList_, QueryMigrateEcuListResponseBody::EcuEntityList) };
    inline QueryMigrateEcuListResponseBody& setEcuEntityList(const QueryMigrateEcuListResponseBody::EcuEntityList & ecuEntityList) { DARABONBA_PTR_SET_VALUE(ecuEntityList_, ecuEntityList) };
    inline QueryMigrateEcuListResponseBody& setEcuEntityList(QueryMigrateEcuListResponseBody::EcuEntityList && ecuEntityList) { DARABONBA_PTR_SET_RVALUE(ecuEntityList_, ecuEntityList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryMigrateEcuListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryMigrateEcuListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    shared_ptr<QueryMigrateEcuListResponseBody::EcuEntityList> ecuEntityList_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
