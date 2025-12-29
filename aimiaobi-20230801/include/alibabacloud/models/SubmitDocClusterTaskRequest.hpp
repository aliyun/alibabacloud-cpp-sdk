// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDOCCLUSTERTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDOCCLUSTERTASKREQUEST_HPP_
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
  class SubmitDocClusterTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDocClusterTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Documents, documents_);
      DARABONBA_PTR_TO_JSON(SummaryLength, summaryLength_);
      DARABONBA_PTR_TO_JSON(TitleLength, titleLength_);
      DARABONBA_PTR_TO_JSON(TopicCount, topicCount_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDocClusterTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Documents, documents_);
      DARABONBA_PTR_FROM_JSON(SummaryLength, summaryLength_);
      DARABONBA_PTR_FROM_JSON(TitleLength, titleLength_);
      DARABONBA_PTR_FROM_JSON(TopicCount, topicCount_);
    };
    SubmitDocClusterTaskRequest() = default ;
    SubmitDocClusterTaskRequest(const SubmitDocClusterTaskRequest &) = default ;
    SubmitDocClusterTaskRequest(SubmitDocClusterTaskRequest &&) = default ;
    SubmitDocClusterTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDocClusterTaskRequest() = default ;
    SubmitDocClusterTaskRequest& operator=(const SubmitDocClusterTaskRequest &) = default ;
    SubmitDocClusterTaskRequest& operator=(SubmitDocClusterTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Documents : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Documents& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(DocId, docId_);
        DARABONBA_PTR_TO_JSON(Title, title_);
      };
      friend void from_json(const Darabonba::Json& j, Documents& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(DocId, docId_);
        DARABONBA_PTR_FROM_JSON(Title, title_);
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
      virtual bool empty() const override { return this->content_ == nullptr
        && this->docId_ == nullptr && this->title_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Documents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // docId Field Functions 
      bool hasDocId() const { return this->docId_ != nullptr;};
      void deleteDocId() { this->docId_ = nullptr;};
      inline string getDocId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
      inline Documents& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


      // title Field Functions 
      bool hasTitle() const { return this->title_ != nullptr;};
      void deleteTitle() { this->title_ = nullptr;};
      inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
      inline Documents& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    protected:
      // This parameter is required.
      shared_ptr<string> content_ {};
      shared_ptr<string> docId_ {};
      shared_ptr<string> title_ {};
    };

    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->documents_ == nullptr && this->summaryLength_ == nullptr && this->titleLength_ == nullptr && this->topicCount_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline SubmitDocClusterTaskRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // documents Field Functions 
    bool hasDocuments() const { return this->documents_ != nullptr;};
    void deleteDocuments() { this->documents_ = nullptr;};
    inline const vector<SubmitDocClusterTaskRequest::Documents> & getDocuments() const { DARABONBA_PTR_GET_CONST(documents_, vector<SubmitDocClusterTaskRequest::Documents>) };
    inline vector<SubmitDocClusterTaskRequest::Documents> getDocuments() { DARABONBA_PTR_GET(documents_, vector<SubmitDocClusterTaskRequest::Documents>) };
    inline SubmitDocClusterTaskRequest& setDocuments(const vector<SubmitDocClusterTaskRequest::Documents> & documents) { DARABONBA_PTR_SET_VALUE(documents_, documents) };
    inline SubmitDocClusterTaskRequest& setDocuments(vector<SubmitDocClusterTaskRequest::Documents> && documents) { DARABONBA_PTR_SET_RVALUE(documents_, documents) };


    // summaryLength Field Functions 
    bool hasSummaryLength() const { return this->summaryLength_ != nullptr;};
    void deleteSummaryLength() { this->summaryLength_ = nullptr;};
    inline int32_t getSummaryLength() const { DARABONBA_PTR_GET_DEFAULT(summaryLength_, 0) };
    inline SubmitDocClusterTaskRequest& setSummaryLength(int32_t summaryLength) { DARABONBA_PTR_SET_VALUE(summaryLength_, summaryLength) };


    // titleLength Field Functions 
    bool hasTitleLength() const { return this->titleLength_ != nullptr;};
    void deleteTitleLength() { this->titleLength_ = nullptr;};
    inline int32_t getTitleLength() const { DARABONBA_PTR_GET_DEFAULT(titleLength_, 0) };
    inline SubmitDocClusterTaskRequest& setTitleLength(int32_t titleLength) { DARABONBA_PTR_SET_VALUE(titleLength_, titleLength) };


    // topicCount Field Functions 
    bool hasTopicCount() const { return this->topicCount_ != nullptr;};
    void deleteTopicCount() { this->topicCount_ = nullptr;};
    inline int32_t getTopicCount() const { DARABONBA_PTR_GET_DEFAULT(topicCount_, 0) };
    inline SubmitDocClusterTaskRequest& setTopicCount(int32_t topicCount) { DARABONBA_PTR_SET_VALUE(topicCount_, topicCount) };


  protected:
    // This parameter is required.
    shared_ptr<string> agentKey_ {};
    // This parameter is required.
    shared_ptr<vector<SubmitDocClusterTaskRequest::Documents>> documents_ {};
    shared_ptr<int32_t> summaryLength_ {};
    shared_ptr<int32_t> titleLength_ {};
    shared_ptr<int32_t> topicCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
