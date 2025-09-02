// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTDATASOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTDATASOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ImportDataSourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportDataSourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSources, dataSources_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportDataSourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSources, dataSources_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
    };
    ImportDataSourcesRequest() = default ;
    ImportDataSourcesRequest(const ImportDataSourcesRequest &) = default ;
    ImportDataSourcesRequest(ImportDataSourcesRequest &&) = default ;
    ImportDataSourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportDataSourcesRequest() = default ;
    ImportDataSourcesRequest& operator=(const ImportDataSourcesRequest &) = default ;
    ImportDataSourcesRequest& operator=(ImportDataSourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSources_ != nullptr
        && this->projectId_ != nullptr; };
    // dataSources Field Functions 
    bool hasDataSources() const { return this->dataSources_ != nullptr;};
    void deleteDataSources() { this->dataSources_ = nullptr;};
    inline string dataSources() const { DARABONBA_PTR_GET_DEFAULT(dataSources_, "") };
    inline ImportDataSourcesRequest& setDataSources(string dataSources) { DARABONBA_PTR_SET_VALUE(dataSources_, dataSources) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ImportDataSourcesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


  protected:
    // The configurations of the data sources that you want to import. The Name, DataSourceType, SubType, Description, Content, and EnvType parameters are required. For more information about the parameters, see [CreateDataSource](https://help.aliyun.com/document_detail/211429.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> dataSources_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
