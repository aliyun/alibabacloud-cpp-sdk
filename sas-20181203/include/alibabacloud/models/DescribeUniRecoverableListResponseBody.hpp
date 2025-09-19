// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUNIRECOVERABLELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUniRecoverableListResponseBodyRecoverableInfoList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeUniRecoverableListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUniRecoverableListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RecoverableInfoList, recoverableInfoList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUniRecoverableListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RecoverableInfoList, recoverableInfoList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeUniRecoverableListResponseBody() = default ;
    DescribeUniRecoverableListResponseBody(const DescribeUniRecoverableListResponseBody &) = default ;
    DescribeUniRecoverableListResponseBody(DescribeUniRecoverableListResponseBody &&) = default ;
    DescribeUniRecoverableListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUniRecoverableListResponseBody() = default ;
    DescribeUniRecoverableListResponseBody& operator=(const DescribeUniRecoverableListResponseBody &) = default ;
    DescribeUniRecoverableListResponseBody& operator=(DescribeUniRecoverableListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->currentPage_ != nullptr && this->database_ != nullptr && this->pageSize_ != nullptr && this->recoverableInfoList_ != nullptr && this->requestId_ != nullptr
        && this->totalCount_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeUniRecoverableListResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeUniRecoverableListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline DescribeUniRecoverableListResponseBody& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUniRecoverableListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // recoverableInfoList Field Functions 
    bool hasRecoverableInfoList() const { return this->recoverableInfoList_ != nullptr;};
    void deleteRecoverableInfoList() { this->recoverableInfoList_ = nullptr;};
    inline const vector<DescribeUniRecoverableListResponseBodyRecoverableInfoList> & recoverableInfoList() const { DARABONBA_PTR_GET_CONST(recoverableInfoList_, vector<DescribeUniRecoverableListResponseBodyRecoverableInfoList>) };
    inline vector<DescribeUniRecoverableListResponseBodyRecoverableInfoList> recoverableInfoList() { DARABONBA_PTR_GET(recoverableInfoList_, vector<DescribeUniRecoverableListResponseBodyRecoverableInfoList>) };
    inline DescribeUniRecoverableListResponseBody& setRecoverableInfoList(const vector<DescribeUniRecoverableListResponseBodyRecoverableInfoList> & recoverableInfoList) { DARABONBA_PTR_SET_VALUE(recoverableInfoList_, recoverableInfoList) };
    inline DescribeUniRecoverableListResponseBody& setRecoverableInfoList(vector<DescribeUniRecoverableListResponseBodyRecoverableInfoList> && recoverableInfoList) { DARABONBA_PTR_SET_RVALUE(recoverableInfoList_, recoverableInfoList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUniRecoverableListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeUniRecoverableListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number of the returned page.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> database_ = nullptr;
    // The number of entries returned per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // An array that consists of the backup snapshots.
    std::shared_ptr<vector<DescribeUniRecoverableListResponseBodyRecoverableInfoList>> recoverableInfoList_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
