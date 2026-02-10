// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEK8SACCESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEK8SACCESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateK8sAccessInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GenerateK8sAccessInfoResponseBody() = default ;
    GenerateK8sAccessInfoResponseBody(const GenerateK8sAccessInfoResponseBody &) = default ;
    GenerateK8sAccessInfoResponseBody(GenerateK8sAccessInfoResponseBody &&) = default ;
    GenerateK8sAccessInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateK8sAccessInfoResponseBody() = default ;
    GenerateK8sAccessInfoResponseBody& operator=(const GenerateK8sAccessInfoResponseBody &) = default ;
    GenerateK8sAccessInfoResponseBody& operator=(GenerateK8sAccessInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AuditLogStore, auditLogStore_);
        DARABONBA_PTR_TO_JSON(AuditProject, auditProject_);
        DARABONBA_PTR_TO_JSON(AuditRegionId, auditRegionId_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(CpuArch, cpuArch_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InstallKey, installKey_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AuditLogStore, auditLogStore_);
        DARABONBA_PTR_FROM_JSON(AuditProject, auditProject_);
        DARABONBA_PTR_FROM_JSON(AuditRegionId, auditRegionId_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(CpuArch, cpuArch_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InstallKey, installKey_);
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
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->auditLogStore_ == nullptr && this->auditProject_ == nullptr && this->auditRegionId_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr
        && this->cpuArch_ == nullptr && this->expireDate_ == nullptr && this->groupId_ == nullptr && this->installKey_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline Data& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // auditLogStore Field Functions 
      bool hasAuditLogStore() const { return this->auditLogStore_ != nullptr;};
      void deleteAuditLogStore() { this->auditLogStore_ = nullptr;};
      inline string getAuditLogStore() const { DARABONBA_PTR_GET_DEFAULT(auditLogStore_, "") };
      inline Data& setAuditLogStore(string auditLogStore) { DARABONBA_PTR_SET_VALUE(auditLogStore_, auditLogStore) };


      // auditProject Field Functions 
      bool hasAuditProject() const { return this->auditProject_ != nullptr;};
      void deleteAuditProject() { this->auditProject_ = nullptr;};
      inline string getAuditProject() const { DARABONBA_PTR_GET_DEFAULT(auditProject_, "") };
      inline Data& setAuditProject(string auditProject) { DARABONBA_PTR_SET_VALUE(auditProject_, auditProject) };


      // auditRegionId Field Functions 
      bool hasAuditRegionId() const { return this->auditRegionId_ != nullptr;};
      void deleteAuditRegionId() { this->auditRegionId_ = nullptr;};
      inline string getAuditRegionId() const { DARABONBA_PTR_GET_DEFAULT(auditRegionId_, "") };
      inline Data& setAuditRegionId(string auditRegionId) { DARABONBA_PTR_SET_VALUE(auditRegionId_, auditRegionId) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Data& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline Data& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // cpuArch Field Functions 
      bool hasCpuArch() const { return this->cpuArch_ != nullptr;};
      void deleteCpuArch() { this->cpuArch_ = nullptr;};
      inline string getCpuArch() const { DARABONBA_PTR_GET_DEFAULT(cpuArch_, "") };
      inline Data& setCpuArch(string cpuArch) { DARABONBA_PTR_SET_VALUE(cpuArch_, cpuArch) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline int64_t getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
      inline Data& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // installKey Field Functions 
      bool hasInstallKey() const { return this->installKey_ != nullptr;};
      void deleteInstallKey() { this->installKey_ = nullptr;};
      inline string getInstallKey() const { DARABONBA_PTR_GET_DEFAULT(installKey_, "") };
      inline Data& setInstallKey(string installKey) { DARABONBA_PTR_SET_VALUE(installKey_, installKey) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The Simple Log Service Logstore that is used to store the audit logs.
      shared_ptr<string> auditLogStore_ {};
      // The Simple Log Service project that is used to store the audit logs.
      shared_ptr<string> auditProject_ {};
      // The ID of the region in which the server is deployed.
      shared_ptr<string> auditRegionId_ {};
      // The cluster ID.
      shared_ptr<string> clusterId_ {};
      // The cluster name.
      shared_ptr<string> clusterName_ {};
      // CPU architectures are divided into ARM architecture and x86 architecture.
      shared_ptr<string> cpuArch_ {};
      // The expiration time. Unit: milliseconds.
      shared_ptr<int64_t> expireDate_ {};
      // The server group ID.
      shared_ptr<string> groupId_ {};
      // The installation key of the server.
      shared_ptr<string> installKey_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GenerateK8sAccessInfoResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GenerateK8sAccessInfoResponseBody::Data) };
    inline GenerateK8sAccessInfoResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GenerateK8sAccessInfoResponseBody::Data) };
    inline GenerateK8sAccessInfoResponseBody& setData(const GenerateK8sAccessInfoResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GenerateK8sAccessInfoResponseBody& setData(GenerateK8sAccessInfoResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateK8sAccessInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<GenerateK8sAccessInfoResponseBody::Data> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
