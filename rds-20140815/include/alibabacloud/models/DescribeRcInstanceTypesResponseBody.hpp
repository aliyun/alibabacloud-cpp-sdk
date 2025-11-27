// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCInstanceTypesResponseBodyInstanceTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCInstanceTypesResponseBody() = default ;
    DescribeRCInstanceTypesResponseBody(const DescribeRCInstanceTypesResponseBody &) = default ;
    DescribeRCInstanceTypesResponseBody(DescribeRCInstanceTypesResponseBody &&) = default ;
    DescribeRCInstanceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypesResponseBody() = default ;
    DescribeRCInstanceTypesResponseBody& operator=(const DescribeRCInstanceTypesResponseBody &) = default ;
    DescribeRCInstanceTypesResponseBody& operator=(DescribeRCInstanceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypes_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const DescribeRCInstanceTypesResponseBodyInstanceTypes & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, DescribeRCInstanceTypesResponseBodyInstanceTypes) };
    inline DescribeRCInstanceTypesResponseBodyInstanceTypes instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, DescribeRCInstanceTypesResponseBodyInstanceTypes) };
    inline DescribeRCInstanceTypesResponseBody& setInstanceTypes(const DescribeRCInstanceTypesResponseBodyInstanceTypes & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeRCInstanceTypesResponseBody& setInstanceTypes(DescribeRCInstanceTypesResponseBodyInstanceTypes && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the instance types.
    std::shared_ptr<DescribeRCInstanceTypesResponseBodyInstanceTypes> instanceTypes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
