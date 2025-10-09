// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUPSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUPSTREAMTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances.hpp>
#include <alibabacloud/models/ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListUpstreamTaskInstancesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUpstreamTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TaskInstances, taskInstances_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UpstreamTaskInstances, upstreamTaskInstances_);
    };
    friend void from_json(const Darabonba::Json& j, ListUpstreamTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TaskInstances, taskInstances_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UpstreamTaskInstances, upstreamTaskInstances_);
    };
    ListUpstreamTaskInstancesResponseBodyPagingInfo() = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfo(const ListUpstreamTaskInstancesResponseBodyPagingInfo &) = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfo(ListUpstreamTaskInstancesResponseBodyPagingInfo &&) = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUpstreamTaskInstancesResponseBodyPagingInfo() = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfo& operator=(const ListUpstreamTaskInstancesResponseBodyPagingInfo &) = default ;
    ListUpstreamTaskInstancesResponseBodyPagingInfo& operator=(ListUpstreamTaskInstancesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->taskInstances_ != nullptr && this->totalCount_ != nullptr && this->upstreamTaskInstances_ != nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // taskInstances Field Functions 
    bool hasTaskInstances() const { return this->taskInstances_ != nullptr;};
    void deleteTaskInstances() { this->taskInstances_ = nullptr;};
    inline const vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances> & taskInstances() const { DARABONBA_PTR_GET_CONST(taskInstances_, vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances>) };
    inline vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances> taskInstances() { DARABONBA_PTR_GET(taskInstances_, vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances>) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfo& setTaskInstances(const vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances> & taskInstances) { DARABONBA_PTR_SET_VALUE(taskInstances_, taskInstances) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfo& setTaskInstances(vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances> && taskInstances) { DARABONBA_PTR_SET_RVALUE(taskInstances_, taskInstances) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // upstreamTaskInstances Field Functions 
    bool hasUpstreamTaskInstances() const { return this->upstreamTaskInstances_ != nullptr;};
    void deleteUpstreamTaskInstances() { this->upstreamTaskInstances_ = nullptr;};
    inline const vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances> & upstreamTaskInstances() const { DARABONBA_PTR_GET_CONST(upstreamTaskInstances_, vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances>) };
    inline vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances> upstreamTaskInstances() { DARABONBA_PTR_GET(upstreamTaskInstances_, vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances>) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfo& setUpstreamTaskInstances(const vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances> & upstreamTaskInstances) { DARABONBA_PTR_SET_VALUE(upstreamTaskInstances_, upstreamTaskInstances) };
    inline ListUpstreamTaskInstancesResponseBodyPagingInfo& setUpstreamTaskInstances(vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances> && upstreamTaskInstances) { DARABONBA_PTR_SET_RVALUE(upstreamTaskInstances_, upstreamTaskInstances) };


  protected:
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The instances. This parameter is deprecated and replaced by the UpstreamTaskInstances parameter.
    std::shared_ptr<vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoTaskInstances>> taskInstances_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The ancestor instances.
    std::shared_ptr<vector<Models::ListUpstreamTaskInstancesResponseBodyPagingInfoUpstreamTaskInstances>> upstreamTaskInstances_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
