// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODYPAGINGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYEVALUATIONTASKSRESPONSEBODYPAGINGINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityEvaluationTasksResponseBodyPagingInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityEvaluationTasksResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityEvaluationTasks, dataQualityEvaluationTasks_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityEvaluationTasksResponseBodyPagingInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityEvaluationTasks, dataQualityEvaluationTasks_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataQualityEvaluationTasksResponseBodyPagingInfo() = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfo(const ListDataQualityEvaluationTasksResponseBodyPagingInfo &) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfo(ListDataQualityEvaluationTasksResponseBodyPagingInfo &&) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityEvaluationTasksResponseBodyPagingInfo() = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfo& operator=(const ListDataQualityEvaluationTasksResponseBodyPagingInfo &) = default ;
    ListDataQualityEvaluationTasksResponseBodyPagingInfo& operator=(ListDataQualityEvaluationTasksResponseBodyPagingInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityEvaluationTasks_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // dataQualityEvaluationTasks Field Functions 
    bool hasDataQualityEvaluationTasks() const { return this->dataQualityEvaluationTasks_ != nullptr;};
    void deleteDataQualityEvaluationTasks() { this->dataQualityEvaluationTasks_ = nullptr;};
    inline const vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks> & dataQualityEvaluationTasks() const { DARABONBA_PTR_GET_CONST(dataQualityEvaluationTasks_, vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks>) };
    inline vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks> dataQualityEvaluationTasks() { DARABONBA_PTR_GET(dataQualityEvaluationTasks_, vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks>) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfo& setDataQualityEvaluationTasks(const vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks> & dataQualityEvaluationTasks) { DARABONBA_PTR_SET_VALUE(dataQualityEvaluationTasks_, dataQualityEvaluationTasks) };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfo& setDataQualityEvaluationTasks(vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks> && dataQualityEvaluationTasks) { DARABONBA_PTR_SET_RVALUE(dataQualityEvaluationTasks_, dataQualityEvaluationTasks) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfo& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfo& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListDataQualityEvaluationTasksResponseBodyPagingInfo& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The data quality monitoring tasks.
    std::shared_ptr<vector<Models::ListDataQualityEvaluationTasksResponseBodyPagingInfoDataQualityEvaluationTasks>> dataQualityEvaluationTasks_ = nullptr;
    // The page number.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
