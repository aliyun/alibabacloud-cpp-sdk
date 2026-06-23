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
    // Specifies whether to disable the cluster audit log feature. Valid values:
    // - false: enables the audit log feature or updates the audit log configuration.
    // 
    // - true: disables the audit log feature.
    shared_ptr<bool> disable_ {};
    // The [SLS Project](https://help.aliyun.com/document_detail/48873.html) that contains the [Logstore](https://help.aliyun.com/document_detail/48874.html) for cluster audit logs.
    // 
    // - Default value: k8s-log-{clusterid}.
    // 
    // - After you enable the cluster audit log feature, a Logstore for cluster audit logs is created in the specified SLS Project.
    // 
    // - If you need to change the SLS Project after enabling the cluster audit log feature, use this parameter to specify a new SLS Project. Only ACK managed clusters support changing the SLS Project.
    shared_ptr<string> slsProjectName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
