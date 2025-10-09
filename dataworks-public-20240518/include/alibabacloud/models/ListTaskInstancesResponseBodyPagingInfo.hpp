// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskInstancesResponseBodyPagingInfoTaskInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskInstancesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskInstances, taskInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskInstances, taskInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTaskInstancesResponseBodyPagingInfo() = default ;
    ListTaskInstancesResponseBodyPagingInfo(const ListTaskInstancesResponseBodyPagingInfo &) = default ;
    ListTaskInstancesResponseBodyPagingInfo(ListTaskInstancesResponseBodyPagingInfo &&) = default ;
    ListTaskInstancesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstancesResponseBodyPagingInfo() = default ;
    ListTaskInstancesResponseBodyPagingInfo& operator=(const ListTaskInstancesResponseBodyPagingInfo &) = default ;
    ListTaskInstancesResponseBodyPagingInfo& operator=(ListTaskInstancesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->taskInstances_ != nullptr && this->totalCount_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTaskInstancesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTaskInstancesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskInstances Field Functions 
    bool hasTaskInstances() const { return this->taskInstances_ != nullptr;};
    void deleteTaskInstances() { this->taskInstances_ = nullptr;};
    inline const vector<Models::ListTaskInstancesResponseBodyPagingInfoTaskInstances> & taskInstances() const { DARABONBA_PTR_GET_CONST(taskInstances_, vector<Models::ListTaskInstancesResponseBodyPagingInfoTaskInstances>) };
    inline vector<Models::ListTaskInstancesResponseBodyPagingInfoTaskInstances> taskInstances() { DARABONBA_PTR_GET(taskInstances_, vector<Models::ListTaskInstancesResponseBodyPagingInfoTaskInstances>) };
    inline ListTaskInstancesResponseBodyPagingInfo& setTaskInstances(const vector<Models::ListTaskInstancesResponseBodyPagingInfoTaskInstances> & taskInstances) { DARABONBA_PTR_SET_VALUE(taskInstances_, taskInstances) };
    inline ListTaskInstancesResponseBodyPagingInfo& setTaskInstances(vector<Models::ListTaskInstancesResponseBodyPagingInfoTaskInstances> && taskInstances) { DARABONBA_PTR_SET_RVALUE(taskInstances_, taskInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTaskInstancesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The list of task instances.
    std::shared_ptr<vector<Models::ListTaskInstancesResponseBodyPagingInfoTaskInstances>> taskInstances_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
