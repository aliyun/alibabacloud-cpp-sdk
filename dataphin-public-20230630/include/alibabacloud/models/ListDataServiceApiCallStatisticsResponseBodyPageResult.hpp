// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSRESPONSEBODYPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTDATASERVICEAPICALLSTATISTICSRESPONSEBODYPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class ListDataServiceApiCallStatisticsResponseBodyPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataServiceApiCallStatisticsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(CallStatisticsList, callStatisticsList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataServiceApiCallStatisticsResponseBodyPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(CallStatisticsList, callStatisticsList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListDataServiceApiCallStatisticsResponseBodyPageResult() = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResult(const ListDataServiceApiCallStatisticsResponseBodyPageResult &) = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResult(ListDataServiceApiCallStatisticsResponseBodyPageResult &&) = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataServiceApiCallStatisticsResponseBodyPageResult() = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResult& operator=(const ListDataServiceApiCallStatisticsResponseBodyPageResult &) = default ;
    ListDataServiceApiCallStatisticsResponseBodyPageResult& operator=(ListDataServiceApiCallStatisticsResponseBodyPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callStatisticsList_ == nullptr
        && return this->totalCount_ == nullptr; };
    // callStatisticsList Field Functions 
    bool hasCallStatisticsList() const { return this->callStatisticsList_ != nullptr;};
    void deleteCallStatisticsList() { this->callStatisticsList_ = nullptr;};
    inline const vector<Models::ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList> & callStatisticsList() const { DARABONBA_PTR_GET_CONST(callStatisticsList_, vector<Models::ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList>) };
    inline vector<Models::ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList> callStatisticsList() { DARABONBA_PTR_GET(callStatisticsList_, vector<Models::ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList>) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResult& setCallStatisticsList(const vector<Models::ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList> & callStatisticsList) { DARABONBA_PTR_SET_VALUE(callStatisticsList_, callStatisticsList) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResult& setCallStatisticsList(vector<Models::ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList> && callStatisticsList) { DARABONBA_PTR_SET_RVALUE(callStatisticsList_, callStatisticsList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListDataServiceApiCallStatisticsResponseBodyPageResult& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListDataServiceApiCallStatisticsResponseBodyPageResultCallStatisticsList>> callStatisticsList_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
