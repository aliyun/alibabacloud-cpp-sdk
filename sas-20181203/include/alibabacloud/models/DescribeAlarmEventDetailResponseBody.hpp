// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAlarmEventDetailResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAlarmEventDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmEventDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmEventDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAlarmEventDetailResponseBody() = default ;
    DescribeAlarmEventDetailResponseBody(const DescribeAlarmEventDetailResponseBody &) = default ;
    DescribeAlarmEventDetailResponseBody(DescribeAlarmEventDetailResponseBody &&) = default ;
    DescribeAlarmEventDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmEventDetailResponseBody() = default ;
    DescribeAlarmEventDetailResponseBody& operator=(const DescribeAlarmEventDetailResponseBody &) = default ;
    DescribeAlarmEventDetailResponseBody& operator=(DescribeAlarmEventDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->data_ != nullptr
        && this->requestId_ != nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeAlarmEventDetailResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeAlarmEventDetailResponseBodyData) };
    inline DescribeAlarmEventDetailResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeAlarmEventDetailResponseBodyData) };
    inline DescribeAlarmEventDetailResponseBody& setData(const DescribeAlarmEventDetailResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeAlarmEventDetailResponseBody& setData(DescribeAlarmEventDetailResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmEventDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the alert event.
    std::shared_ptr<DescribeAlarmEventDetailResponseBodyData> data_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
