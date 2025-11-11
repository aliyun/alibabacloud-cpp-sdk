// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EditingConfig, editingConfigShrink_);
      DARABONBA_PTR_TO_JSON(ExtendParam, extendParam_);
      DARABONBA_PTR_TO_JSON(InputConfig, inputConfigShrink_);
      DARABONBA_PTR_TO_JSON(OutputConfig, outputConfigShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EditingConfig, editingConfigShrink_);
      DARABONBA_PTR_FROM_JSON(ExtendParam, extendParam_);
      DARABONBA_PTR_FROM_JSON(InputConfig, inputConfigShrink_);
      DARABONBA_PTR_FROM_JSON(OutputConfig, outputConfigShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitSmartClipTaskShrinkRequest() = default ;
    SubmitSmartClipTaskShrinkRequest(const SubmitSmartClipTaskShrinkRequest &) = default ;
    SubmitSmartClipTaskShrinkRequest(SubmitSmartClipTaskShrinkRequest &&) = default ;
    SubmitSmartClipTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskShrinkRequest() = default ;
    SubmitSmartClipTaskShrinkRequest& operator=(const SubmitSmartClipTaskShrinkRequest &) = default ;
    SubmitSmartClipTaskShrinkRequest& operator=(SubmitSmartClipTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->editingConfigShrink_ == nullptr
        && return this->extendParam_ == nullptr && return this->inputConfigShrink_ == nullptr && return this->outputConfigShrink_ == nullptr && return this->workspaceId_ == nullptr; };
    // editingConfigShrink Field Functions 
    bool hasEditingConfigShrink() const { return this->editingConfigShrink_ != nullptr;};
    void deleteEditingConfigShrink() { this->editingConfigShrink_ = nullptr;};
    inline string editingConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(editingConfigShrink_, "") };
    inline SubmitSmartClipTaskShrinkRequest& setEditingConfigShrink(string editingConfigShrink) { DARABONBA_PTR_SET_VALUE(editingConfigShrink_, editingConfigShrink) };


    // extendParam Field Functions 
    bool hasExtendParam() const { return this->extendParam_ != nullptr;};
    void deleteExtendParam() { this->extendParam_ = nullptr;};
    inline string extendParam() const { DARABONBA_PTR_GET_DEFAULT(extendParam_, "") };
    inline SubmitSmartClipTaskShrinkRequest& setExtendParam(string extendParam) { DARABONBA_PTR_SET_VALUE(extendParam_, extendParam) };


    // inputConfigShrink Field Functions 
    bool hasInputConfigShrink() const { return this->inputConfigShrink_ != nullptr;};
    void deleteInputConfigShrink() { this->inputConfigShrink_ = nullptr;};
    inline string inputConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(inputConfigShrink_, "") };
    inline SubmitSmartClipTaskShrinkRequest& setInputConfigShrink(string inputConfigShrink) { DARABONBA_PTR_SET_VALUE(inputConfigShrink_, inputConfigShrink) };


    // outputConfigShrink Field Functions 
    bool hasOutputConfigShrink() const { return this->outputConfigShrink_ != nullptr;};
    void deleteOutputConfigShrink() { this->outputConfigShrink_ = nullptr;};
    inline string outputConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(outputConfigShrink_, "") };
    inline SubmitSmartClipTaskShrinkRequest& setOutputConfigShrink(string outputConfigShrink) { DARABONBA_PTR_SET_VALUE(outputConfigShrink_, outputConfigShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitSmartClipTaskShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> editingConfigShrink_ = nullptr;
    std::shared_ptr<string> extendParam_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inputConfigShrink_ = nullptr;
    std::shared_ptr<string> outputConfigShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
