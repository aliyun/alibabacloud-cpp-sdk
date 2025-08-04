// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTVIEWPOINTSRESPONSEBODYDATANEWS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTVIEWPOINTSRESPONSEBODYDATANEWS_HPP_
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
  class ListHotViewPointsResponseBodyDataNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotViewPointsResponseBodyDataNews& obj) { 
      DARABONBA_PTR_TO_JSON(Author, author_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_TO_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotViewPointsResponseBodyDataNews& obj) { 
      DARABONBA_PTR_FROM_JSON(Author, author_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(DocUuid, docUuid_);
      DARABONBA_PTR_FROM_JSON(ImageUrls, imageUrls_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    ListHotViewPointsResponseBodyDataNews() = default ;
    ListHotViewPointsResponseBodyDataNews(const ListHotViewPointsResponseBodyDataNews &) = default ;
    ListHotViewPointsResponseBodyDataNews(ListHotViewPointsResponseBodyDataNews &&) = default ;
    ListHotViewPointsResponseBodyDataNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotViewPointsResponseBodyDataNews() = default ;
    ListHotViewPointsResponseBodyDataNews& operator=(const ListHotViewPointsResponseBodyDataNews &) = default ;
    ListHotViewPointsResponseBodyDataNews& operator=(ListHotViewPointsResponseBodyDataNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->author_ != nullptr
        && this->content_ != nullptr && this->docId_ != nullptr && this->docUuid_ != nullptr && this->imageUrls_ != nullptr && this->pubTime_ != nullptr
        && this->source_ != nullptr && this->summary_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr && this->topic_ != nullptr
        && this->url_ != nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline ListHotViewPointsResponseBodyDataNews& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline ListHotViewPointsResponseBodyDataNews& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline ListHotViewPointsResponseBodyDataNews& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListHotViewPointsResponseBodyDataNews& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListHotViewPointsResponseBodyDataNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<string> docUuid_ = nullptr;
    std::shared_ptr<vector<string>> imageUrls_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<vector<string>> tags_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
