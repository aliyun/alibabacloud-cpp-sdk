// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYSENDSTATISTICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySendStatisticsResponseBodyDataTargetList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySendStatisticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySendStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TargetList, targetList_);
      DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySendStatisticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TargetList, targetList_);
      DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
    };
    QuerySendStatisticsResponseBodyData() = default ;
    QuerySendStatisticsResponseBodyData(const QuerySendStatisticsResponseBodyData &) = default ;
    QuerySendStatisticsResponseBodyData(QuerySendStatisticsResponseBodyData &&) = default ;
    QuerySendStatisticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySendStatisticsResponseBodyData() = default ;
    QuerySendStatisticsResponseBodyData& operator=(const QuerySendStatisticsResponseBodyData &) = default ;
    QuerySendStatisticsResponseBodyData& operator=(QuerySendStatisticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->targetList_ == nullptr
        && return this->totalSize_ == nullptr; };
    // targetList Field Functions 
    bool hasTargetList() const { return this->targetList_ != nullptr;};
    void deleteTargetList() { this->targetList_ = nullptr;};
    inline const vector<Models::QuerySendStatisticsResponseBodyDataTargetList> & targetList() const { DARABONBA_PTR_GET_CONST(targetList_, vector<Models::QuerySendStatisticsResponseBodyDataTargetList>) };
    inline vector<Models::QuerySendStatisticsResponseBodyDataTargetList> targetList() { DARABONBA_PTR_GET(targetList_, vector<Models::QuerySendStatisticsResponseBodyDataTargetList>) };
    inline QuerySendStatisticsResponseBodyData& setTargetList(const vector<Models::QuerySendStatisticsResponseBodyDataTargetList> & targetList) { DARABONBA_PTR_SET_VALUE(targetList_, targetList) };
    inline QuerySendStatisticsResponseBodyData& setTargetList(vector<Models::QuerySendStatisticsResponseBodyDataTargetList> && targetList) { DARABONBA_PTR_SET_RVALUE(targetList_, targetList) };


    // totalSize Field Functions 
    bool hasTotalSize() const { return this->totalSize_ != nullptr;};
    void deleteTotalSize() { this->totalSize_ = nullptr;};
    inline int64_t totalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
    inline QuerySendStatisticsResponseBodyData& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


  protected:
    // The details of the data returned.
    std::shared_ptr<vector<Models::QuerySendStatisticsResponseBodyDataTargetList>> targetList_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
