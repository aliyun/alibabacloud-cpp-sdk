// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTypesResponseBody() = default ;
    DescribeInstanceTypesResponseBody(const DescribeInstanceTypesResponseBody &) = default ;
    DescribeInstanceTypesResponseBody(DescribeInstanceTypesResponseBody &&) = default ;
    DescribeInstanceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBody() = default ;
    DescribeInstanceTypesResponseBody& operator=(const DescribeInstanceTypesResponseBody &) = default ;
    DescribeInstanceTypesResponseBody& operator=(DescribeInstanceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->instanceTypes_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeInstanceTypesResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const DescribeInstanceTypesResponseBodyInstanceTypes & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, DescribeInstanceTypesResponseBodyInstanceTypes) };
    inline DescribeInstanceTypesResponseBodyInstanceTypes instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, DescribeInstanceTypesResponseBodyInstanceTypes) };
    inline DescribeInstanceTypesResponseBody& setInstanceTypes(const DescribeInstanceTypesResponseBodyInstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeInstanceTypesResponseBody& setInstanceTypes(DescribeInstanceTypesResponseBodyInstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code. If the request is successful, 0 is returned. If the request fails, a non-zero error code is returned.
    std::shared_ptr<int32_t> code_ = nullptr;
    // Details about the instance types.
    std::shared_ptr<DescribeInstanceTypesResponseBodyInstanceTypes> instanceTypes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
