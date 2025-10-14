// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceRenewAttributes, instanceRenewAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceRenewAttributes, instanceRenewAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(const DescribeInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(DescribeInstanceAutoRenewAttributeResponseBody &&) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewAttributeResponseBody() = default ;
    DescribeInstanceAutoRenewAttributeResponseBody& operator=(const DescribeInstanceAutoRenewAttributeResponseBody &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBody& operator=(DescribeInstanceAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->instanceRenewAttributes_ == nullptr && return this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceRenewAttributes Field Functions 
    bool hasInstanceRenewAttributes() const { return this->instanceRenewAttributes_ != nullptr;};
    void deleteInstanceRenewAttributes() { this->instanceRenewAttributes_ = nullptr;};
    inline const DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes & instanceRenewAttributes() const { DARABONBA_PTR_GET_CONST(instanceRenewAttributes_, DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes instanceRenewAttributes() { DARABONBA_PTR_GET(instanceRenewAttributes_, DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setInstanceRenewAttributes(const DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes & instanceRenewAttributes) { DARABONBA_PTR_SET_VALUE(instanceRenewAttributes_, instanceRenewAttributes) };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setInstanceRenewAttributes(DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes && instanceRenewAttributes) { DARABONBA_PTR_SET_RVALUE(instanceRenewAttributes_, instanceRenewAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned service code. A value of 0 indicates that the operation was successful.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The renewal status of the instance.
    std::shared_ptr<DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes> instanceRenewAttributes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
