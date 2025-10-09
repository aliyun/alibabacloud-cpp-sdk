// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKINSTANCESRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTaskInstances, dataQualityEvaluationTaskInstances_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTaskInstances, dataQualityEvaluationTaskInstances_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo(const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo(ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo &&) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo() = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& operator=(const ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo &) = default ;
    ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& operator=(ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityEvaluationTaskInstances_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityEvaluationTaskInstances Field Functions 
    bool hasDataQualityEvaluationTaskInstances() const { return this->dataQualityEvaluationTaskInstances_ != nullptr;};
    void deleteDataQualityEvaluationTaskInstances() { this->dataQualityEvaluationTaskInstances_ = nullptr;};
    inline const vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances> & dataQualityEvaluationTaskInstances() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTaskInstances_, vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances>) };
    inline vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances> dataQualityEvaluationTaskInstances() { DARABONBA_PTR_GET(dataQualityEvaluationTaskInstances_, vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances>) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& setDataQualityEvaluationTaskInstances(const vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances> & dataQualityEvaluationTaskInstances) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTaskInstances_, dataQualityEvaluationTaskInstances) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& setDataQualityEvaluationTaskInstances(vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances> && dataQualityEvaluationTaskInstances) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTaskInstances_, dataQualityEvaluationTaskInstances) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The instances generated by the task.
    std::shared_ptr<vector<Models::ListDataQualityEvaluationTaskInstancesResponseBodyPagingInfoDataQualityEvaluationTaskInstances>> dataQualityEvaluationTaskInstances_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
