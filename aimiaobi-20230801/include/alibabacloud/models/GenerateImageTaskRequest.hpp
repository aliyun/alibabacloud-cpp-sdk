// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEIMAGETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEIMAGETASKREQUEST_HPP_
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
  class GenerateImageTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateImageTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_TO_JSON(ParagraphList, paragraphList_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Style, style_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateImageTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(ArticleTaskId, articleTaskId_);
      DARABONBA_PTR_FROM_JSON(ParagraphList, paragraphList_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
    };
    GenerateImageTaskRequest() = default ;
    GenerateImageTaskRequest(const GenerateImageTaskRequest &) = default ;
    GenerateImageTaskRequest(GenerateImageTaskRequest &&) = default ;
    GenerateImageTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateImageTaskRequest() = default ;
    GenerateImageTaskRequest& operator=(const GenerateImageTaskRequest &) = default ;
    GenerateImageTaskRequest& operator=(GenerateImageTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ParagraphList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ParagraphList& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      };
      friend void from_json(const Darabonba::Json& j, ParagraphList& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      };
      ParagraphList() = default ;
      ParagraphList(const ParagraphList &) = default ;
      ParagraphList(ParagraphList &&) = default ;
      ParagraphList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ParagraphList() = default ;
      ParagraphList& operator=(const ParagraphList &) = default ;
      ParagraphList& operator=(ParagraphList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->id_ == nullptr && this->taskId_ == nullptr && this->taskStatus_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline ParagraphList& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline ParagraphList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline ParagraphList& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // taskStatus Field Functions 
      bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
      void deleteTaskStatus() { this->taskStatus_ = nullptr;};
      inline string getTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
      inline ParagraphList& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> taskId_ {};
      shared_ptr<string> taskStatus_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->articleTaskId_ == nullptr && this->paragraphList_ == nullptr && this->size_ == nullptr && this->style_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GenerateImageTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // articleTaskId Field Functions 
    bool hasArticleTaskId() const { return this->articleTaskId_ != nullptr;};
    void deleteArticleTaskId() { this->articleTaskId_ = nullptr;};
    inline string getArticleTaskId() const { DARABONBA_PTR_GET_DEFAULT(articleTaskId_, "") };
    inline GenerateImageTaskRequest& setArticleTaskId(string articleTaskId) { DARABONBA_PTR_SET_VALUE(articleTaskId_, articleTaskId) };


    // paragraphList Field Functions 
    bool hasParagraphList() const { return this->paragraphList_ != nullptr;};
    void deleteParagraphList() { this->paragraphList_ = nullptr;};
    inline const vector<GenerateImageTaskRequest::ParagraphList> & getParagraphList() const { DARABONBA_PTR_GET_CONST(paragraphList_, vector<GenerateImageTaskRequest::ParagraphList>) };
    inline vector<GenerateImageTaskRequest::ParagraphList> getParagraphList() { DARABONBA_PTR_GET(paragraphList_, vector<GenerateImageTaskRequest::ParagraphList>) };
    inline GenerateImageTaskRequest& setParagraphList(const vector<GenerateImageTaskRequest::ParagraphList> & paragraphList) { DARABONBA_PTR_SET_VALUE(paragraphList_, paragraphList) };
    inline GenerateImageTaskRequest& setParagraphList(vector<GenerateImageTaskRequest::ParagraphList> && paragraphList) { DARABONBA_PTR_SET_RVALUE(paragraphList_, paragraphList) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline GenerateImageTaskRequest& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline GenerateImageTaskRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<string> articleTaskId_ {};
    // This parameter is required.
    shared_ptr<vector<GenerateImageTaskRequest::ParagraphList>> paragraphList_ {};
    // This parameter is required.
    shared_ptr<string> size_ {};
    // This parameter is required.
    shared_ptr<string> style_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
