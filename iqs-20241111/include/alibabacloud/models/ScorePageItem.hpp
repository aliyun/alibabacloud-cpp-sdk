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
    };
    friend void from_json(const Darabonba::Json& j, ScorePageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(cardType, cardType_);
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
        && return this->displayLink_ == nullptr && return this->hostAuthorityScore_ == nullptr && return this->hostLogo_ == nullptr && return this->hostname_ == nullptr && return this->htmlSnippet_ == nullptr
        && return this->htmlTitle_ == nullptr && return this->images_ == nullptr && return this->link_ == nullptr && return this->mainText_ == nullptr && return this->markdownText_ == nullptr
        && return this->mime_ == nullptr && return this->pageMap_ == nullptr && return this->publishTime_ == nullptr && return this->richMainBody_ == nullptr && return this->score_ == nullptr
        && return this->siteLabel_ == nullptr && return this->snippet_ == nullptr && return this->summary_ == nullptr && return this->title_ == nullptr; };
    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline ScorePageItem& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // displayLink Field Functions 
    bool hasDisplayLink() const { return this->displayLink_ != nullptr;};
    void deleteDisplayLink() { this->displayLink_ = nullptr;};
    inline string displayLink() const { DARABONBA_PTR_GET_DEFAULT(displayLink_, "") };
    inline ScorePageItem& setDisplayLink(string displayLink) { DARABONBA_PTR_SET_VALUE(displayLink_, displayLink) };


    // hostAuthorityScore Field Functions 
    bool hasHostAuthorityScore() const { return this->hostAuthorityScore_ != nullptr;};
    void deleteHostAuthorityScore() { this->hostAuthorityScore_ = nullptr;};
    inline double hostAuthorityScore() const { DARABONBA_PTR_GET_DEFAULT(hostAuthorityScore_, 0.0) };
    inline ScorePageItem& setHostAuthorityScore(double hostAuthorityScore) { DARABONBA_PTR_SET_VALUE(hostAuthorityScore_, hostAuthorityScore) };


    // hostLogo Field Functions 
    bool hasHostLogo() const { return this->hostLogo_ != nullptr;};
    void deleteHostLogo() { this->hostLogo_ = nullptr;};
    inline string hostLogo() const { DARABONBA_PTR_GET_DEFAULT(hostLogo_, "") };
    inline ScorePageItem& setHostLogo(string hostLogo) { DARABONBA_PTR_SET_VALUE(hostLogo_, hostLogo) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ScorePageItem& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // htmlSnippet Field Functions 
    bool hasHtmlSnippet() const { return this->htmlSnippet_ != nullptr;};
    void deleteHtmlSnippet() { this->htmlSnippet_ = nullptr;};
    inline string htmlSnippet() const { DARABONBA_PTR_GET_DEFAULT(htmlSnippet_, "") };
    inline ScorePageItem& setHtmlSnippet(string htmlSnippet) { DARABONBA_PTR_SET_VALUE(htmlSnippet_, htmlSnippet) };


    // htmlTitle Field Functions 
    bool hasHtmlTitle() const { return this->htmlTitle_ != nullptr;};
    void deleteHtmlTitle() { this->htmlTitle_ = nullptr;};
    inline string htmlTitle() const { DARABONBA_PTR_GET_DEFAULT(htmlTitle_, "") };
    inline ScorePageItem& setHtmlTitle(string htmlTitle) { DARABONBA_PTR_SET_VALUE(htmlTitle_, htmlTitle) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<IncludeImage> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<IncludeImage>) };
    inline vector<IncludeImage> images() { DARABONBA_PTR_GET(images_, vector<IncludeImage>) };
    inline ScorePageItem& setImages(const vector<IncludeImage> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline ScorePageItem& setImages(vector<IncludeImage> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline ScorePageItem& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // mainText Field Functions 
    bool hasMainText() const { return this->mainText_ != nullptr;};
    void deleteMainText() { this->mainText_ = nullptr;};
    inline string mainText() const { DARABONBA_PTR_GET_DEFAULT(mainText_, "") };
    inline ScorePageItem& setMainText(string mainText) { DARABONBA_PTR_SET_VALUE(mainText_, mainText) };


    // markdownText Field Functions 
    bool hasMarkdownText() const { return this->markdownText_ != nullptr;};
    void deleteMarkdownText() { this->markdownText_ = nullptr;};
    inline string markdownText() const { DARABONBA_PTR_GET_DEFAULT(markdownText_, "") };
    inline ScorePageItem& setMarkdownText(string markdownText) { DARABONBA_PTR_SET_VALUE(markdownText_, markdownText) };


    // mime Field Functions 
    bool hasMime() const { return this->mime_ != nullptr;};
    void deleteMime() { this->mime_ = nullptr;};
    inline string mime() const { DARABONBA_PTR_GET_DEFAULT(mime_, "") };
    inline ScorePageItem& setMime(string mime) { DARABONBA_PTR_SET_VALUE(mime_, mime) };


    // pageMap Field Functions 
    bool hasPageMap() const { return this->pageMap_ != nullptr;};
    void deletePageMap() { this->pageMap_ = nullptr;};
    inline const map<string, string> & pageMap() const { DARABONBA_PTR_GET_CONST(pageMap_, map<string, string>) };
    inline map<string, string> pageMap() { DARABONBA_PTR_GET(pageMap_, map<string, string>) };
    inline ScorePageItem& setPageMap(const map<string, string> & pageMap) { DARABONBA_PTR_SET_VALUE(pageMap_, pageMap) };
    inline ScorePageItem& setPageMap(map<string, string> && pageMap) { DARABONBA_PTR_SET_RVALUE(pageMap_, pageMap) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline int64_t publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, 0L) };
    inline ScorePageItem& setPublishTime(int64_t publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // richMainBody Field Functions 
    bool hasRichMainBody() const { return this->richMainBody_ != nullptr;};
    void deleteRichMainBody() { this->richMainBody_ = nullptr;};
    inline string richMainBody() const { DARABONBA_PTR_GET_DEFAULT(richMainBody_, "") };
    inline ScorePageItem& setRichMainBody(string richMainBody) { DARABONBA_PTR_SET_VALUE(richMainBody_, richMainBody) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline double score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
    inline ScorePageItem& setScore(double score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // siteLabel Field Functions 
    bool hasSiteLabel() const { return this->siteLabel_ != nullptr;};
    void deleteSiteLabel() { this->siteLabel_ = nullptr;};
    inline string siteLabel() const { DARABONBA_PTR_GET_DEFAULT(siteLabel_, "") };
    inline ScorePageItem& setSiteLabel(string siteLabel) { DARABONBA_PTR_SET_VALUE(siteLabel_, siteLabel) };


    // snippet Field Functions 
    bool hasSnippet() const { return this->snippet_ != nullptr;};
    void deleteSnippet() { this->snippet_ = nullptr;};
    inline string snippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
    inline ScorePageItem& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ScorePageItem& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ScorePageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cardType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> displayLink_ = nullptr;
    std::shared_ptr<double> hostAuthorityScore_ = nullptr;
    std::shared_ptr<string> hostLogo_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> htmlSnippet_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> htmlTitle_ = nullptr;
    std::shared_ptr<vector<IncludeImage>> images_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> mainText_ = nullptr;
    std::shared_ptr<string> markdownText_ = nullptr;
    std::shared_ptr<string> mime_ = nullptr;
    std::shared_ptr<map<string, string>> pageMap_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> publishTime_ = nullptr;
    std::shared_ptr<string> richMainBody_ = nullptr;
    std::shared_ptr<double> score_ = nullptr;
    std::shared_ptr<string> siteLabel_ = nullptr;
    std::shared_ptr<string> snippet_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
