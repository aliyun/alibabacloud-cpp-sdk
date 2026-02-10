// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKPROCESSBLOCKSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBLOCKPROCESSBLOCKSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWebLockProcessBlockStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebLockProcessBlockStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebLockProcessBlockStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWebLockProcessBlockStatisticsResponseBody() = default ;
    DescribeWebLockProcessBlockStatisticsResponseBody(const DescribeWebLockProcessBlockStatisticsResponseBody &) = default ;
    DescribeWebLockProcessBlockStatisticsResponseBody(DescribeWebLockProcessBlockStatisticsResponseBody &&) = default ;
    DescribeWebLockProcessBlockStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebLockProcessBlockStatisticsResponseBody() = default ;
    DescribeWebLockProcessBlockStatisticsResponseBody& operator=(const DescribeWebLockProcessBlockStatisticsResponseBody &) = default ;
    DescribeWebLockProcessBlockStatisticsResponseBody& operator=(DescribeWebLockProcessBlockStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class List : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const List& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Process, process_);
      };
      friend void from_json(const Darabonba::Json& j, List& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Process, process_);
      };
      List() = default ;
      List(const List &) = default ;
      List(List &&) = default ;
      List(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~List() = default ;
      List& operator=(const List &) = default ;
      List& operator=(List &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->process_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline List& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // process Field Functions 
      bool hasProcess() const { return this->process_ != nullptr;};
      void deleteProcess() { this->process_ = nullptr;};
      inline string getProcess() const { DARABONBA_PTR_GET_DEFAULT(process_, "") };
      inline List& setProcess(string process) { DARABONBA_PTR_SET_VALUE(process_, process) };


    protected:
      // The number of processes that are returned on the current page.
      shared_ptr<int32_t> count_ {};
      // The process.
      shared_ptr<string> process_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->list_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWebLockProcessBlockStatisticsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<DescribeWebLockProcessBlockStatisticsResponseBody::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<DescribeWebLockProcessBlockStatisticsResponseBody::List>) };
    inline vector<DescribeWebLockProcessBlockStatisticsResponseBody::List> getList() { DARABONBA_PTR_GET(list_, vector<DescribeWebLockProcessBlockStatisticsResponseBody::List>) };
    inline DescribeWebLockProcessBlockStatisticsResponseBody& setList(const vector<DescribeWebLockProcessBlockStatisticsResponseBody::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline DescribeWebLockProcessBlockStatisticsResponseBody& setList(vector<DescribeWebLockProcessBlockStatisticsResponseBody::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWebLockProcessBlockStatisticsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebLockProcessBlockStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWebLockProcessBlockStatisticsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the returned page.
    shared_ptr<int32_t> currentPage_ {};
    // An array consisting of the statistics on processes.
    shared_ptr<vector<DescribeWebLockProcessBlockStatisticsResponseBody::List>> list_ {};
    // The number of entries to return on each page.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of processes.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
