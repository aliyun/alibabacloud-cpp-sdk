// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDOWNSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances.hpp>
#include <alibabacloud/models/ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDownstreamTaskInstancesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDownstreamTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DownstreamTaskInstances, downstreamTaskInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskInstances, taskInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDownstreamTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DownstreamTaskInstances, downstreamTaskInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskInstances, taskInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDownstreamTaskInstancesResponseBodyPagingInfo() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfo(const ListDownstreamTaskInstancesResponseBodyPagingInfo &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfo(ListDownstreamTaskInstancesResponseBodyPagingInfo &&) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDownstreamTaskInstancesResponseBodyPagingInfo() = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfo& operator=(const ListDownstreamTaskInstancesResponseBodyPagingInfo &) = default ;
    ListDownstreamTaskInstancesResponseBodyPagingInfo& operator=(ListDownstreamTaskInstancesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->downstreamTaskInstances_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->taskInstances_ == nullptr && return this->totalCount_ == nullptr; };
    // downstreamTaskInstances Field Functions 
    bool hasDownstreamTaskInstances() const { return this->downstreamTaskInstances_ != nullptr;};
    void deleteDownstreamTaskInstances() { this->downstreamTaskInstances_ = nullptr;};
    inline const vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances> & downstreamTaskInstances() const { DARABONBA_PTR_GET_CONST(downstreamTaskInstances_, vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances>) };
    inline vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances> downstreamTaskInstances() { DARABONBA_PTR_GET(downstreamTaskInstances_, vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances>) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo& setDownstreamTaskInstances(const vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances> & downstreamTaskInstances) { DARABONBA_PTR_SET_VALUE(downstreamTaskInstances_, downstreamTaskInstances) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo& setDownstreamTaskInstances(vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances> && downstreamTaskInstances) { DARABONBA_PTR_SET_RVALUE(downstreamTaskInstances_, downstreamTaskInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskInstances Field Functions 
    bool hasTaskInstances() const { return this->taskInstances_ != nullptr;};
    void deleteTaskInstances() { this->taskInstances_ = nullptr;};
    inline const vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances> & taskInstances() const { DARABONBA_PTR_GET_CONST(taskInstances_, vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances>) };
    inline vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances> taskInstances() { DARABONBA_PTR_GET(taskInstances_, vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances>) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo& setTaskInstances(const vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances> & taskInstances) { DARABONBA_PTR_SET_VALUE(taskInstances_, taskInstances) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo& setTaskInstances(vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances> && taskInstances) { DARABONBA_PTR_SET_RVALUE(taskInstances_, taskInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDownstreamTaskInstancesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The descendant instances.
    std::shared_ptr<vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoDownstreamTaskInstances>> downstreamTaskInstances_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The instances. This parameter is deprecated and replaced by the DownstreamTaskInstances parameter.
    std::shared_ptr<vector<Models::ListDownstreamTaskInstancesResponseBodyPagingInfoTaskInstances>> taskInstances_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
