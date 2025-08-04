// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATANEWS_HPP_
#define ALIBABACLOUD_MODELS_GETHOTTOPICBROADCASTRESPONSEBODYDATADATANEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetHotTopicBroadcastResponseBodyDataDataNewsComments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetHotTopicBroadcastResponseBodyDataDataNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetHotTopicBroadcastResponseBodyDataDataNews& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisCategory, analysisCategory_);
      DARABONBA_PTR_TO_JSON(AnalysisTopic, analysisTopic_);
      DARABONBA_PTR_TO_JSON(Author, author_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Dt, dt_);
      DARABONBA_PTR_TO_JSON(HotTopic, hotTopic_);
      DARABONBA_PTR_TO_JSON(ImgList, imgList_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Website, website_);
    };
    friend void from_json(const Darabonba::Json& j, GetHotTopicBroadcastResponseBodyDataDataNews& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisCategory, analysisCategory_);
      DARABONBA_PTR_FROM_JSON(AnalysisTopic, analysisTopic_);
      DARABONBA_PTR_FROM_JSON(Author, author_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Dt, dt_);
      DARABONBA_PTR_FROM_JSON(HotTopic, hotTopic_);
      DARABONBA_PTR_FROM_JSON(ImgList, imgList_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Website, website_);
    };
    GetHotTopicBroadcastResponseBodyDataDataNews() = default ;
    GetHotTopicBroadcastResponseBodyDataDataNews(const GetHotTopicBroadcastResponseBodyDataDataNews &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataNews(GetHotTopicBroadcastResponseBodyDataDataNews &&) = default ;
    GetHotTopicBroadcastResponseBodyDataDataNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetHotTopicBroadcastResponseBodyDataDataNews() = default ;
    GetHotTopicBroadcastResponseBodyDataDataNews& operator=(const GetHotTopicBroadcastResponseBodyDataDataNews &) = default ;
    GetHotTopicBroadcastResponseBodyDataDataNews& operator=(GetHotTopicBroadcastResponseBodyDataDataNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisCategory_ != nullptr
        && this->analysisTopic_ != nullptr && this->author_ != nullptr && this->category_ != nullptr && this->comments_ != nullptr && this->content_ != nullptr
        && this->createTime_ != nullptr && this->domain_ != nullptr && this->dt_ != nullptr && this->hotTopic_ != nullptr && this->imgList_ != nullptr
        && this->logo_ != nullptr && this->pubTime_ != nullptr && this->summary_ != nullptr && this->title_ != nullptr && this->url_ != nullptr
        && this->uuid_ != nullptr && this->website_ != nullptr; };
    // analysisCategory Field Functions 
    bool hasAnalysisCategory() const { return this->analysisCategory_ != nullptr;};
    void deleteAnalysisCategory() { this->analysisCategory_ = nullptr;};
    inline string analysisCategory() const { DARABONBA_PTR_GET_DEFAULT(analysisCategory_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setAnalysisCategory(string analysisCategory) { DARABONBA_PTR_SET_VALUE(analysisCategory_, analysisCategory) };


    // analysisTopic Field Functions 
    bool hasAnalysisTopic() const { return this->analysisTopic_ != nullptr;};
    void deleteAnalysisTopic() { this->analysisTopic_ = nullptr;};
    inline string analysisTopic() const { DARABONBA_PTR_GET_DEFAULT(analysisTopic_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setAnalysisTopic(string analysisTopic) { DARABONBA_PTR_SET_VALUE(analysisTopic_, analysisTopic) };


    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline string author() const { DARABONBA_PTR_GET_DEFAULT(author_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setAuthor(string author) { DARABONBA_PTR_SET_VALUE(author_, author) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const vector<string> & category() const { DARABONBA_PTR_GET_CONST(category_, vector<string>) };
    inline vector<string> category() { DARABONBA_PTR_GET(category_, vector<string>) };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setCategory(const vector<string> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setCategory(vector<string> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<Models::GetHotTopicBroadcastResponseBodyDataDataNewsComments> & comments() const { DARABONBA_PTR_GET_CONST(comments_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataNewsComments>) };
    inline vector<Models::GetHotTopicBroadcastResponseBodyDataDataNewsComments> comments() { DARABONBA_PTR_GET(comments_, vector<Models::GetHotTopicBroadcastResponseBodyDataDataNewsComments>) };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setComments(const vector<Models::GetHotTopicBroadcastResponseBodyDataDataNewsComments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setComments(vector<Models::GetHotTopicBroadcastResponseBodyDataDataNewsComments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // dt Field Functions 
    bool hasDt() const { return this->dt_ != nullptr;};
    void deleteDt() { this->dt_ = nullptr;};
    inline string dt() const { DARABONBA_PTR_GET_DEFAULT(dt_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setDt(string dt) { DARABONBA_PTR_SET_VALUE(dt_, dt) };


    // hotTopic Field Functions 
    bool hasHotTopic() const { return this->hotTopic_ != nullptr;};
    void deleteHotTopic() { this->hotTopic_ = nullptr;};
    inline string hotTopic() const { DARABONBA_PTR_GET_DEFAULT(hotTopic_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setHotTopic(string hotTopic) { DARABONBA_PTR_SET_VALUE(hotTopic_, hotTopic) };


    // imgList Field Functions 
    bool hasImgList() const { return this->imgList_ != nullptr;};
    void deleteImgList() { this->imgList_ = nullptr;};
    inline const vector<string> & imgList() const { DARABONBA_PTR_GET_CONST(imgList_, vector<string>) };
    inline vector<string> imgList() { DARABONBA_PTR_GET(imgList_, vector<string>) };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setImgList(const vector<string> & imgList) { DARABONBA_PTR_SET_VALUE(imgList_, imgList) };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setImgList(vector<string> && imgList) { DARABONBA_PTR_SET_RVALUE(imgList_, imgList) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline string logo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // website Field Functions 
    bool hasWebsite() const { return this->website_ != nullptr;};
    void deleteWebsite() { this->website_ = nullptr;};
    inline string website() const { DARABONBA_PTR_GET_DEFAULT(website_, "") };
    inline GetHotTopicBroadcastResponseBodyDataDataNews& setWebsite(string website) { DARABONBA_PTR_SET_VALUE(website_, website) };


  protected:
    std::shared_ptr<string> analysisCategory_ = nullptr;
    std::shared_ptr<string> analysisTopic_ = nullptr;
    std::shared_ptr<string> author_ = nullptr;
    std::shared_ptr<vector<string>> category_ = nullptr;
    std::shared_ptr<vector<Models::GetHotTopicBroadcastResponseBodyDataDataNewsComments>> comments_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> dt_ = nullptr;
    std::shared_ptr<string> hotTopic_ = nullptr;
    std::shared_ptr<vector<string>> imgList_ = nullptr;
    // logo
    std::shared_ptr<string> logo_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
    std::shared_ptr<string> website_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
