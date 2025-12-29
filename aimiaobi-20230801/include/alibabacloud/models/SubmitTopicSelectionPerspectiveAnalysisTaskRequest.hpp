// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTOPICSELECTIONPERSPECTIVEANALYSISTASKREQUEST_HPP_
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
  class SubmitTopicSelectionPerspectiveAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTopicSelectionPerspectiveAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(PerspectiveTypes, perspectiveTypes_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTopicSelectionPerspectiveAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(PerspectiveTypes, perspectiveTypes_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest(const SubmitTopicSelectionPerspectiveAnalysisTaskRequest &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest(SubmitTopicSelectionPerspectiveAnalysisTaskRequest &&) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTopicSelectionPerspectiveAnalysisTaskRequest() = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest& operator=(const SubmitTopicSelectionPerspectiveAnalysisTaskRequest &) = default ;
    SubmitTopicSelectionPerspectiveAnalysisTaskRequest& operator=(SubmitTopicSelectionPerspectiveAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Documents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Documents& obj) { 
        DARABONBA_PTR_TO_JSON(Author, author_);
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(Title, title_);
        DARABONBA_PTR_TO_JSON(Url, url_);
      };
      friend void from_json(const Darabonba::Json& j, Documents& obj) { 
        DARABONBA_PTR_FROM_JSON(Author, author_);
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
        DARABONBA_PTR_FROM_JSON(Url, url_);
      };
      Documents() = default ;
      Documents(const Documents &) = default ;
      Documents(Documents &&) = default ;
      Documents(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Documents() = default ;
      Documents& operator=(const Documents &) = default ;
      Documents& operator=(Documents &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Comments : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Comments& obj) { 
          DARABONBA_PTR_TO_JSON(Text, text_);
          DARABONBA_PTR_TO_JSON(Username, username_);
        };
        friend void from_json(const Darabonba::Json& j, Comments& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
          DARABONBA_PTR_FROM_JSON(Username, username_);
        };
        Comments() = default ;
        Comments(const Comments &) = default ;
        Comments(Comments &&) = default ;
        Comments(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Comments() = default ;
        Comments& operator=(const Comments &) = default ;
        Comments& operator=(Comments &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->text_ == nullptr
        && this->username_ == nullptr; };
        // text Field Functions 
        bool hasText() const { return this->text_ != nullptr;};
        void deleteText() { this->text_ = nullptr;};
        inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
        inline Comments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


        // username Field Functions 
        bool hasUsername() const { return this->username_ != nullptr;};
        void deleteUsername() { this->username_ = nullptr;};
        inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
        inline Comments& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


      protected:
        shared_ptr<string> text_ {};
        shared_ptr<string> username_ {};
      };

      virtual bool empty() const override { return this->author_ == nullptr
        && this->comments_ == nullptr && this->content_ == nullptr && this->pubTime_ == nullptr && this->source_ == nullptr && this->summary_ == nullptr
        && this->title_ == nullptr && this->url_ == nullptr; };
      // author Field Functions 
      bool hasAuthor() const { return this->author_ != nullptr;};
      void deleteAuthor() { this->author_ = nullptr;};
      inline string getAuthor() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
      inline Documents& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline const vector<Documents::Comments> & getComments() const { DARABONBA_PTR_GET_CONST(comments_, vector<Documents::Comments>) };
      inline vector<Documents::Comments> getComments() { DARABONBA_PTR_GET(comments_, vector<Documents::Comments>) };
      inline Documents& setComments(const vector<Documents::Comments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
      inline Documents& setComments(vector<Documents::Comments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Documents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // pubTime Field Functions 
      bool hasPubTime() const { return this->pubTime_ != nullptr;};
      void deletePubTime() { this->pubTime_ = nullptr;};
      inline string getPubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
      inline Documents& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Documents& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Documents& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Documents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline Documents& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> author_ {};
      shared_ptr<vector<Documents::Comments>> comments_ {};
      // This parameter is required.
      shared_ptr<string> content_ {};
      shared_ptr<string> pubTime_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> title_ {};
      shared_ptr<string> url_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->documents_ == nullptr && this->perspectiveTypes_ == nullptr && this->topic_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequest::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequest::Documents>) };
    inline vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequest::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequest::Documents>) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setDocuments(const vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequest::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setDocuments(vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequest::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // perspectiveTypes Field Functions 
    bool hasPerspectiveTypes() const { return this->perspectiveTypes_ != nullptr;};
    void deletePerspectiveTypes() { this->perspectiveTypes_ = nullptr;};
    inline const vector<string> & getPerspectiveTypes() const { DARABONBA_PTR_GET_CONST(perspectiveTypes_, vector<string>) };
    inline vector<string> getPerspectiveTypes() { DARABONBA_PTR_GET(perspectiveTypes_, vector<string>) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setPerspectiveTypes(const vector<string> & perspectiveTypes) { DARABONBA_PTR_SET_VALUE(perspectiveTypes_, perspectiveTypes) };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setPerspectiveTypes(vector<string> && perspectiveTypes) { DARABONBA_PTR_SET_RVALUE(perspectiveTypes_, perspectiveTypes) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline SubmitTopicSelectionPerspectiveAnalysisTaskRequest& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    shared_ptr<vector<SubmitTopicSelectionPerspectiveAnalysisTaskRequest::Documents>> documents_ {};
    shared_ptr<vector<string>> perspectiveTypes_ {};
    shared_ptr<string> topic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
