// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXPORTAPPLICATIONCONFIGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ApplicationConfigFile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ExportApplicationConfigsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportApplicationConfigsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationConfigFiles, applicationConfigFiles_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_TO_JSON(ExportMode, exportMode_);
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ExportApplicationConfigsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationConfigFiles, applicationConfigFiles_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ConfigScope, configScope_);
      DARABONBA_PTR_FROM_JSON(ExportMode, exportMode_);
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(NodeGroupIds, nodeGroupIds_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ExportApplicationConfigsRequest() = default ;
    ExportApplicationConfigsRequest(const ExportApplicationConfigsRequest &) = default ;
    ExportApplicationConfigsRequest(ExportApplicationConfigsRequest &&) = default ;
    ExportApplicationConfigsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportApplicationConfigsRequest() = default ;
    ExportApplicationConfigsRequest& operator=(const ExportApplicationConfigsRequest &) = default ;
    ExportApplicationConfigsRequest& operator=(ExportApplicationConfigsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationConfigFiles_ == nullptr
        && return this->clusterId_ == nullptr && return this->configScope_ == nullptr && return this->exportMode_ == nullptr && return this->fileFormat_ == nullptr && return this->nodeGroupIds_ == nullptr
        && return this->nodeIds_ == nullptr && return this->regionId_ == nullptr; };
    // applicationConfigFiles Field Functions 
    bool hasApplicationConfigFiles() const { return this->applicationConfigFiles_ != nullptr;};
    void deleteApplicationConfigFiles() { this->applicationConfigFiles_ = nullptr;};
    inline const vector<ApplicationConfigFile> & applicationConfigFiles() const { DARABONBA_PTR_GET_CONST(applicationConfigFiles_, vector<ApplicationConfigFile>) };
    inline vector<ApplicationConfigFile> applicationConfigFiles() { DARABONBA_PTR_GET(applicationConfigFiles_, vector<ApplicationConfigFile>) };
    inline ExportApplicationConfigsRequest& setApplicationConfigFiles(const vector<ApplicationConfigFile> & applicationConfigFiles) { DARABONBA_PTR_SET_VALUE(applicationConfigFiles_, applicationConfigFiles) };
    inline ExportApplicationConfigsRequest& setApplicationConfigFiles(vector<ApplicationConfigFile> && applicationConfigFiles) { DARABONBA_PTR_SET_RVALUE(applicationConfigFiles_, applicationConfigFiles) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ExportApplicationConfigsRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // configScope Field Functions 
    bool hasConfigScope() const { return this->configScope_ != nullptr;};
    void deleteConfigScope() { this->configScope_ = nullptr;};
    inline string configScope() const { DARABONBA_PTR_GET_DEFAULT(configScope_, "") };
    inline ExportApplicationConfigsRequest& setConfigScope(string configScope) { DARABONBA_PTR_SET_VALUE(configScope_, configScope) };


    // exportMode Field Functions 
    bool hasExportMode() const { return this->exportMode_ != nullptr;};
    void deleteExportMode() { this->exportMode_ = nullptr;};
    inline string exportMode() const { DARABONBA_PTR_GET_DEFAULT(exportMode_, "") };
    inline ExportApplicationConfigsRequest& setExportMode(string exportMode) { DARABONBA_PTR_SET_VALUE(exportMode_, exportMode) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string fileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline ExportApplicationConfigsRequest& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // nodeGroupIds Field Functions 
    bool hasNodeGroupIds() const { return this->nodeGroupIds_ != nullptr;};
    void deleteNodeGroupIds() { this->nodeGroupIds_ = nullptr;};
    inline const vector<string> & nodeGroupIds() const { DARABONBA_PTR_GET_CONST(nodeGroupIds_, vector<string>) };
    inline vector<string> nodeGroupIds() { DARABONBA_PTR_GET(nodeGroupIds_, vector<string>) };
    inline ExportApplicationConfigsRequest& setNodeGroupIds(const vector<string> & nodeGroupIds) { DARABONBA_PTR_SET_VALUE(nodeGroupIds_, nodeGroupIds) };
    inline ExportApplicationConfigsRequest& setNodeGroupIds(vector<string> && nodeGroupIds) { DARABONBA_PTR_SET_RVALUE(nodeGroupIds_, nodeGroupIds) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & nodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> nodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline ExportApplicationConfigsRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline ExportApplicationConfigsRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ExportApplicationConfigsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // 导出应用配置。
    std::shared_ptr<vector<ApplicationConfigFile>> applicationConfigFiles_ = nullptr;
    // 集群ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> configScope_ = nullptr;
    std::shared_ptr<string> exportMode_ = nullptr;
    // 导出应用配置的文件格式。
    std::shared_ptr<string> fileFormat_ = nullptr;
    std::shared_ptr<vector<string>> nodeGroupIds_ = nullptr;
    std::shared_ptr<vector<string>> nodeIds_ = nullptr;
    // 区域ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
