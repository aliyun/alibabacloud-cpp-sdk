// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLUSTERAUDITLOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLUSTERAUDITLOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class UpdateClusterAuditLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateClusterAuditLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(disable, disable_);
      DARABONBA_PTR_TO_JSON(sls_project_name, slsProjectName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateClusterAuditLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(disable, disable_);
      DARABONBA_PTR_FROM_JSON(sls_project_name, slsProjectName_);
    };
    UpdateClusterAuditLogConfigRequest() = default ;
    UpdateClusterAuditLogConfigRequest(const UpdateClusterAuditLogConfigRequest &) = default ;
    UpdateClusterAuditLogConfigRequest(UpdateClusterAuditLogConfigRequest &&) = default ;
    UpdateClusterAuditLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateClusterAuditLogConfigRequest() = default ;
    UpdateClusterAuditLogConfigRequest& operator=(const UpdateClusterAuditLogConfigRequest &) = default ;
    UpdateClusterAuditLogConfigRequest& operator=(UpdateClusterAuditLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->disable_ == nullptr
        && this->slsProjectName_ == nullptr; };
    // disable Field Functions 
    bool hasDisable() const { return this->disable_ != nullptr;};
    void deleteDisable() { this->disable_ = nullptr;};
    inline bool getDisable() const { DARABONBA_PTR_GET_DEFAULT(disable_, false) };
    inline UpdateClusterAuditLogConfigRequest& setDisable(bool disable) { DARABONBA_PTR_SET_VALUE(disable_, disable) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string getSlsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline UpdateClusterAuditLogConfigRequest& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


  protected:
    // Enable or disable audit logging.
    // 
    // *   false: enables audit logging or updates the audit logging configurations.
    // *   true: disables audit logging.
    shared_ptr<bool> disable_ {};
    // The [Simple Log Service project](https://help.aliyun.com/document_detail/48873.html) to which the [Logstore](https://help.aliyun.com/document_detail/48873.html) storing the cluster audit logs belongs.
    // 
    // *   Default value: k8s-log-{clusterid}.
    // *   After the cluster audit log feature is enabled, a Logstore is created in the specified Simple Log Service project to store cluster audit logs.
    // *   If you want to change the project after audit logging is enabled for the cluster, you can use this parameter to specify another project. You can perform this operation only in ACK managed clusters.
    shared_ptr<string> slsProjectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
