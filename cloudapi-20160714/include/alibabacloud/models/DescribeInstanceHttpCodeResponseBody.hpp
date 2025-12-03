// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHTTPCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEHTTPCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceHttpCodeResponseBodyInstanceHttpCode.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceHttpCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceHttpCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceHttpCode, instanceHttpCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceHttpCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceHttpCode, instanceHttpCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceHttpCodeResponseBody() = default ;
    DescribeInstanceHttpCodeResponseBody(const DescribeInstanceHttpCodeResponseBody &) = default ;
    DescribeInstanceHttpCodeResponseBody(DescribeInstanceHttpCodeResponseBody &&) = default ;
    DescribeInstanceHttpCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceHttpCodeResponseBody() = default ;
    DescribeInstanceHttpCodeResponseBody& operator=(const DescribeInstanceHttpCodeResponseBody &) = default ;
    DescribeInstanceHttpCodeResponseBody& operator=(DescribeInstanceHttpCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceHttpCode_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceHttpCode Field Functions 
    bool hasInstanceHttpCode() const { return this->instanceHttpCode_ != nullptr;};
    void deleteInstanceHttpCode() { this->instanceHttpCode_ = nullptr;};
    inline const DescribeInstanceHttpCodeResponseBodyInstanceHttpCode & instanceHttpCode() const { DARABONBA_PTR_GET_CONST(instanceHttpCode_, DescribeInstanceHttpCodeResponseBodyInstanceHttpCode) };
    inline DescribeInstanceHttpCodeResponseBodyInstanceHttpCode instanceHttpCode() { DARABONBA_PTR_GET(instanceHttpCode_, DescribeInstanceHttpCodeResponseBodyInstanceHttpCode) };
    inline DescribeInstanceHttpCodeResponseBody& setInstanceHttpCode(const DescribeInstanceHttpCodeResponseBodyInstanceHttpCode & instanceHttpCode) { DARABONBA_PTR_SET_VALUE(instanceHttpCode_, instanceHttpCode) };
    inline DescribeInstanceHttpCodeResponseBody& setInstanceHttpCode(DescribeInstanceHttpCodeResponseBodyInstanceHttpCode && instanceHttpCode) { DARABONBA_PTR_SET_RVALUE(instanceHttpCode_, instanceHttpCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceHttpCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status codes.
    std::shared_ptr<DescribeInstanceHttpCodeResponseBodyInstanceHttpCode> instanceHttpCode_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
