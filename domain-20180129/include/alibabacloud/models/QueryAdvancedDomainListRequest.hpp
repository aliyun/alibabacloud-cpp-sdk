// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYADVANCEDDOMAINLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryAdvancedDomainListRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class QueryAdvancedDomainListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAdvancedDomainListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_TO_JSON(DomainNameSort, domainNameSort_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_TO_JSON(EndLength, endLength_);
      DARABONBA_PTR_TO_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_TO_JSON(Excluded, excluded_);
      DARABONBA_PTR_TO_JSON(ExcludedPrefix, excludedPrefix_);
      DARABONBA_PTR_TO_JSON(ExcludedSuffix, excludedSuffix_);
      DARABONBA_PTR_TO_JSON(ExpirationDateSort, expirationDateSort_);
      DARABONBA_PTR_TO_JSON(Form, form_);
      DARABONBA_PTR_TO_JSON(IsPremiumDomain, isPremiumDomain_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(KeyWordPrefix, keyWordPrefix_);
      DARABONBA_PTR_TO_JSON(KeyWordSuffix, keyWordSuffix_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_TO_JSON(ProductDomainTypeSort, productDomainTypeSort_);
      DARABONBA_PTR_TO_JSON(RegistrationDateSort, registrationDateSort_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_TO_JSON(StartLength, startLength_);
      DARABONBA_PTR_TO_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_TO_JSON(Suffixs, suffixs_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TradeType, tradeType_);
      DARABONBA_PTR_TO_JSON(UserClientIp, userClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAdvancedDomainListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainGroupId, domainGroupId_);
      DARABONBA_PTR_FROM_JSON(DomainNameSort, domainNameSort_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(EndExpirationDate, endExpirationDate_);
      DARABONBA_PTR_FROM_JSON(EndLength, endLength_);
      DARABONBA_PTR_FROM_JSON(EndRegistrationDate, endRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(Excluded, excluded_);
      DARABONBA_PTR_FROM_JSON(ExcludedPrefix, excludedPrefix_);
      DARABONBA_PTR_FROM_JSON(ExcludedSuffix, excludedSuffix_);
      DARABONBA_PTR_FROM_JSON(ExpirationDateSort, expirationDateSort_);
      DARABONBA_PTR_FROM_JSON(Form, form_);
      DARABONBA_PTR_FROM_JSON(IsPremiumDomain, isPremiumDomain_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(KeyWordPrefix, keyWordPrefix_);
      DARABONBA_PTR_FROM_JSON(KeyWordSuffix, keyWordSuffix_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductDomainType, productDomainType_);
      DARABONBA_PTR_FROM_JSON(ProductDomainTypeSort, productDomainTypeSort_);
      DARABONBA_PTR_FROM_JSON(RegistrationDateSort, registrationDateSort_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StartExpirationDate, startExpirationDate_);
      DARABONBA_PTR_FROM_JSON(StartLength, startLength_);
      DARABONBA_PTR_FROM_JSON(StartRegistrationDate, startRegistrationDate_);
      DARABONBA_PTR_FROM_JSON(Suffixs, suffixs_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TradeType, tradeType_);
      DARABONBA_PTR_FROM_JSON(UserClientIp, userClientIp_);
    };
    QueryAdvancedDomainListRequest() = default ;
    QueryAdvancedDomainListRequest(const QueryAdvancedDomainListRequest &) = default ;
    QueryAdvancedDomainListRequest(QueryAdvancedDomainListRequest &&) = default ;
    QueryAdvancedDomainListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAdvancedDomainListRequest() = default ;
    QueryAdvancedDomainListRequest& operator=(const QueryAdvancedDomainListRequest &) = default ;
    QueryAdvancedDomainListRequest& operator=(QueryAdvancedDomainListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainGroupId_ == nullptr
        && return this->domainNameSort_ == nullptr && return this->domainStatus_ == nullptr && return this->endExpirationDate_ == nullptr && return this->endLength_ == nullptr && return this->endRegistrationDate_ == nullptr
        && return this->excluded_ == nullptr && return this->excludedPrefix_ == nullptr && return this->excludedSuffix_ == nullptr && return this->expirationDateSort_ == nullptr && return this->form_ == nullptr
        && return this->isPremiumDomain_ == nullptr && return this->keyWord_ == nullptr && return this->keyWordPrefix_ == nullptr && return this->keyWordSuffix_ == nullptr && return this->lang_ == nullptr
        && return this->pageNum_ == nullptr && return this->pageSize_ == nullptr && return this->productDomainType_ == nullptr && return this->productDomainTypeSort_ == nullptr && return this->registrationDateSort_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->startExpirationDate_ == nullptr && return this->startLength_ == nullptr && return this->startRegistrationDate_ == nullptr && return this->suffixs_ == nullptr
        && return this->tag_ == nullptr && return this->tradeType_ == nullptr && return this->userClientIp_ == nullptr; };
    // domainGroupId Field Functions 
    bool hasDomainGroupId() const { return this->domainGroupId_ != nullptr;};
    void deleteDomainGroupId() { this->domainGroupId_ = nullptr;};
    inline int64_t domainGroupId() const { DARABONBA_PTR_GET_DEFAULT(domainGroupId_, 0L) };
    inline QueryAdvancedDomainListRequest& setDomainGroupId(int64_t domainGroupId) { DARABONBA_PTR_SET_VALUE(domainGroupId_, domainGroupId) };


    // domainNameSort Field Functions 
    bool hasDomainNameSort() const { return this->domainNameSort_ != nullptr;};
    void deleteDomainNameSort() { this->domainNameSort_ = nullptr;};
    inline bool domainNameSort() const { DARABONBA_PTR_GET_DEFAULT(domainNameSort_, false) };
    inline QueryAdvancedDomainListRequest& setDomainNameSort(bool domainNameSort) { DARABONBA_PTR_SET_VALUE(domainNameSort_, domainNameSort) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline int32_t domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, 0) };
    inline QueryAdvancedDomainListRequest& setDomainStatus(int32_t domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // endExpirationDate Field Functions 
    bool hasEndExpirationDate() const { return this->endExpirationDate_ != nullptr;};
    void deleteEndExpirationDate() { this->endExpirationDate_ = nullptr;};
    inline int64_t endExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(endExpirationDate_, 0L) };
    inline QueryAdvancedDomainListRequest& setEndExpirationDate(int64_t endExpirationDate) { DARABONBA_PTR_SET_VALUE(endExpirationDate_, endExpirationDate) };


    // endLength Field Functions 
    bool hasEndLength() const { return this->endLength_ != nullptr;};
    void deleteEndLength() { this->endLength_ = nullptr;};
    inline int32_t endLength() const { DARABONBA_PTR_GET_DEFAULT(endLength_, 0) };
    inline QueryAdvancedDomainListRequest& setEndLength(int32_t endLength) { DARABONBA_PTR_SET_VALUE(endLength_, endLength) };


    // endRegistrationDate Field Functions 
    bool hasEndRegistrationDate() const { return this->endRegistrationDate_ != nullptr;};
    void deleteEndRegistrationDate() { this->endRegistrationDate_ = nullptr;};
    inline int64_t endRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(endRegistrationDate_, 0L) };
    inline QueryAdvancedDomainListRequest& setEndRegistrationDate(int64_t endRegistrationDate) { DARABONBA_PTR_SET_VALUE(endRegistrationDate_, endRegistrationDate) };


    // excluded Field Functions 
    bool hasExcluded() const { return this->excluded_ != nullptr;};
    void deleteExcluded() { this->excluded_ = nullptr;};
    inline string excluded() const { DARABONBA_PTR_GET_DEFAULT(excluded_, "") };
    inline QueryAdvancedDomainListRequest& setExcluded(string excluded) { DARABONBA_PTR_SET_VALUE(excluded_, excluded) };


    // excludedPrefix Field Functions 
    bool hasExcludedPrefix() const { return this->excludedPrefix_ != nullptr;};
    void deleteExcludedPrefix() { this->excludedPrefix_ = nullptr;};
    inline bool excludedPrefix() const { DARABONBA_PTR_GET_DEFAULT(excludedPrefix_, false) };
    inline QueryAdvancedDomainListRequest& setExcludedPrefix(bool excludedPrefix) { DARABONBA_PTR_SET_VALUE(excludedPrefix_, excludedPrefix) };


    // excludedSuffix Field Functions 
    bool hasExcludedSuffix() const { return this->excludedSuffix_ != nullptr;};
    void deleteExcludedSuffix() { this->excludedSuffix_ = nullptr;};
    inline bool excludedSuffix() const { DARABONBA_PTR_GET_DEFAULT(excludedSuffix_, false) };
    inline QueryAdvancedDomainListRequest& setExcludedSuffix(bool excludedSuffix) { DARABONBA_PTR_SET_VALUE(excludedSuffix_, excludedSuffix) };


    // expirationDateSort Field Functions 
    bool hasExpirationDateSort() const { return this->expirationDateSort_ != nullptr;};
    void deleteExpirationDateSort() { this->expirationDateSort_ = nullptr;};
    inline bool expirationDateSort() const { DARABONBA_PTR_GET_DEFAULT(expirationDateSort_, false) };
    inline QueryAdvancedDomainListRequest& setExpirationDateSort(bool expirationDateSort) { DARABONBA_PTR_SET_VALUE(expirationDateSort_, expirationDateSort) };


    // form Field Functions 
    bool hasForm() const { return this->form_ != nullptr;};
    void deleteForm() { this->form_ = nullptr;};
    inline int32_t form() const { DARABONBA_PTR_GET_DEFAULT(form_, 0) };
    inline QueryAdvancedDomainListRequest& setForm(int32_t form) { DARABONBA_PTR_SET_VALUE(form_, form) };


    // isPremiumDomain Field Functions 
    bool hasIsPremiumDomain() const { return this->isPremiumDomain_ != nullptr;};
    void deleteIsPremiumDomain() { this->isPremiumDomain_ = nullptr;};
    inline bool isPremiumDomain() const { DARABONBA_PTR_GET_DEFAULT(isPremiumDomain_, false) };
    inline QueryAdvancedDomainListRequest& setIsPremiumDomain(bool isPremiumDomain) { DARABONBA_PTR_SET_VALUE(isPremiumDomain_, isPremiumDomain) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string keyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline QueryAdvancedDomainListRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // keyWordPrefix Field Functions 
    bool hasKeyWordPrefix() const { return this->keyWordPrefix_ != nullptr;};
    void deleteKeyWordPrefix() { this->keyWordPrefix_ = nullptr;};
    inline bool keyWordPrefix() const { DARABONBA_PTR_GET_DEFAULT(keyWordPrefix_, false) };
    inline QueryAdvancedDomainListRequest& setKeyWordPrefix(bool keyWordPrefix) { DARABONBA_PTR_SET_VALUE(keyWordPrefix_, keyWordPrefix) };


    // keyWordSuffix Field Functions 
    bool hasKeyWordSuffix() const { return this->keyWordSuffix_ != nullptr;};
    void deleteKeyWordSuffix() { this->keyWordSuffix_ = nullptr;};
    inline bool keyWordSuffix() const { DARABONBA_PTR_GET_DEFAULT(keyWordSuffix_, false) };
    inline QueryAdvancedDomainListRequest& setKeyWordSuffix(bool keyWordSuffix) { DARABONBA_PTR_SET_VALUE(keyWordSuffix_, keyWordSuffix) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline QueryAdvancedDomainListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryAdvancedDomainListRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryAdvancedDomainListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productDomainType Field Functions 
    bool hasProductDomainType() const { return this->productDomainType_ != nullptr;};
    void deleteProductDomainType() { this->productDomainType_ = nullptr;};
    inline string productDomainType() const { DARABONBA_PTR_GET_DEFAULT(productDomainType_, "") };
    inline QueryAdvancedDomainListRequest& setProductDomainType(string productDomainType) { DARABONBA_PTR_SET_VALUE(productDomainType_, productDomainType) };


    // productDomainTypeSort Field Functions 
    bool hasProductDomainTypeSort() const { return this->productDomainTypeSort_ != nullptr;};
    void deleteProductDomainTypeSort() { this->productDomainTypeSort_ = nullptr;};
    inline bool productDomainTypeSort() const { DARABONBA_PTR_GET_DEFAULT(productDomainTypeSort_, false) };
    inline QueryAdvancedDomainListRequest& setProductDomainTypeSort(bool productDomainTypeSort) { DARABONBA_PTR_SET_VALUE(productDomainTypeSort_, productDomainTypeSort) };


    // registrationDateSort Field Functions 
    bool hasRegistrationDateSort() const { return this->registrationDateSort_ != nullptr;};
    void deleteRegistrationDateSort() { this->registrationDateSort_ = nullptr;};
    inline bool registrationDateSort() const { DARABONBA_PTR_GET_DEFAULT(registrationDateSort_, false) };
    inline QueryAdvancedDomainListRequest& setRegistrationDateSort(bool registrationDateSort) { DARABONBA_PTR_SET_VALUE(registrationDateSort_, registrationDateSort) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline QueryAdvancedDomainListRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // startExpirationDate Field Functions 
    bool hasStartExpirationDate() const { return this->startExpirationDate_ != nullptr;};
    void deleteStartExpirationDate() { this->startExpirationDate_ = nullptr;};
    inline int64_t startExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(startExpirationDate_, 0L) };
    inline QueryAdvancedDomainListRequest& setStartExpirationDate(int64_t startExpirationDate) { DARABONBA_PTR_SET_VALUE(startExpirationDate_, startExpirationDate) };


    // startLength Field Functions 
    bool hasStartLength() const { return this->startLength_ != nullptr;};
    void deleteStartLength() { this->startLength_ = nullptr;};
    inline int32_t startLength() const { DARABONBA_PTR_GET_DEFAULT(startLength_, 0) };
    inline QueryAdvancedDomainListRequest& setStartLength(int32_t startLength) { DARABONBA_PTR_SET_VALUE(startLength_, startLength) };


    // startRegistrationDate Field Functions 
    bool hasStartRegistrationDate() const { return this->startRegistrationDate_ != nullptr;};
    void deleteStartRegistrationDate() { this->startRegistrationDate_ = nullptr;};
    inline int64_t startRegistrationDate() const { DARABONBA_PTR_GET_DEFAULT(startRegistrationDate_, 0L) };
    inline QueryAdvancedDomainListRequest& setStartRegistrationDate(int64_t startRegistrationDate) { DARABONBA_PTR_SET_VALUE(startRegistrationDate_, startRegistrationDate) };


    // suffixs Field Functions 
    bool hasSuffixs() const { return this->suffixs_ != nullptr;};
    void deleteSuffixs() { this->suffixs_ = nullptr;};
    inline string suffixs() const { DARABONBA_PTR_GET_DEFAULT(suffixs_, "") };
    inline QueryAdvancedDomainListRequest& setSuffixs(string suffixs) { DARABONBA_PTR_SET_VALUE(suffixs_, suffixs) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<QueryAdvancedDomainListRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<QueryAdvancedDomainListRequestTag>) };
    inline vector<QueryAdvancedDomainListRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<QueryAdvancedDomainListRequestTag>) };
    inline QueryAdvancedDomainListRequest& setTag(const vector<QueryAdvancedDomainListRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline QueryAdvancedDomainListRequest& setTag(vector<QueryAdvancedDomainListRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // tradeType Field Functions 
    bool hasTradeType() const { return this->tradeType_ != nullptr;};
    void deleteTradeType() { this->tradeType_ = nullptr;};
    inline int32_t tradeType() const { DARABONBA_PTR_GET_DEFAULT(tradeType_, 0) };
    inline QueryAdvancedDomainListRequest& setTradeType(int32_t tradeType) { DARABONBA_PTR_SET_VALUE(tradeType_, tradeType) };


    // userClientIp Field Functions 
    bool hasUserClientIp() const { return this->userClientIp_ != nullptr;};
    void deleteUserClientIp() { this->userClientIp_ = nullptr;};
    inline string userClientIp() const { DARABONBA_PTR_GET_DEFAULT(userClientIp_, "") };
    inline QueryAdvancedDomainListRequest& setUserClientIp(string userClientIp) { DARABONBA_PTR_SET_VALUE(userClientIp_, userClientIp) };


  protected:
    std::shared_ptr<int64_t> domainGroupId_ = nullptr;
    std::shared_ptr<bool> domainNameSort_ = nullptr;
    std::shared_ptr<int32_t> domainStatus_ = nullptr;
    std::shared_ptr<int64_t> endExpirationDate_ = nullptr;
    std::shared_ptr<int32_t> endLength_ = nullptr;
    std::shared_ptr<int64_t> endRegistrationDate_ = nullptr;
    std::shared_ptr<string> excluded_ = nullptr;
    std::shared_ptr<bool> excludedPrefix_ = nullptr;
    std::shared_ptr<bool> excludedSuffix_ = nullptr;
    std::shared_ptr<bool> expirationDateSort_ = nullptr;
    std::shared_ptr<int32_t> form_ = nullptr;
    std::shared_ptr<bool> isPremiumDomain_ = nullptr;
    std::shared_ptr<string> keyWord_ = nullptr;
    std::shared_ptr<bool> keyWordPrefix_ = nullptr;
    std::shared_ptr<bool> keyWordSuffix_ = nullptr;
    std::shared_ptr<string> lang_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> productDomainType_ = nullptr;
    std::shared_ptr<bool> productDomainTypeSort_ = nullptr;
    std::shared_ptr<bool> registrationDateSort_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> startExpirationDate_ = nullptr;
    std::shared_ptr<int32_t> startLength_ = nullptr;
    std::shared_ptr<int64_t> startRegistrationDate_ = nullptr;
    std::shared_ptr<string> suffixs_ = nullptr;
    std::shared_ptr<vector<QueryAdvancedDomainListRequestTag>> tag_ = nullptr;
    std::shared_ptr<int32_t> tradeType_ = nullptr;
    std::shared_ptr<string> userClientIp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
