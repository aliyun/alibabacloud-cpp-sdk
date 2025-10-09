// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTasksResponseBodyPagingInfoTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTasksResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTasksResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTasksResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTasksResponseBodyPagingInfo() = default ;
    ListTasksResponseBodyPagingInfo(const ListTasksResponseBodyPagingInfo &) = default ;
    ListTasksResponseBodyPagingInfo(ListTasksResponseBodyPagingInfo &&) = default ;
    ListTasksResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTasksResponseBodyPagingInfo() = default ;
    ListTasksResponseBodyPagingInfo& operator=(const ListTasksResponseBodyPagingInfo &) = default ;
    ListTasksResponseBodyPagingInfo& operator=(ListTasksResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->tasks_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTasksResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTasksResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<Models::ListTasksResponseBodyPagingInfoTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Models::ListTasksResponseBodyPagingInfoTasks>) };
    inline vector<Models::ListTasksResponseBodyPagingInfoTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<Models::ListTasksResponseBodyPagingInfoTasks>) };
    inline ListTasksResponseBodyPagingInfo& setTasks(const vector<Models::ListTasksResponseBodyPagingInfoTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListTasksResponseBodyPagingInfo& setTasks(vector<Models::ListTasksResponseBodyPagingInfoTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTasksResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The tasks.
    std::shared_ptr<vector<Models::ListTasksResponseBodyPagingInfoTasks>> tasks_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
