// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESESSIONSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESESSIONSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSessionStatisticResponseBodyStatistic.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeSessionStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSessionStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSessionStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeSessionStatisticResponseBody() = default ;
    DescribeSessionStatisticResponseBody(const DescribeSessionStatisticResponseBody &) = default ;
    DescribeSessionStatisticResponseBody(DescribeSessionStatisticResponseBody &&) = default ;
    DescribeSessionStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSessionStatisticResponseBody() = default ;
    DescribeSessionStatisticResponseBody& operator=(const DescribeSessionStatisticResponseBody &) = default ;
    DescribeSessionStatisticResponseBody& operator=(DescribeSessionStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->statistic_ != nullptr && this->totalCount_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSessionStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const vector<DescribeSessionStatisticResponseBodyStatistic> & statistic() const { DARABONBA_PTR_GET_CONST(statistic_, vector<DescribeSessionStatisticResponseBodyStatistic>) };
    inline vector<DescribeSessionStatisticResponseBodyStatistic> statistic() { DARABONBA_PTR_GET(statistic_, vector<DescribeSessionStatisticResponseBodyStatistic>) };
    inline DescribeSessionStatisticResponseBody& setStatistic(const vector<DescribeSessionStatisticResponseBodyStatistic> & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeSessionStatisticResponseBody& setStatistic(vector<DescribeSessionStatisticResponseBodyStatistic> && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeSessionStatisticResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics.
    std::shared_ptr<vector<DescribeSessionStatisticResponseBodyStatistic>> statistic_ = nullptr;
    // The total number of sessions returned.
    std::shared_ptr<string> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
