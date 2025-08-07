// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_WEIBOITEM_HPP_
#define ALIBABACLOUD_MODELS_WEIBOITEM_HPP_
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
  class WeiboItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const WeiboItem& obj) { 
      DARABONBA_PTR_TO_JSON(cardType, cardType_);
      DARABONBA_PTR_TO_JSON(homepageLink, homepageLink_);
      DARABONBA_PTR_TO_JSON(htmlSnippet, htmlSnippet_);
      DARABONBA_PTR_TO_JSON(images, images_);
      DARABONBA_PTR_TO_JSON(link, link_);
      DARABONBA_PTR_TO_JSON(publishDisplayTime, publishDisplayTime_);
      DARABONBA_PTR_TO_JSON(username, username_);
    };
    friend void from_json(const Darabonba::Json& j, WeiboItem& obj) { 
      DARABONBA_PTR_FROM_JSON(cardType, cardType_);
      DARABONBA_PTR_FROM_JSON(homepageLink, homepageLink_);
      DARABONBA_PTR_FROM_JSON(htmlSnippet, htmlSnippet_);
      DARABONBA_PTR_FROM_JSON(images, images_);
      DARABONBA_PTR_FROM_JSON(link, link_);
      DARABONBA_PTR_FROM_JSON(publishDisplayTime, publishDisplayTime_);
      DARABONBA_PTR_FROM_JSON(username, username_);
    };
    WeiboItem() = default ;
    WeiboItem(const WeiboItem &) = default ;
    WeiboItem(WeiboItem &&) = default ;
    WeiboItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~WeiboItem() = default ;
    WeiboItem& operator=(const WeiboItem &) = default ;
    WeiboItem& operator=(WeiboItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardType_ != nullptr
        && this->homepageLink_ != nullptr && this->htmlSnippet_ != nullptr && this->images_ != nullptr && this->link_ != nullptr && this->publishDisplayTime_ != nullptr
        && this->username_ != nullptr; };
    // cardType Field Functions 
    bool hasCardType() const { return this->cardType_ != nullptr;};
    void deleteCardType() { this->cardType_ = nullptr;};
    inline string cardType() const { DARABONBA_PTR_GET_DEFAULT(cardType_, "") };
    inline WeiboItem& setCardType(string cardType) { DARABONBA_PTR_SET_VALUE(cardType_, cardType) };


    // homepageLink Field Functions 
    bool hasHomepageLink() const { return this->homepageLink_ != nullptr;};
    void deleteHomepageLink() { this->homepageLink_ = nullptr;};
    inline string homepageLink() const { DARABONBA_PTR_GET_DEFAULT(homepageLink_, "") };
    inline WeiboItem& setHomepageLink(string homepageLink) { DARABONBA_PTR_SET_VALUE(homepageLink_, homepageLink) };


    // htmlSnippet Field Functions 
    bool hasHtmlSnippet() const { return this->htmlSnippet_ != nullptr;};
    void deleteHtmlSnippet() { this->htmlSnippet_ = nullptr;};
    inline string htmlSnippet() const { DARABONBA_PTR_GET_DEFAULT(htmlSnippet_, "") };
    inline WeiboItem& setHtmlSnippet(string htmlSnippet) { DARABONBA_PTR_SET_VALUE(htmlSnippet_, htmlSnippet) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<string> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<string>) };
    inline vector<string> images() { DARABONBA_PTR_GET(images_, vector<string>) };
    inline WeiboItem& setImages(const vector<string> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline WeiboItem& setImages(vector<string> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // link Field Functions 
    bool hasLink() const { return this->link_ != nullptr;};
    void deleteLink() { this->link_ = nullptr;};
    inline string link() const { DARABONBA_PTR_GET_DEFAULT(link_, "") };
    inline WeiboItem& setLink(string link) { DARABONBA_PTR_SET_VALUE(link_, link) };


    // publishDisplayTime Field Functions 
    bool hasPublishDisplayTime() const { return this->publishDisplayTime_ != nullptr;};
    void deletePublishDisplayTime() { this->publishDisplayTime_ = nullptr;};
    inline string publishDisplayTime() const { DARABONBA_PTR_GET_DEFAULT(publishDisplayTime_, "") };
    inline WeiboItem& setPublishDisplayTime(string publishDisplayTime) { DARABONBA_PTR_SET_VALUE(publishDisplayTime_, publishDisplayTime) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline WeiboItem& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> cardType_ = nullptr;
    std::shared_ptr<string> homepageLink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> htmlSnippet_ = nullptr;
    std::shared_ptr<vector<string>> images_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> link_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> publishDisplayTime_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IQS20241111
#endif
