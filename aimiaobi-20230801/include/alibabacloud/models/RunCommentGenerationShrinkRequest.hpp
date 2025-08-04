// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCommentGenerationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommentGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowEmoji, allowEmoji_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_PTR_TO_JSON(LengthRange, lengthRangeShrink_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(NumComments, numComments_);
      DARABONBA_PTR_TO_JSON(Sentiment, sentimentShrink_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SourceMaterial, sourceMaterial_);
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_PTR_TO_JSON(Type, typeShrink_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommentGenerationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowEmoji, allowEmoji_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_PTR_FROM_JSON(LengthRange, lengthRangeShrink_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(NumComments, numComments_);
      DARABONBA_PTR_FROM_JSON(Sentiment, sentimentShrink_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SourceMaterial, sourceMaterial_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_PTR_FROM_JSON(Type, typeShrink_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunCommentGenerationShrinkRequest() = default ;
    RunCommentGenerationShrinkRequest(const RunCommentGenerationShrinkRequest &) = default ;
    RunCommentGenerationShrinkRequest(RunCommentGenerationShrinkRequest &&) = default ;
    RunCommentGenerationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommentGenerationShrinkRequest() = default ;
    RunCommentGenerationShrinkRequest& operator=(const RunCommentGenerationShrinkRequest &) = default ;
    RunCommentGenerationShrinkRequest& operator=(RunCommentGenerationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowEmoji_ != nullptr
        && this->extraInfo_ != nullptr && this->length_ != nullptr && this->lengthRangeShrink_ != nullptr && this->modelId_ != nullptr && this->numComments_ != nullptr
        && this->sentimentShrink_ != nullptr && this->sessionId_ != nullptr && this->sourceMaterial_ != nullptr && this->style_ != nullptr && this->typeShrink_ != nullptr
        && this->workspaceId_ != nullptr; };
    // allowEmoji Field Functions 
    bool hasAllowEmoji() const { return this->allowEmoji_ != nullptr;};
    void deleteAllowEmoji() { this->allowEmoji_ = nullptr;};
    inline bool allowEmoji() const { DARABONBA_PTR_GET_DEFAULT(allowEmoji_, false) };
    inline RunCommentGenerationShrinkRequest& setAllowEmoji(bool allowEmoji) { DARABONBA_PTR_SET_VALUE(allowEmoji_, allowEmoji) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string extraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline RunCommentGenerationShrinkRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string length() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline RunCommentGenerationShrinkRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // lengthRangeShrink Field Functions 
    bool hasLengthRangeShrink() const { return this->lengthRangeShrink_ != nullptr;};
    void deleteLengthRangeShrink() { this->lengthRangeShrink_ = nullptr;};
    inline string lengthRangeShrink() const { DARABONBA_PTR_GET_DEFAULT(lengthRangeShrink_, "") };
    inline RunCommentGenerationShrinkRequest& setLengthRangeShrink(string lengthRangeShrink) { DARABONBA_PTR_SET_VALUE(lengthRangeShrink_, lengthRangeShrink) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunCommentGenerationShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // numComments Field Functions 
    bool hasNumComments() const { return this->numComments_ != nullptr;};
    void deleteNumComments() { this->numComments_ = nullptr;};
    inline string numComments() const { DARABONBA_PTR_GET_DEFAULT(numComments_, "") };
    inline RunCommentGenerationShrinkRequest& setNumComments(string numComments) { DARABONBA_PTR_SET_VALUE(numComments_, numComments) };


    // sentimentShrink Field Functions 
    bool hasSentimentShrink() const { return this->sentimentShrink_ != nullptr;};
    void deleteSentimentShrink() { this->sentimentShrink_ = nullptr;};
    inline string sentimentShrink() const { DARABONBA_PTR_GET_DEFAULT(sentimentShrink_, "") };
    inline RunCommentGenerationShrinkRequest& setSentimentShrink(string sentimentShrink) { DARABONBA_PTR_SET_VALUE(sentimentShrink_, sentimentShrink) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunCommentGenerationShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sourceMaterial Field Functions 
    bool hasSourceMaterial() const { return this->sourceMaterial_ != nullptr;};
    void deleteSourceMaterial() { this->sourceMaterial_ = nullptr;};
    inline string sourceMaterial() const { DARABONBA_PTR_GET_DEFAULT(sourceMaterial_, "") };
    inline RunCommentGenerationShrinkRequest& setSourceMaterial(string sourceMaterial) { DARABONBA_PTR_SET_VALUE(sourceMaterial_, sourceMaterial) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline RunCommentGenerationShrinkRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // typeShrink Field Functions 
    bool hasTypeShrink() const { return this->typeShrink_ != nullptr;};
    void deleteTypeShrink() { this->typeShrink_ = nullptr;};
    inline string typeShrink() const { DARABONBA_PTR_GET_DEFAULT(typeShrink_, "") };
    inline RunCommentGenerationShrinkRequest& setTypeShrink(string typeShrink) { DARABONBA_PTR_SET_VALUE(typeShrink_, typeShrink) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunCommentGenerationShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<bool> allowEmoji_ = nullptr;
    std::shared_ptr<string> extraInfo_ = nullptr;
    std::shared_ptr<string> length_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> lengthRangeShrink_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> numComments_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sentimentShrink_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sourceMaterial_ = nullptr;
    std::shared_ptr<string> style_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> typeShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
