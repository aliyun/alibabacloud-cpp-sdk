// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADOUTPUTARTICLES_HPP_
#define ALIBABACLOUD_MODELS_RUNWRITINGV2RESPONSEBODYPAYLOADOUTPUTARTICLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunWritingV2ResponseBodyPayloadOutputArticles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunWritingV2ResponseBodyPayloadOutputArticles& obj) { 
      DARABONBA_PTR_TO_JSON(Author, author_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunWritingV2ResponseBodyPayloadOutputArticles& obj) { 
      DARABONBA_PTR_FROM_JSON(Author, author_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    RunWritingV2ResponseBodyPayloadOutputArticles() = default ;
    RunWritingV2ResponseBodyPayloadOutputArticles(const RunWritingV2ResponseBodyPayloadOutputArticles &) = default ;
    RunWritingV2ResponseBodyPayloadOutputArticles(RunWritingV2ResponseBodyPayloadOutputArticles &&) = default ;
    RunWritingV2ResponseBodyPayloadOutputArticles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunWritingV2ResponseBodyPayloadOutputArticles() = default ;
    RunWritingV2ResponseBodyPayloadOutputArticles& operator=(const RunWritingV2ResponseBodyPayloadOutputArticles &) = default ;
    RunWritingV2ResponseBodyPayloadOutputArticles& operator=(RunWritingV2ResponseBodyPayloadOutputArticles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->author_ != nullptr
        && this->content_ != nullptr && this->docId_ != nullptr && this->docUuid_ != nullptr && this->pubTime_ != nullptr && this->source_ != nullptr
        && this->summary_ != nullptr && this->tag_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunWritingV2ResponseBodyPayloadOutputArticles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
