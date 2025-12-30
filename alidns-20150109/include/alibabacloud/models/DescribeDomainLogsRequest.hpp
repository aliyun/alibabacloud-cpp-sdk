// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
    };
    DescribeDomainLogsRequest() = default ;
    DescribeDomainLogsRequest(const DescribeDomainLogsRequest &) = default ;
    DescribeDomainLogsRequest(DescribeDomainLogsRequest &&) = default ;
    DescribeDomainLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainLogsRequest() = default ;
    DescribeDomainLogsRequest& operator=(const DescribeDomainLogsRequest &) = default ;
    DescribeDomainLogsRequest& operator=(DescribeDomainLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->keyWord_ == nullptr && this->lang_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr
        && this->type_ == nullptr && this->endDate_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeDomainLogsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline DescribeDomainLogsRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeDomainLogsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline DescribeDomainLogsRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeDomainLogsRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeDomainLogsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDomainLogsRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeDomainLogsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


  protected:
    // The ID of the domain name group.
    shared_ptr<string> groupId_ {};
    // The keyword for the query in "%KeyWord%" mode. The keyword is not case-sensitive.
    shared_ptr<string> keyWord_ {};
    // The language in which you want the values of some response parameters to be returned. These response parameters support multiple languages.
    shared_ptr<string> lang_ {};
    // The page number to return. The page number starts from **1**. Default value: **1**.
    shared_ptr<int64_t> pageNumber_ {};
    // The number of entries to return per page. Maximum value: **100**. Default value: **20**.
    shared_ptr<int64_t> pageSize_ {};
    // The start time for the query. Format: **YYYY-MM-DD**
    shared_ptr<string> startDate_ {};
    // The type of object of which you want to query operation logs. Valid values:
    // 
    // *   domain: domain name
    // *   slavedns: secondary Domain Name System (DNS)
    shared_ptr<string> type_ {};
    // The end time for the query. Format: **YYYY-MM-DD**
    shared_ptr<string> endDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
