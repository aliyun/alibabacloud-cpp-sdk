// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSPARKLOGANALYZETASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTSPARKLOGANALYZETASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SparkAnalyzeLogTask.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class ListSparkLogAnalyzeTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSparkLogAnalyzeTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskList, taskList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListSparkLogAnalyzeTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskList, taskList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListSparkLogAnalyzeTasksResponseBodyData() = default ;
    ListSparkLogAnalyzeTasksResponseBodyData(const ListSparkLogAnalyzeTasksResponseBodyData &) = default ;
    ListSparkLogAnalyzeTasksResponseBodyData(ListSparkLogAnalyzeTasksResponseBodyData &&) = default ;
    ListSparkLogAnalyzeTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSparkLogAnalyzeTasksResponseBodyData() = default ;
    ListSparkLogAnalyzeTasksResponseBodyData& operator=(const ListSparkLogAnalyzeTasksResponseBodyData &) = default ;
    ListSparkLogAnalyzeTasksResponseBodyData& operator=(ListSparkLogAnalyzeTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->taskList_ == nullptr && return this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListSparkLogAnalyzeTasksResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListSparkLogAnalyzeTasksResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskList Field Functions 
    bool hasTaskList() const { return this->taskList_ != nullptr;};
    void deleteTaskList() { this->taskList_ = nullptr;};
    inline const vector<Models::SparkAnalyzeLogTask> & taskList() const { DARABONBA_PTR_GET_CONST(taskList_, vector<Models::SparkAnalyzeLogTask>) };
    inline vector<Models::SparkAnalyzeLogTask> taskList() { DARABONBA_PTR_GET(taskList_, vector<Models::SparkAnalyzeLogTask>) };
    inline ListSparkLogAnalyzeTasksResponseBodyData& setTaskList(const vector<Models::SparkAnalyzeLogTask> & taskList) { DARABONBA_PTR_SET_VALUE(taskList_, taskList) };
    inline ListSparkLogAnalyzeTasksResponseBodyData& setTaskList(vector<Models::SparkAnalyzeLogTask> && taskList) { DARABONBA_PTR_SET_RVALUE(taskList_, taskList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListSparkLogAnalyzeTasksResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The queried Spark log analysis tasks.
    std::shared_ptr<vector<Models::SparkAnalyzeLogTask>> taskList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
