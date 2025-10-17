// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypeFamiliesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceTypeFamiliesResponseBody() = default ;
    DescribeInstanceTypeFamiliesResponseBody(const DescribeInstanceTypeFamiliesResponseBody &) = default ;
    DescribeInstanceTypeFamiliesResponseBody(DescribeInstanceTypeFamiliesResponseBody &&) = default ;
    DescribeInstanceTypeFamiliesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypeFamiliesResponseBody() = default ;
    DescribeInstanceTypeFamiliesResponseBody& operator=(const DescribeInstanceTypeFamiliesResponseBody &) = default ;
    DescribeInstanceTypeFamiliesResponseBody& operator=(DescribeInstanceTypeFamiliesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypeFamilies_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies & instanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies) };
    inline DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies instanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies) };
    inline DescribeInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(const DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribeInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceTypeFamiliesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance families.
    std::shared_ptr<DescribeInstanceTypeFamiliesResponseBodyInstanceTypeFamilies> instanceTypeFamilies_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
