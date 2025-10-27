// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTSTACKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALARMEVENTSTACKINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAlarmEventStackInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAlarmEventStackInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StackInfo, stackInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAlarmEventStackInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StackInfo, stackInfo_);
    };
    DescribeAlarmEventStackInfoResponseBody() = default ;
    DescribeAlarmEventStackInfoResponseBody(const DescribeAlarmEventStackInfoResponseBody &) = default ;
    DescribeAlarmEventStackInfoResponseBody(DescribeAlarmEventStackInfoResponseBody &&) = default ;
    DescribeAlarmEventStackInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAlarmEventStackInfoResponseBody() = default ;
    DescribeAlarmEventStackInfoResponseBody& operator=(const DescribeAlarmEventStackInfoResponseBody &) = default ;
    DescribeAlarmEventStackInfoResponseBody& operator=(DescribeAlarmEventStackInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->stackInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAlarmEventStackInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // stackInfo Field Functions 
    bool hasStackInfo() const { return this->stackInfo_ != nullptr;};
    void deleteStackInfo() { this->stackInfo_ = nullptr;};
    inline string stackInfo() const { DARABONBA_PTR_GET_DEFAULT(stackInfo_, "") };
    inline DescribeAlarmEventStackInfoResponseBody& setStackInfo(string stackInfo) { DARABONBA_PTR_SET_VALUE(stackInfo_, stackInfo) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The stack information of the alert details.
    std::shared_ptr<string> stackInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
