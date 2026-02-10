// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SACCESSINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SACCESSINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListK8sAccessInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(K8sAccessInfos, k8sAccessInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sAccessInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(K8sAccessInfos, k8sAccessInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListK8sAccessInfoResponseBody() = default ;
    ListK8sAccessInfoResponseBody(const ListK8sAccessInfoResponseBody &) = default ;
    ListK8sAccessInfoResponseBody(ListK8sAccessInfoResponseBody &&) = default ;
    ListK8sAccessInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sAccessInfoResponseBody() = default ;
    ListK8sAccessInfoResponseBody& operator=(const ListK8sAccessInfoResponseBody &) = default ;
    ListK8sAccessInfoResponseBody& operator=(ListK8sAccessInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class K8sAccessInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const K8sAccessInfos& obj) { 
        DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
        DARABONBA_PTR_TO_JSON(AuditLogStore, auditLogStore_);
        DARABONBA_PTR_TO_JSON(AuditProject, auditProject_);
        DARABONBA_PTR_TO_JSON(AuditRegionId, auditRegionId_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_TO_JSON(CpuArch, cpuArch_);
        DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(GroupName, groupName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(InstallKey, installKey_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, K8sAccessInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
        DARABONBA_PTR_FROM_JSON(AuditLogStore, auditLogStore_);
        DARABONBA_PTR_FROM_JSON(AuditProject, auditProject_);
        DARABONBA_PTR_FROM_JSON(AuditRegionId, auditRegionId_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
        DARABONBA_PTR_FROM_JSON(CpuArch, cpuArch_);
        DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(InstallKey, installKey_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      K8sAccessInfos() = default ;
      K8sAccessInfos(const K8sAccessInfos &) = default ;
      K8sAccessInfos(K8sAccessInfos &&) = default ;
      K8sAccessInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~K8sAccessInfos() = default ;
      K8sAccessInfos& operator=(const K8sAccessInfos &) = default ;
      K8sAccessInfos& operator=(K8sAccessInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliUid_ == nullptr
        && this->auditLogStore_ == nullptr && this->auditProject_ == nullptr && this->auditRegionId_ == nullptr && this->clusterId_ == nullptr && this->clusterName_ == nullptr
        && this->cpuArch_ == nullptr && this->expireDate_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->id_ == nullptr
        && this->installKey_ == nullptr && this->vendor_ == nullptr; };
      // aliUid Field Functions 
      bool hasAliUid() const { return this->aliUid_ != nullptr;};
      void deleteAliUid() { this->aliUid_ = nullptr;};
      inline int64_t getAliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
      inline K8sAccessInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


      // auditLogStore Field Functions 
      bool hasAuditLogStore() const { return this->auditLogStore_ != nullptr;};
      void deleteAuditLogStore() { this->auditLogStore_ = nullptr;};
      inline string getAuditLogStore() const { DARABONBA_PTR_GET_DEFAULT(auditLogStore_, "") };
      inline K8sAccessInfos& setAuditLogStore(string auditLogStore) { DARABONBA_PTR_SET_VALUE(auditLogStore_, auditLogStore) };


      // auditProject Field Functions 
      bool hasAuditProject() const { return this->auditProject_ != nullptr;};
      void deleteAuditProject() { this->auditProject_ = nullptr;};
      inline string getAuditProject() const { DARABONBA_PTR_GET_DEFAULT(auditProject_, "") };
      inline K8sAccessInfos& setAuditProject(string auditProject) { DARABONBA_PTR_SET_VALUE(auditProject_, auditProject) };


      // auditRegionId Field Functions 
      bool hasAuditRegionId() const { return this->auditRegionId_ != nullptr;};
      void deleteAuditRegionId() { this->auditRegionId_ = nullptr;};
      inline string getAuditRegionId() const { DARABONBA_PTR_GET_DEFAULT(auditRegionId_, "") };
      inline K8sAccessInfos& setAuditRegionId(string auditRegionId) { DARABONBA_PTR_SET_VALUE(auditRegionId_, auditRegionId) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline K8sAccessInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // clusterName Field Functions 
      bool hasClusterName() const { return this->clusterName_ != nullptr;};
      void deleteClusterName() { this->clusterName_ = nullptr;};
      inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
      inline K8sAccessInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


      // cpuArch Field Functions 
      bool hasCpuArch() const { return this->cpuArch_ != nullptr;};
      void deleteCpuArch() { this->cpuArch_ = nullptr;};
      inline string getCpuArch() const { DARABONBA_PTR_GET_DEFAULT(cpuArch_, "") };
      inline K8sAccessInfos& setCpuArch(string cpuArch) { DARABONBA_PTR_SET_VALUE(cpuArch_, cpuArch) };


      // expireDate Field Functions 
      bool hasExpireDate() const { return this->expireDate_ != nullptr;};
      void deleteExpireDate() { this->expireDate_ = nullptr;};
      inline int64_t getExpireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
      inline K8sAccessInfos& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline K8sAccessInfos& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline K8sAccessInfos& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline K8sAccessInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // installKey Field Functions 
      bool hasInstallKey() const { return this->installKey_ != nullptr;};
      void deleteInstallKey() { this->installKey_ = nullptr;};
      inline string getInstallKey() const { DARABONBA_PTR_GET_DEFAULT(installKey_, "") };
      inline K8sAccessInfos& setInstallKey(string installKey) { DARABONBA_PTR_SET_VALUE(installKey_, installKey) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline K8sAccessInfos& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The ID of the Alibaba Cloud account.
      shared_ptr<int64_t> aliUid_ {};
      // The Simple Log Service Logstore that is used to store the audit logs.
      shared_ptr<string> auditLogStore_ {};
      // The Simple Log Service project that is used to store the audit logs.
      shared_ptr<string> auditProject_ {};
      // The ID of the region in which the server is deployed.
      shared_ptr<string> auditRegionId_ {};
      // The ID of the cluster.
      shared_ptr<string> clusterId_ {};
      // The name of the cluster.
      shared_ptr<string> clusterName_ {};
      // CPU architecture, divided into ARM and x86 architectures.
      shared_ptr<string> cpuArch_ {};
      // The expiration time.
      shared_ptr<int64_t> expireDate_ {};
      // The ID of the server group.
      shared_ptr<string> groupId_ {};
      // The name of the server group.
      shared_ptr<string> groupName_ {};
      // The UUID of the access information.
      shared_ptr<int64_t> id_ {};
      // The installation key of the Kubernetes cluster.
      shared_ptr<string> installKey_ {};
      // The service provider.
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->k8sAccessInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // k8sAccessInfos Field Functions 
    bool hasK8sAccessInfos() const { return this->k8sAccessInfos_ != nullptr;};
    void deleteK8sAccessInfos() { this->k8sAccessInfos_ = nullptr;};
    inline const vector<ListK8sAccessInfoResponseBody::K8sAccessInfos> & getK8sAccessInfos() const { DARABONBA_PTR_GET_CONST(k8sAccessInfos_, vector<ListK8sAccessInfoResponseBody::K8sAccessInfos>) };
    inline vector<ListK8sAccessInfoResponseBody::K8sAccessInfos> getK8sAccessInfos() { DARABONBA_PTR_GET(k8sAccessInfos_, vector<ListK8sAccessInfoResponseBody::K8sAccessInfos>) };
    inline ListK8sAccessInfoResponseBody& setK8sAccessInfos(const vector<ListK8sAccessInfoResponseBody::K8sAccessInfos> & k8sAccessInfos) { DARABONBA_PTR_SET_VALUE(k8sAccessInfos_, k8sAccessInfos) };
    inline ListK8sAccessInfoResponseBody& setK8sAccessInfos(vector<ListK8sAccessInfoResponseBody::K8sAccessInfos> && k8sAccessInfos) { DARABONBA_PTR_SET_RVALUE(k8sAccessInfos_, k8sAccessInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListK8sAccessInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the Kubernetes clusters.
    shared_ptr<vector<ListK8sAccessInfoResponseBody::K8sAccessInfos>> k8sAccessInfos_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
