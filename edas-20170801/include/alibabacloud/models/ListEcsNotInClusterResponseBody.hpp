// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTECSNOTINCLUSTERRESPONSEBODY_HPP_
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
  class ListEcsNotInClusterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEcsNotInClusterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(EcsEntityList, ecsEntityList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEcsNotInClusterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(EcsEntityList, ecsEntityList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEcsNotInClusterResponseBody() = default ;
    ListEcsNotInClusterResponseBody(const ListEcsNotInClusterResponseBody &) = default ;
    ListEcsNotInClusterResponseBody(ListEcsNotInClusterResponseBody &&) = default ;
    ListEcsNotInClusterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEcsNotInClusterResponseBody() = default ;
    ListEcsNotInClusterResponseBody& operator=(const ListEcsNotInClusterResponseBody &) = default ;
    ListEcsNotInClusterResponseBody& operator=(ListEcsNotInClusterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EcsEntityList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EcsEntityList& obj) { 
        DARABONBA_PTR_TO_JSON(EcsEntity, ecsEntity_);
      };
      friend void from_json(const Darabonba::Json& j, EcsEntityList& obj) { 
        DARABONBA_PTR_FROM_JSON(EcsEntity, ecsEntity_);
      };
      EcsEntityList() = default ;
      EcsEntityList(const EcsEntityList &) = default ;
      EcsEntityList(EcsEntityList &&) = default ;
      EcsEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EcsEntityList() = default ;
      EcsEntityList& operator=(const EcsEntityList &) = default ;
      EcsEntityList& operator=(EcsEntityList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EcsEntity : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EcsEntity& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Eip, eip_);
          DARABONBA_PTR_TO_JSON(Expired, expired_);
          DARABONBA_PTR_TO_JSON(InnerIp, innerIp_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(Mem, mem_);
          DARABONBA_PTR_TO_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
          DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
        };
        friend void from_json(const Darabonba::Json& j, EcsEntity& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Eip, eip_);
          DARABONBA_PTR_FROM_JSON(Expired, expired_);
          DARABONBA_PTR_FROM_JSON(InnerIp, innerIp_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(Mem, mem_);
          DARABONBA_PTR_FROM_JSON(PrivateIp, privateIp_);
          DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
          DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
        };
        EcsEntity() = default ;
        EcsEntity(const EcsEntity &) = default ;
        EcsEntity(EcsEntity &&) = default ;
        EcsEntity(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EcsEntity() = default ;
        EcsEntity& operator=(const EcsEntity &) = default ;
        EcsEntity& operator=(EcsEntity &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->eip_ == nullptr && this->expired_ == nullptr && this->innerIp_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr
        && this->mem_ == nullptr && this->privateIp_ == nullptr && this->publicIp_ == nullptr && this->regionId_ == nullptr && this->status_ == nullptr
        && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline EcsEntity& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // eip Field Functions 
        bool hasEip() const { return this->eip_ != nullptr;};
        void deleteEip() { this->eip_ = nullptr;};
        inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
        inline EcsEntity& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline EcsEntity& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // innerIp Field Functions 
        bool hasInnerIp() const { return this->innerIp_ != nullptr;};
        void deleteInnerIp() { this->innerIp_ = nullptr;};
        inline string getInnerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
        inline EcsEntity& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline EcsEntity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline EcsEntity& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
        inline EcsEntity& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline EcsEntity& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // publicIp Field Functions 
        bool hasPublicIp() const { return this->publicIp_ != nullptr;};
        void deletePublicIp() { this->publicIp_ = nullptr;};
        inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
        inline EcsEntity& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline EcsEntity& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline EcsEntity& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline EcsEntity& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline EcsEntity& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<string> eip_ {};
        shared_ptr<bool> expired_ {};
        shared_ptr<string> innerIp_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<string> instanceName_ {};
        shared_ptr<int32_t> mem_ {};
        shared_ptr<string> privateIp_ {};
        shared_ptr<string> publicIp_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> vpcId_ {};
        shared_ptr<string> vpcName_ {};
      };

      virtual bool empty() const override { return this->ecsEntity_ == nullptr; };
      // ecsEntity Field Functions 
      bool hasEcsEntity() const { return this->ecsEntity_ != nullptr;};
      void deleteEcsEntity() { this->ecsEntity_ = nullptr;};
      inline const vector<EcsEntityList::EcsEntity> & getEcsEntity() const { DARABONBA_PTR_GET_CONST(ecsEntity_, vector<EcsEntityList::EcsEntity>) };
      inline vector<EcsEntityList::EcsEntity> getEcsEntity() { DARABONBA_PTR_GET(ecsEntity_, vector<EcsEntityList::EcsEntity>) };
      inline EcsEntityList& setEcsEntity(const vector<EcsEntityList::EcsEntity> & ecsEntity) { DARABONBA_PTR_SET_VALUE(ecsEntity_, ecsEntity) };
      inline EcsEntityList& setEcsEntity(vector<EcsEntityList::EcsEntity> && ecsEntity) { DARABONBA_PTR_SET_RVALUE(ecsEntity_, ecsEntity) };


    protected:
      shared_ptr<vector<EcsEntityList::EcsEntity>> ecsEntity_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->ecsEntityList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListEcsNotInClusterResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // ecsEntityList Field Functions 
    bool hasEcsEntityList() const { return this->ecsEntityList_ != nullptr;};
    void deleteEcsEntityList() { this->ecsEntityList_ = nullptr;};
    inline const ListEcsNotInClusterResponseBody::EcsEntityList & getEcsEntityList() const { DARABONBA_PTR_GET_CONST(ecsEntityList_, ListEcsNotInClusterResponseBody::EcsEntityList) };
    inline ListEcsNotInClusterResponseBody::EcsEntityList getEcsEntityList() { DARABONBA_PTR_GET(ecsEntityList_, ListEcsNotInClusterResponseBody::EcsEntityList) };
    inline ListEcsNotInClusterResponseBody& setEcsEntityList(const ListEcsNotInClusterResponseBody::EcsEntityList & ecsEntityList) { DARABONBA_PTR_SET_VALUE(ecsEntityList_, ecsEntityList) };
    inline ListEcsNotInClusterResponseBody& setEcsEntityList(ListEcsNotInClusterResponseBody::EcsEntityList && ecsEntityList) { DARABONBA_PTR_SET_RVALUE(ecsEntityList_, ecsEntityList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListEcsNotInClusterResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEcsNotInClusterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListEcsNotInClusterResponseBody::EcsEntityList> ecsEntityList_ {};
    // The message that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
