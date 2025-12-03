// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTEINSTANCESPECATTRIBUTESSPECATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTEINSTANCESPECATTRIBUTESSPECATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute(const DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute(DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute& operator=(const DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute& operator=(DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->value_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The variable name.
    std::shared_ptr<string> localName_ = nullptr;
    // The variable value.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
