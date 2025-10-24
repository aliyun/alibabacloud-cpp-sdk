// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERABNORMALTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserAbnormalTrendResponseBodyTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserAbnormalTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserAbnormalTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserAbnormalTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
    };
    DescribeUserAbnormalTrendResponseBody() = default ;
    DescribeUserAbnormalTrendResponseBody(const DescribeUserAbnormalTrendResponseBody &) = default ;
    DescribeUserAbnormalTrendResponseBody(DescribeUserAbnormalTrendResponseBody &&) = default ;
    DescribeUserAbnormalTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserAbnormalTrendResponseBody() = default ;
    DescribeUserAbnormalTrendResponseBody& operator=(const DescribeUserAbnormalTrendResponseBody &) = default ;
    DescribeUserAbnormalTrendResponseBody& operator=(DescribeUserAbnormalTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->trend_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserAbnormalTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline const vector<DescribeUserAbnormalTrendResponseBodyTrend> & trend() const { DARABONBA_PTR_GET_CONST(trend_, vector<DescribeUserAbnormalTrendResponseBodyTrend>) };
    inline vector<DescribeUserAbnormalTrendResponseBodyTrend> trend() { DARABONBA_PTR_GET(trend_, vector<DescribeUserAbnormalTrendResponseBodyTrend>) };
    inline DescribeUserAbnormalTrendResponseBody& setTrend(const vector<DescribeUserAbnormalTrendResponseBodyTrend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
    inline DescribeUserAbnormalTrendResponseBody& setTrend(vector<DescribeUserAbnormalTrendResponseBodyTrend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The trends of risks.
    std::shared_ptr<vector<DescribeUserAbnormalTrendResponseBodyTrend>> trend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
