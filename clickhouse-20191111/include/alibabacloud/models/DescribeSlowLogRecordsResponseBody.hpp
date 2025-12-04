// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowLogRecordsResponseBodySlowLogRecords.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SlowLogRecords, slowLogRecords_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SlowLogRecords, slowLogRecords_);
    };
    DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody(DescribeSlowLogRecordsResponseBody &&) = default ;
    DescribeSlowLogRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBody() = default ;
    DescribeSlowLogRecordsResponseBody& operator=(const DescribeSlowLogRecordsResponseBody &) = default ;
    DescribeSlowLogRecordsResponseBody& operator=(DescribeSlowLogRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->slowLogRecords_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowLogRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // slowLogRecords Field Functions 
    bool hasSlowLogRecords() const { return this->slowLogRecords_ != nullptr;};
    void deleteSlowLogRecords() { this->slowLogRecords_ = nullptr;};
    inline const DescribeSlowLogRecordsResponseBodySlowLogRecords & slowLogRecords() const { DARABONBA_PTR_GET_CONST(slowLogRecords_, DescribeSlowLogRecordsResponseBodySlowLogRecords) };
    inline DescribeSlowLogRecordsResponseBodySlowLogRecords slowLogRecords() { DARABONBA_PTR_GET(slowLogRecords_, DescribeSlowLogRecordsResponseBodySlowLogRecords) };
    inline DescribeSlowLogRecordsResponseBody& setSlowLogRecords(const DescribeSlowLogRecordsResponseBodySlowLogRecords & slowLogRecords) { DARABONBA_PTR_SET_VALUE(slowLogRecords_, slowLogRecords) };
    inline DescribeSlowLogRecordsResponseBody& setSlowLogRecords(DescribeSlowLogRecordsResponseBodySlowLogRecords && slowLogRecords) { DARABONBA_PTR_SET_RVALUE(slowLogRecords_, slowLogRecords) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details about the slow query logs.
    std::shared_ptr<DescribeSlowLogRecordsResponseBodySlowLogRecords> slowLogRecords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
