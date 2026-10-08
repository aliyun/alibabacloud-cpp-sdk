// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONVERTABLEECURESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCONVERTABLEECURESPONSEBODY_HPP_
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
  class ListConvertableEcuResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConvertableEcuResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListConvertableEcuResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceList, instanceList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListConvertableEcuResponseBody() = default ;
    ListConvertableEcuResponseBody(const ListConvertableEcuResponseBody &) = default ;
    ListConvertableEcuResponseBody(ListConvertableEcuResponseBody &&) = default ;
    ListConvertableEcuResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConvertableEcuResponseBody() = default ;
    ListConvertableEcuResponseBody& operator=(const ListConvertableEcuResponseBody &) = default ;
    ListConvertableEcuResponseBody& operator=(ListConvertableEcuResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceList& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceList& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
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
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(EcuId, ecuId_);
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
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(EcuId, ecuId_);
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
        Instance() = default ;
        Instance(const Instance &) = default ;
        Instance(Instance &&) = default ;
        Instance(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Instance() = default ;
        Instance& operator=(const Instance &) = default ;
        Instance& operator=(Instance &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpu_ == nullptr
        && this->ecuId_ == nullptr && this->eip_ == nullptr && this->expired_ == nullptr && this->innerIp_ == nullptr && this->instanceId_ == nullptr
        && this->instanceName_ == nullptr && this->mem_ == nullptr && this->privateIp_ == nullptr && this->publicIp_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->vpcId_ == nullptr && this->vpcName_ == nullptr; };
        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline Instance& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // ecuId Field Functions 
        bool hasEcuId() const { return this->ecuId_ != nullptr;};
        void deleteEcuId() { this->ecuId_ = nullptr;};
        inline string getEcuId() const { DARABONBA_PTR_GET_DEFAULT(ecuId_, "") };
        inline Instance& setEcuId(string ecuId) { DARABONBA_PTR_SET_VALUE(ecuId_, ecuId) };


        // eip Field Functions 
        bool hasEip() const { return this->eip_ != nullptr;};
        void deleteEip() { this->eip_ = nullptr;};
        inline string getEip() const { DARABONBA_PTR_GET_DEFAULT(eip_, "") };
        inline Instance& setEip(string eip) { DARABONBA_PTR_SET_VALUE(eip_, eip) };


        // expired Field Functions 
        bool hasExpired() const { return this->expired_ != nullptr;};
        void deleteExpired() { this->expired_ = nullptr;};
        inline bool getExpired() const { DARABONBA_PTR_GET_DEFAULT(expired_, false) };
        inline Instance& setExpired(bool expired) { DARABONBA_PTR_SET_VALUE(expired_, expired) };


        // innerIp Field Functions 
        bool hasInnerIp() const { return this->innerIp_ != nullptr;};
        void deleteInnerIp() { this->innerIp_ = nullptr;};
        inline string getInnerIp() const { DARABONBA_PTR_GET_DEFAULT(innerIp_, "") };
        inline Instance& setInnerIp(string innerIp) { DARABONBA_PTR_SET_VALUE(innerIp_, innerIp) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline Instance& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


        // mem Field Functions 
        bool hasMem() const { return this->mem_ != nullptr;};
        void deleteMem() { this->mem_ = nullptr;};
        inline int32_t getMem() const { DARABONBA_PTR_GET_DEFAULT(mem_, 0) };
        inline Instance& setMem(int32_t mem) { DARABONBA_PTR_SET_VALUE(mem_, mem) };


        // privateIp Field Functions 
        bool hasPrivateIp() const { return this->privateIp_ != nullptr;};
        void deletePrivateIp() { this->privateIp_ = nullptr;};
        inline string getPrivateIp() const { DARABONBA_PTR_GET_DEFAULT(privateIp_, "") };
        inline Instance& setPrivateIp(string privateIp) { DARABONBA_PTR_SET_VALUE(privateIp_, privateIp) };


        // publicIp Field Functions 
        bool hasPublicIp() const { return this->publicIp_ != nullptr;};
        void deletePublicIp() { this->publicIp_ = nullptr;};
        inline string getPublicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
        inline Instance& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline Instance& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Instance& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // vpcId Field Functions 
        bool hasVpcId() const { return this->vpcId_ != nullptr;};
        void deleteVpcId() { this->vpcId_ = nullptr;};
        inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
        inline Instance& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


        // vpcName Field Functions 
        bool hasVpcName() const { return this->vpcName_ != nullptr;};
        void deleteVpcName() { this->vpcName_ = nullptr;};
        inline string getVpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
        inline Instance& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


      protected:
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<string> ecuId_ {};
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

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const vector<InstanceList::Instance> & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, vector<InstanceList::Instance>) };
      inline vector<InstanceList::Instance> getInstance() { DARABONBA_PTR_GET(instance_, vector<InstanceList::Instance>) };
      inline InstanceList& setInstance(const vector<InstanceList::Instance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline InstanceList& setInstance(vector<InstanceList::Instance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<vector<InstanceList::Instance>> instance_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->instanceList_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListConvertableEcuResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceList Field Functions 
    bool hasInstanceList() const { return this->instanceList_ != nullptr;};
    void deleteInstanceList() { this->instanceList_ = nullptr;};
    inline const ListConvertableEcuResponseBody::InstanceList & getInstanceList() const { DARABONBA_PTR_GET_CONST(instanceList_, ListConvertableEcuResponseBody::InstanceList) };
    inline ListConvertableEcuResponseBody::InstanceList getInstanceList() { DARABONBA_PTR_GET(instanceList_, ListConvertableEcuResponseBody::InstanceList) };
    inline ListConvertableEcuResponseBody& setInstanceList(const ListConvertableEcuResponseBody::InstanceList & instanceList) { DARABONBA_PTR_SET_VALUE(instanceList_, instanceList) };
    inline ListConvertableEcuResponseBody& setInstanceList(ListConvertableEcuResponseBody::InstanceList && instanceList) { DARABONBA_PTR_SET_RVALUE(instanceList_, instanceList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListConvertableEcuResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListConvertableEcuResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code that is returned.
    shared_ptr<int32_t> code_ {};
    shared_ptr<ListConvertableEcuResponseBody::InstanceList> instanceList_ {};
    // The additional information that is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
