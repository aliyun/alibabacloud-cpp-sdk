// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEDASHBOARDSYNC_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEDASHBOARDSYNC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceDashboardSync : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceDashboardSync& obj) { 
      DARABONBA_PTR_TO_JSON(dashboardTitle, dashboardTitle_);
      DARABONBA_PTR_TO_JSON(dashboardURL, dashboardURL_);
      DARABONBA_PTR_TO_JSON(dashboardUid, dashboardUid_);
      DARABONBA_PTR_TO_JSON(folderId, folderId_);
      DARABONBA_PTR_TO_JSON(folderTitle, folderTitle_);
      DARABONBA_PTR_TO_JSON(folderURL, folderURL_);
      DARABONBA_PTR_TO_JSON(folderUid, folderUid_);
      DARABONBA_PTR_TO_JSON(orgId, orgId_);
      DARABONBA_PTR_TO_JSON(orgName, orgName_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceDashboardSync& obj) { 
      DARABONBA_PTR_FROM_JSON(dashboardTitle, dashboardTitle_);
      DARABONBA_PTR_FROM_JSON(dashboardURL, dashboardURL_);
      DARABONBA_PTR_FROM_JSON(dashboardUid, dashboardUid_);
      DARABONBA_PTR_FROM_JSON(folderId, folderId_);
      DARABONBA_PTR_FROM_JSON(folderTitle, folderTitle_);
      DARABONBA_PTR_FROM_JSON(folderURL, folderURL_);
      DARABONBA_PTR_FROM_JSON(folderUid, folderUid_);
      DARABONBA_PTR_FROM_JSON(orgId, orgId_);
      DARABONBA_PTR_FROM_JSON(orgName, orgName_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GrafanaWorkspaceDashboardSync() = default ;
    GrafanaWorkspaceDashboardSync(const GrafanaWorkspaceDashboardSync &) = default ;
    GrafanaWorkspaceDashboardSync(GrafanaWorkspaceDashboardSync &&) = default ;
    GrafanaWorkspaceDashboardSync(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceDashboardSync() = default ;
    GrafanaWorkspaceDashboardSync& operator=(const GrafanaWorkspaceDashboardSync &) = default ;
    GrafanaWorkspaceDashboardSync& operator=(GrafanaWorkspaceDashboardSync &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dashboardTitle_ != nullptr
        && this->dashboardURL_ != nullptr && this->dashboardUid_ != nullptr && this->folderId_ != nullptr && this->folderTitle_ != nullptr && this->folderURL_ != nullptr
        && this->folderUid_ != nullptr && this->orgId_ != nullptr && this->orgName_ != nullptr && this->type_ != nullptr; };
    // dashboardTitle Field Functions 
    bool hasDashboardTitle() const { return this->dashboardTitle_ != nullptr;};
    void deleteDashboardTitle() { this->dashboardTitle_ = nullptr;};
    inline string dashboardTitle() const { DARABONBA_PTR_GET_DEFAULT(dashboardTitle_, "") };
    inline GrafanaWorkspaceDashboardSync& setDashboardTitle(string dashboardTitle) { DARABONBA_PTR_SET_VALUE(dashboardTitle_, dashboardTitle) };


    // dashboardURL Field Functions 
    bool hasDashboardURL() const { return this->dashboardURL_ != nullptr;};
    void deleteDashboardURL() { this->dashboardURL_ = nullptr;};
    inline string dashboardURL() const { DARABONBA_PTR_GET_DEFAULT(dashboardURL_, "") };
    inline GrafanaWorkspaceDashboardSync& setDashboardURL(string dashboardURL) { DARABONBA_PTR_SET_VALUE(dashboardURL_, dashboardURL) };


    // dashboardUid Field Functions 
    bool hasDashboardUid() const { return this->dashboardUid_ != nullptr;};
    void deleteDashboardUid() { this->dashboardUid_ = nullptr;};
    inline string dashboardUid() const { DARABONBA_PTR_GET_DEFAULT(dashboardUid_, "") };
    inline GrafanaWorkspaceDashboardSync& setDashboardUid(string dashboardUid) { DARABONBA_PTR_SET_VALUE(dashboardUid_, dashboardUid) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string folderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GrafanaWorkspaceDashboardSync& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // folderTitle Field Functions 
    bool hasFolderTitle() const { return this->folderTitle_ != nullptr;};
    void deleteFolderTitle() { this->folderTitle_ = nullptr;};
    inline string folderTitle() const { DARABONBA_PTR_GET_DEFAULT(folderTitle_, "") };
    inline GrafanaWorkspaceDashboardSync& setFolderTitle(string folderTitle) { DARABONBA_PTR_SET_VALUE(folderTitle_, folderTitle) };


    // folderURL Field Functions 
    bool hasFolderURL() const { return this->folderURL_ != nullptr;};
    void deleteFolderURL() { this->folderURL_ = nullptr;};
    inline string folderURL() const { DARABONBA_PTR_GET_DEFAULT(folderURL_, "") };
    inline GrafanaWorkspaceDashboardSync& setFolderURL(string folderURL) { DARABONBA_PTR_SET_VALUE(folderURL_, folderURL) };


    // folderUid Field Functions 
    bool hasFolderUid() const { return this->folderUid_ != nullptr;};
    void deleteFolderUid() { this->folderUid_ = nullptr;};
    inline string folderUid() const { DARABONBA_PTR_GET_DEFAULT(folderUid_, "") };
    inline GrafanaWorkspaceDashboardSync& setFolderUid(string folderUid) { DARABONBA_PTR_SET_VALUE(folderUid_, folderUid) };


    // orgId Field Functions 
    bool hasOrgId() const { return this->orgId_ != nullptr;};
    void deleteOrgId() { this->orgId_ = nullptr;};
    inline string orgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
    inline GrafanaWorkspaceDashboardSync& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


    // orgName Field Functions 
    bool hasOrgName() const { return this->orgName_ != nullptr;};
    void deleteOrgName() { this->orgName_ = nullptr;};
    inline string orgName() const { DARABONBA_PTR_GET_DEFAULT(orgName_, "") };
    inline GrafanaWorkspaceDashboardSync& setOrgName(string orgName) { DARABONBA_PTR_SET_VALUE(orgName_, orgName) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GrafanaWorkspaceDashboardSync& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> dashboardTitle_ = nullptr;
    std::shared_ptr<string> dashboardURL_ = nullptr;
    std::shared_ptr<string> dashboardUid_ = nullptr;
    std::shared_ptr<string> folderId_ = nullptr;
    std::shared_ptr<string> folderTitle_ = nullptr;
    std::shared_ptr<string> folderURL_ = nullptr;
    std::shared_ptr<string> folderUid_ = nullptr;
    std::shared_ptr<string> orgId_ = nullptr;
    std::shared_ptr<string> orgName_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
