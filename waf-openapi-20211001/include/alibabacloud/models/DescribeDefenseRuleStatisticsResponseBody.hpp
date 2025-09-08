// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatisticsInfos, statisticsInfos_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatisticsInfos, statisticsInfos_);
    };
    DescribeDefenseRuleStatisticsResponseBody() = default ;
    DescribeDefenseRuleStatisticsResponseBody(const DescribeDefenseRuleStatisticsResponseBody &) = default ;
    DescribeDefenseRuleStatisticsResponseBody(DescribeDefenseRuleStatisticsResponseBody &&) = default ;
    DescribeDefenseRuleStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleStatisticsResponseBody() = default ;
    DescribeDefenseRuleStatisticsResponseBody& operator=(const DescribeDefenseRuleStatisticsResponseBody &) = default ;
    DescribeDefenseRuleStatisticsResponseBody& operator=(DescribeDefenseRuleStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->statisticsInfos_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDefenseRuleStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statisticsInfos Field Functions 
    bool hasStatisticsInfos() const { return this->statisticsInfos_ != nullptr;};
    void deleteStatisticsInfos() { this->statisticsInfos_ = nullptr;};
    inline const vector<DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos> & statisticsInfos() const { DARABONBA_PTR_GET_CONST(statisticsInfos_, vector<DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos>) };
    inline vector<DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos> statisticsInfos() { DARABONBA_PTR_GET(statisticsInfos_, vector<DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos>) };
    inline DescribeDefenseRuleStatisticsResponseBody& setStatisticsInfos(const vector<DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos> & statisticsInfos) { DARABONBA_PTR_SET_VALUE(statisticsInfos_, statisticsInfos) };
    inline DescribeDefenseRuleStatisticsResponseBody& setStatisticsInfos(vector<DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos> && statisticsInfos) { DARABONBA_PTR_SET_RVALUE(statisticsInfos_, statisticsInfos) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos>> statisticsInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
