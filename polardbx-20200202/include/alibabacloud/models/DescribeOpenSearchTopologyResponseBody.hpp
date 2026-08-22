// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHTOPOLOGYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHTOPOLOGYRESPONSEBODY_HPP_
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
  class DescribeOpenSearchTopologyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenSearchTopologyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenSearchTopologyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenSearchTopologyResponseBody() = default ;
    DescribeOpenSearchTopologyResponseBody(const DescribeOpenSearchTopologyResponseBody &) = default ;
    DescribeOpenSearchTopologyResponseBody(DescribeOpenSearchTopologyResponseBody &&) = default ;
    DescribeOpenSearchTopologyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenSearchTopologyResponseBody() = default ;
    DescribeOpenSearchTopologyResponseBody& operator=(const DescribeOpenSearchTopologyResponseBody &) = default ;
    DescribeOpenSearchTopologyResponseBody& operator=(DescribeOpenSearchTopologyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Storage, storage_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Storage, storage_);
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
      class Storage : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Storage& obj) { 
          DARABONBA_PTR_TO_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_TO_JSON(StorageTotalGB, storageTotalGB_);
          DARABONBA_PTR_TO_JSON(StorageType, storageType_);
        };
        friend void from_json(const Darabonba::Json& j, Storage& obj) { 
          DARABONBA_PTR_FROM_JSON(ReplicaCount, replicaCount_);
          DARABONBA_PTR_FROM_JSON(StorageTotalGB, storageTotalGB_);
          DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
        };
        Storage() = default ;
        Storage(const Storage &) = default ;
        Storage(Storage &&) = default ;
        Storage(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Storage() = default ;
        Storage& operator=(const Storage &) = default ;
        Storage& operator=(Storage &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->replicaCount_ == nullptr
        && this->storageTotalGB_ == nullptr && this->storageType_ == nullptr; };
        // replicaCount Field Functions 
        bool hasReplicaCount() const { return this->replicaCount_ != nullptr;};
        void deleteReplicaCount() { this->replicaCount_ = nullptr;};
        inline int32_t getReplicaCount() const { DARABONBA_PTR_GET_DEFAULT(replicaCount_, 0) };
        inline Storage& setReplicaCount(int32_t replicaCount) { DARABONBA_PTR_SET_VALUE(replicaCount_, replicaCount) };


        // storageTotalGB Field Functions 
        bool hasStorageTotalGB() const { return this->storageTotalGB_ != nullptr;};
        void deleteStorageTotalGB() { this->storageTotalGB_ = nullptr;};
        inline int32_t getStorageTotalGB() const { DARABONBA_PTR_GET_DEFAULT(storageTotalGB_, 0) };
        inline Storage& setStorageTotalGB(int32_t storageTotalGB) { DARABONBA_PTR_SET_VALUE(storageTotalGB_, storageTotalGB) };


        // storageType Field Functions 
        bool hasStorageType() const { return this->storageType_ != nullptr;};
        void deleteStorageType() { this->storageType_ = nullptr;};
        inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
        inline Storage& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


      protected:
        shared_ptr<int32_t> replicaCount_ {};
        shared_ptr<int32_t> storageTotalGB_ {};
        shared_ptr<string> storageType_ {};
      };

      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_TO_JSON(Cpu, cpu_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(IsLeader, isLeader_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
          DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(AvailabilityZone, availabilityZone_);
          DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(IsLeader, isLeader_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
          DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->availabilityZone_ == nullptr
        && this->cpu_ == nullptr && this->host_ == nullptr && this->isLeader_ == nullptr && this->memoryGB_ == nullptr && this->nodeId_ == nullptr
        && this->role_ == nullptr && this->status_ == nullptr; };
        // availabilityZone Field Functions 
        bool hasAvailabilityZone() const { return this->availabilityZone_ != nullptr;};
        void deleteAvailabilityZone() { this->availabilityZone_ = nullptr;};
        inline string getAvailabilityZone() const { DARABONBA_PTR_GET_DEFAULT(availabilityZone_, "") };
        inline Nodes& setAvailabilityZone(string availabilityZone) { DARABONBA_PTR_SET_VALUE(availabilityZone_, availabilityZone) };


        // cpu Field Functions 
        bool hasCpu() const { return this->cpu_ != nullptr;};
        void deleteCpu() { this->cpu_ = nullptr;};
        inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
        inline Nodes& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Nodes& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // isLeader Field Functions 
        bool hasIsLeader() const { return this->isLeader_ != nullptr;};
        void deleteIsLeader() { this->isLeader_ = nullptr;};
        inline bool getIsLeader() const { DARABONBA_PTR_GET_DEFAULT(isLeader_, false) };
        inline Nodes& setIsLeader(bool isLeader) { DARABONBA_PTR_SET_VALUE(isLeader_, isLeader) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline Nodes& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Nodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Nodes& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Nodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> availabilityZone_ {};
        shared_ptr<int32_t> cpu_ {};
        shared_ptr<string> host_ {};
        shared_ptr<bool> isLeader_ {};
        shared_ptr<int32_t> memoryGB_ {};
        shared_ptr<string> nodeId_ {};
        shared_ptr<string> role_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->nodes_ == nullptr
        && this->storage_ == nullptr; };
      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<Data::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<Data::Nodes>) };
      inline vector<Data::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<Data::Nodes>) };
      inline Data& setNodes(const vector<Data::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline Data& setNodes(vector<Data::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // storage Field Functions 
      bool hasStorage() const { return this->storage_ != nullptr;};
      void deleteStorage() { this->storage_ = nullptr;};
      inline const Data::Storage & getStorage() const { DARABONBA_PTR_GET_CONST(storage_, Data::Storage) };
      inline Data::Storage getStorage() { DARABONBA_PTR_GET(storage_, Data::Storage) };
      inline Data& setStorage(const Data::Storage & storage) { DARABONBA_PTR_SET_VALUE(storage_, storage) };
      inline Data& setStorage(Data::Storage && storage) { DARABONBA_PTR_SET_RVALUE(storage_, storage) };


    protected:
      shared_ptr<vector<Data::Nodes>> nodes_ {};
      shared_ptr<Data::Storage> storage_ {};
    };

    class AccessDeniedDetail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AccessDeniedDetail& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAction, authAction_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_TO_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_TO_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_TO_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      };
      friend void from_json(const Darabonba::Json& j, AccessDeniedDetail& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAction, authAction_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalDisplayName, authPrincipalDisplayName_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalOwnerId, authPrincipalOwnerId_);
        DARABONBA_PTR_FROM_JSON(AuthPrincipalType, authPrincipalType_);
        DARABONBA_PTR_FROM_JSON(EncodedDiagnosticMessage, encodedDiagnosticMessage_);
        DARABONBA_PTR_FROM_JSON(NoPermissionType, noPermissionType_);
        DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      };
      AccessDeniedDetail() = default ;
      AccessDeniedDetail(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail(AccessDeniedDetail &&) = default ;
      AccessDeniedDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AccessDeniedDetail() = default ;
      AccessDeniedDetail& operator=(const AccessDeniedDetail &) = default ;
      AccessDeniedDetail& operator=(AccessDeniedDetail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authAction_ == nullptr
        && this->authPrincipalDisplayName_ == nullptr && this->authPrincipalOwnerId_ == nullptr && this->authPrincipalType_ == nullptr && this->encodedDiagnosticMessage_ == nullptr && this->noPermissionType_ == nullptr
        && this->policyType_ == nullptr; };
      // authAction Field Functions 
      bool hasAuthAction() const { return this->authAction_ != nullptr;};
      void deleteAuthAction() { this->authAction_ = nullptr;};
      inline string getAuthAction() const { DARABONBA_PTR_GET_DEFAULT(authAction_, "") };
      inline AccessDeniedDetail& setAuthAction(string authAction) { DARABONBA_PTR_SET_VALUE(authAction_, authAction) };


      // authPrincipalDisplayName Field Functions 
      bool hasAuthPrincipalDisplayName() const { return this->authPrincipalDisplayName_ != nullptr;};
      void deleteAuthPrincipalDisplayName() { this->authPrincipalDisplayName_ = nullptr;};
      inline string getAuthPrincipalDisplayName() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalDisplayName_, "") };
      inline AccessDeniedDetail& setAuthPrincipalDisplayName(string authPrincipalDisplayName) { DARABONBA_PTR_SET_VALUE(authPrincipalDisplayName_, authPrincipalDisplayName) };


      // authPrincipalOwnerId Field Functions 
      bool hasAuthPrincipalOwnerId() const { return this->authPrincipalOwnerId_ != nullptr;};
      void deleteAuthPrincipalOwnerId() { this->authPrincipalOwnerId_ = nullptr;};
      inline string getAuthPrincipalOwnerId() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalOwnerId_, "") };
      inline AccessDeniedDetail& setAuthPrincipalOwnerId(string authPrincipalOwnerId) { DARABONBA_PTR_SET_VALUE(authPrincipalOwnerId_, authPrincipalOwnerId) };


      // authPrincipalType Field Functions 
      bool hasAuthPrincipalType() const { return this->authPrincipalType_ != nullptr;};
      void deleteAuthPrincipalType() { this->authPrincipalType_ = nullptr;};
      inline string getAuthPrincipalType() const { DARABONBA_PTR_GET_DEFAULT(authPrincipalType_, "") };
      inline AccessDeniedDetail& setAuthPrincipalType(string authPrincipalType) { DARABONBA_PTR_SET_VALUE(authPrincipalType_, authPrincipalType) };


      // encodedDiagnosticMessage Field Functions 
      bool hasEncodedDiagnosticMessage() const { return this->encodedDiagnosticMessage_ != nullptr;};
      void deleteEncodedDiagnosticMessage() { this->encodedDiagnosticMessage_ = nullptr;};
      inline string getEncodedDiagnosticMessage() const { DARABONBA_PTR_GET_DEFAULT(encodedDiagnosticMessage_, "") };
      inline AccessDeniedDetail& setEncodedDiagnosticMessage(string encodedDiagnosticMessage) { DARABONBA_PTR_SET_VALUE(encodedDiagnosticMessage_, encodedDiagnosticMessage) };


      // noPermissionType Field Functions 
      bool hasNoPermissionType() const { return this->noPermissionType_ != nullptr;};
      void deleteNoPermissionType() { this->noPermissionType_ = nullptr;};
      inline string getNoPermissionType() const { DARABONBA_PTR_GET_DEFAULT(noPermissionType_, "") };
      inline AccessDeniedDetail& setNoPermissionType(string noPermissionType) { DARABONBA_PTR_SET_VALUE(noPermissionType_, noPermissionType) };


      // policyType Field Functions 
      bool hasPolicyType() const { return this->policyType_ != nullptr;};
      void deletePolicyType() { this->policyType_ = nullptr;};
      inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
      inline AccessDeniedDetail& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    protected:
      shared_ptr<string> authAction_ {};
      shared_ptr<string> authPrincipalDisplayName_ {};
      shared_ptr<string> authPrincipalOwnerId_ {};
      shared_ptr<string> authPrincipalType_ {};
      shared_ptr<string> encodedDiagnosticMessage_ {};
      shared_ptr<string> noPermissionType_ {};
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeOpenSearchTopologyResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeOpenSearchTopologyResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchTopologyResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeOpenSearchTopologyResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchTopologyResponseBody& setAccessDeniedDetail(const DescribeOpenSearchTopologyResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeOpenSearchTopologyResponseBody& setAccessDeniedDetail(DescribeOpenSearchTopologyResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenSearchTopologyResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenSearchTopologyResponseBody::Data) };
    inline DescribeOpenSearchTopologyResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenSearchTopologyResponseBody::Data) };
    inline DescribeOpenSearchTopologyResponseBody& setData(const DescribeOpenSearchTopologyResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenSearchTopologyResponseBody& setData(DescribeOpenSearchTopologyResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenSearchTopologyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<DescribeOpenSearchTopologyResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    shared_ptr<DescribeOpenSearchTopologyResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
