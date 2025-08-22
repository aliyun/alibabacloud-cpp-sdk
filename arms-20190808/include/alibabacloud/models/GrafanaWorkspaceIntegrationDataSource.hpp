// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATIONDATASOURCE_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATIONDATASOURCE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceIntegrationDataSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceIntegrationDataSource& obj) { 
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(datasourceId, datasourceId_);
      DARABONBA_PTR_TO_JSON(datasourceName, datasourceName_);
      DARABONBA_PTR_TO_JSON(datasourceUrl, datasourceUrl_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(exploreUrl, exploreUrl_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(folderUrl, folderUrl_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceIntegrationDataSource& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(datasourceId, datasourceId_);
      DARABONBA_PTR_FROM_JSON(datasourceName, datasourceName_);
      DARABONBA_PTR_FROM_JSON(datasourceUrl, datasourceUrl_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(exploreUrl, exploreUrl_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(folderUrl, folderUrl_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GrafanaWorkspaceIntegrationDataSource() = default ;
    GrafanaWorkspaceIntegrationDataSource(const GrafanaWorkspaceIntegrationDataSource &) = default ;
    GrafanaWorkspaceIntegrationDataSource(GrafanaWorkspaceIntegrationDataSource &&) = default ;
    GrafanaWorkspaceIntegrationDataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceIntegrationDataSource() = default ;
    GrafanaWorkspaceIntegrationDataSource& operator=(const GrafanaWorkspaceIntegrationDataSource &) = default ;
    GrafanaWorkspaceIntegrationDataSource& operator=(GrafanaWorkspaceIntegrationDataSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterType_ != nullptr
        && this->datasourceId_ != nullptr && this->datasourceName_ != nullptr && this->datasourceUrl_ != nullptr && this->description_ != nullptr && this->exploreUrl_ != nullptr
        && this->extra_ != nullptr && this->folderUrl_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->type_ != nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // datasourceId Field Functions 
    bool hasDatasourceId() const { return this->datasourceId_ != nullptr;};
    void deleteDatasourceId() { this->datasourceId_ = nullptr;};
    inline string datasourceId() const { DARABONBA_PTR_GET_DEFAULT(datasourceId_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setDatasourceId(string datasourceId) { DARABONBA_PTR_SET_VALUE(datasourceId_, datasourceId) };


    // datasourceName Field Functions 
    bool hasDatasourceName() const { return this->datasourceName_ != nullptr;};
    void deleteDatasourceName() { this->datasourceName_ = nullptr;};
    inline string datasourceName() const { DARABONBA_PTR_GET_DEFAULT(datasourceName_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setDatasourceName(string datasourceName) { DARABONBA_PTR_SET_VALUE(datasourceName_, datasourceName) };


    // datasourceUrl Field Functions 
    bool hasDatasourceUrl() const { return this->datasourceUrl_ != nullptr;};
    void deleteDatasourceUrl() { this->datasourceUrl_ = nullptr;};
    inline string datasourceUrl() const { DARABONBA_PTR_GET_DEFAULT(datasourceUrl_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setDatasourceUrl(string datasourceUrl) { DARABONBA_PTR_SET_VALUE(datasourceUrl_, datasourceUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // exploreUrl Field Functions 
    bool hasExploreUrl() const { return this->exploreUrl_ != nullptr;};
    void deleteExploreUrl() { this->exploreUrl_ = nullptr;};
    inline string exploreUrl() const { DARABONBA_PTR_GET_DEFAULT(exploreUrl_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setExploreUrl(string exploreUrl) { DARABONBA_PTR_SET_VALUE(exploreUrl_, exploreUrl) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & extra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> extra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline GrafanaWorkspaceIntegrationDataSource& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline GrafanaWorkspaceIntegrationDataSource& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // folderUrl Field Functions 
    bool hasFolderUrl() const { return this->folderUrl_ != nullptr;};
    void deleteFolderUrl() { this->folderUrl_ = nullptr;};
    inline string folderUrl() const { DARABONBA_PTR_GET_DEFAULT(folderUrl_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setFolderUrl(string folderUrl) { DARABONBA_PTR_SET_VALUE(folderUrl_, folderUrl) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GrafanaWorkspaceIntegrationDataSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> datasourceId_ = nullptr;
    std::shared_ptr<string> datasourceName_ = nullptr;
    std::shared_ptr<string> datasourceUrl_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> exploreUrl_ = nullptr;
    std::shared_ptr<map<string, string>> extra_ = nullptr;
    std::shared_ptr<string> folderUrl_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
