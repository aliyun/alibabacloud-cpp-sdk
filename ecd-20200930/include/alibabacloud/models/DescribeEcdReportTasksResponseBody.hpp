// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEECDREPORTTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEECDREPORTTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEcdReportTasksResponseBodyExportTaskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeEcdReportTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEcdReportTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExportTaskList, exportTaskList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEcdReportTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExportTaskList, exportTaskList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeEcdReportTasksResponseBody() = default ;
    DescribeEcdReportTasksResponseBody(const DescribeEcdReportTasksResponseBody &) = default ;
    DescribeEcdReportTasksResponseBody(DescribeEcdReportTasksResponseBody &&) = default ;
    DescribeEcdReportTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEcdReportTasksResponseBody() = default ;
    DescribeEcdReportTasksResponseBody& operator=(const DescribeEcdReportTasksResponseBody &) = default ;
    DescribeEcdReportTasksResponseBody& operator=(DescribeEcdReportTasksResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exportTaskList_ == nullptr
        && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // exportTaskList Field Functions 
    bool hasExportTaskList() const { return this->exportTaskList_ != nullptr;};
    void deleteExportTaskList() { this->exportTaskList_ = nullptr;};
    inline const vector<DescribeEcdReportTasksResponseBodyExportTaskList> & exportTaskList() const { DARABONBA_PTR_GET_CONST(exportTaskList_, vector<DescribeEcdReportTasksResponseBodyExportTaskList>) };
    inline vector<DescribeEcdReportTasksResponseBodyExportTaskList> exportTaskList() { DARABONBA_PTR_GET(exportTaskList_, vector<DescribeEcdReportTasksResponseBodyExportTaskList>) };
    inline DescribeEcdReportTasksResponseBody& setExportTaskList(const vector<DescribeEcdReportTasksResponseBodyExportTaskList> & exportTaskList) { DARABONBA_PTR_SET_VALUE(exportTaskList_, exportTaskList) };
    inline DescribeEcdReportTasksResponseBody& setExportTaskList(vector<DescribeEcdReportTasksResponseBodyExportTaskList> && exportTaskList) { DARABONBA_PTR_SET_RVALUE(exportTaskList_, exportTaskList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEcdReportTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeEcdReportTasksResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The report export tasks.
    std::shared_ptr<vector<DescribeEcdReportTasksResponseBodyExportTaskList>> exportTaskList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
