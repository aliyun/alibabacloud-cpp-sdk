// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSEREVENTTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeUserEventTrendResponseBodyTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeUserEventTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserEventTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Trend, trend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserEventTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Trend, trend_);
    };
    DescribeUserEventTrendResponseBody() = default ;
    DescribeUserEventTrendResponseBody(const DescribeUserEventTrendResponseBody &) = default ;
    DescribeUserEventTrendResponseBody(DescribeUserEventTrendResponseBody &&) = default ;
    DescribeUserEventTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserEventTrendResponseBody() = default ;
    DescribeUserEventTrendResponseBody& operator=(const DescribeUserEventTrendResponseBody &) = default ;
    DescribeUserEventTrendResponseBody& operator=(DescribeUserEventTrendResponseBody &&) = default ;
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
    inline DescribeUserEventTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trend Field Functions 
    bool hasTrend() const { return this->trend_ != nullptr;};
    void deleteTrend() { this->trend_ = nullptr;};
    inline const vector<DescribeUserEventTrendResponseBodyTrend> & trend() const { DARABONBA_PTR_GET_CONST(trend_, vector<DescribeUserEventTrendResponseBodyTrend>) };
    inline vector<DescribeUserEventTrendResponseBodyTrend> trend() { DARABONBA_PTR_GET(trend_, vector<DescribeUserEventTrendResponseBodyTrend>) };
    inline DescribeUserEventTrendResponseBody& setTrend(const vector<DescribeUserEventTrendResponseBodyTrend> & trend) { DARABONBA_PTR_SET_VALUE(trend_, trend) };
    inline DescribeUserEventTrendResponseBody& setTrend(vector<DescribeUserEventTrendResponseBodyTrend> && trend) { DARABONBA_PTR_SET_RVALUE(trend_, trend) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The trends of attacks.
    std::shared_ptr<vector<DescribeUserEventTrendResponseBodyTrend>> trend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
