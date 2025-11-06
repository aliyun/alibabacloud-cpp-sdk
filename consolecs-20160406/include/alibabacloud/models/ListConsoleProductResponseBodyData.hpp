// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONSOLEPRODUCTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCONSOLEPRODUCTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Consolecs20160406
{
namespace Models
{
  class ListConsoleProductResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConsoleProductResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BelongedCategory, belongedCategory_);
      DARABONBA_PTR_TO_JSON(Categories, categories_);
      DARABONBA_PTR_TO_JSON(ChannelLinks, channelLinks_);
      DARABONBA_PTR_TO_JSON(DocId, docId_);
      DARABONBA_PTR_TO_JSON(Keywords, keywords_);
      DARABONBA_PTR_TO_JSON(Names, names_);
      DARABONBA_PTR_TO_JSON(Pinyin, pinyin_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RelatedConsoleAppId, relatedConsoleAppId_);
      DARABONBA_PTR_TO_JSON(RelatedPipId, relatedPipId_);
      DARABONBA_PTR_TO_JSON(ShowInNav, showInNav_);
      DARABONBA_PTR_TO_JSON(SupportedAccounts, supportedAccounts_);
      DARABONBA_PTR_TO_JSON(SupportedChannels, supportedChannels_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TagExpireTime, tagExpireTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListConsoleProductResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BelongedCategory, belongedCategory_);
      DARABONBA_PTR_FROM_JSON(Categories, categories_);
      DARABONBA_PTR_FROM_JSON(ChannelLinks, channelLinks_);
      DARABONBA_PTR_FROM_JSON(DocId, docId_);
      DARABONBA_PTR_FROM_JSON(Keywords, keywords_);
      DARABONBA_PTR_FROM_JSON(Names, names_);
      DARABONBA_PTR_FROM_JSON(Pinyin, pinyin_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RelatedConsoleAppId, relatedConsoleAppId_);
      DARABONBA_PTR_FROM_JSON(RelatedPipId, relatedPipId_);
      DARABONBA_PTR_FROM_JSON(ShowInNav, showInNav_);
      DARABONBA_PTR_FROM_JSON(SupportedAccounts, supportedAccounts_);
      DARABONBA_PTR_FROM_JSON(SupportedChannels, supportedChannels_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TagExpireTime, tagExpireTime_);
    };
    ListConsoleProductResponseBodyData() = default ;
    ListConsoleProductResponseBodyData(const ListConsoleProductResponseBodyData &) = default ;
    ListConsoleProductResponseBodyData(ListConsoleProductResponseBodyData &&) = default ;
    ListConsoleProductResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConsoleProductResponseBodyData() = default ;
    ListConsoleProductResponseBodyData& operator=(const ListConsoleProductResponseBodyData &) = default ;
    ListConsoleProductResponseBodyData& operator=(ListConsoleProductResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->belongedCategory_ == nullptr
        && return this->categories_ == nullptr && return this->channelLinks_ == nullptr && return this->docId_ == nullptr && return this->keywords_ == nullptr && return this->names_ == nullptr
        && return this->pinyin_ == nullptr && return this->productId_ == nullptr && return this->relatedConsoleAppId_ == nullptr && return this->relatedPipId_ == nullptr && return this->showInNav_ == nullptr
        && return this->supportedAccounts_ == nullptr && return this->supportedChannels_ == nullptr && return this->tag_ == nullptr && return this->tagExpireTime_ == nullptr; };
    // belongedCategory Field Functions 
    bool hasBelongedCategory() const { return this->belongedCategory_ != nullptr;};
    void deleteBelongedCategory() { this->belongedCategory_ = nullptr;};
    inline string belongedCategory() const { DARABONBA_PTR_GET_DEFAULT(belongedCategory_, "") };
    inline ListConsoleProductResponseBodyData& setBelongedCategory(string belongedCategory) { DARABONBA_PTR_SET_VALUE(belongedCategory_, belongedCategory) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<string> & categories() const { DARABONBA_PTR_GET_CONST(categories_, vector<string>) };
    inline vector<string> categories() { DARABONBA_PTR_GET(categories_, vector<string>) };
    inline ListConsoleProductResponseBodyData& setCategories(const vector<string> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline ListConsoleProductResponseBodyData& setCategories(vector<string> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // channelLinks Field Functions 
    bool hasChannelLinks() const { return this->channelLinks_ != nullptr;};
    void deleteChannelLinks() { this->channelLinks_ = nullptr;};
    inline const vector<string> & channelLinks() const { DARABONBA_PTR_GET_CONST(channelLinks_, vector<string>) };
    inline vector<string> channelLinks() { DARABONBA_PTR_GET(channelLinks_, vector<string>) };
    inline ListConsoleProductResponseBodyData& setChannelLinks(const vector<string> & channelLinks) { DARABONBA_PTR_SET_VALUE(channelLinks_, channelLinks) };
    inline ListConsoleProductResponseBodyData& setChannelLinks(vector<string> && channelLinks) { DARABONBA_PTR_SET_RVALUE(channelLinks_, channelLinks) };


    // docId Field Functions 
    bool hasDocId() const { return this->docId_ != nullptr;};
    void deleteDocId() { this->docId_ = nullptr;};
    inline string docId() const { DARABONBA_PTR_GET_DEFAULT(docId_, "") };
    inline ListConsoleProductResponseBodyData& setDocId(string docId) { DARABONBA_PTR_SET_VALUE(docId_, docId) };


    // keywords Field Functions 
    bool hasKeywords() const { return this->keywords_ != nullptr;};
    void deleteKeywords() { this->keywords_ = nullptr;};
    inline const vector<string> & keywords() const { DARABONBA_PTR_GET_CONST(keywords_, vector<string>) };
    inline vector<string> keywords() { DARABONBA_PTR_GET(keywords_, vector<string>) };
    inline ListConsoleProductResponseBodyData& setKeywords(const vector<string> & keywords) { DARABONBA_PTR_SET_VALUE(keywords_, keywords) };
    inline ListConsoleProductResponseBodyData& setKeywords(vector<string> && keywords) { DARABONBA_PTR_SET_RVALUE(keywords_, keywords) };


    // names Field Functions 
    bool hasNames() const { return this->names_ != nullptr;};
    void deleteNames() { this->names_ = nullptr;};
    inline string names() const { DARABONBA_PTR_GET_DEFAULT(names_, "") };
    inline ListConsoleProductResponseBodyData& setNames(string names) { DARABONBA_PTR_SET_VALUE(names_, names) };


    // pinyin Field Functions 
    bool hasPinyin() const { return this->pinyin_ != nullptr;};
    void deletePinyin() { this->pinyin_ = nullptr;};
    inline string pinyin() const { DARABONBA_PTR_GET_DEFAULT(pinyin_, "") };
    inline ListConsoleProductResponseBodyData& setPinyin(string pinyin) { DARABONBA_PTR_SET_VALUE(pinyin_, pinyin) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string productId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline ListConsoleProductResponseBodyData& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // relatedConsoleAppId Field Functions 
    bool hasRelatedConsoleAppId() const { return this->relatedConsoleAppId_ != nullptr;};
    void deleteRelatedConsoleAppId() { this->relatedConsoleAppId_ = nullptr;};
    inline string relatedConsoleAppId() const { DARABONBA_PTR_GET_DEFAULT(relatedConsoleAppId_, "") };
    inline ListConsoleProductResponseBodyData& setRelatedConsoleAppId(string relatedConsoleAppId) { DARABONBA_PTR_SET_VALUE(relatedConsoleAppId_, relatedConsoleAppId) };


    // relatedPipId Field Functions 
    bool hasRelatedPipId() const { return this->relatedPipId_ != nullptr;};
    void deleteRelatedPipId() { this->relatedPipId_ = nullptr;};
    inline string relatedPipId() const { DARABONBA_PTR_GET_DEFAULT(relatedPipId_, "") };
    inline ListConsoleProductResponseBodyData& setRelatedPipId(string relatedPipId) { DARABONBA_PTR_SET_VALUE(relatedPipId_, relatedPipId) };


    // showInNav Field Functions 
    bool hasShowInNav() const { return this->showInNav_ != nullptr;};
    void deleteShowInNav() { this->showInNav_ = nullptr;};
    inline bool showInNav() const { DARABONBA_PTR_GET_DEFAULT(showInNav_, false) };
    inline ListConsoleProductResponseBodyData& setShowInNav(bool showInNav) { DARABONBA_PTR_SET_VALUE(showInNav_, showInNav) };


    // supportedAccounts Field Functions 
    bool hasSupportedAccounts() const { return this->supportedAccounts_ != nullptr;};
    void deleteSupportedAccounts() { this->supportedAccounts_ = nullptr;};
    inline const vector<string> & supportedAccounts() const { DARABONBA_PTR_GET_CONST(supportedAccounts_, vector<string>) };
    inline vector<string> supportedAccounts() { DARABONBA_PTR_GET(supportedAccounts_, vector<string>) };
    inline ListConsoleProductResponseBodyData& setSupportedAccounts(const vector<string> & supportedAccounts) { DARABONBA_PTR_SET_VALUE(supportedAccounts_, supportedAccounts) };
    inline ListConsoleProductResponseBodyData& setSupportedAccounts(vector<string> && supportedAccounts) { DARABONBA_PTR_SET_RVALUE(supportedAccounts_, supportedAccounts) };


    // supportedChannels Field Functions 
    bool hasSupportedChannels() const { return this->supportedChannels_ != nullptr;};
    void deleteSupportedChannels() { this->supportedChannels_ = nullptr;};
    inline const vector<string> & supportedChannels() const { DARABONBA_PTR_GET_CONST(supportedChannels_, vector<string>) };
    inline vector<string> supportedChannels() { DARABONBA_PTR_GET(supportedChannels_, vector<string>) };
    inline ListConsoleProductResponseBodyData& setSupportedChannels(const vector<string> & supportedChannels) { DARABONBA_PTR_SET_VALUE(supportedChannels_, supportedChannels) };
    inline ListConsoleProductResponseBodyData& setSupportedChannels(vector<string> && supportedChannels) { DARABONBA_PTR_SET_RVALUE(supportedChannels_, supportedChannels) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string tag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline ListConsoleProductResponseBodyData& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // tagExpireTime Field Functions 
    bool hasTagExpireTime() const { return this->tagExpireTime_ != nullptr;};
    void deleteTagExpireTime() { this->tagExpireTime_ = nullptr;};
    inline string tagExpireTime() const { DARABONBA_PTR_GET_DEFAULT(tagExpireTime_, "") };
    inline ListConsoleProductResponseBodyData& setTagExpireTime(string tagExpireTime) { DARABONBA_PTR_SET_VALUE(tagExpireTime_, tagExpireTime) };


  protected:
    std::shared_ptr<string> belongedCategory_ = nullptr;
    std::shared_ptr<vector<string>> categories_ = nullptr;
    std::shared_ptr<vector<string>> channelLinks_ = nullptr;
    std::shared_ptr<string> docId_ = nullptr;
    std::shared_ptr<vector<string>> keywords_ = nullptr;
    std::shared_ptr<string> names_ = nullptr;
    std::shared_ptr<string> pinyin_ = nullptr;
    std::shared_ptr<string> productId_ = nullptr;
    std::shared_ptr<string> relatedConsoleAppId_ = nullptr;
    std::shared_ptr<string> relatedPipId_ = nullptr;
    std::shared_ptr<bool> showInNav_ = nullptr;
    std::shared_ptr<vector<string>> supportedAccounts_ = nullptr;
    std::shared_ptr<vector<string>> supportedChannels_ = nullptr;
    std::shared_ptr<string> tag_ = nullptr;
    std::shared_ptr<string> tagExpireTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Consolecs20160406
#endif
