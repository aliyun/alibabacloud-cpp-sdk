// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATASTORAGEANALYSISRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETSTORAGEANALYSISRESULTRESPONSEBODYDATASTORAGEANALYSISRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList.hpp>
#include <alibabacloud/models/GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& obj) { 
      DARABONBA_PTR_TO_JSON(AnalysisErrorType, analysisErrorType_);
      DARABONBA_PTR_TO_JSON(AnalysisSuccess, analysisSuccess_);
      DARABONBA_PTR_TO_JSON(DailyIncrement, dailyIncrement_);
      DARABONBA_PTR_TO_JSON(EstimateAvailableDays, estimateAvailableDays_);
      DARABONBA_PTR_TO_JSON(NeedOptimizeItemList, needOptimizeItemList_);
      DARABONBA_PTR_TO_JSON(TableStats, tableStats_);
      DARABONBA_PTR_TO_JSON(TotalFreeStorageSize, totalFreeStorageSize_);
      DARABONBA_PTR_TO_JSON(TotalStorageSize, totalStorageSize_);
      DARABONBA_PTR_TO_JSON(TotalUsedStorageSize, totalUsedStorageSize_);
    };
    friend void from_json(const Darabonba::Json& j, GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AnalysisErrorType, analysisErrorType_);
      DARABONBA_PTR_FROM_JSON(AnalysisSuccess, analysisSuccess_);
      DARABONBA_PTR_FROM_JSON(DailyIncrement, dailyIncrement_);
      DARABONBA_PTR_FROM_JSON(EstimateAvailableDays, estimateAvailableDays_);
      DARABONBA_PTR_FROM_JSON(NeedOptimizeItemList, needOptimizeItemList_);
      DARABONBA_PTR_FROM_JSON(TableStats, tableStats_);
      DARABONBA_PTR_FROM_JSON(TotalFreeStorageSize, totalFreeStorageSize_);
      DARABONBA_PTR_FROM_JSON(TotalStorageSize, totalStorageSize_);
      DARABONBA_PTR_FROM_JSON(TotalUsedStorageSize, totalUsedStorageSize_);
    };
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult() = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult(const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult &) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult(GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult &&) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult() = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& operator=(const GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult &) = default ;
    GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& operator=(GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->analysisErrorType_ != nullptr
        && this->analysisSuccess_ != nullptr && this->dailyIncrement_ != nullptr && this->estimateAvailableDays_ != nullptr && this->needOptimizeItemList_ != nullptr && this->tableStats_ != nullptr
        && this->totalFreeStorageSize_ != nullptr && this->totalStorageSize_ != nullptr && this->totalUsedStorageSize_ != nullptr; };
    // analysisErrorType Field Functions 
    bool hasAnalysisErrorType() const { return this->analysisErrorType_ != nullptr;};
    void deleteAnalysisErrorType() { this->analysisErrorType_ = nullptr;};
    inline string analysisErrorType() const { DARABONBA_PTR_GET_DEFAULT(analysisErrorType_, "") };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setAnalysisErrorType(string analysisErrorType) { DARABONBA_PTR_SET_VALUE(analysisErrorType_, analysisErrorType) };


    // analysisSuccess Field Functions 
    bool hasAnalysisSuccess() const { return this->analysisSuccess_ != nullptr;};
    void deleteAnalysisSuccess() { this->analysisSuccess_ = nullptr;};
    inline bool analysisSuccess() const { DARABONBA_PTR_GET_DEFAULT(analysisSuccess_, false) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setAnalysisSuccess(bool analysisSuccess) { DARABONBA_PTR_SET_VALUE(analysisSuccess_, analysisSuccess) };


    // dailyIncrement Field Functions 
    bool hasDailyIncrement() const { return this->dailyIncrement_ != nullptr;};
    void deleteDailyIncrement() { this->dailyIncrement_ = nullptr;};
    inline int64_t dailyIncrement() const { DARABONBA_PTR_GET_DEFAULT(dailyIncrement_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setDailyIncrement(int64_t dailyIncrement) { DARABONBA_PTR_SET_VALUE(dailyIncrement_, dailyIncrement) };


    // estimateAvailableDays Field Functions 
    bool hasEstimateAvailableDays() const { return this->estimateAvailableDays_ != nullptr;};
    void deleteEstimateAvailableDays() { this->estimateAvailableDays_ = nullptr;};
    inline int64_t estimateAvailableDays() const { DARABONBA_PTR_GET_DEFAULT(estimateAvailableDays_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setEstimateAvailableDays(int64_t estimateAvailableDays) { DARABONBA_PTR_SET_VALUE(estimateAvailableDays_, estimateAvailableDays) };


    // needOptimizeItemList Field Functions 
    bool hasNeedOptimizeItemList() const { return this->needOptimizeItemList_ != nullptr;};
    void deleteNeedOptimizeItemList() { this->needOptimizeItemList_ = nullptr;};
    inline const vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList> & needOptimizeItemList() const { DARABONBA_PTR_GET_CONST(needOptimizeItemList_, vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList>) };
    inline vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList> needOptimizeItemList() { DARABONBA_PTR_GET(needOptimizeItemList_, vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList>) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setNeedOptimizeItemList(const vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList> & needOptimizeItemList) { DARABONBA_PTR_SET_VALUE(needOptimizeItemList_, needOptimizeItemList) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setNeedOptimizeItemList(vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList> && needOptimizeItemList) { DARABONBA_PTR_SET_RVALUE(needOptimizeItemList_, needOptimizeItemList) };


    // tableStats Field Functions 
    bool hasTableStats() const { return this->tableStats_ != nullptr;};
    void deleteTableStats() { this->tableStats_ = nullptr;};
    inline const vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats> & tableStats() const { DARABONBA_PTR_GET_CONST(tableStats_, vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats>) };
    inline vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats> tableStats() { DARABONBA_PTR_GET(tableStats_, vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats>) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setTableStats(const vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats> & tableStats) { DARABONBA_PTR_SET_VALUE(tableStats_, tableStats) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setTableStats(vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats> && tableStats) { DARABONBA_PTR_SET_RVALUE(tableStats_, tableStats) };


    // totalFreeStorageSize Field Functions 
    bool hasTotalFreeStorageSize() const { return this->totalFreeStorageSize_ != nullptr;};
    void deleteTotalFreeStorageSize() { this->totalFreeStorageSize_ = nullptr;};
    inline int64_t totalFreeStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalFreeStorageSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setTotalFreeStorageSize(int64_t totalFreeStorageSize) { DARABONBA_PTR_SET_VALUE(totalFreeStorageSize_, totalFreeStorageSize) };


    // totalStorageSize Field Functions 
    bool hasTotalStorageSize() const { return this->totalStorageSize_ != nullptr;};
    void deleteTotalStorageSize() { this->totalStorageSize_ = nullptr;};
    inline int64_t totalStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalStorageSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setTotalStorageSize(int64_t totalStorageSize) { DARABONBA_PTR_SET_VALUE(totalStorageSize_, totalStorageSize) };


    // totalUsedStorageSize Field Functions 
    bool hasTotalUsedStorageSize() const { return this->totalUsedStorageSize_ != nullptr;};
    void deleteTotalUsedStorageSize() { this->totalUsedStorageSize_ = nullptr;};
    inline int64_t totalUsedStorageSize() const { DARABONBA_PTR_GET_DEFAULT(totalUsedStorageSize_, 0L) };
    inline GetStorageAnalysisResultResponseBodyDataStorageAnalysisResult& setTotalUsedStorageSize(int64_t totalUsedStorageSize) { DARABONBA_PTR_SET_VALUE(totalUsedStorageSize_, totalUsedStorageSize) };


  protected:
    // The reason why the analysis on the database and table fails.
    // 
    // *   **DB_OR_TABLE_NOT_EXIST**: The specified database or table does not exist.
    // *   **DB_NOT_EXIST**: The specified database does not exist.
    std::shared_ptr<string> analysisErrorType_ = nullptr;
    // Indicates whether the analysis on the database and table is successful.
    std::shared_ptr<bool> analysisSuccess_ = nullptr;
    // The estimated average daily growth of the used storage space in the previous seven days. Unit: bytes.
    std::shared_ptr<int64_t> dailyIncrement_ = nullptr;
    // The estimated number of days for which the remaining storage space is available.
    std::shared_ptr<int64_t> estimateAvailableDays_ = nullptr;
    // The items to be optimized, which are generated based on DAS default rules. You can ignore these items based on your business requirements, and create custom rules to generate items to be optimized based on other basic data that is returned.
    std::shared_ptr<vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultNeedOptimizeItemList>> needOptimizeItemList_ = nullptr;
    // The information about the table.
    std::shared_ptr<vector<Models::GetStorageAnalysisResultResponseBodyDataStorageAnalysisResultTableStats>> tableStats_ = nullptr;
    // The size of remaining storage.
    // 
    // >  Unit: bytes.
    std::shared_ptr<int64_t> totalFreeStorageSize_ = nullptr;
    // The total size of instance storage.
    // 
    // >  Unit: bytes.
    std::shared_ptr<int64_t> totalStorageSize_ = nullptr;
    // The size of used storage.
    // 
    // >  Unit: bytes.
    std::shared_ptr<int64_t> totalUsedStorageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
