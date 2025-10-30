// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTAUDITLOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERREQUESTAUDITLOGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class CreateClusterRequestAuditLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterRequestAuditLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(sls_project_name, slsProjectName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterRequestAuditLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(sls_project_name, slsProjectName_);
    };
    CreateClusterRequestAuditLogConfig() = default ;
    CreateClusterRequestAuditLogConfig(const CreateClusterRequestAuditLogConfig &) = default ;
    CreateClusterRequestAuditLogConfig(CreateClusterRequestAuditLogConfig &&) = default ;
    CreateClusterRequestAuditLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterRequestAuditLogConfig() = default ;
    CreateClusterRequestAuditLogConfig& operator=(const CreateClusterRequestAuditLogConfig &) = default ;
    CreateClusterRequestAuditLogConfig& operator=(CreateClusterRequestAuditLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->slsProjectName_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateClusterRequestAuditLogConfig& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // slsProjectName Field Functions 
    bool hasSlsProjectName() const { return this->slsProjectName_ != nullptr;};
    void deleteSlsProjectName() { this->slsProjectName_ = nullptr;};
    inline string slsProjectName() const { DARABONBA_PTR_GET_DEFAULT(slsProjectName_, "") };
    inline CreateClusterRequestAuditLogConfig& setSlsProjectName(string slsProjectName) { DARABONBA_PTR_SET_VALUE(slsProjectName_, slsProjectName) };


  protected:
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> slsProjectName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
