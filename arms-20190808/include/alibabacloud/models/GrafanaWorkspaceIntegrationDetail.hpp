// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATIONDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GRAFANAWORKSPACEINTEGRATIONDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GrafanaWorkspaceIntegrationDataSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GrafanaWorkspaceIntegrationDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GrafanaWorkspaceIntegrationDetail& obj) { 
      DARABONBA_PTR_TO_JSON(dataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(integrationId, integrationId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GrafanaWorkspaceIntegrationDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(dataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(integrationId, integrationId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GrafanaWorkspaceIntegrationDetail() = default ;
    GrafanaWorkspaceIntegrationDetail(const GrafanaWorkspaceIntegrationDetail &) = default ;
    GrafanaWorkspaceIntegrationDetail(GrafanaWorkspaceIntegrationDetail &&) = default ;
    GrafanaWorkspaceIntegrationDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GrafanaWorkspaceIntegrationDetail() = default ;
    GrafanaWorkspaceIntegrationDetail& operator=(const GrafanaWorkspaceIntegrationDetail &) = default ;
    GrafanaWorkspaceIntegrationDetail& operator=(GrafanaWorkspaceIntegrationDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSources_ != nullptr
        && this->integrationId_ != nullptr && this->status_ != nullptr; };
    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline const vector<GrafanaWorkspaceIntegrationDataSource> & dataSources() const { DARABONBA_PTR_GET_CONST(dataSources_, vector<GrafanaWorkspaceIntegrationDataSource>) };
    inline vector<GrafanaWorkspaceIntegrationDataSource> dataSources() { DARABONBA_PTR_GET(dataSources_, vector<GrafanaWorkspaceIntegrationDataSource>) };
    inline GrafanaWorkspaceIntegrationDetail& setDataSources(const vector<GrafanaWorkspaceIntegrationDataSource> & dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };
    inline GrafanaWorkspaceIntegrationDetail& setDataSources(vector<GrafanaWorkspaceIntegrationDataSource> && dataSources) { DARABONBA_PTR_SET_RVALUE(dataSources_, dataSources) };


    // integrationId Field Functions 
    bool hasIntegrationId() const { return this->integrationId_ != nullptr;};
    void deleteIntegrationId() { this->integrationId_ = nullptr;};
    inline string integrationId() const { DARABONBA_PTR_GET_DEFAULT(integrationId_, "") };
    inline GrafanaWorkspaceIntegrationDetail& setIntegrationId(string integrationId) { DARABONBA_PTR_SET_VALUE(integrationId_, integrationId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GrafanaWorkspaceIntegrationDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<vector<GrafanaWorkspaceIntegrationDataSource>> dataSources_ = nullptr;
    std::shared_ptr<string> integrationId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
