// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODYITEMS_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODYITEMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryVerifyInvokeSatisticResponseBodyItemsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyInvokeSatisticResponseBodyItems : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyInvokeSatisticResponseBodyItems& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(StatisticsDate, statisticsDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyInvokeSatisticResponseBodyItems& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(StatisticsDate, statisticsDate_);
    };
    QueryVerifyInvokeSatisticResponseBodyItems() = default ;
    QueryVerifyInvokeSatisticResponseBodyItems(const QueryVerifyInvokeSatisticResponseBodyItems &) = default ;
    QueryVerifyInvokeSatisticResponseBodyItems(QueryVerifyInvokeSatisticResponseBodyItems &&) = default ;
    QueryVerifyInvokeSatisticResponseBodyItems(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyInvokeSatisticResponseBodyItems() = default ;
    QueryVerifyInvokeSatisticResponseBodyItems& operator=(const QueryVerifyInvokeSatisticResponseBodyItems &) = default ;
    QueryVerifyInvokeSatisticResponseBodyItems& operator=(QueryVerifyInvokeSatisticResponseBodyItems &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->statisticsDate_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<Models::QueryVerifyInvokeSatisticResponseBodyItemsData> & data() const { DARABONBA_PTR_GET_CONST(data_, vector<Models::QueryVerifyInvokeSatisticResponseBodyItemsData>) };
    inline vector<Models::QueryVerifyInvokeSatisticResponseBodyItemsData> data() { DARABONBA_PTR_GET(data_, vector<Models::QueryVerifyInvokeSatisticResponseBodyItemsData>) };
    inline QueryVerifyInvokeSatisticResponseBodyItems& setData(const vector<Models::QueryVerifyInvokeSatisticResponseBodyItemsData> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryVerifyInvokeSatisticResponseBodyItems& setData(vector<Models::QueryVerifyInvokeSatisticResponseBodyItemsData> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // statisticsDate Field Functions 
    bool hasStatisticsDate() const { return this->statisticsDate_ != nullptr;};
    void deleteStatisticsDate() { this->statisticsDate_ = nullptr;};
    inline string statisticsDate() const { DARABONBA_PTR_GET_DEFAULT(statisticsDate_, "") };
    inline QueryVerifyInvokeSatisticResponseBodyItems& setStatisticsDate(string statisticsDate) { DARABONBA_PTR_SET_VALUE(statisticsDate_, statisticsDate) };


  protected:
    // List of statistical data.
    std::shared_ptr<vector<Models::QueryVerifyInvokeSatisticResponseBodyItemsData>> data_ = nullptr;
    // Statistics date.
    std::shared_ptr<string> statisticsDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
