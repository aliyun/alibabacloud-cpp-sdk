// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEK8SACCESSINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEK8SACCESSINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GenerateK8sAccessInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateK8sAccessInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayApiName, aliyunYundunGatewayApiName_);
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayPopName, aliyunYundunGatewayPopName_);
      DARABONBA_PTR_TO_JSON(AliyunYundunGatewayProjectName, aliyunYundunGatewayProjectName_);
      DARABONBA_PTR_TO_JSON(AuditLogStore, auditLogStore_);
      DARABONBA_PTR_TO_JSON(AuditProject, auditProject_);
      DARABONBA_PTR_TO_JSON(AuditRegionId, auditRegionId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(CpuArch, cpuArch_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateK8sAccessInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayApiName, aliyunYundunGatewayApiName_);
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayPopName, aliyunYundunGatewayPopName_);
      DARABONBA_PTR_FROM_JSON(AliyunYundunGatewayProjectName, aliyunYundunGatewayProjectName_);
      DARABONBA_PTR_FROM_JSON(AuditLogStore, auditLogStore_);
      DARABONBA_PTR_FROM_JSON(AuditProject, auditProject_);
      DARABONBA_PTR_FROM_JSON(AuditRegionId, auditRegionId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(CpuArch, cpuArch_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    GenerateK8sAccessInfoRequest() = default ;
    GenerateK8sAccessInfoRequest(const GenerateK8sAccessInfoRequest &) = default ;
    GenerateK8sAccessInfoRequest(GenerateK8sAccessInfoRequest &&) = default ;
    GenerateK8sAccessInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateK8sAccessInfoRequest() = default ;
    GenerateK8sAccessInfoRequest& operator=(const GenerateK8sAccessInfoRequest &) = default ;
    GenerateK8sAccessInfoRequest& operator=(GenerateK8sAccessInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunYundunGatewayApiName_ == nullptr
        && return this->aliyunYundunGatewayPopName_ == nullptr && return this->aliyunYundunGatewayProjectName_ == nullptr && return this->auditLogStore_ == nullptr && return this->auditProject_ == nullptr && return this->auditRegionId_ == nullptr
        && return this->clusterName_ == nullptr && return this->cpuArch_ == nullptr && return this->expireDate_ == nullptr && return this->groupId_ == nullptr && return this->vendor_ == nullptr; };
    // aliyunYundunGatewayApiName Field Functions 
    bool hasAliyunYundunGatewayApiName() const { return this->aliyunYundunGatewayApiName_ != nullptr;};
    void deleteAliyunYundunGatewayApiName() { this->aliyunYundunGatewayApiName_ = nullptr;};
    inline string aliyunYundunGatewayApiName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayApiName_, "") };
    inline GenerateK8sAccessInfoRequest& setAliyunYundunGatewayApiName(string aliyunYundunGatewayApiName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayApiName_, aliyunYundunGatewayApiName) };


    // aliyunYundunGatewayPopName Field Functions 
    bool hasAliyunYundunGatewayPopName() const { return this->aliyunYundunGatewayPopName_ != nullptr;};
    void deleteAliyunYundunGatewayPopName() { this->aliyunYundunGatewayPopName_ = nullptr;};
    inline string aliyunYundunGatewayPopName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayPopName_, "") };
    inline GenerateK8sAccessInfoRequest& setAliyunYundunGatewayPopName(string aliyunYundunGatewayPopName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayPopName_, aliyunYundunGatewayPopName) };


    // aliyunYundunGatewayProjectName Field Functions 
    bool hasAliyunYundunGatewayProjectName() const { return this->aliyunYundunGatewayProjectName_ != nullptr;};
    void deleteAliyunYundunGatewayProjectName() { this->aliyunYundunGatewayProjectName_ = nullptr;};
    inline string aliyunYundunGatewayProjectName() const { DARABONBA_PTR_GET_DEFAULT(aliyunYundunGatewayProjectName_, "") };
    inline GenerateK8sAccessInfoRequest& setAliyunYundunGatewayProjectName(string aliyunYundunGatewayProjectName) { DARABONBA_PTR_SET_VALUE(aliyunYundunGatewayProjectName_, aliyunYundunGatewayProjectName) };


    // auditLogStore Field Functions 
    bool hasAuditLogStore() const { return this->auditLogStore_ != nullptr;};
    void deleteAuditLogStore() { this->auditLogStore_ = nullptr;};
    inline string auditLogStore() const { DARABONBA_PTR_GET_DEFAULT(auditLogStore_, "") };
    inline GenerateK8sAccessInfoRequest& setAuditLogStore(string auditLogStore) { DARABONBA_PTR_SET_VALUE(auditLogStore_, auditLogStore) };


    // auditProject Field Functions 
    bool hasAuditProject() const { return this->auditProject_ != nullptr;};
    void deleteAuditProject() { this->auditProject_ = nullptr;};
    inline string auditProject() const { DARABONBA_PTR_GET_DEFAULT(auditProject_, "") };
    inline GenerateK8sAccessInfoRequest& setAuditProject(string auditProject) { DARABONBA_PTR_SET_VALUE(auditProject_, auditProject) };


    // auditRegionId Field Functions 
    bool hasAuditRegionId() const { return this->auditRegionId_ != nullptr;};
    void deleteAuditRegionId() { this->auditRegionId_ = nullptr;};
    inline string auditRegionId() const { DARABONBA_PTR_GET_DEFAULT(auditRegionId_, "") };
    inline GenerateK8sAccessInfoRequest& setAuditRegionId(string auditRegionId) { DARABONBA_PTR_SET_VALUE(auditRegionId_, auditRegionId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline GenerateK8sAccessInfoRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // cpuArch Field Functions 
    bool hasCpuArch() const { return this->cpuArch_ != nullptr;};
    void deleteCpuArch() { this->cpuArch_ = nullptr;};
    inline string cpuArch() const { DARABONBA_PTR_GET_DEFAULT(cpuArch_, "") };
    inline GenerateK8sAccessInfoRequest& setCpuArch(string cpuArch) { DARABONBA_PTR_SET_VALUE(cpuArch_, cpuArch) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline int64_t expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, 0L) };
    inline GenerateK8sAccessInfoRequest& setExpireDate(int64_t expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline GenerateK8sAccessInfoRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline GenerateK8sAccessInfoRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // This parameter is deprecated.
    std::shared_ptr<string> aliyunYundunGatewayApiName_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> aliyunYundunGatewayPopName_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> aliyunYundunGatewayProjectName_ = nullptr;
    // The Simple Log Service Logstore that is used to store the audit logs.
    std::shared_ptr<string> auditLogStore_ = nullptr;
    // The Simple Log Service project that is used to store the audit logs.
    std::shared_ptr<string> auditProject_ = nullptr;
    // The ID of the region in which the audit logs are stored.
    std::shared_ptr<string> auditRegionId_ = nullptr;
    // The name of the Kubernetes cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    std::shared_ptr<string> cpuArch_ = nullptr;
    // The time at which the container ends to be added.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> expireDate_ = nullptr;
    // The group ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The service provider of the cloud asset. Valid values:
    // 
    // *   **Tencent**
    // *   **HUAWEICLOUD**
    // *   **Azure**
    // *   **AWS**
    // *   **Others**
    // 
    // This parameter is required.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
