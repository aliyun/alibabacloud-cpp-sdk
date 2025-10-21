// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogTrendResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DescribeSlowLogTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSlowLogTrendResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeSlowLogTrendResponseBodyData) };
    inline DescribeSlowLogTrendResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeSlowLogTrendResponseBodyData) };
    inline DescribeSlowLogTrendResponseBody& setData(const DescribeSlowLogTrendResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSlowLogTrendResponseBody& setData(DescribeSlowLogTrendResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned result.
    std::shared_ptr<DescribeSlowLogTrendResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
