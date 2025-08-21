// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINRECORDDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINRECORDDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainRecordDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainRecordDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RecordDataPerInterval, recordDataPerInterval_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainRecordDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordDataPerInterval, recordDataPerInterval_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVsDomainRecordDataResponseBody() = default ;
    DescribeVsDomainRecordDataResponseBody(const DescribeVsDomainRecordDataResponseBody &) = default ;
    DescribeVsDomainRecordDataResponseBody(DescribeVsDomainRecordDataResponseBody &&) = default ;
    DescribeVsDomainRecordDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainRecordDataResponseBody() = default ;
    DescribeVsDomainRecordDataResponseBody& operator=(const DescribeVsDomainRecordDataResponseBody &) = default ;
    DescribeVsDomainRecordDataResponseBody& operator=(DescribeVsDomainRecordDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recordDataPerInterval_ != nullptr
        && this->requestId_ != nullptr; };
    // recordDataPerInterval Field Functions 
    bool hasRecordDataPerInterval() const { return this->recordDataPerInterval_ != nullptr;};
    void deleteRecordDataPerInterval() { this->recordDataPerInterval_ = nullptr;};
    inline const DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval & recordDataPerInterval() const { DARABONBA_PTR_GET_CONST(recordDataPerInterval_, DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval) };
    inline DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval recordDataPerInterval() { DARABONBA_PTR_GET(recordDataPerInterval_, DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval) };
    inline DescribeVsDomainRecordDataResponseBody& setRecordDataPerInterval(const DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval & recordDataPerInterval) { DARABONBA_PTR_SET_VALUE(recordDataPerInterval_, recordDataPerInterval) };
    inline DescribeVsDomainRecordDataResponseBody& setRecordDataPerInterval(DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval && recordDataPerInterval) { DARABONBA_PTR_SET_RVALUE(recordDataPerInterval_, recordDataPerInterval) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVsDomainRecordDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<DescribeVsDomainRecordDataResponseBodyRecordDataPerInterval> recordDataPerInterval_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
