// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGENERATEDCONTENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGENERATEDCONTENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateGeneratedContentShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGeneratedContentShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentText, contentText_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keywords, keywordsShrink_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGeneratedContentShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentText, contentText_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywordsShrink_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateGeneratedContentShrinkRequest() = default ;
    UpdateGeneratedContentShrinkRequest(const UpdateGeneratedContentShrinkRequest &) = default ;
    UpdateGeneratedContentShrinkRequest(UpdateGeneratedContentShrinkRequest &&) = default ;
    UpdateGeneratedContentShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGeneratedContentShrinkRequest() = default ;
    UpdateGeneratedContentShrinkRequest& operator=(const UpdateGeneratedContentShrinkRequest &) = default ;
    UpdateGeneratedContentShrinkRequest& operator=(UpdateGeneratedContentShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->content_ == nullptr && return this->contentText_ == nullptr && return this->id_ == nullptr && return this->keywordsShrink_ == nullptr && return this->prompt_ == nullptr
        && return this->title_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateGeneratedContentShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateGeneratedContentShrinkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentText Field Functions 
    bool hasContentText() const { return this->contentText_ != nullptr;};
    void deleteContentText() { this->contentText_ = nullptr;};
    inline string contentText() const { DARABONBA_PTR_GET_DEFAULT(contentText_, "") };
    inline UpdateGeneratedContentShrinkRequest& setContentText(string contentText) { DARABONBA_PTR_SET_VALUE(contentText_, contentText) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGeneratedContentShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keywordsShrink Field Functions 
    bool hasKeywordsShrink() const { return this->keywordsShrink_ != nullptr;};
    void deleteKeywordsShrink() { this->keywordsShrink_ = nullptr;};
    inline string keywordsShrink() const { DARABONBA_PTR_GET_DEFAULT(keywordsShrink_, "") };
    inline UpdateGeneratedContentShrinkRequest& setKeywordsShrink(string keywordsShrink) { DARABONBA_PTR_SET_VALUE(keywordsShrink_, keywordsShrink) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateGeneratedContentShrinkRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateGeneratedContentShrinkRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> contentText_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> keywordsShrink_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
