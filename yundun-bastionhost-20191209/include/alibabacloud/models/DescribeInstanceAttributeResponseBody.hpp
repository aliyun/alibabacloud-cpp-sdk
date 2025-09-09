// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAttributeResponseBodyInstanceAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DescribeInstanceAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceAttribute, instanceAttribute_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody(DescribeInstanceAttributeResponseBody &&) = default ;
    DescribeInstanceAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAttributeResponseBody() = default ;
    DescribeInstanceAttributeResponseBody& operator=(const DescribeInstanceAttributeResponseBody &) = default ;
    DescribeInstanceAttributeResponseBody& operator=(DescribeInstanceAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceAttribute_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceAttribute Field Functions 
    bool hasInstanceAttribute() const { return this->instanceAttribute_ != nullptr;};
    void deleteInstanceAttribute() { this->instanceAttribute_ = nullptr;};
    inline const DescribeInstanceAttributeResponseBodyInstanceAttribute & instanceAttribute() const { DARABONBA_PTR_GET_CONST(instanceAttribute_, DescribeInstanceAttributeResponseBodyInstanceAttribute) };
    inline DescribeInstanceAttributeResponseBodyInstanceAttribute instanceAttribute() { DARABONBA_PTR_GET(instanceAttribute_, DescribeInstanceAttributeResponseBodyInstanceAttribute) };
    inline DescribeInstanceAttributeResponseBody& setInstanceAttribute(const DescribeInstanceAttributeResponseBodyInstanceAttribute & instanceAttribute) { DARABONBA_PTR_SET_VALUE(instanceAttribute_, instanceAttribute) };
    inline DescribeInstanceAttributeResponseBody& setInstanceAttribute(DescribeInstanceAttributeResponseBodyInstanceAttribute && instanceAttribute) { DARABONBA_PTR_SET_RVALUE(instanceAttribute_, instanceAttribute) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The attribute information about the bastion host.
    std::shared_ptr<DescribeInstanceAttributeResponseBodyInstanceAttribute> instanceAttribute_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
