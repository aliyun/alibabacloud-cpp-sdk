// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEDATASTATSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetQueryOptimizeDataStatsResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetQueryOptimizeDataStatsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeDataStatsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(List, list_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeDataStatsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(List, list_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    GetQueryOptimizeDataStatsResponseBodyData() = default ;
    GetQueryOptimizeDataStatsResponseBodyData(const GetQueryOptimizeDataStatsResponseBodyData &) = default ;
    GetQueryOptimizeDataStatsResponseBodyData(GetQueryOptimizeDataStatsResponseBodyData &&) = default ;
    GetQueryOptimizeDataStatsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeDataStatsResponseBodyData() = default ;
    GetQueryOptimizeDataStatsResponseBodyData& operator=(const GetQueryOptimizeDataStatsResponseBodyData &) = default ;
    GetQueryOptimizeDataStatsResponseBodyData& operator=(GetQueryOptimizeDataStatsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extra_ == nullptr
        && return this->list_ == nullptr && return this->pageNo_ == nullptr && return this->pageSize_ == nullptr && return this->total_ == nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline string extra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
    inline GetQueryOptimizeDataStatsResponseBodyData& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


    // list Field Functions 
    bool hasList() const { return this->list_ != nullptr;};
    void deleteList() { this->list_ = nullptr;};
    inline const vector<Models::GetQueryOptimizeDataStatsResponseBodyDataList> & list() const { DARABONBA_PTR_GET_CONST(list_, vector<Models::GetQueryOptimizeDataStatsResponseBodyDataList>) };
    inline vector<Models::GetQueryOptimizeDataStatsResponseBodyDataList> list() { DARABONBA_PTR_GET(list_, vector<Models::GetQueryOptimizeDataStatsResponseBodyDataList>) };
    inline GetQueryOptimizeDataStatsResponseBodyData& setList(const vector<Models::GetQueryOptimizeDataStatsResponseBodyDataList> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
    inline GetQueryOptimizeDataStatsResponseBodyData& setList(vector<Models::GetQueryOptimizeDataStatsResponseBodyDataList> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t pageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline GetQueryOptimizeDataStatsResponseBodyData& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetQueryOptimizeDataStatsResponseBodyData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetQueryOptimizeDataStatsResponseBodyData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The reserved parameter.
    std::shared_ptr<string> extra_ = nullptr;
    // The information about the SQL templates.
    std::shared_ptr<vector<Models::GetQueryOptimizeDataStatsResponseBodyDataList>> list_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<int32_t> pageNo_ = nullptr;
    // The reserved parameter.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
