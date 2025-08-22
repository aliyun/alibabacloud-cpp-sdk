// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEUSERORG_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEUSERORG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceUserOrg : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceUserOrg& obj) { 
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(orgName, orgName_);
      DARABONBA_PTR_TO_JSON(role, role_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceUserOrg& obj) { 
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(orgName, orgName_);
      DARABONBA_PTR_FROM_JSON(role, role_);
    };
    GrafanaWorkspaceUserOrg() = default ;
    GrafanaWorkspaceUserOrg(const GrafanaWorkspaceUserOrg &) = default ;
    GrafanaWorkspaceUserOrg(GrafanaWorkspaceUserOrg &&) = default ;
    GrafanaWorkspaceUserOrg(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceUserOrg() = default ;
    GrafanaWorkspaceUserOrg& operator=(const GrafanaWorkspaceUserOrg &) = default ;
    GrafanaWorkspaceUserOrg& operator=(GrafanaWorkspaceUserOrg &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orgId_ != nullptr
        && this->orgName_ != nullptr && this->role_ != nullptr; };
    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline int64_t orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, 0L) };
    inline GrafanaWorkspaceUserOrg& setOrgId(int64_t orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline GrafanaWorkspaceUserOrg& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GrafanaWorkspaceUserOrg& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


  protected:
    std::shared_ptr<int64_t> orgId_ = nullptr;
    std::shared_ptr<string> orgName_ = nullptr;
    std::shared_ptr<string> role_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
