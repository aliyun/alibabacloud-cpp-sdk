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
        && return this->domainName_ == nullptr && return this->groupId_ == nullptr && return this->keyWord_ == nullptr && return this->lang_ == nullptr && return this->line_ == nullptr
        && return this->orderBy_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->RRKeyWord_ == nullptr && return this->searchMode_ == nullptr
        && return this->status_ == nullptr && return this->type_ == nullptr && return this->typeKeyWord_ == nullptr && return this->valueKeyWord_ == nullptr; };
    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string direction() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline DescribeDomainRecordsRequest& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDomainRecordsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeDomainRecordsRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string keyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline DescribeDomainRecordsRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDomainRecordsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeDomainRecordsRequest& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string orderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline DescribeDomainRecordsRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainRecordsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainRecordsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // RRKeyWord Field Functions 
    bool hasRRKeyWord() const { return this->RRKeyWord_ != nullptr;};
    void deleteRRKeyWord() { this->RRKeyWord_ = nullptr;};
    inline string RRKeyWord() const { DARABONBA_PTR_GET_DEFAULT(RRKeyWord_, "") };
    inline DescribeDomainRecordsRequest& setRRKeyWord(string RRKeyWord) { DARABONBA_PTR_SET_VALUE(RRKeyWord_, RRKeyWord) };


    // searchMode Field Functions 
    bool hasSearchMode() const { return this->searchMode_ != nullptr;};
    void deleteSearchMode() { this->searchMode_ = nullptr;};
    inline string searchMode() const { DARABONBA_PTR_GET_DEFAULT(searchMode_, "") };
    inline DescribeDomainRecordsRequest& setSearchMode(string searchMode) { DARABONBA_PTR_SET_VALUE(searchMode_, searchMode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDomainRecordsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainRecordsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // typeKeyWord Field Functions 
    bool hasTypeKeyWord() const { return this->typeKeyWord_ != nullptr;};
    void deleteTypeKeyWord() { this->typeKeyWord_ = nullptr;};
    inline string typeKeyWord() const { DARABONBA_PTR_GET_DEFAULT(typeKeyWord_, "") };
    inline DescribeDomainRecordsRequest& setTypeKeyWord(string typeKeyWord) { DARABONBA_PTR_SET_VALUE(typeKeyWord_, typeKeyWord) };


    // valueKeyWord Field Functions 
    bool hasValueKeyWord() const { return this->valueKeyWord_ != nullptr;};
    void deleteValueKeyWord() { this->valueKeyWord_ = nullptr;};
    inline string valueKeyWord() const { DARABONBA_PTR_GET_DEFAULT(valueKeyWord_, "") };
    inline DescribeDomainRecordsRequest& setValueKeyWord(string valueKeyWord) { DARABONBA_PTR_SET_VALUE(valueKeyWord_, valueKeyWord) };


  protected:
    // The order in which you want to sort the returned DNS records. Valid values: DESC and ASC. Default value: DESC.
    std::shared_ptr<string> direction_ = nullptr;
    // The domain name. You can call the [DescribeDomains](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomains?spm=a2c63.p38356.help-menu-search-29697.d_0) operation to obtain the domain name.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // The ID of the domain name group.
    // 
    // *   If you do not specify GroupId, all domain names are queried.
    // *   If you set GroupId to 0, no value is returned.
    // *   If you set GroupId to 1, the domain names in the default group are queried.
    // *   If you set GroupId to -2, all domain names are queried.
    // *   You can also specify GroupId based on the actual group ID.
    // 
    // You can call the [DescribeDomainGroups ](https://www.alibabacloud.com/help/zh/dns/api-alidns-2015-01-09-describedomaingroups?spm=a2c63.p38356.help-menu-search-29697.d_0)operation to obtain the ID of the domain name group.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The keyword.
    std::shared_ptr<string> keyWord_ = nullptr;
    // The language.
    std::shared_ptr<string> lang_ = nullptr;
    // The resolution line. Default value: **default**.
    // 
    // For more information, see
    // 
    // [DNS lines](https://www.alibabacloud.com/help/zh/doc-detail/29807.htm).
    std::shared_ptr<string> line_ = nullptr;
    // The method that is used to sort the returned DNS records. By default, the DNS records are sorted in reverse chronological order based on the time when they were added.
    std::shared_ptr<string> orderBy_ = nullptr;
    // The page number. Pages start from page **1**. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values: **1 to 500**. Default value: **20**.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The hostname keyword based on which the system queries DNS records. The system queries DNS records based on the value of this parameter in fuzzy match mode. The value is not case-sensitive.
    std::shared_ptr<string> RRKeyWord_ = nullptr;
    // The search mode. Valid values: **LIKE, EXACT, and ADVANCED**.
    // 
    // *   If you set SearchMode to LIKE or EXACT, specify KeyWord. In this case, RRKeyWord, TypeKeyWord, ValueKeyWord, Type, Line, and Status are invalid.
    // 
    // *   If you set SearchMode to ADVANCED, specify RRKeyWord, TypeKeyWord, ValueKeyWord, Type, Line, and Status.
    // 
    // *   If you do not specify SearchMode, the system determines the search mode based on the following rules:
    // 
    //     *   If KeyWord is specified, the system uses the LIKE mode.
    //     *   If KeyWord is not specified, the system queries DNS records based on values of RRKeyWord and ValueKeyWord in fuzzy match mode, and based on the values of TypeKeyWord, Type, Line, and Status in exact match mode.
    std::shared_ptr<string> searchMode_ = nullptr;
    // The status of the DNS records to query. Valid values: **Enable and Disable**.
    std::shared_ptr<string> status_ = nullptr;
    // The type of the DNS records to query. For more information, see
    // 
    // [DNS record types](https://www.alibabacloud.com/help/zh/doc-detail/29805.htm).
    std::shared_ptr<string> type_ = nullptr;
    // The type keyword based on which the system queries DNS records. The system queries DNS records based on the value of this parameter in exact match mode. The value is not case-sensitive.
    std::shared_ptr<string> typeKeyWord_ = nullptr;
    // The record value keyword based on which the system queries DNS records. The system queries DNS records based on the value of this parameter in fuzzy match mode. The value is not case-sensitive.
    std::shared_ptr<string> valueKeyWord_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
