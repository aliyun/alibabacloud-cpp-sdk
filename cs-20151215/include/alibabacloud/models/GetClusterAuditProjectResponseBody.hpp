// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERAUDITPROJECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERAUDITPROJECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class GetClusterAuditProjectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterAuditProjectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(audit_enabled, auditEnabled_);
      DARABONBA_PTR_TO_JSON(sls_project_name, slsProjectName_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterAuditProjectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(audit_enabled, auditEnabled_);
      DARABONBA_PTR_FROM_JSON(sls_project_name, slsProjectName_);
    };
    GetClusterAuditProjectResponseBody() = default ;
    GetClusterAuditProjectResponseBody(const GetClusterAuditProjectResponseBody &) = default ;
    GetClusterAuditProjectResponseBody(GetClusterAuditProjectResponseBody &&) = default ;
    GetClusterAuditProjectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterAuditProjectResponseBody() = default ;
    GetClusterAuditProjectResponseBody& operator=(const GetClusterAuditProjectResponseBody &) = default ;
    GetClusterAuditProjectResponseBody& operator=(GetClusterAuditProjectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditEnabled_ == nullptr
        && return this->slsProjectName_ == nullptr; };
    // auditEnabled Field Functions 
    bool hasAuditEnabled() const { return this->auditEnabled_ != nullptr;};
    void deleteAuditEnabled() { this->auditEnabled_ = nullptr;};
    inline bool auditEnabled() const { DARABONBA_PTR_GET_DEFAULT(auditEnabled_, false) };
    inline GetClusterAuditProjectResponseBody& setAuditEnabled(bool auditEnabled) { DARABONBA_PTR_SET_VALUE(auditEnabled_, auditEnabled) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string slsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline GetClusterAuditProjectResponseBody& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


  protected:
    // Indicates whether the cluster auditing feature is enabled for the cluster. 
    // 
    // * `true`: The cluster auditing feature is enabled for the cluster. 
    // * `false`: The cluster auditing feature is disabled for the cluster.
    std::shared_ptr<bool> auditEnabled_ = nullptr;
    // The SLS project in which the audit logs of the API server are stored.
    std::shared_ptr<string> slsProjectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
