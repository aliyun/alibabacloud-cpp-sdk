// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogTrendResponseBodySlowLogTrend.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlowLogTrend, slowLogTrend_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlowLogTrend, slowLogTrend_);
    };
    DescribeSlowLogTrendResponseBody() = default ;
    DescribeSlowLogTrendResponseBody(const DescribeSlowLogTrendResponseBody &) = default ;
    DescribeSlowLogTrendResponseBody(DescribeSlowLogTrendResponseBody &&) = default ;
    DescribeSlowLogTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogTrendResponseBody() = default ;
    DescribeSlowLogTrendResponseBody& operator=(const DescribeSlowLogTrendResponseBody &) = default ;
    DescribeSlowLogTrendResponseBody& operator=(DescribeSlowLogTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->slowLogTrend_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slowLogTrend Field Functions 
    bool hasSlowLogTrend() const { return this->slowLogTrend_ != nullptr;};
    void deleteSlowLogTrend() { this->slowLogTrend_ = nullptr;};
    inline const DescribeSlowLogTrendResponseBodySlowLogTrend & slowLogTrend() const { DARABONBA_PTR_GET_CONST(slowLogTrend_, DescribeSlowLogTrendResponseBodySlowLogTrend) };
    inline DescribeSlowLogTrendResponseBodySlowLogTrend slowLogTrend() { DARABONBA_PTR_GET(slowLogTrend_, DescribeSlowLogTrendResponseBodySlowLogTrend) };
    inline DescribeSlowLogTrendResponseBody& setSlowLogTrend(const DescribeSlowLogTrendResponseBodySlowLogTrend & slowLogTrend) { DARABONBA_PTR_SET_VALUE(slowLogTrend_, slowLogTrend) };
    inline DescribeSlowLogTrendResponseBody& setSlowLogTrend(DescribeSlowLogTrendResponseBodySlowLogTrend && slowLogTrend) { DARABONBA_PTR_SET_RVALUE(slowLogTrend_, slowLogTrend) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeSlowLogTrendResponseBodySlowLogTrend> slowLogTrend_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
