// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHNODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOPENSEARCHNODESRESPONSEBODY_HPP_
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
  class DescribeOpenSearchNodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOpenSearchNodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOpenSearchNodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeOpenSearchNodesResponseBody() = default ;
    DescribeOpenSearchNodesResponseBody(const DescribeOpenSearchNodesResponseBody &) = default ;
    DescribeOpenSearchNodesResponseBody(DescribeOpenSearchNodesResponseBody &&) = default ;
    DescribeOpenSearchNodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOpenSearchNodesResponseBody() = default ;
    DescribeOpenSearchNodesResponseBody& operator=(const DescribeOpenSearchNodesResponseBody &) = default ;
    DescribeOpenSearchNodesResponseBody& operator=(DescribeOpenSearchNodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Result, result_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Result, result_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
          DARABONBA_PTR_TO_JSON(CpuPercent, cpuPercent_);
          DARABONBA_PTR_TO_JSON(DiskSizeGB, diskSizeGB_);
          DARABONBA_PTR_TO_JSON(DiskUsedPercent, diskUsedPercent_);
          DARABONBA_PTR_TO_JSON(Health, health_);
          DARABONBA_PTR_TO_JSON(HeapPercent, heapPercent_);
          DARABONBA_PTR_TO_JSON(Host, host_);
          DARABONBA_PTR_TO_JSON(HostName, hostName_);
          DARABONBA_PTR_TO_JSON(LoadOneM, loadOneM_);
          DARABONBA_PTR_TO_JSON(MemoryGB, memoryGB_);
          DARABONBA_PTR_TO_JSON(NodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(Port, port_);
          DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
          DARABONBA_PTR_FROM_JSON(CpuPercent, cpuPercent_);
          DARABONBA_PTR_FROM_JSON(DiskSizeGB, diskSizeGB_);
          DARABONBA_PTR_FROM_JSON(DiskUsedPercent, diskUsedPercent_);
          DARABONBA_PTR_FROM_JSON(Health, health_);
          DARABONBA_PTR_FROM_JSON(HeapPercent, heapPercent_);
          DARABONBA_PTR_FROM_JSON(Host, host_);
          DARABONBA_PTR_FROM_JSON(HostName, hostName_);
          DARABONBA_PTR_FROM_JSON(LoadOneM, loadOneM_);
          DARABONBA_PTR_FROM_JSON(MemoryGB, memoryGB_);
          DARABONBA_PTR_FROM_JSON(NodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(Port, port_);
          DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cpuCores_ == nullptr
        && this->cpuPercent_ == nullptr && this->diskSizeGB_ == nullptr && this->diskUsedPercent_ == nullptr && this->health_ == nullptr && this->heapPercent_ == nullptr
        && this->host_ == nullptr && this->hostName_ == nullptr && this->loadOneM_ == nullptr && this->memoryGB_ == nullptr && this->nodeType_ == nullptr
        && this->port_ == nullptr && this->zoneId_ == nullptr; };
        // cpuCores Field Functions 
        bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
        void deleteCpuCores() { this->cpuCores_ = nullptr;};
        inline int32_t getCpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, 0) };
        inline Result& setCpuCores(int32_t cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


        // cpuPercent Field Functions 
        bool hasCpuPercent() const { return this->cpuPercent_ != nullptr;};
        void deleteCpuPercent() { this->cpuPercent_ = nullptr;};
        inline string getCpuPercent() const { DARABONBA_PTR_GET_DEFAULT(cpuPercent_, "") };
        inline Result& setCpuPercent(string cpuPercent) { DARABONBA_PTR_SET_VALUE(cpuPercent_, cpuPercent) };


        // diskSizeGB Field Functions 
        bool hasDiskSizeGB() const { return this->diskSizeGB_ != nullptr;};
        void deleteDiskSizeGB() { this->diskSizeGB_ = nullptr;};
        inline int32_t getDiskSizeGB() const { DARABONBA_PTR_GET_DEFAULT(diskSizeGB_, 0) };
        inline Result& setDiskSizeGB(int32_t diskSizeGB) { DARABONBA_PTR_SET_VALUE(diskSizeGB_, diskSizeGB) };


        // diskUsedPercent Field Functions 
        bool hasDiskUsedPercent() const { return this->diskUsedPercent_ != nullptr;};
        void deleteDiskUsedPercent() { this->diskUsedPercent_ = nullptr;};
        inline string getDiskUsedPercent() const { DARABONBA_PTR_GET_DEFAULT(diskUsedPercent_, "") };
        inline Result& setDiskUsedPercent(string diskUsedPercent) { DARABONBA_PTR_SET_VALUE(diskUsedPercent_, diskUsedPercent) };


        // health Field Functions 
        bool hasHealth() const { return this->health_ != nullptr;};
        void deleteHealth() { this->health_ = nullptr;};
        inline string getHealth() const { DARABONBA_PTR_GET_DEFAULT(health_, "") };
        inline Result& setHealth(string health) { DARABONBA_PTR_SET_VALUE(health_, health) };


        // heapPercent Field Functions 
        bool hasHeapPercent() const { return this->heapPercent_ != nullptr;};
        void deleteHeapPercent() { this->heapPercent_ = nullptr;};
        inline string getHeapPercent() const { DARABONBA_PTR_GET_DEFAULT(heapPercent_, "") };
        inline Result& setHeapPercent(string heapPercent) { DARABONBA_PTR_SET_VALUE(heapPercent_, heapPercent) };


        // host Field Functions 
        bool hasHost() const { return this->host_ != nullptr;};
        void deleteHost() { this->host_ = nullptr;};
        inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
        inline Result& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline Result& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // loadOneM Field Functions 
        bool hasLoadOneM() const { return this->loadOneM_ != nullptr;};
        void deleteLoadOneM() { this->loadOneM_ = nullptr;};
        inline string getLoadOneM() const { DARABONBA_PTR_GET_DEFAULT(loadOneM_, "") };
        inline Result& setLoadOneM(string loadOneM) { DARABONBA_PTR_SET_VALUE(loadOneM_, loadOneM) };


        // memoryGB Field Functions 
        bool hasMemoryGB() const { return this->memoryGB_ != nullptr;};
        void deleteMemoryGB() { this->memoryGB_ = nullptr;};
        inline int32_t getMemoryGB() const { DARABONBA_PTR_GET_DEFAULT(memoryGB_, 0) };
        inline Result& setMemoryGB(int32_t memoryGB) { DARABONBA_PTR_SET_VALUE(memoryGB_, memoryGB) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline Result& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // port Field Functions 
        bool hasPort() const { return this->port_ != nullptr;};
        void deletePort() { this->port_ = nullptr;};
        inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
        inline Result& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


        // zoneId Field Functions 
        bool hasZoneId() const { return this->zoneId_ != nullptr;};
        void deleteZoneId() { this->zoneId_ = nullptr;};
        inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
        inline Result& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      protected:
        // The number of CPU cores of the node.
        shared_ptr<int32_t> cpuCores_ {};
        // The CPU usage (%).
        shared_ptr<string> cpuPercent_ {};
        // The total disk capacity of the node, in GB.
        shared_ptr<int32_t> diskSizeGB_ {};
        // The disk space usage of the node.
        shared_ptr<string> diskUsedPercent_ {};
        // The total number of unresolved baseline check items.
        shared_ptr<string> health_ {};
        // The JVM heap memory usage of the node.
        shared_ptr<string> heapPercent_ {};
        // The IP address and port of the session host that initiated the session.
        shared_ptr<string> host_ {};
        // The name of the host on which the node instance runs. You can log on to the host and run the `hostname` command to view the hostname.
        shared_ptr<string> hostName_ {};
        // The average system load of the node over the last 1 minute.
        shared_ptr<string> loadOneM_ {};
        // The amount of memory used.
        shared_ptr<int32_t> memoryGB_ {};
        // The node type to query. Valid values:
        // - all: queries both dn and gms nodes.
        // - gms: queries only gms nodes.
        // - dn: queries only dn nodes.
        shared_ptr<string> nodeType_ {};
        // The port.
        shared_ptr<int32_t> port_ {};
        // The zone ID.
        shared_ptr<string> zoneId_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    protected:
      // The query result object.
      shared_ptr<vector<Data::Result>> result_ {};
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
      // The authentication action.
      shared_ptr<string> authAction_ {};
      // The identity used for authentication in the request.
      shared_ptr<string> authPrincipalDisplayName_ {};
      // The owner ID of the authentication principal.
      shared_ptr<string> authPrincipalOwnerId_ {};
      // The type of the authentication principal.
      shared_ptr<string> authPrincipalType_ {};
      // The encoded diagnostic message.
      shared_ptr<string> encodedDiagnosticMessage_ {};
      // The type of the permission denial.
      shared_ptr<string> noPermissionType_ {};
      // The policy type.
      shared_ptr<string> policyType_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->data_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline const DescribeOpenSearchNodesResponseBody::AccessDeniedDetail & getAccessDeniedDetail() const { DARABONBA_PTR_GET_CONST(accessDeniedDetail_, DescribeOpenSearchNodesResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchNodesResponseBody::AccessDeniedDetail getAccessDeniedDetail() { DARABONBA_PTR_GET(accessDeniedDetail_, DescribeOpenSearchNodesResponseBody::AccessDeniedDetail) };
    inline DescribeOpenSearchNodesResponseBody& setAccessDeniedDetail(const DescribeOpenSearchNodesResponseBody::AccessDeniedDetail & accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };
    inline DescribeOpenSearchNodesResponseBody& setAccessDeniedDetail(DescribeOpenSearchNodesResponseBody::AccessDeniedDetail && accessDeniedDetail) { DARABONBA_PTR_SET_RVALUE(accessDeniedDetail_, accessDeniedDetail) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeOpenSearchNodesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeOpenSearchNodesResponseBody::Data) };
    inline DescribeOpenSearchNodesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeOpenSearchNodesResponseBody::Data) };
    inline DescribeOpenSearchNodesResponseBody& setData(const DescribeOpenSearchNodesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeOpenSearchNodesResponseBody& setData(DescribeOpenSearchNodesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOpenSearchNodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the access denial.
    shared_ptr<DescribeOpenSearchNodesResponseBody::AccessDeniedDetail> accessDeniedDetail_ {};
    // The data struct.
    shared_ptr<DescribeOpenSearchNodesResponseBody::Data> data_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
