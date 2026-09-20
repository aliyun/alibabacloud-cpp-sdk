// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOVERABLETIMERANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOVERABLETIMERANGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class DescribeRecoverableTimeRangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecoverableTimeRangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TimeBegin, timeBegin_);
      DARABONBA_PTR_TO_JSON(TimeEnd, timeEnd_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecoverableTimeRangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TimeBegin, timeBegin_);
      DARABONBA_PTR_FROM_JSON(TimeEnd, timeEnd_);
    };
    DescribeRecoverableTimeRangeResponseBody() = default ;
    DescribeRecoverableTimeRangeResponseBody(const DescribeRecoverableTimeRangeResponseBody &) = default ;
    DescribeRecoverableTimeRangeResponseBody(DescribeRecoverableTimeRangeResponseBody &&) = default ;
    DescribeRecoverableTimeRangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecoverableTimeRangeResponseBody() = default ;
    DescribeRecoverableTimeRangeResponseBody& operator=(const DescribeRecoverableTimeRangeResponseBody &) = default ;
    DescribeRecoverableTimeRangeResponseBody& operator=(DescribeRecoverableTimeRangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->timeBegin_ == nullptr && this->timeEnd_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecoverableTimeRangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // timeBegin Field Functions 
    bool hasTimeBegin() const { return this->timeBegin_ != nullptr;};
    void deleteTimeBegin() { this->timeBegin_ = nullptr;};
    inline string getTimeBegin() const { DARABONBA_PTR_GET_DEFAULT(timeBegin_, "") };
    inline DescribeRecoverableTimeRangeResponseBody& setTimeBegin(string timeBegin) { DARABONBA_PTR_SET_VALUE(timeBegin_, timeBegin) };


    // timeEnd Field Functions 
    bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
    void deleteTimeEnd() { this->timeEnd_ = nullptr;};
    inline string getTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, "") };
    inline DescribeRecoverableTimeRangeResponseBody& setTimeEnd(string timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The start time of the recoverable time range.
    shared_ptr<string> timeBegin_ {};
    // The end time of the recoverable time range.
    shared_ptr<string> timeEnd_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
