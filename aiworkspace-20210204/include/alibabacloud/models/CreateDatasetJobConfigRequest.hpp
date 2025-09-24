// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETJOBCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETJOBCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class CreateDatasetJobConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetJobConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetJobConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(DatasetVersion, datasetVersion_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateDatasetJobConfigRequest() = default ;
    CreateDatasetJobConfigRequest(const CreateDatasetJobConfigRequest &) = default ;
    CreateDatasetJobConfigRequest(CreateDatasetJobConfigRequest &&) = default ;
    CreateDatasetJobConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetJobConfigRequest() = default ;
    CreateDatasetJobConfigRequest& operator=(const CreateDatasetJobConfigRequest &) = default ;
    CreateDatasetJobConfigRequest& operator=(CreateDatasetJobConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->configType_ != nullptr && this->datasetVersion_ != nullptr && this->workspaceId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline CreateDatasetJobConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline CreateDatasetJobConfigRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // datasetVersion Field Functions 
    bool hasDatasetVersion() const { return this->datasetVersion_ != nullptr;};
    void deleteDatasetVersion() { this->datasetVersion_ = nullptr;};
    inline string datasetVersion() const { DARABONBA_PTR_GET_DEFAULT(datasetVersion_, "") };
    inline CreateDatasetJobConfigRequest& setDatasetVersion(string datasetVersion) { DARABONBA_PTR_SET_VALUE(datasetVersion_, datasetVersion) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateDatasetJobConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The configuration content. Format:
    // 
    // *   MultimodalIntelligentTag
    // 
    // { "apiKey":"sk-xxxxxxxxxxxxxxxxxxxxx" }
    // 
    // *   MultimodalSemanticIndex
    // 
    // { "defaultModelId": "xxx" "defaultModelVersion":"1.0.0" }
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The configuration type.
    // 
    // Valid values:
    // 
    // *   MultimodalIntelligentTag
    // *   MultimodalSemanticIndex
    // 
    // This parameter is required.
    std::shared_ptr<string> configType_ = nullptr;
    std::shared_ptr<string> datasetVersion_ = nullptr;
    // The workspace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
