// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYENDUSERHISTORYUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYENDUSERHISTORYUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class QueryEndUserHistoryUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEndUserHistoryUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(IsAdUser, isAdUser_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEndUserHistoryUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(IsAdUser, isAdUser_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryEndUserHistoryUsageRequest() = default ;
    QueryEndUserHistoryUsageRequest(const QueryEndUserHistoryUsageRequest &) = default ;
    QueryEndUserHistoryUsageRequest(QueryEndUserHistoryUsageRequest &&) = default ;
    QueryEndUserHistoryUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEndUserHistoryUsageRequest() = default ;
    QueryEndUserHistoryUsageRequest& operator=(const QueryEndUserHistoryUsageRequest &) = default ;
    QueryEndUserHistoryUsageRequest& operator=(QueryEndUserHistoryUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->isAdUser_ == nullptr && this->pageNum_ == nullptr && this->pageSize_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryEndUserHistoryUsageRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // isAdUser Field Functions 
    bool hasIsAdUser() const { return this->isAdUser_ != nullptr;};
    void deleteIsAdUser() { this->isAdUser_ = nullptr;};
    inline bool getIsAdUser() const { DARABONBA_PTR_GET_DEFAULT(isAdUser_, false) };
    inline QueryEndUserHistoryUsageRequest& setIsAdUser(bool isAdUser) { DARABONBA_PTR_SET_VALUE(isAdUser_, isAdUser) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t getPageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline QueryEndUserHistoryUsageRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryEndUserHistoryUsageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryEndUserHistoryUsageRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The end date of the query. Format: yyyy-MM-dd. The date cannot be later than yesterday or earlier than StartDate. Default value: yesterday.
    shared_ptr<string> endDate_ {};
    // Specifies whether to query Active Directory (AD) domain users. If this parameter is set to true, AD domain users are queried. If this parameter is set to false or not specified, convenience account users are queried.
    shared_ptr<bool> isAdUser_ {};
    // The page number. Minimum value: 1. Default value: 1.
    shared_ptr<int32_t> pageNum_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 100.
    shared_ptr<int32_t> pageSize_ {};
    // The start date of the query. Format: yyyy-MM-dd. The date cannot be earlier than 32 days ago. Default value: yesterday.
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
