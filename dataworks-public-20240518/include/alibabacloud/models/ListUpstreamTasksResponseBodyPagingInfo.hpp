// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPSTREAMTASKSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUPSTREAMTASKSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUpstreamTasksResponseBodyPagingInfoTasks.hpp>
#include <alibabacloud/models/ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListUpstreamTasksResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpstreamTasksResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Tasks, tasks_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UpstreamTasks, upstreamTasks_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpstreamTasksResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Tasks, tasks_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UpstreamTasks, upstreamTasks_);
    };
    ListUpstreamTasksResponseBodyPagingInfo() = default ;
    ListUpstreamTasksResponseBodyPagingInfo(const ListUpstreamTasksResponseBodyPagingInfo &) = default ;
    ListUpstreamTasksResponseBodyPagingInfo(ListUpstreamTasksResponseBodyPagingInfo &&) = default ;
    ListUpstreamTasksResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpstreamTasksResponseBodyPagingInfo() = default ;
    ListUpstreamTasksResponseBodyPagingInfo& operator=(const ListUpstreamTasksResponseBodyPagingInfo &) = default ;
    ListUpstreamTasksResponseBodyPagingInfo& operator=(ListUpstreamTasksResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && return this->pageSize_ == nullptr && return this->tasks_ == nullptr && return this->totalCount_ == nullptr && return this->upstreamTasks_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUpstreamTasksResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUpstreamTasksResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<Models::ListUpstreamTasksResponseBodyPagingInfoTasks> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<Models::ListUpstreamTasksResponseBodyPagingInfoTasks>) };
    inline vector<Models::ListUpstreamTasksResponseBodyPagingInfoTasks> tasks() { DARABONBA_PTR_GET(tasks_, vector<Models::ListUpstreamTasksResponseBodyPagingInfoTasks>) };
    inline ListUpstreamTasksResponseBodyPagingInfo& setTasks(const vector<Models::ListUpstreamTasksResponseBodyPagingInfoTasks> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline ListUpstreamTasksResponseBodyPagingInfo& setTasks(vector<Models::ListUpstreamTasksResponseBodyPagingInfoTasks> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUpstreamTasksResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // upstreamTasks Field Functions 
    bool hasUpstreamTasks() const { return this->upstreamTasks_ != nullptr;};
    void deleteUpstreamTasks() { this->upstreamTasks_ = nullptr;};
    inline const vector<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks> & upstreamTasks() const { DARABONBA_PTR_GET_CONST(upstreamTasks_, vector<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks>) };
    inline vector<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks> upstreamTasks() { DARABONBA_PTR_GET(upstreamTasks_, vector<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks>) };
    inline ListUpstreamTasksResponseBodyPagingInfo& setUpstreamTasks(const vector<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks> & upstreamTasks) { DARABONBA_PTR_SET_VALUE(upstreamTasks_, upstreamTasks) };
    inline ListUpstreamTasksResponseBodyPagingInfo& setUpstreamTasks(vector<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks> && upstreamTasks) { DARABONBA_PTR_SET_RVALUE(upstreamTasks_, upstreamTasks) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The tasks. This parameter is deprecated and replaced by the UpstreamTasks parameter.
    std::shared_ptr<vector<Models::ListUpstreamTasksResponseBodyPagingInfoTasks>> tasks_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The ancestor tasks.
    std::shared_ptr<vector<Models::ListUpstreamTasksResponseBodyPagingInfoUpstreamTasks>> upstreamTasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
