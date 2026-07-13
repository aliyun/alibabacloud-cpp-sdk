// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINRECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Direction, direction_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RRKeyWord, RRKeyWord_);
      DARABONBA_PTR_TO_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(TypeKeyWord, typeKeyWord_);
      DARABONBA_PTR_TO_JSON(ValueKeyWord, valueKeyWord_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Direction, direction_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RRKeyWord, RRKeyWord_);
      DARABONBA_PTR_FROM_JSON(SearchMode, searchMode_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(TypeKeyWord, typeKeyWord_);
      DARABONBA_PTR_FROM_JSON(ValueKeyWord, valueKeyWord_);
    };
    DescribeDomainRecordsRequest() = default ;
    DescribeDomainRecordsRequest(const DescribeDomainRecordsRequest &) = default ;
    DescribeDomainRecordsRequest(DescribeDomainRecordsRequest &&) = default ;
    DescribeDomainRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainRecordsRequest() = default ;
    DescribeDomainRecordsRequest& operator=(const DescribeDomainRecordsRequest &) = default ;
    DescribeDomainRecordsRequest& operator=(DescribeDomainRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->direction_ == nullptr
        && this->domainName_ == nullptr && this->groupId_ == nullptr && this->keyWord_ == nullptr && this->lang_ == nullptr && this->line_ == nullptr
        && this->orderBy_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->RRKeyWord_ == nullptr && this->searchMode_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->typeKeyWord_ == nullptr && this->valueKeyWord_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeDomainRecordsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainRecordsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeDomainRecordsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline DescribeDomainRecordsRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDomainRecordsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string getLine() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeDomainRecordsRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeDomainRecordsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainRecordsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainRecordsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // RRKeyWord Field Functions 
    bool hasRRKeyWord() const { return this->RRKeyWord_ != nullptr;};
    void deleteRRKeyWord() { this->RRKeyWord_ = nullptr;};
    inline string getRRKeyWord() const { DARABONBA_PTR_GET_DEFAULT(RRKeyWord_, "") };
    inline DescribeDomainRecordsRequest& setRRKeyWord(string RRKeyWord) { DARABONBA_PTR_SET_VALUE(RRKeyWord_, RRKeyWord) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string getSearchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline DescribeDomainRecordsRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDomainRecordsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainRecordsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeKeyWord Field Functions 
    bool hasTypeKeyWord() const { return this->typeKeyWord_ != nullptr;};
    void deleteTypeKeyWord() { this->typeKeyWord_ = nullptr;};
    inline string getTypeKeyWord() const { DARABONBA_PTR_GET_DEFAULT(typeKeyWord_, "") };
    inline DescribeDomainRecordsRequest& setTypeKeyWord(string typeKeyWord) { DARABONBA_PTR_SET_VALUE(typeKeyWord_, typeKeyWord) };


    // valueKeyWord Field Functions 
    bool hasValueKeyWord() const { return this->valueKeyWord_ != nullptr;};
    void deleteValueKeyWord() { this->valueKeyWord_ = nullptr;};
    inline string getValueKeyWord() const { DARABONBA_PTR_GET_DEFAULT(valueKeyWord_, "") };
    inline DescribeDomainRecordsRequest& setValueKeyWord(string valueKeyWord) { DARABONBA_PTR_SET_VALUE(valueKeyWord_, valueKeyWord) };


  protected:
    // The sorting direction. Valid values: DESC, ASC. Default value: DESC.
    shared_ptr<string> direction_ {};
    // The domain name.<props="china"> For more information, see [DescribeDomains](https://help.aliyun.com/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c4g.11186623.help-menu-search-29697.d_0).
    // <props="intl">For more information, see [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0).
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The ID of the domain group.
    // 
    // - If you do not specify GroupId, the query is performed on all domain names.
    // 
    // - If you set GroupId to 0, an empty result is returned.
    // 
    // - If you set GroupId to -1, the query is performed on the default group. The default group includes domain names that are not assigned to a group.
    // 
    // - If you set GroupId to -2, the query is performed on all domain names.
    // 
    // - If you specify another value for GroupId, the query is performed on the specified group.
    //   <props="china">For more information, see [DescribeDomainGroups](https://help.aliyun.com/zh/dns/api-alidns-2015-01-09-describedomaingroups?spm=a2c4g.11186623.help-menu-search-29697.d_0).
    //   <props="intl">For more information, see [DescribeDomainGroups](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomaingroups?spm=a2c63.p38356.help-menu-search-29697.d_0).
    shared_ptr<int64_t> groupId_ {};
    // The keyword.
    shared_ptr<string> keyWord_ {};
    // The language of the request and response. Default value: **zh**. Valid values:
    // 
    // - **zh**: Chinese
    // 
    // - **en**: English
    shared_ptr<string> lang_ {};
    // The DNS resolution line. Default value: **default**.
    // 
    // For more information, see:
    // <props="china">[Enumeration of DNS resolution lines](https://help.aliyun.com/document_detail/29807.html).
    // 
    // <props="intl">
    // 
    // [Enumeration of DNS resolution lines](https://www.alibabacloud.com/help/zh/doc-detail/29807.htm)
    shared_ptr<string> line_ {};
    // The sorting method. Records are sorted in descending order based on the time they were added.
    shared_ptr<string> orderBy_ {};
    // The page number. The value starts from **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return on each page for a paged query. Maximum value: **500**. Default value: **20**.
    shared_ptr<int64_t> pageSize_ {};
    // The keyword for the host record. The search uses a fuzzy match pattern and is not case-sensitive.
    shared_ptr<string> RRKeyWord_ {};
    // The search mode. Valid values: LIKE, EXACT, ADVANCED, and **COMBINATION**.
    // 
    // - If you set this parameter to LIKE or EXACT, use the KeyWord parameter. The RRKeyWord, TypeKeyWord, ValueKeyWord, Type, Line, and Status parameters are invalid.
    // 
    // - If you set this parameter to ADVANCED, use the RRKeyWord, TypeKeyWord, ValueKeyWord, Type, Line, and Status parameters. The RRKeyWord and ValueKeyWord parameters support fuzzy matching.
    // 
    // - If you set this parameter to COMBINATION, use the RRKeyWord, TypeKeyWord, ValueKeyWord, Type, Line, and Status parameters. All these parameters support only exact matching.
    // 
    // - If you do not specify this parameter:
    // 
    //   - If you specify the keyWord parameter, the search mode is set to LIKE.
    // 
    //   - If you do not specify the keyWord parameter, RRKeyWord and ValueKeyWord support fuzzy matching, and TypeKeyWord, Type, Line, and Status support exact matching.
    shared_ptr<string> searchMode_ {};
    // The status of the DNS record. Valid values:
    // 
    // Enable: The DNS record is enabled.
    // 
    // Disable: The DNS record is paused.
    shared_ptr<string> status_ {};
    // The type of the DNS record. For more information, see:
    // 
    // <props="china">[DNS record types](https://help.aliyun.com/document_detail/29805.html)
    // <props="intl">[DNS record types](https://www.alibabacloud.com/help/zh/doc-detail/29805.htm)
    shared_ptr<string> type_ {};
    // The keyword for the record type. The search uses an exact match and is not case-sensitive.
    shared_ptr<string> typeKeyWord_ {};
    // The keyword for the record value. The search uses a fuzzy match pattern and is not case-sensitive.
    shared_ptr<string> valueKeyWord_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
