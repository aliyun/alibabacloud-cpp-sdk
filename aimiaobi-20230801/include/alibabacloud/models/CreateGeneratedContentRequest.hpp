// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGENERATEDCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGENERATEDCONTENTREQUEST_HPP_
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
  class CreateGeneratedContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGeneratedContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(ContentDomain, contentDomain_);
      DARABONBA_PTR_TO_JSON(ContentText, contentText_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGeneratedContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(ContentDomain, contentDomain_);
      DARABONBA_PTR_FROM_JSON(ContentText, contentText_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    CreateGeneratedContentRequest() = default ;
    CreateGeneratedContentRequest(const CreateGeneratedContentRequest &) = default ;
    CreateGeneratedContentRequest(CreateGeneratedContentRequest &&) = default ;
    CreateGeneratedContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGeneratedContentRequest() = default ;
    CreateGeneratedContentRequest& operator=(const CreateGeneratedContentRequest &) = default ;
    CreateGeneratedContentRequest& operator=(CreateGeneratedContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->content_ == nullptr && this->contentDomain_ == nullptr && this->contentText_ == nullptr && this->keywords_ == nullptr && this->prompt_ == nullptr
        && this->taskId_ == nullptr && this->title_ == nullptr && this->uuid_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline CreateGeneratedContentRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline CreateGeneratedContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // contentDomain Field Functions 
    bool hasContentDomain() const { return this->contentDomain_ != nullptr;};
    void deleteContentDomain() { this->contentDomain_ = nullptr;};
    inline string getContentDomain() const { DARABONBA_PTR_GET_DEFAULT(contentDomain_, "") };
    inline CreateGeneratedContentRequest& setContentDomain(string contentDomain) { DARABONBA_PTR_SET_VALUE(contentDomain_, contentDomain) };


    // contentText Field Functions 
    bool hasContentText() const { return this->contentText_ != nullptr;};
    void deleteContentText() { this->contentText_ = nullptr;};
    inline string getContentText() const { DARABONBA_PTR_GET_DEFAULT(contentText_, "") };
    inline CreateGeneratedContentRequest& setContentText(string contentText) { DARABONBA_PTR_SET_VALUE(contentText_, contentText) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & getKeywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> getKeywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline CreateGeneratedContentRequest& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline CreateGeneratedContentRequest& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline CreateGeneratedContentRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateGeneratedContentRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateGeneratedContentRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateGeneratedContentRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> content_ {};
    shared_ptr<string> contentDomain_ {};
    shared_ptr<string> contentText_ {};
    shared_ptr<vector<string>> keywords_ {};
    shared_ptr<string> prompt_ {};
    // This parameter is required.
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> title_ {};
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
