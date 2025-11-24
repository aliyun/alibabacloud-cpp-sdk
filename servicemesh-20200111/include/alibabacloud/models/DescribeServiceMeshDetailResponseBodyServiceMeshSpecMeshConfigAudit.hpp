// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGAUDIT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHDETAILRESPONSEBODYSERVICEMESHSPECMESHCONFIGAUDIT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit& obj) { 
      DARABONBA_PTR_TO_JSON(AuditProjectStatus, auditProjectStatus_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Project, project_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditProjectStatus, auditProjectStatus_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
    };
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit &&) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit() = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit& operator=(const DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit &) = default ;
    DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit& operator=(DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditProjectStatus_ == nullptr
        && return this->enabled_ == nullptr && return this->project_ == nullptr; };
    // auditProjectStatus Field Functions 
    bool hasAuditProjectStatus() const { return this->auditProjectStatus_ != nullptr;};
    void deleteAuditProjectStatus() { this->auditProjectStatus_ = nullptr;};
    inline string auditProjectStatus() const { DARABONBA_PTR_GET_DEFAULT(auditProjectStatus_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit& setAuditProjectStatus(string auditProjectStatus) { DARABONBA_PTR_SET_VALUE(auditProjectStatus_, auditProjectStatus) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DescribeServiceMeshDetailResponseBodyServiceMeshSpecMeshConfigAudit& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // Indicates whether an audit project exists in the ASM instance. Valid values:
    // 
    // *   `audit_project_exist`: An audit project exists.
    // *   `audit_project_not_exist`: No audit project exists.
    std::shared_ptr<string> auditProjectStatus_ = nullptr;
    // Indicates whether mesh audit is enabled. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> enabled_ = nullptr;
    // The name of the Simple Log Service project that is used for mesh audit.
    std::shared_ptr<string> project_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
