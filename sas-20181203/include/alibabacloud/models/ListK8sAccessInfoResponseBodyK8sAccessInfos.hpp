// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SACCESSINFORESPONSEBODYK8SACCESSINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SACCESSINFORESPONSEBODYK8SACCESSINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListK8sAccessInfoResponseBodyK8sAccessInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sAccessInfoResponseBodyK8sAccessInfos& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListK8sAccessInfoResponseBodyK8sAccessInfos& obj) { 
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
    ListK8sAccessInfoResponseBodyK8sAccessInfos() = default ;
    ListK8sAccessInfoResponseBodyK8sAccessInfos(const ListK8sAccessInfoResponseBodyK8sAccessInfos &) = default ;
    ListK8sAccessInfoResponseBodyK8sAccessInfos(ListK8sAccessInfoResponseBodyK8sAccessInfos &&) = default ;
    ListK8sAccessInfoResponseBodyK8sAccessInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sAccessInfoResponseBodyK8sAccessInfos() = default ;
    ListK8sAccessInfoResponseBodyK8sAccessInfos& operator=(const ListK8sAccessInfoResponseBodyK8sAccessInfos &) = default ;
    ListK8sAccessInfoResponseBodyK8sAccessInfos& operator=(ListK8sAccessInfoResponseBodyK8sAccessInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->auditLogStore_ != nullptr && this->auditProject_ != nullptr && this->auditRegionId_ != nullptr && this->clusterId_ != nullptr && this->clusterName_ != nullptr
        && this->cpuArch_ != nullptr && this->expireDate_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->id_ != nullptr
        && this->installKey_ != nullptr && this->vendor_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // auditLogStore Field Functions 
    bool hasAuditLogStore() const { return this->auditLogStore_ != nullptr;};
    void deleteAuditLogStore() { this->auditLogStore_ = nullptr;};
    inline string auditLogStore() const { DARABONBA_PTR_GET_DEFAULT(auditLogStore_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setAuditLogStore(string auditLogStore) { DARABONBA_PTR_SET_VALUE(auditLogStore_, auditLogStore) };


    // auditProject Field Functions 
    bool hasAuditProject() const { return this->auditProject_ != nullptr;};
    void deleteAuditProject() { this->auditProject_ = nullptr;};
    inline string auditProject() const { DARABONBA_PTR_GET_DEFAULT(auditProject_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setAuditProject(string auditProject) { DARABONBA_PTR_SET_VALUE(auditProject_, auditProject) };


    // auditRegionId Field Functions 
    bool hasAuditRegionId() const { return this->auditRegionId_ != nullptr;};
    void deleteAuditRegionId() { this->auditRegionId_ = nullptr;};
    inline string auditRegionId() const { DARABONBA_PTR_GET_DEFAULT(auditRegionId_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setAuditRegionId(string auditRegionId) { DARABONBA_PTR_SET_VALUE(auditRegionId_, auditRegionId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // cpuArch Field Functions 
    bool hasCpuArch() const { return this->cpuArch_ != nullptr;};
    void deleteCpuArch() { this->cpuArch_ = nullptr;};
    inline string cpuArch() const { DARABONBA_PTR_GET_DEFAULT(cpuArch_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setCpuArch(string cpuArch) { DARABONBA_PTR_SET_VALUE(cpuArch_, cpuArch) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // installKey Field Functions 
    bool hasInstallKey() const { return this->installKey_ != nullptr;};
    void deleteInstallKey() { this->installKey_ = nullptr;};
    inline string installKey() const { DARABONBA_PTR_GET_DEFAULT(installKey_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setInstallKey(string installKey) { DARABONBA_PTR_SET_VALUE(installKey_, installKey) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ListK8sAccessInfoResponseBodyK8sAccessInfos& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The Simple Log Service Logstore that is used to store the audit logs.
    std::shared_ptr<string> auditLogStore_ = nullptr;
    // The Simple Log Service project that is used to store the audit logs.
    std::shared_ptr<string> auditProject_ = nullptr;
    // The ID of the region in which the server is deployed.
    std::shared_ptr<string> auditRegionId_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> cpuArch_ = nullptr;
    // The expiration time.
    std::shared_ptr<int64_t> expireDate_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The name of the server group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The UUID of the access information.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The installation key of the Kubernetes cluster.
    std::shared_ptr<string> installKey_ = nullptr;
    // The service provider.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
