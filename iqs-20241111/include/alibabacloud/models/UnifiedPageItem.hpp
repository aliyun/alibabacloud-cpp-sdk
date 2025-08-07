// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNIFIEDPAGEITEM_HPP_
#define ALIBABACLOUD_MODELS_UNIFIEDPAGEITEM_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IQS20241111
{
namespace Models
{
  class UnifiedPageItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnifiedPageItem& obj) { 
      DARABONBA_PTR_TO_JSON(hostAuthorityScore, hostAuthorityScore_);
      DARABONBA_PTR_TO_JSON(hostLogo, hostLogo_);
      DARABONBA_PTR_TO_JSON(hostname, hostname_);
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(link, link_);
      DARABONBA_PTR_TO_JSON(mainText, mainText_);
      DARABONBA_PTR_TO_JSON(markdownText, markdownText_);
      DARABONBA_PTR_TO_JSON(publishedTime, publishedTime_);
      DARABONBA_PTR_TO_JSON(rerankScore, rerankScore_);
      DARABONBA_PTR_TO_JSON(snippet, snippet_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, UnifiedPageItem& obj) { 
      DARABONBA_PTR_FROM_JSON(hostAuthorityScore, hostAuthorityScore_);
      DARABONBA_PTR_FROM_JSON(hostLogo, hostLogo_);
      DARABONBA_PTR_FROM_JSON(hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(link, link_);
      DARABONBA_PTR_FROM_JSON(mainText, mainText_);
      DARABONBA_PTR_FROM_JSON(markdownText, markdownText_);
      DARABONBA_PTR_FROM_JSON(publishedTime, publishedTime_);
      DARABONBA_PTR_FROM_JSON(rerankScore, rerankScore_);
      DARABONBA_PTR_FROM_JSON(snippet, snippet_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    UnifiedPageItem() = default ;
    UnifiedPageItem(const UnifiedPageItem &) = default ;
    UnifiedPageItem(UnifiedPageItem &&) = default ;
    UnifiedPageItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnifiedPageItem() = default ;
    UnifiedPageItem& operator=(const UnifiedPageItem &) = default ;
    UnifiedPageItem& operator=(UnifiedPageItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->hostAuthorityScore_ != nullptr
        && this->hostLogo_ != nullptr && this->hostname_ != nullptr && this->images_ != nullptr && this->link_ != nullptr && this->mainText_ != nullptr
        && this->markdownText_ != nullptr && this->publishedTime_ != nullptr && this->rerankScore_ != nullptr && this->snippet_ != nullptr && this->summary_ != nullptr
        && this->title_ != nullptr; };
    // hostAuthorityScore Field Functions 
    bool hasHostAuthorityScore() const { return this->hostAuthorityScore_ != nullptr;};
    void deleteHostAuthorityScore() { this->hostAuthorityScore_ = nullptr;};
    inline double hostAuthorityScore() const { DARABONBA_PTR_GET_DEFAULT(hostAuthorityScore_, 0.0) };
    inline UnifiedPageItem& setHostAuthorityScore(double hostAuthorityScore) { DARABONBA_PTR_SET_VALUE(hostAuthorityScore_, hostAuthorityScore) };


    // hostLogo Field Functions 
    bool hasHostLogo() const { return this->hostLogo_ != nullptr;};
    void deleteHostLogo() { this->hostLogo_ = nullptr;};
    inline string hostLogo() const { DARABONBA_PTR_GET_DEFAULT(hostLogo_, "") };
    inline UnifiedPageItem& setHostLogo(string hostLogo) { DARABONBA_PTR_SET_VALUE(hostLogo_, hostLogo) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline UnifiedPageItem& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline UnifiedPageItem& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline UnifiedPageItem& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline UnifiedPageItem& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // mainText Field Functions 
    bool hasMainText() const { return this->mainText_ != nullptr;};
    void deleteMainText() { this->mainText_ = nullptr;};
    inline string mainText() const { DARABONBA_PTR_GET_DEFAULT(mainText_, "") };
    inline UnifiedPageItem& setMainText(string mainText) { DARABONBA_PTR_SET_VALUE(mainText_, mainText) };


    // markdownText Field Functions 
    bool hasMarkdownText() const { return this->markdownText_ != nullptr;};
    void deleteMarkdownText() { this->markdownText_ = nullptr;};
    inline string markdownText() const { DARABONBA_PTR_GET_DEFAULT(markdownText_, "") };
    inline UnifiedPageItem& setMarkdownText(string markdownText) { DARABONBA_PTR_SET_VALUE(markdownText_, markdownText) };


    // publishedTime Field Functions 
    bool hasPublishedTime() const { return this->publishedTime_ != nullptr;};
    void deletePublishedTime() { this->publishedTime_ = nullptr;};
    inline string publishedTime() const { DARABONBA_PTR_GET_DEFAULT(publishedTime_, "") };
    inline UnifiedPageItem& setPublishedTime(string publishedTime) { DARABONBA_PTR_SET_VALUE(publishedTime_, publishedTime) };


    // rerankScore Field Functions 
    bool hasRerankScore() const { return this->rerankScore_ != nullptr;};
    void deleteRerankScore() { this->rerankScore_ = nullptr;};
    inline double rerankScore() const { DARABONBA_PTR_GET_DEFAULT(rerankScore_, 0.0) };
    inline UnifiedPageItem& setRerankScore(double rerankScore) { DARABONBA_PTR_SET_VALUE(rerankScore_, rerankScore) };


    // snippet Field Functions 
    bool hasSnippet() const { return this->snippet_ != nullptr;};
    void deleteSnippet() { this->snippet_ = nullptr;};
    inline string snippet() const { DARABONBA_PTR_GET_DEFAULT(snippet_, "") };
    inline UnifiedPageItem& setSnippet(string snippet) { DARABONBA_PTR_SET_VALUE(snippet_, snippet) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string summary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline UnifiedPageItem& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UnifiedPageItem& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<double> hostAuthorityScore_ = nullptr;
    std::shared_ptr<string> hostLogo_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<vector<string>> images_ = nullptr;
    std::shared_ptr<string> link_ = nullptr;
    std::shared_ptr<string> mainText_ = nullptr;
    std::shared_ptr<string> markdownText_ = nullptr;
    std::shared_ptr<string> publishedTime_ = nullptr;
    std::shared_ptr<double> rerankScore_ = nullptr;
    std::shared_ptr<string> snippet_ = nullptr;
    std::shared_ptr<string> summary_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
