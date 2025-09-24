// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATASETJOBCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATASETJOBCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class UpdateDatasetJobConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDatasetJobConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ConfigType, configType_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDatasetJobConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateDatasetJobConfigRequest() = default ;
    UpdateDatasetJobConfigRequest(const UpdateDatasetJobConfigRequest &) = default ;
    UpdateDatasetJobConfigRequest(UpdateDatasetJobConfigRequest &&) = default ;
    UpdateDatasetJobConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDatasetJobConfigRequest() = default ;
    UpdateDatasetJobConfigRequest& operator=(const UpdateDatasetJobConfigRequest &) = default ;
    UpdateDatasetJobConfigRequest& operator=(UpdateDatasetJobConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->configType_ != nullptr && this->workspaceId_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateDatasetJobConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // configType Field Functions 
    bool hasConfigType() const { return this->configType_ != nullptr;};
    void deleteConfigType() { this->configType_ = nullptr;};
    inline string configType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
    inline UpdateDatasetJobConfigRequest& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateDatasetJobConfigRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The configuration content. Formats:
    // 
    // *   MultimodalIntelligentTag
    // 
    // { "apiKey":"sk-xxxxxxxxxxxxxxxxxxxxx" }
    // 
    // *   MultimodalSemanticIndex
    // 
    // { "defaultModelId": "xxx" "defaultModelVersion":"1.0.0" }
    std::shared_ptr<string> config_ = nullptr;
    // The configuration type.
    // 
    // *   MultimodalIntelligentTag
    // *   MultimodalSemanticIndex
    std::shared_ptr<string> configType_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
