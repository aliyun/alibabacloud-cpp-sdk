// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAHOTVIEWPOINTSRESULTATTITUDESNEWS_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAHOTVIEWPOINTSRESULTATTITUDESNEWS_HPP_
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
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
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
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
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
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->createTime_ != nullptr && this->docId_ != nullptr && this->docUuid_ != nullptr && this->imageUrls_ != nullptr && this->pubTime_ != nullptr
        && this->source_ != nullptr && this->summary_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr && this->topic_ != nullptr
        && this->url_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // docUuid Field Functions 
    bool hasDocUuid() const { return this->docUuid_ != nullptr;};
    void deleteDocUuid() { this->docUuid_ = nullptr;};
    inline string docUuid() const { DARABONBA_PTR_GET_DEFAULT(docUuid_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setDocUuid(string docUuid) { DARABONBA_PTR_SET_VALUE(docUuid_, docUuid) };


    // imageUrls Field Functions 
    bool hasImageUrls() const { return this->imageUrls_ != nullptr;};
    void deleteImageUrls() { this->imageUrls_ = nullptr;};
    inline const vector<string> & imageUrls() const { DARABONBA_PTR_GET_CONST(imageUrls_, vector<string>) };
    inline vector<string> imageUrls() { DARABONBA_PTR_GET(imageUrls_, vector<string>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setImageUrls(const vector<string> & imageUrls) { DARABONBA_PTR_SET_VALUE(imageUrls_, imageUrls) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setImageUrls(vector<string> && imageUrls) { DARABONBA_PTR_SET_RVALUE(imageUrls_, imageUrls) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
    inline vector<string> tags() { DARABONBA_PTR_GET(tags_, vector<string>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudesNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
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
