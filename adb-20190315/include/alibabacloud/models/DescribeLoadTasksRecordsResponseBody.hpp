// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADTASKSRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADTASKSRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeLoadTasksRecordsResponseBodyLoadTasksRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLoadTasksRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadTasksRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LoadTasksRecords, loadTasksRecords_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadTasksRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LoadTasksRecords, loadTasksRecords_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadTasksRecordsResponseBody() = default ;
    DescribeLoadTasksRecordsResponseBody(const DescribeLoadTasksRecordsResponseBody &) = default ;
    DescribeLoadTasksRecordsResponseBody(DescribeLoadTasksRecordsResponseBody &&) = default ;
    DescribeLoadTasksRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadTasksRecordsResponseBody() = default ;
    DescribeLoadTasksRecordsResponseBody& operator=(const DescribeLoadTasksRecordsResponseBody &) = default ;
    DescribeLoadTasksRecordsResponseBody& operator=(DescribeLoadTasksRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->loadTasksRecords_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // loadTasksRecords Field Functions 
    bool hasLoadTasksRecords() const { return this->loadTasksRecords_ != nullptr;};
    void deleteLoadTasksRecords() { this->loadTasksRecords_ = nullptr;};
    inline const vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords> & loadTasksRecords() const { DARABONBA_PTR_GET_CONST(loadTasksRecords_, vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords>) };
    inline vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords> loadTasksRecords() { DARABONBA_PTR_GET(loadTasksRecords_, vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords>) };
    inline DescribeLoadTasksRecordsResponseBody& setLoadTasksRecords(const vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords> & loadTasksRecords) { DARABONBA_PTR_SET_VALUE(loadTasksRecords_, loadTasksRecords) };
    inline DescribeLoadTasksRecordsResponseBody& setLoadTasksRecords(vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords> && loadTasksRecords) { DARABONBA_PTR_SET_RVALUE(loadTasksRecords_, loadTasksRecords) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The queried asynchronous import and export tasks.
    std::shared_ptr<vector<DescribeLoadTasksRecordsResponseBodyLoadTasksRecords>> loadTasksRecords_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
