// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWAFMANAGEDRULESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListWafManagedRulesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWafManagedRulesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AttackType, attackType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_TO_JSON(QueryArgs, queryArgsShrink_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWafManagedRulesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackType, attackType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
      DARABONBA_PTR_FROM_JSON(QueryArgs, queryArgsShrink_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    ListWafManagedRulesShrinkRequest() = default ;
    ListWafManagedRulesShrinkRequest(const ListWafManagedRulesShrinkRequest &) = default ;
    ListWafManagedRulesShrinkRequest(ListWafManagedRulesShrinkRequest &&) = default ;
    ListWafManagedRulesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWafManagedRulesShrinkRequest() = default ;
    ListWafManagedRulesShrinkRequest& operator=(const ListWafManagedRulesShrinkRequest &) = default ;
    ListWafManagedRulesShrinkRequest& operator=(ListWafManagedRulesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attackType_ != nullptr
        && this->id_ != nullptr && this->language_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->protectionLevel_ != nullptr
        && this->queryArgsShrink_ != nullptr && this->siteId_ != nullptr; };
    // attackType Field Functions 
    bool hasAttackType() const { return this->attackType_ != nullptr;};
    void deleteAttackType() { this->attackType_ = nullptr;};
    inline int32_t attackType() const { DARABONBA_PTR_GET_DEFAULT(attackType_, 0) };
    inline ListWafManagedRulesShrinkRequest& setAttackType(int32_t attackType) { DARABONBA_PTR_SET_VALUE(attackType_, attackType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListWafManagedRulesShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline ListWafManagedRulesShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListWafManagedRulesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListWafManagedRulesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline int32_t protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, 0) };
    inline ListWafManagedRulesShrinkRequest& setProtectionLevel(int32_t protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // queryArgsShrink Field Functions 
    bool hasQueryArgsShrink() const { return this->queryArgsShrink_ != nullptr;};
    void deleteQueryArgsShrink() { this->queryArgsShrink_ = nullptr;};
    inline string queryArgsShrink() const { DARABONBA_PTR_GET_DEFAULT(queryArgsShrink_, "") };
    inline ListWafManagedRulesShrinkRequest& setQueryArgsShrink(string queryArgsShrink) { DARABONBA_PTR_SET_VALUE(queryArgsShrink_, queryArgsShrink) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListWafManagedRulesShrinkRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // Attack type of the vulnerability protection event. Values:
    // - SQL injection
    // - Cross-site scripting
    // - Code execution
    // - CRLF
    // - Local file inclusion
    // - Remote file inclusion
    // - Webshell
    // - Cross-site request forgery
    // - Other
    // - SEMA
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> attackType_ = nullptr;
    // ID of the WAF rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // Language type, which will be used to return the response. Value range:
    // 
    // - **en**: English.
    // - **zh**: Chinese.
    std::shared_ptr<string> language_ = nullptr;
    // Query page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // Query page size.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<int32_t> protectionLevel_ = nullptr;
    // Query conditions.
    std::shared_ptr<string> queryArgsShrink_ = nullptr;
    // Site ID, which can be obtained by calling the [ListSites](https://help.aliyun.com/document_detail/2850189.html) interface.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> siteId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
