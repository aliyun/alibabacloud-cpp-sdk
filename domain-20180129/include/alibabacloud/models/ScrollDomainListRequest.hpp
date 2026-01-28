// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCROLLDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCROLLDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class ScrollDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScrollDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_TO_JSON(EndLength, endLength_);
      DARABONBA_PTR_TO_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_TO_JSON(Excluded, excluded_);
      DARABONBA_PTR_TO_JSON(ExcludedPrefix, excludedPrefix_);
      DARABONBA_PTR_TO_JSON(ExcludedSuffix, excludedSuffix_);
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(KeyWordPrefix, keyWordPrefix_);
      DARABONBA_PTR_TO_JSON(KeyWordSuffix, keyWordSuffix_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_TO_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_TO_JSON(StartLength, startLength_);
      DARABONBA_PTR_TO_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_TO_JSON(Suffixs, suffixs_);
      DARABONBA_PTR_TO_JSON(TradeType, tradeType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, ScrollDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_FROM_JSON(EndLength, endLength_);
      DARABONBA_PTR_FROM_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(Excluded, excluded_);
      DARABONBA_PTR_FROM_JSON(ExcludedPrefix, excludedPrefix_);
      DARABONBA_PTR_FROM_JSON(ExcludedSuffix, excludedSuffix_);
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(KeyWordPrefix, keyWordPrefix_);
      DARABONBA_PTR_FROM_JSON(KeyWordSuffix, keyWordSuffix_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ScrollId, scrollId_);
      DARABONBA_PTR_FROM_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_FROM_JSON(StartLength, startLength_);
      DARABONBA_PTR_FROM_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(Suffixs, suffixs_);
      DARABONBA_PTR_FROM_JSON(TradeType, tradeType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    ScrollDomainListRequest() = default ;
    ScrollDomainListRequest(const ScrollDomainListRequest &) = default ;
    ScrollDomainListRequest(ScrollDomainListRequest &&) = default ;
    ScrollDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScrollDomainListRequest() = default ;
    ScrollDomainListRequest& operator=(const ScrollDomainListRequest &) = default ;
    ScrollDomainListRequest& operator=(ScrollDomainListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainGroupId_ == nullptr
        && this->domainStatus_ == nullptr && this->endExpirationDate_ == nullptr && this->endLength_ == nullptr && this->endRegistrationDate_ == nullptr && this->excluded_ == nullptr
        && this->excludedPrefix_ == nullptr && this->excludedSuffix_ == nullptr && this->form_ == nullptr && this->keyWord_ == nullptr && this->keyWordPrefix_ == nullptr
        && this->keyWordSuffix_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr && this->productDomainType_ == nullptr && this->resourceGroupId_ == nullptr
        && this->scrollId_ == nullptr && this->startExpirationDate_ == nullptr && this->startLength_ == nullptr && this->startRegistrationDate_ == nullptr && this->suffixs_ == nullptr
        && this->tradeType_ == nullptr && this->userClientIp_ == nullptr; };
    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline int64_t getDomainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, 0L) };
    inline ScrollDomainListRequest& setDomainGroupId(int64_t domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline int32_t getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, 0) };
    inline ScrollDomainListRequest& setDomainStatus(int32_t domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // endExpirationDate Field Functions 
    bool hasEndExpirationDate() const { return this->endExpirationDate_ != nullptr;};
    void deleteEndExpirationDate() { this->endExpirationDate_ = nullptr;};
    inline int64_t getEndExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(endExpirationDate_, 0L) };
    inline ScrollDomainListRequest& setEndExpirationDate(int64_t endExpirationDate) { DARABONBA_PTR_SET_VALUE(endExpirationDate_, endExpirationDate) };


    // endLength Field Functions 
    bool hasEndLength() const { return this->endLength_ != nullptr;};
    void deleteEndLength() { this->endLength_ = nullptr;};
    inline int32_t getEndLength() const { DARABONBA_PTR_GET_DEFAULT(endLength_, 0) };
    inline ScrollDomainListRequest& setEndLength(int32_t endLength) { DARABONBA_PTR_SET_VALUE(endLength_, endLength) };


    // endRegistrationDate Field Functions 
    bool hasEndRegistrationDate() const { return this->endRegistrationDate_ != nullptr;};
    void deleteEndRegistrationDate() { this->endRegistrationDate_ = nullptr;};
    inline int64_t getEndRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(endRegistrationDate_, 0L) };
    inline ScrollDomainListRequest& setEndRegistrationDate(int64_t endRegistrationDate) { DARABONBA_PTR_SET_VALUE(endRegistrationDate_, endRegistrationDate) };


    // excluded Field Functions 
    bool hasExcluded() const { return this->excluded_ != nullptr;};
    void deleteExcluded() { this->excluded_ = nullptr;};
    inline string getExcluded() const { DARABONBA_PTR_GET_DEFAULT(excluded_, "") };
    inline ScrollDomainListRequest& setExcluded(string excluded) { DARABONBA_PTR_SET_VALUE(excluded_, excluded) };


    // excludedPrefix Field Functions 
    bool hasExcludedPrefix() const { return this->excludedPrefix_ != nullptr;};
    void deleteExcludedPrefix() { this->excludedPrefix_ = nullptr;};
    inline bool getExcludedPrefix() const { DARABONBA_PTR_GET_DEFAULT(excludedPrefix_, false) };
    inline ScrollDomainListRequest& setExcludedPrefix(bool excludedPrefix) { DARABONBA_PTR_SET_VALUE(excludedPrefix_, excludedPrefix) };


    // excludedSuffix Field Functions 
    bool hasExcludedSuffix() const { return this->excludedSuffix_ != nullptr;};
    void deleteExcludedSuffix() { this->excludedSuffix_ = nullptr;};
    inline bool getExcludedSuffix() const { DARABONBA_PTR_GET_DEFAULT(excludedSuffix_, false) };
    inline ScrollDomainListRequest& setExcludedSuffix(bool excludedSuffix) { DARABONBA_PTR_SET_VALUE(excludedSuffix_, excludedSuffix) };


    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline int32_t getForm() const { DARABONBA_PTR_GET_DEFAULT(form_, 0) };
    inline ScrollDomainListRequest& setForm(int32_t form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline ScrollDomainListRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // keyWordPrefix Field Functions 
    bool hasKeyWordPrefix() const { return this->keyWordPrefix_ != nullptr;};
    void deleteKeyWordPrefix() { this->keyWordPrefix_ = nullptr;};
    inline bool getKeyWordPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyWordPrefix_, false) };
    inline ScrollDomainListRequest& setKeyWordPrefix(bool keyWordPrefix) { DARABONBA_PTR_SET_VALUE(keyWordPrefix_, keyWordPrefix) };


    // keyWordSuffix Field Functions 
    bool hasKeyWordSuffix() const { return this->keyWordSuffix_ != nullptr;};
    void deleteKeyWordSuffix() { this->keyWordSuffix_ = nullptr;};
    inline bool getKeyWordSuffix() const { DARABONBA_PTR_GET_DEFAULT(keyWordSuffix_, false) };
    inline ScrollDomainListRequest& setKeyWordSuffix(bool keyWordSuffix) { DARABONBA_PTR_SET_VALUE(keyWordSuffix_, keyWordSuffix) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ScrollDomainListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ScrollDomainListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productDomainType Field Functions 
    bool hasProductDomainType() const { return this->productDomainType_ != nullptr;};
    void deleteProductDomainType() { this->productDomainType_ = nullptr;};
    inline string getProductDomainType() const { DARABONBA_PTR_GET_DEFAULT(productDomainType_, "") };
    inline ScrollDomainListRequest& setProductDomainType(string productDomainType) { DARABONBA_PTR_SET_VALUE(productDomainType_, productDomainType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ScrollDomainListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scrollId Field Functions 
    bool hasScrollId() const { return this->scrollId_ != nullptr;};
    void deleteScrollId() { this->scrollId_ = nullptr;};
    inline string getScrollId() const { DARABONBA_PTR_GET_DEFAULT(scrollId_, "") };
    inline ScrollDomainListRequest& setScrollId(string scrollId) { DARABONBA_PTR_SET_VALUE(scrollId_, scrollId) };


    // startExpirationDate Field Functions 
    bool hasStartExpirationDate() const { return this->startExpirationDate_ != nullptr;};
    void deleteStartExpirationDate() { this->startExpirationDate_ = nullptr;};
    inline int64_t getStartExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(startExpirationDate_, 0L) };
    inline ScrollDomainListRequest& setStartExpirationDate(int64_t startExpirationDate) { DARABONBA_PTR_SET_VALUE(startExpirationDate_, startExpirationDate) };


    // startLength Field Functions 
    bool hasStartLength() const { return this->startLength_ != nullptr;};
    void deleteStartLength() { this->startLength_ = nullptr;};
    inline int32_t getStartLength() const { DARABONBA_PTR_GET_DEFAULT(startLength_, 0) };
    inline ScrollDomainListRequest& setStartLength(int32_t startLength) { DARABONBA_PTR_SET_VALUE(startLength_, startLength) };


    // startRegistrationDate Field Functions 
    bool hasStartRegistrationDate() const { return this->startRegistrationDate_ != nullptr;};
    void deleteStartRegistrationDate() { this->startRegistrationDate_ = nullptr;};
    inline int64_t getStartRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(startRegistrationDate_, 0L) };
    inline ScrollDomainListRequest& setStartRegistrationDate(int64_t startRegistrationDate) { DARABONBA_PTR_SET_VALUE(startRegistrationDate_, startRegistrationDate) };


    // suffixs Field Functions 
    bool hasSuffixs() const { return this->suffixs_ != nullptr;};
    void deleteSuffixs() { this->suffixs_ = nullptr;};
    inline string getSuffixs() const { DARABONBA_PTR_GET_DEFAULT(suffixs_, "") };
    inline ScrollDomainListRequest& setSuffixs(string suffixs) { DARABONBA_PTR_SET_VALUE(suffixs_, suffixs) };


    // tradeType Field Functions 
    bool hasTradeType() const { return this->tradeType_ != nullptr;};
    void deleteTradeType() { this->tradeType_ = nullptr;};
    inline int32_t getTradeType() const { DARABONBA_PTR_GET_DEFAULT(tradeType_, 0) };
    inline ScrollDomainListRequest& setTradeType(int32_t tradeType) { DARABONBA_PTR_SET_VALUE(tradeType_, tradeType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string getUserClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline ScrollDomainListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    // The ID of the domain name group. You can call the [QueryDomainGroupList](https://help.aliyun.com/document_detail/69362.html) operation to obtain the ID of the domain name group.
    shared_ptr<int64_t> domainGroupId_ {};
    // The status of the domain name. Valid values:
    // 
    // *   **0**: All.
    // *   **1**: The domain name needs to be renewed.
    // *   **2**: The domain name needs to be redeemed.
    // *   **3**: The domain name is normal.
    // *   **4**: The domain name is being transferred from Alibaba Cloud.
    // *   **5**: The information about the domain name registrant is being modified.
    // *   **6**: Real-name verification is not performed on the domain name.
    // *   **7**: Real-name verification for the domain name fails. Real-name reverification is required.
    // *   **8**: The domain name is being reviewed.
    shared_ptr<int32_t> domainStatus_ {};
    // The end of the time range to query domain names based on expiration dates. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> endExpirationDate_ {};
    // The end of domain name length to query.
    shared_ptr<int32_t> endLength_ {};
    // The end of the time range to query domain names based on registration dates. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> endRegistrationDate_ {};
    // The keyword that is used to exclude domain names.
    shared_ptr<string> excluded_ {};
    // Specifies whether to exclude the prefix keyword.
    shared_ptr<bool> excludedPrefix_ {};
    // Specifies whether to exclude the suffix keyword.
    shared_ptr<bool> excludedSuffix_ {};
    // The composition of the domain name.
    shared_ptr<int32_t> form_ {};
    // The keyword.
    shared_ptr<string> keyWord_ {};
    // Specifies whether the keyword is the prefix.
    shared_ptr<bool> keyWordPrefix_ {};
    // Specifies whether the keyword is the suffix.
    shared_ptr<bool> keyWordSuffix_ {};
    // The language of the error message to return if the request fails. Valid values:
    // 
    // *   **zh**: Chinese.
    // *   **en**: English.
    // 
    // Default value: **en**.
    shared_ptr<string> lang_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The type of the domain name. Valid values:
    // 
    // *   **New gTLD**
    // *   **gTLD**
    // *   **ccTLD**
    // *   **other**
    shared_ptr<string> productDomainType_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // The scroll ID. This parameter is a technical parameter.
    shared_ptr<string> scrollId_ {};
    // The beginning of the time range to query domain names based on expiration dates. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> startExpirationDate_ {};
    // The start of the domain name length to query.
    shared_ptr<int32_t> startLength_ {};
    // The beginning of the time range to query domain names based on registration dates. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    shared_ptr<int64_t> startRegistrationDate_ {};
    // The suffixes of domain names to be queried. Separate multiple suffixes with commas (,).
    shared_ptr<string> suffixs_ {};
    // The publishing status of the domain name. Valid values:
    // 
    // *   **2**: The domain name is published at a fixed price.
    // *   **3**: The domain name is published with the price negotiable.
    // *   **4**: The domain name is published for bidding.
    // *   **6**: The domain name is published with price push.
    // *   **-1**: The domain name is not published.
    shared_ptr<int32_t> tradeType_ {};
    // The IP address of the client. Set the value to **127.0.0.1**.
    shared_ptr<string> userClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
