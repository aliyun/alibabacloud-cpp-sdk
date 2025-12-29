// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNCOMMENTGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunCommentGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunCommentGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllowEmoji, allowEmoji_);
      DARABONBA_PTR_TO_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_TO_JSON(Length, length_);
      DARABONBA_ANY_TO_JSON(LengthRange, lengthRange_);
      DARABONBA_PTR_TO_JSON(ModelId, modelId_);
      DARABONBA_PTR_TO_JSON(NumComments, numComments_);
      DARABONBA_ANY_TO_JSON(Sentiment, sentiment_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(SourceMaterial, sourceMaterial_);
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_ANY_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunCommentGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllowEmoji, allowEmoji_);
      DARABONBA_PTR_FROM_JSON(ExtraInfo, extraInfo_);
      DARABONBA_PTR_FROM_JSON(Length, length_);
      DARABONBA_ANY_FROM_JSON(LengthRange, lengthRange_);
      DARABONBA_PTR_FROM_JSON(ModelId, modelId_);
      DARABONBA_PTR_FROM_JSON(NumComments, numComments_);
      DARABONBA_ANY_FROM_JSON(Sentiment, sentiment_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(SourceMaterial, sourceMaterial_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_ANY_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunCommentGenerationRequest() = default ;
    RunCommentGenerationRequest(const RunCommentGenerationRequest &) = default ;
    RunCommentGenerationRequest(RunCommentGenerationRequest &&) = default ;
    RunCommentGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunCommentGenerationRequest() = default ;
    RunCommentGenerationRequest& operator=(const RunCommentGenerationRequest &) = default ;
    RunCommentGenerationRequest& operator=(RunCommentGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allowEmoji_ == nullptr
        && this->extraInfo_ == nullptr && this->length_ == nullptr && this->lengthRange_ == nullptr && this->modelId_ == nullptr && this->numComments_ == nullptr
        && this->sentiment_ == nullptr && this->sessionId_ == nullptr && this->sourceMaterial_ == nullptr && this->style_ == nullptr && this->type_ == nullptr
        && this->workspaceId_ == nullptr; };
    // allowEmoji Field Functions 
    bool hasAllowEmoji() const { return this->allowEmoji_ != nullptr;};
    void deleteAllowEmoji() { this->allowEmoji_ = nullptr;};
    inline bool getAllowEmoji() const { DARABONBA_PTR_GET_DEFAULT(allowEmoji_, false) };
    inline RunCommentGenerationRequest& setAllowEmoji(bool allowEmoji) { DARABONBA_PTR_SET_VALUE(allowEmoji_, allowEmoji) };


    // extraInfo Field Functions 
    bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
    void deleteExtraInfo() { this->extraInfo_ = nullptr;};
    inline string getExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(extraInfo_, "") };
    inline RunCommentGenerationRequest& setExtraInfo(string extraInfo) { DARABONBA_PTR_SET_VALUE(extraInfo_, extraInfo) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline string getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, "") };
    inline RunCommentGenerationRequest& setLength(string length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // lengthRange Field Functions 
    bool hasLengthRange() const { return this->lengthRange_ != nullptr;};
    void deleteLengthRange() { this->lengthRange_ = nullptr;};
    inline     const Darabonba::Json & getLengthRange() const { DARABONBA_GET(lengthRange_) };
    Darabonba::Json & getLengthRange() { DARABONBA_GET(lengthRange_) };
    inline RunCommentGenerationRequest& setLengthRange(const Darabonba::Json & lengthRange) { DARABONBA_SET_VALUE(lengthRange_, lengthRange) };
    inline RunCommentGenerationRequest& setLengthRange(Darabonba::Json && lengthRange) { DARABONBA_SET_RVALUE(lengthRange_, lengthRange) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string getModelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline RunCommentGenerationRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // numComments Field Functions 
    bool hasNumComments() const { return this->numComments_ != nullptr;};
    void deleteNumComments() { this->numComments_ = nullptr;};
    inline string getNumComments() const { DARABONBA_PTR_GET_DEFAULT(numComments_, "") };
    inline RunCommentGenerationRequest& setNumComments(string numComments) { DARABONBA_PTR_SET_VALUE(numComments_, numComments) };


    // sentiment Field Functions 
    bool hasSentiment() const { return this->sentiment_ != nullptr;};
    void deleteSentiment() { this->sentiment_ = nullptr;};
    inline     const Darabonba::Json & getSentiment() const { DARABONBA_GET(sentiment_) };
    Darabonba::Json & getSentiment() { DARABONBA_GET(sentiment_) };
    inline RunCommentGenerationRequest& setSentiment(const Darabonba::Json & sentiment) { DARABONBA_SET_VALUE(sentiment_, sentiment) };
    inline RunCommentGenerationRequest& setSentiment(Darabonba::Json && sentiment) { DARABONBA_SET_RVALUE(sentiment_, sentiment) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline RunCommentGenerationRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // sourceMaterial Field Functions 
    bool hasSourceMaterial() const { return this->sourceMaterial_ != nullptr;};
    void deleteSourceMaterial() { this->sourceMaterial_ = nullptr;};
    inline string getSourceMaterial() const { DARABONBA_PTR_GET_DEFAULT(sourceMaterial_, "") };
    inline RunCommentGenerationRequest& setSourceMaterial(string sourceMaterial) { DARABONBA_PTR_SET_VALUE(sourceMaterial_, sourceMaterial) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline RunCommentGenerationRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline     const Darabonba::Json & getType() const { DARABONBA_GET(type_) };
    Darabonba::Json & getType() { DARABONBA_GET(type_) };
    inline RunCommentGenerationRequest& setType(const Darabonba::Json & type) { DARABONBA_SET_VALUE(type_, type) };
    inline RunCommentGenerationRequest& setType(Darabonba::Json && type) { DARABONBA_SET_RVALUE(type_, type) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunCommentGenerationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<bool> allowEmoji_ {};
    shared_ptr<string> extraInfo_ {};
    shared_ptr<string> length_ {};
    // This parameter is required.
    Darabonba::Json lengthRange_ {};
    shared_ptr<string> modelId_ {};
    // This parameter is required.
    shared_ptr<string> numComments_ {};
    // This parameter is required.
    Darabonba::Json sentiment_ {};
    shared_ptr<string> sessionId_ {};
    // This parameter is required.
    shared_ptr<string> sourceMaterial_ {};
    shared_ptr<string> style_ {};
    // This parameter is required.
    Darabonba::Json type_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
