// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestEditingConfig.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestInputConfig.hpp>
#include <alibabacloud/models/SubmitSmartClipTaskRequestOutputConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_TO_JSON(ExtendParam, extendParam_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfig_);
      DARABONBA_PTR_FROM_JSON(ExtendParam, extendParam_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfig_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfig_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitSmartClipTaskRequest() = default ;
    SubmitSmartClipTaskRequest(const SubmitSmartClipTaskRequest &) = default ;
    SubmitSmartClipTaskRequest(SubmitSmartClipTaskRequest &&) = default ;
    SubmitSmartClipTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequest() = default ;
    SubmitSmartClipTaskRequest& operator=(const SubmitSmartClipTaskRequest &) = default ;
    SubmitSmartClipTaskRequest& operator=(SubmitSmartClipTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editingConfig_ == nullptr
        && return this->extendParam_ == nullptr && return this->inputConfig_ == nullptr && return this->outputConfig_ == nullptr && return this->workspaceId_ == nullptr; };
    // editingConfig Field Functions 
    bool hasEditingConfig() const { return this->editingConfig_ != nullptr;};
    void deleteEditingConfig() { this->editingConfig_ = nullptr;};
    inline const SubmitSmartClipTaskRequestEditingConfig & editingConfig() const { DARABONBA_PTR_GET_CONST(editingConfig_, SubmitSmartClipTaskRequestEditingConfig) };
    inline SubmitSmartClipTaskRequestEditingConfig editingConfig() { DARABONBA_PTR_GET(editingConfig_, SubmitSmartClipTaskRequestEditingConfig) };
    inline SubmitSmartClipTaskRequest& setEditingConfig(const SubmitSmartClipTaskRequestEditingConfig & editingConfig) { DARABONBA_PTR_SET_VALUE(editingConfig_, editingConfig) };
    inline SubmitSmartClipTaskRequest& setEditingConfig(SubmitSmartClipTaskRequestEditingConfig && editingConfig) { DARABONBA_PTR_SET_RVALUE(editingConfig_, editingConfig) };


    // extendParam Field Functions 
    bool hasExtendParam() const { return this->extendParam_ != nullptr;};
    void deleteExtendParam() { this->extendParam_ = nullptr;};
    inline string extendParam() const { DARABONBA_PTR_GET_DEFAULT(extendParam_, "") };
    inline SubmitSmartClipTaskRequest& setExtendParam(string extendParam) { DARABONBA_PTR_SET_VALUE(extendParam_, extendParam) };


    // inputConfig Field Functions 
    bool hasInputConfig() const { return this->inputConfig_ != nullptr;};
    void deleteInputConfig() { this->inputConfig_ = nullptr;};
    inline const SubmitSmartClipTaskRequestInputConfig & inputConfig() const { DARABONBA_PTR_GET_CONST(inputConfig_, SubmitSmartClipTaskRequestInputConfig) };
    inline SubmitSmartClipTaskRequestInputConfig inputConfig() { DARABONBA_PTR_GET(inputConfig_, SubmitSmartClipTaskRequestInputConfig) };
    inline SubmitSmartClipTaskRequest& setInputConfig(const SubmitSmartClipTaskRequestInputConfig & inputConfig) { DARABONBA_PTR_SET_VALUE(inputConfig_, inputConfig) };
    inline SubmitSmartClipTaskRequest& setInputConfig(SubmitSmartClipTaskRequestInputConfig && inputConfig) { DARABONBA_PTR_SET_RVALUE(inputConfig_, inputConfig) };


    // outputConfig Field Functions 
    bool hasOutputConfig() const { return this->outputConfig_ != nullptr;};
    void deleteOutputConfig() { this->outputConfig_ = nullptr;};
    inline const SubmitSmartClipTaskRequestOutputConfig & outputConfig() const { DARABONBA_PTR_GET_CONST(outputConfig_, SubmitSmartClipTaskRequestOutputConfig) };
    inline SubmitSmartClipTaskRequestOutputConfig outputConfig() { DARABONBA_PTR_GET(outputConfig_, SubmitSmartClipTaskRequestOutputConfig) };
    inline SubmitSmartClipTaskRequest& setOutputConfig(const SubmitSmartClipTaskRequestOutputConfig & outputConfig) { DARABONBA_PTR_SET_VALUE(outputConfig_, outputConfig) };
    inline SubmitSmartClipTaskRequest& setOutputConfig(SubmitSmartClipTaskRequestOutputConfig && outputConfig) { DARABONBA_PTR_SET_RVALUE(outputConfig_, outputConfig) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitSmartClipTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<SubmitSmartClipTaskRequestEditingConfig> editingConfig_ = nullptr;
    std::shared_ptr<string> extendParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<SubmitSmartClipTaskRequestInputConfig> inputConfig_ = nullptr;
    std::shared_ptr<SubmitSmartClipTaskRequestOutputConfig> outputConfig_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
