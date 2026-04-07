// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEM0INFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEM0INFORESPONSEBODY_HPP_
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
  class DescribeMem0InfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMem0InfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMem0InfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeMem0InfoResponseBody() = default ;
    DescribeMem0InfoResponseBody(const DescribeMem0InfoResponseBody &) = default ;
    DescribeMem0InfoResponseBody(DescribeMem0InfoResponseBody &&) = default ;
    DescribeMem0InfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMem0InfoResponseBody() = default ;
    DescribeMem0InfoResponseBody& operator=(const DescribeMem0InfoResponseBody &) = default ;
    DescribeMem0InfoResponseBody& operator=(DescribeMem0InfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Instance, instance_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Instance, instance_);
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
      class Instance : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Instance& obj) { 
          DARABONBA_PTR_TO_JSON(ClassCode, classCode_);
          DARABONBA_PTR_TO_JSON(ConnAddrs, connAddrs_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
          DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
          DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Instance& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassCode, classCode_);
          DARABONBA_PTR_FROM_JSON(ConnAddrs, connAddrs_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
          DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
          DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
        class ConnAddrs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConnAddrs& obj) { 
            DARABONBA_PTR_TO_JSON(ConnectionString, connectionString_);
            DARABONBA_PTR_TO_JSON(Port, port_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
            DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_TO_JSON(VpcInstanceId, vpcInstanceId_);
          };
          friend void from_json(const Darabonba::Json& j, ConnAddrs& obj) { 
            DARABONBA_PTR_FROM_JSON(ConnectionString, connectionString_);
            DARABONBA_PTR_FROM_JSON(Port, port_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
            DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
            DARABONBA_PTR_FROM_JSON(VpcInstanceId, vpcInstanceId_);
          };
          ConnAddrs() = default ;
          ConnAddrs(const ConnAddrs &) = default ;
          ConnAddrs(ConnAddrs &&) = default ;
          ConnAddrs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConnAddrs() = default ;
          ConnAddrs& operator=(const ConnAddrs &) = default ;
          ConnAddrs& operator=(ConnAddrs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->connectionString_ == nullptr
        && this->port_ == nullptr && this->type_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->vpcInstanceId_ == nullptr; };
          // connectionString Field Functions 
          bool hasConnectionString() const { return this->connectionString_ != nullptr;};
          void deleteConnectionString() { this->connectionString_ = nullptr;};
          inline string getConnectionString() const { DARABONBA_PTR_GET_DEFAULT(connectionString_, "") };
          inline ConnAddrs& setConnectionString(string connectionString) { DARABONBA_PTR_SET_VALUE(connectionString_, connectionString) };


          // port Field Functions 
          bool hasPort() const { return this->port_ != nullptr;};
          void deletePort() { this->port_ = nullptr;};
          inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
          inline ConnAddrs& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline ConnAddrs& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // VPCId Field Functions 
          bool hasVPCId() const { return this->VPCId_ != nullptr;};
          void deleteVPCId() { this->VPCId_ = nullptr;};
          inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
          inline ConnAddrs& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


          // vSwitchId Field Functions 
          bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
          void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
          inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
          inline ConnAddrs& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


          // vpcInstanceId Field Functions 
          bool hasVpcInstanceId() const { return this->vpcInstanceId_ != nullptr;};
          void deleteVpcInstanceId() { this->vpcInstanceId_ = nullptr;};
          inline string getVpcInstanceId() const { DARABONBA_PTR_GET_DEFAULT(vpcInstanceId_, "") };
          inline ConnAddrs& setVpcInstanceId(string vpcInstanceId) { DARABONBA_PTR_SET_VALUE(vpcInstanceId_, vpcInstanceId) };


        protected:
          shared_ptr<string> connectionString_ {};
          shared_ptr<int32_t> port_ {};
          shared_ptr<string> type_ {};
          // VPC ID
          shared_ptr<string> VPCId_ {};
          shared_ptr<string> vSwitchId_ {};
          shared_ptr<string> vpcInstanceId_ {};
        };

        virtual bool empty() const override { return this->classCode_ == nullptr
        && this->connAddrs_ == nullptr && this->createTime_ == nullptr && this->instanceId_ == nullptr && this->nodeCount_ == nullptr && this->regionId_ == nullptr
        && this->status_ == nullptr && this->storageType_ == nullptr && this->VPCId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneId_ == nullptr; };
        // classCode Field Functions 
        bool hasClassCode() const { return this->classCode_ != nullptr;};
        void deleteClassCode() { this->classCode_ = nullptr;};
        inline string getClassCode() const { DARABONBA_PTR_GET_DEFAULT(classCode_, "") };
        inline Instance& setClassCode(string classCode) { DARABONBA_PTR_SET_VALUE(classCode_, classCode) };


        // connAddrs Field Functions 
        bool hasConnAddrs() const { return this->connAddrs_ != nullptr;};
        void deleteConnAddrs() { this->connAddrs_ = nullptr;};
        inline const vector<Instance::ConnAddrs> & getConnAddrs() const { DARABONBA_PTR_GET_CONST(connAddrs_, vector<Instance::ConnAddrs>) };
        inline vector<Instance::ConnAddrs> getConnAddrs() { DARABONBA_PTR_GET(connAddrs_, vector<Instance::ConnAddrs>) };
        inline Instance& setConnAddrs(const vector<Instance::ConnAddrs> & connAddrs) { DARABONBA_PTR_SET_VALUE(connAddrs_, connAddrs) };
        inline Instance& setConnAddrs(vector<Instance::ConnAddrs> && connAddrs) { DARABONBA_PTR_SET_RVALUE(connAddrs_, connAddrs) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Instance& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline Instance& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // nodeCount Field Functions 
        bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
        void deleteNodeCount() { this->nodeCount_ = nullptr;};
        inline int32_t getNodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0) };
        inline Instance& setNodeCount(int32_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


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


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Instance& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


        // VPCId Field Functions 
        bool hasVPCId() const { return this->VPCId_ != nullptr;};
        void deleteVPCId() { this->VPCId_ = nullptr;};
        inline string getVPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
        inline Instance& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


        // vSwitchId Field Functions 
        bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
        void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
        inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
        inline Instance& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Instance& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        shared_ptr<string> classCode_ {};
        shared_ptr<vector<Instance::ConnAddrs>> connAddrs_ {};
        shared_ptr<string> createTime_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int32_t> nodeCount_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> storageType_ {};
        // VPC ID
        shared_ptr<string> VPCId_ {};
        shared_ptr<string> vSwitchId_ {};
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->instance_ == nullptr; };
      // instance Field Functions 
      bool hasInstance() const { return this->instance_ != nullptr;};
      void deleteInstance() { this->instance_ = nullptr;};
      inline const Data::Instance & getInstance() const { DARABONBA_PTR_GET_CONST(instance_, Data::Instance) };
      inline Data::Instance getInstance() { DARABONBA_PTR_GET(instance_, Data::Instance) };
      inline Data& setInstance(const Data::Instance & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
      inline Data& setInstance(Data::Instance && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


    protected:
      shared_ptr<Data::Instance> instance_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeMem0InfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeMem0InfoResponseBody::Data) };
    inline DescribeMem0InfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeMem0InfoResponseBody::Data) };
    inline DescribeMem0InfoResponseBody& setData(const DescribeMem0InfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeMem0InfoResponseBody& setData(DescribeMem0InfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeMem0InfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeMem0InfoResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
