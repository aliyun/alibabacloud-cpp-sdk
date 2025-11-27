// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERCINSTANCETYPEFAMILIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeRCInstanceTypeFamiliesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRCInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRCInstanceTypeFamiliesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeRCInstanceTypeFamiliesResponseBody() = default ;
    DescribeRCInstanceTypeFamiliesResponseBody(const DescribeRCInstanceTypeFamiliesResponseBody &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBody(DescribeRCInstanceTypeFamiliesResponseBody &&) = default ;
    DescribeRCInstanceTypeFamiliesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRCInstanceTypeFamiliesResponseBody() = default ;
    DescribeRCInstanceTypeFamiliesResponseBody& operator=(const DescribeRCInstanceTypeFamiliesResponseBody &) = default ;
    DescribeRCInstanceTypeFamiliesResponseBody& operator=(DescribeRCInstanceTypeFamiliesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceTypeFamilies_ == nullptr
        && return this->requestId_ == nullptr; };
    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies & instanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies) };
    inline DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies instanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies) };
    inline DescribeRCInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(const DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribeRCInstanceTypeFamiliesResponseBody& setInstanceTypeFamilies(DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRCInstanceTypeFamiliesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The instance families.
    std::shared_ptr<DescribeRCInstanceTypeFamiliesResponseBodyInstanceTypeFamilies> instanceTypeFamilies_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
