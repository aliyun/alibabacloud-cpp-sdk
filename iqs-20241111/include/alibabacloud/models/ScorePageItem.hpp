// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCOREPAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_SCOREPAGEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/IncludeImage.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class ScorePageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScorePageItem& obj) { 
      DARABONBA_PTR_TO_JSON(cardType, cardType_);
      DARABONBA_PTR_TO_JSON(correlationTag, correlationTag_);
      DARABONBA_PTR_TO_JSON(displayLink, displayLink_);
      DARABONBA_PTR_TO_JSON(hostAuthorityScore, hostAuthorityScore_);
      DARABONBA_PTR_TO_JSON(hostLogo, hostLogo_);
      DARABONBA_PTR_TO_JSON(hostname, hostname_);
      DARABONBA_PTR_TO_JSON(htmlSnippet, htmlSnippet_);
      DARABONBA_PTR_TO_JSON(htmlTitle, htmlTitle_);
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(link, link_);
      DARABONBA_PTR_TO_JSON(mainText, mainText_);
      DARABONBA_PTR_TO_JSON(markdownText, markdownText_);
      DARABONBA_PTR_TO_JSON(mime, mime_);
      DARABONBA_PTR_TO_JSON(pageMap, pageMap_);
      DARABONBA_PTR_TO_JSON(publishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(richMainBody, richMainBody_);
      DARABONBA_PTR_TO_JSON(score, score_);
      DARABONBA_PTR_TO_JSON(siteLabel, siteLabel_);
      DARABONBA_PTR_TO_JSON(snippet, snippet_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(websiteAuthorityScore, websiteAuthorityScore_);
    };
    friend void from_json(const Darabonba::Json& j, ScorePageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(cardType, cardType_);
      DARABONBA_PTR_FROM_JSON(correlationTag, correlationTag_);
      DARABONBA_PTR_FROM_JSON(displayLink, displayLink_);
      DARABONBA_PTR_FROM_JSON(hostAuthorityScore, hostAuthorityScore_);
      DARABONBA_PTR_FROM_JSON(hostLogo, hostLogo_);
      DARABONBA_PTR_FROM_JSON(hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(htmlSnippet, htmlSnippet_);
      DARABONBA_PTR_FROM_JSON(htmlTitle, htmlTitle_);
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(link, link_);
      DARABONBA_PTR_FROM_JSON(mainText, mainText_);
      DARABONBA_PTR_FROM_JSON(markdownText, markdownText_);
      DARABONBA_PTR_FROM_JSON(mime, mime_);
      DARABONBA_PTR_FROM_JSON(pageMap, pageMap_);
      DARABONBA_PTR_FROM_JSON(publishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(richMainBody, richMainBody_);
      DARABONBA_PTR_FROM_JSON(score, score_);
      DARABONBA_PTR_FROM_JSON(siteLabel, siteLabel_);
      DARABONBA_PTR_FROM_JSON(snippet, snippet_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(websiteAuthorityScore, websiteAuthorityScore_);
    };
    ScorePageItem() = default ;
    ScorePageItem(const ScorePageItem &) = default ;
    ScorePageItem(ScorePageItem &&) = default ;
    ScorePageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScorePageItem() = default ;
    ScorePageItem& operator=(const ScorePageItem &) = default ;
    ScorePageItem& operator=(ScorePageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardType_ == nullptr
        && this->correlationTag_ == nullptr && this->displayLink_ == nullptr && this->hostAuthorityScore_ == nullptr && this->hostLogo_ == nullptr && this->hostname_ == nullptr
        && this->htmlSnippet_ == nullptr && this->htmlTitle_ == nullptr && this->images_ == nullptr && this->link_ == nullptr && this->mainText_ == nullptr
        && this->markdownText_ == nullptr && this->mime_ == nullptr && this->pageMap_ == nullptr && this->publishTime_ == nullptr && this->richMainBody_ == nullptr
        && this->score_ == nullptr && this->siteLabel_ == nullptr && this->snippet_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr
        && this->websiteAuthorityScore_ == nullptr; };
    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string getCardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline ScorePageItem& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // correlationTag Field Functions 
    bool hasCorrelationTag() const { return this->correlationTag_ != nullptr;};
    void deleteCorrelationTag() { this->correlationTag_ = nullptr;};
    inline int32_t getCorrelationTag() const { DARABONBA_PTR_GET_DEFAULT(correlationTag_, 0) };
    inline ScorePageItem& setCorrelationTag(int32_t correlationTag) { DARABONBA_PTR_SET_VALUE(correlationTag_, correlationTag) };


    // displayLink Field Functions 
    bool hasDisplayLink() const { return this->displayLink_ != nullptr;};
    void deleteDisplayLink() { this->displayLink_ = nullptr;};
    inline string getDisplayLink() const { DARABONBA_PTR_GET_DEFAULT(displayLink_, "") };
    inline ScorePageItem& setDisplayLink(string displayLink) { DARABONBA_PTR_SET_VALUE(displayLink_, displayLink) };


    // hostAuthorityScore Field Functions 
    bool hasHostAuthorityScore() const { return this->hostAuthorityScore_ != nullptr;};
    void deleteHostAuthorityScore() { this->hostAuthorityScore_ = nullptr;};
    inline double getHostAuthorityScore() const { DARABONBA_PTR_GET_DEFAULT(hostAuthorityScore_, 0.0) };
    inline ScorePageItem& setHostAuthorityScore(double hostAuthorityScore) { DARABONBA_PTR_SET_VALUE(hostAuthorityScore_, hostAuthorityScore) };


    // hostLogo Field Functions 
    bool hasHostLogo() const { return this->hostLogo_ != nullptr;};
    void deleteHostLogo() { this->hostLogo_ = nullptr;};
    inline string getHostLogo() const { DARABONBA_PTR_GET_DEFAULT(hostLogo_, "") };
    inline ScorePageItem& setHostLogo(string hostLogo) { DARABONBA_PTR_SET_VALUE(hostLogo_, hostLogo) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ScorePageItem& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // htmlSnippet Field Functions 
    bool hasHtmlSnippet() const { return this->htmlSnippet_ != nullptr;};
    void deleteHtmlSnippet() { this->htmlSnippet_ = nullptr;};
    inline string getHtmlSnippet() const { DARABONBA_PTR_GET_DEFAULT(htmlSnippet_, "") };
    inline ScorePageItem& setHtmlSnippet(string htmlSnippet) { DARABONBA_PTR_SET_VALUE(htmlSnippet_, htmlSnippet) };


    // htmlTitle Field Functions 
    bool hasHtmlTitle() const { return this->htmlTitle_ != nullptr;};
    void deleteHtmlTitle() { this->htmlTitle_ = nullptr;};
    inline string getHtmlTitle() const { DARABONBA_PTR_GET_DEFAULT(htmlTitle_, "") };
    inline ScorePageItem& setHtmlTitle(string htmlTitle) { DARABONBA_PTR_SET_VALUE(htmlTitle_, htmlTitle) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<IncludeImage> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<IncludeImage>) };
    inline vector<IncludeImage> getImages() { DARABONBA_PTR_GET(images_, vector<IncludeImage>) };
    inline ScorePageItem& setImages(const vector<IncludeImage> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ScorePageItem& setImages(vector<IncludeImage> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string getLink() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline ScorePageItem& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // mainText Field Functions 
    bool hasMainText() const { return this->mainText_ != nullptr;};
    void deleteMainText() { this->mainText_ = nullptr;};
    inline string getMainText() const { DARABONBA_PTR_GET_DEFAULT(mainText_, "") };
    inline ScorePageItem& setMainText(string mainText) { DARABONBA_PTR_SET_VALUE(mainText_, mainText) };


    // markdownText Field Functions 
    bool hasMarkdownText() const { return this->markdownText_ != nullptr;};
    void deleteMarkdownText() { this->markdownText_ = nullptr;};
    inline string getMarkdownText() const { DARABONBA_PTR_GET_DEFAULT(markdownText_, "") };
    inline ScorePageItem& setMarkdownText(string markdownText) { DARABONBA_PTR_SET_VALUE(markdownText_, markdownText) };


    // mime Field Functions 
    bool hasMime() const { return this->mime_ != nullptr;};
    void deleteMime() { this->mime_ = nullptr;};
    inline string getMime() const { DARABONBA_PTR_GET_DEFAULT(mime_, "") };
    inline ScorePageItem& setMime(string mime) { DARABONBA_PTR_SET_VALUE(mime_, mime) };


    // pageMap Field Functions 
    bool hasPageMap() const { return this->pageMap_ != nullptr;};
    void deletePageMap() { this->pageMap_ = nullptr;};
    inline const map<string, string> & getPageMap() const { DARABONBA_PTR_GET_CONST(pageMap_, map<string, string>) };
    inline map<string, string> getPageMap() { DARABONBA_PTR_GET(pageMap_, map<string, string>) };
    inline ScorePageItem& setPageMap(const map<string, string> & pageMap) { DARABONBA_PTR_SET_VALUE(pageMap_, pageMap) };
    inline ScorePageItem& setPageMap(map<string, string> && pageMap) { DARABONBA_PTR_SET_RVALUE(pageMap_, pageMap) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline int64_t getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
    inline ScorePageItem& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // richMainBody Field Functions 
    bool hasRichMainBody() const { return this->richMainBody_ != nullptr;};
    void deleteRichMainBody() { this->richMainBody_ = nullptr;};
    inline string getRichMainBody() const { DARABONBA_PTR_GET_DEFAULT(richMainBody_, "") };
    inline ScorePageItem& setRichMainBody(string richMainBody) { DARABONBA_PTR_SET_VALUE(richMainBody_, richMainBody) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ScorePageItem& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // siteLabel Field Functions 
    bool hasSiteLabel() const { return this->siteLabel_ != nullptr;};
    void deleteSiteLabel() { this->siteLabel_ = nullptr;};
    inline string getSiteLabel() const { DARABONBA_PTR_GET_DEFAULT(siteLabel_, "") };
    inline ScorePageItem& setSiteLabel(string siteLabel) { DARABONBA_PTR_SET_VALUE(siteLabel_, siteLabel) };


    // snippet Field Functions 
    bool hasSnippet() const { return this->snippet_ != nullptr;};
    void deleteSnippet() { this->snippet_ = nullptr;};
    inline string getSnippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
    inline ScorePageItem& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ScorePageItem& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ScorePageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // websiteAuthorityScore Field Functions 
    bool hasWebsiteAuthorityScore() const { return this->websiteAuthorityScore_ != nullptr;};
    void deleteWebsiteAuthorityScore() { this->websiteAuthorityScore_ = nullptr;};
    inline int32_t getWebsiteAuthorityScore() const { DARABONBA_PTR_GET_DEFAULT(websiteAuthorityScore_, 0) };
    inline ScorePageItem& setWebsiteAuthorityScore(int32_t websiteAuthorityScore) { DARABONBA_PTR_SET_VALUE(websiteAuthorityScore_, websiteAuthorityScore) };


  protected:
    // The search result template. Different templates return different fields.
    // 
    // This parameter is required.
    shared_ptr<string> cardType_ {};
    // The relevance tag. A value of 0 indicates low relevance, and 1 indicates non-low relevance.
    shared_ptr<int32_t> correlationTag_ {};
    // The abbreviated URL of this search result.
    // 
    // This parameter is required.
    shared_ptr<string> displayLink_ {};
    // The dynamic authority score, which ranges from 0 to 2 and is calculated based on the relevance of the query content.
    shared_ptr<double> hostAuthorityScore_ {};
    // The site logo.
    shared_ptr<string> hostLogo_ {};
    // The site name.
    shared_ptr<string> hostname_ {};
    // The description snippet of the search result in HTML format.
    // 
    // This parameter is required.
    shared_ptr<string> htmlSnippet_ {};
    // The search result title in HTML format.
    // 
    // This parameter is required.
    shared_ptr<string> htmlTitle_ {};
    // The image information.
    shared_ptr<vector<IncludeImage>> images_ {};
    // The full URL that the search result points to.
    // 
    // This parameter is required.
    shared_ptr<string> link_ {};
    // The full text of the search result, which is available in some scenarios.
    shared_ptr<string> mainText_ {};
    // The web page body in Markdown format.
    shared_ptr<string> markdownText_ {};
    // The MIME type of the search result.
    shared_ptr<string> mime_ {};
    // The supplementary page information.
    shared_ptr<map<string, string>> pageMap_ {};
    // The publish time.
    // 
    // This parameter is required.
    shared_ptr<int64_t> publishTime_ {};
    // The full rich text body, which preserves the order of text, images, audio, video, tables, and code in the web page.
    shared_ptr<string> richMainBody_ {};
    // The score.
    shared_ptr<double> score_ {};
    // The site label. Two types are currently supported:
    // * Authoritative media
    //  * Party and government organs
    shared_ptr<string> siteLabel_ {};
    // The description snippet of the search result in text format.
    shared_ptr<string> snippet_ {};
    // The enhanced summary.
    shared_ptr<string> summary_ {};
    // The search result title in plain text.
    // 
    // This parameter is required.
    shared_ptr<string> title_ {};
    // The static authority score, which is determined solely by the authority of the website itself and is independent of the query content.
    shared_ptr<int32_t> websiteAuthorityScore_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
