// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYRESOURCESTATICSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryResourceStaticsResponseBodyDataRealTimeRes.hpp>
#include <alibabacloud/models/QueryResourceStaticsResponseBodyDataSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class QueryResourceStaticsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryResourceStaticsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(RealTimeRes, realTimeRes_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, QueryResourceStaticsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(RealTimeRes, realTimeRes_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
    };
    QueryResourceStaticsResponseBodyData() = default ;
    QueryResourceStaticsResponseBodyData(const QueryResourceStaticsResponseBodyData &) = default ;
    QueryResourceStaticsResponseBodyData(QueryResourceStaticsResponseBodyData &&) = default ;
    QueryResourceStaticsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryResourceStaticsResponseBodyData() = default ;
    QueryResourceStaticsResponseBodyData& operator=(const QueryResourceStaticsResponseBodyData &) = default ;
    QueryResourceStaticsResponseBodyData& operator=(QueryResourceStaticsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->realTimeRes_ == nullptr
        && return this->summary_ == nullptr; };
    // realTimeRes Field Functions 
    bool hasRealTimeRes() const { return this->realTimeRes_ != nullptr;};
    void deleteRealTimeRes() { this->realTimeRes_ = nullptr;};
    inline const Models::QueryResourceStaticsResponseBodyDataRealTimeRes & realTimeRes() const { DARABONBA_PTR_GET_CONST(realTimeRes_, Models::QueryResourceStaticsResponseBodyDataRealTimeRes) };
    inline Models::QueryResourceStaticsResponseBodyDataRealTimeRes realTimeRes() { DARABONBA_PTR_GET(realTimeRes_, Models::QueryResourceStaticsResponseBodyDataRealTimeRes) };
    inline QueryResourceStaticsResponseBodyData& setRealTimeRes(const Models::QueryResourceStaticsResponseBodyDataRealTimeRes & realTimeRes) { DARABONBA_PTR_SET_VALUE(realTimeRes_, realTimeRes) };
    inline QueryResourceStaticsResponseBodyData& setRealTimeRes(Models::QueryResourceStaticsResponseBodyDataRealTimeRes && realTimeRes) { DARABONBA_PTR_SET_RVALUE(realTimeRes_, realTimeRes) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline const Models::QueryResourceStaticsResponseBodyDataSummary & summary() const { DARABONBA_PTR_GET_CONST(summary_, Models::QueryResourceStaticsResponseBodyDataSummary) };
    inline Models::QueryResourceStaticsResponseBodyDataSummary summary() { DARABONBA_PTR_GET(summary_, Models::QueryResourceStaticsResponseBodyDataSummary) };
    inline QueryResourceStaticsResponseBodyData& setSummary(const Models::QueryResourceStaticsResponseBodyDataSummary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
    inline QueryResourceStaticsResponseBodyData& setSummary(Models::QueryResourceStaticsResponseBodyDataSummary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


  protected:
    // The real-time resource usage.
    std::shared_ptr<Models::QueryResourceStaticsResponseBodyDataRealTimeRes> realTimeRes_ = nullptr;
    // The resource usage of the current month.
    std::shared_ptr<Models::QueryResourceStaticsResponseBodyDataSummary> summary_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
