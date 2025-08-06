// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Attribute, attribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Attribute, attribute_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attribute_ != nullptr; };
    // attribute Field Functions 
    bool hasAttribute() const { return this->attribute_ != nullptr;};
    void deleteAttribute() { this->attribute_ = nullptr;};
    inline const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute> & attribute() const { DARABONBA_PTR_GET_CONST(attribute_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute>) };
    inline vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute> attribute() { DARABONBA_PTR_GET(attribute_, vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute>) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes& setAttribute(const vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute> & attribute) { DARABONBA_PTR_SET_VALUE(attribute_, attribute) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes& setAttribute(vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute> && attribute) { DARABONBA_PTR_SET_RVALUE(attribute_, attribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributesAttribute>> attribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
