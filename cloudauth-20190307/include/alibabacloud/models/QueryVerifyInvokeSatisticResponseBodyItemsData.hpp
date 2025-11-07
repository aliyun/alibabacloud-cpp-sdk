// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODYITEMSDATA_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODYITEMSDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyInvokeSatisticResponseBodyItemsData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyInvokeSatisticResponseBodyItemsData& obj) { 
      DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
      DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyInvokeSatisticResponseBodyItemsData& obj) { 
      DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
      DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
    };
    QueryVerifyInvokeSatisticResponseBodyItemsData() = default ;
    QueryVerifyInvokeSatisticResponseBodyItemsData(const QueryVerifyInvokeSatisticResponseBodyItemsData &) = default ;
    QueryVerifyInvokeSatisticResponseBodyItemsData(QueryVerifyInvokeSatisticResponseBodyItemsData &&) = default ;
    QueryVerifyInvokeSatisticResponseBodyItemsData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyInvokeSatisticResponseBodyItemsData() = default ;
    QueryVerifyInvokeSatisticResponseBodyItemsData& operator=(const QueryVerifyInvokeSatisticResponseBodyItemsData &) = default ;
    QueryVerifyInvokeSatisticResponseBodyItemsData& operator=(QueryVerifyInvokeSatisticResponseBodyItemsData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && return this->statisticsType_ == nullptr; };
    // statisticsCount Field Functions 
    bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
    void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
    inline string statisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, "") };
    inline QueryVerifyInvokeSatisticResponseBodyItemsData& setStatisticsCount(string statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


    // statisticsType Field Functions 
    bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
    void deleteStatisticsType() { this->statisticsType_ = nullptr;};
    inline string statisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
    inline QueryVerifyInvokeSatisticResponseBodyItemsData& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


  protected:
    // Number of occurrences of the statistic.
    std::shared_ptr<string> statisticsCount_ = nullptr;
    // ProductCode。
    std::shared_ptr<string> statisticsType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
