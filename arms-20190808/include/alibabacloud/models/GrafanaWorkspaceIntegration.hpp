// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATION_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrafanaWorkspaceIntegrationPreview.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceIntegration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceIntegration& obj) { 
      DARABONBA_PTR_TO_JSON(datasourceAmount, datasourceAmount_);
      DARABONBA_PTR_TO_JSON(integrationId, integrationId_);
      DARABONBA_PTR_TO_JSON(integrationName, integrationName_);
      DARABONBA_PTR_TO_JSON(previews, previews_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(supportRegions, supportRegions_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceIntegration& obj) { 
      DARABONBA_PTR_FROM_JSON(datasourceAmount, datasourceAmount_);
      DARABONBA_PTR_FROM_JSON(integrationId, integrationId_);
      DARABONBA_PTR_FROM_JSON(integrationName, integrationName_);
      DARABONBA_PTR_FROM_JSON(previews, previews_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(supportRegions, supportRegions_);
    };
    GrafanaWorkspaceIntegration() = default ;
    GrafanaWorkspaceIntegration(const GrafanaWorkspaceIntegration &) = default ;
    GrafanaWorkspaceIntegration(GrafanaWorkspaceIntegration &&) = default ;
    GrafanaWorkspaceIntegration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceIntegration() = default ;
    GrafanaWorkspaceIntegration& operator=(const GrafanaWorkspaceIntegration &) = default ;
    GrafanaWorkspaceIntegration& operator=(GrafanaWorkspaceIntegration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->datasourceAmount_ != nullptr
        && this->integrationId_ != nullptr && this->integrationName_ != nullptr && this->previews_ != nullptr && this->status_ != nullptr && this->supportRegions_ != nullptr; };
    // datasourceAmount Field Functions 
    bool hasDatasourceAmount() const { return this->datasourceAmount_ != nullptr;};
    void deleteDatasourceAmount() { this->datasourceAmount_ = nullptr;};
    inline int64_t datasourceAmount() const { DARABONBA_PTR_GET_DEFAULT(datasourceAmount_, 0L) };
    inline GrafanaWorkspaceIntegration& setDatasourceAmount(int64_t datasourceAmount) { DARABONBA_PTR_SET_VALUE(datasourceAmount_, datasourceAmount) };


    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline string integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, "") };
    inline GrafanaWorkspaceIntegration& setIntegrationId(string integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


    // integrationName Field Functions 
    bool hasIntegrationName() const { return this->integrationName_ != nullptr;};
    void deleteIntegrationName() { this->integrationName_ = nullptr;};
    inline string integrationName() const { DARABONBA_PTR_GET_DEFAULT(integrationName_, "") };
    inline GrafanaWorkspaceIntegration& setIntegrationName(string integrationName) { DARABONBA_PTR_SET_VALUE(integrationName_, integrationName) };


    // previews Field Functions 
    bool hasPreviews() const { return this->previews_ != nullptr;};
    void deletePreviews() { this->previews_ = nullptr;};
    inline const vector<GrafanaWorkspaceIntegrationPreview> & previews() const { DARABONBA_PTR_GET_CONST(previews_, vector<GrafanaWorkspaceIntegrationPreview>) };
    inline vector<GrafanaWorkspaceIntegrationPreview> previews() { DARABONBA_PTR_GET(previews_, vector<GrafanaWorkspaceIntegrationPreview>) };
    inline GrafanaWorkspaceIntegration& setPreviews(const vector<GrafanaWorkspaceIntegrationPreview> & previews) { DARABONBA_PTR_SET_VALUE(previews_, previews) };
    inline GrafanaWorkspaceIntegration& setPreviews(vector<GrafanaWorkspaceIntegrationPreview> && previews) { DARABONBA_PTR_SET_RVALUE(previews_, previews) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GrafanaWorkspaceIntegration& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportRegions Field Functions 
    bool hasSupportRegions() const { return this->supportRegions_ != nullptr;};
    void deleteSupportRegions() { this->supportRegions_ = nullptr;};
    inline const vector<string> & supportRegions() const { DARABONBA_PTR_GET_CONST(supportRegions_, vector<string>) };
    inline vector<string> supportRegions() { DARABONBA_PTR_GET(supportRegions_, vector<string>) };
    inline GrafanaWorkspaceIntegration& setSupportRegions(const vector<string> & supportRegions) { DARABONBA_PTR_SET_VALUE(supportRegions_, supportRegions) };
    inline GrafanaWorkspaceIntegration& setSupportRegions(vector<string> && supportRegions) { DARABONBA_PTR_SET_RVALUE(supportRegions_, supportRegions) };


  protected:
    std::shared_ptr<int64_t> datasourceAmount_ = nullptr;
    std::shared_ptr<string> integrationId_ = nullptr;
    std::shared_ptr<string> integrationName_ = nullptr;
    std::shared_ptr<vector<GrafanaWorkspaceIntegrationPreview>> previews_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> supportRegions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
