// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEOBJECTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEOBJECTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DatabaseSummaryModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetDatabaseObjectsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseObjectsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DatabaseSummaryModels, databaseSummaryModels_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseObjectsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DatabaseSummaryModels, databaseSummaryModels_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetDatabaseObjectsResponseBodyData() = default ;
    GetDatabaseObjectsResponseBodyData(const GetDatabaseObjectsResponseBodyData &) = default ;
    GetDatabaseObjectsResponseBodyData(GetDatabaseObjectsResponseBodyData &&) = default ;
    GetDatabaseObjectsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseObjectsResponseBodyData() = default ;
    GetDatabaseObjectsResponseBodyData& operator=(const GetDatabaseObjectsResponseBodyData &) = default ;
    GetDatabaseObjectsResponseBodyData& operator=(GetDatabaseObjectsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->databaseSummaryModels_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->totalCount_ != nullptr; };
    // databaseSummaryModels Field Functions 
    bool hasDatabaseSummaryModels() const { return this->databaseSummaryModels_ != nullptr;};
    void deleteDatabaseSummaryModels() { this->databaseSummaryModels_ = nullptr;};
    inline const vector<Models::DatabaseSummaryModel> & databaseSummaryModels() const { DARABONBA_PTR_GET_CONST(databaseSummaryModels_, vector<Models::DatabaseSummaryModel>) };
    inline vector<Models::DatabaseSummaryModel> databaseSummaryModels() { DARABONBA_PTR_GET(databaseSummaryModels_, vector<Models::DatabaseSummaryModel>) };
    inline GetDatabaseObjectsResponseBodyData& setDatabaseSummaryModels(const vector<Models::DatabaseSummaryModel> & databaseSummaryModels) { DARABONBA_PTR_SET_VALUE(databaseSummaryModels_, databaseSummaryModels) };
    inline GetDatabaseObjectsResponseBodyData& setDatabaseSummaryModels(vector<Models::DatabaseSummaryModel> && databaseSummaryModels) { DARABONBA_PTR_SET_RVALUE(databaseSummaryModels_, databaseSummaryModels) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline GetDatabaseObjectsResponseBodyData& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline GetDatabaseObjectsResponseBodyData& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline GetDatabaseObjectsResponseBodyData& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried databases.
    std::shared_ptr<vector<Models::DatabaseSummaryModel>> databaseSummaryModels_ = nullptr;
    // The page number. Pages start from page 1. Default value: **1**.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page. Valid values:
    // 
    // *   30
    // *   50
    // *   100
    // 
    // Default value: 30.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
