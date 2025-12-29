// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEGENERATEDCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEGENERATEDCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class UpdateGeneratedContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateGeneratedContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentText, contentText_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateGeneratedContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentText, contentText_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    UpdateGeneratedContentRequest() = default ;
    UpdateGeneratedContentRequest(const UpdateGeneratedContentRequest &) = default ;
    UpdateGeneratedContentRequest(UpdateGeneratedContentRequest &&) = default ;
    UpdateGeneratedContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateGeneratedContentRequest() = default ;
    UpdateGeneratedContentRequest& operator=(const UpdateGeneratedContentRequest &) = default ;
    UpdateGeneratedContentRequest& operator=(UpdateGeneratedContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->content_ == nullptr && this->contentText_ == nullptr && this->id_ == nullptr && this->keywords_ == nullptr && this->prompt_ == nullptr
        && this->title_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdateGeneratedContentRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline UpdateGeneratedContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentText Field Functions 
    bool hasContentText() const { return this->contentText_ != nullptr;};
    void deleteContentText() { this->contentText_ = nullptr;};
    inline string getContentText() const { DARABONBA_PTR_GET_DEFAULT(contentText_, "") };
    inline UpdateGeneratedContentRequest& setContentText(string contentText) { DARABONBA_PTR_SET_VALUE(contentText_, contentText) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateGeneratedContentRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline UpdateGeneratedContentRequest& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline UpdateGeneratedContentRequest& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline UpdateGeneratedContentRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateGeneratedContentRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<string> content_ {};
    shared_ptr<string> contentText_ {};
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
    shared_ptr<vector<string>> keywords_ {};
    shared_ptr<string> prompt_ {};
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
