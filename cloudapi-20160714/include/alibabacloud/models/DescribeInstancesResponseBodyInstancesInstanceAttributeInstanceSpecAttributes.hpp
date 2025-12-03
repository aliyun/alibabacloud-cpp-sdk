// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTEINSTANCESPECATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESRESPONSEBODYINSTANCESINSTANCEATTRIBUTEINSTANCESPECATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(SpecAttribute, specAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(SpecAttribute, specAttribute_);
    };
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes(const DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes(DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes &&) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes() = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes& operator=(const DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes &) = default ;
    DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes& operator=(DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->specAttribute_ == nullptr; };
    // specAttribute Field Functions 
    bool hasSpecAttribute() const { return this->specAttribute_ != nullptr;};
    void deleteSpecAttribute() { this->specAttribute_ = nullptr;};
    inline const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute> & specAttribute() const { DARABONBA_PTR_GET_CONST(specAttribute_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute>) };
    inline vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute> specAttribute() { DARABONBA_PTR_GET(specAttribute_, vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute>) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes& setSpecAttribute(const vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute> & specAttribute) { DARABONBA_PTR_SET_VALUE(specAttribute_, specAttribute) };
    inline DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributes& setSpecAttribute(vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute> && specAttribute) { DARABONBA_PTR_SET_RVALUE(specAttribute_, specAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstancesResponseBodyInstancesInstanceAttributeInstanceSpecAttributesSpecAttribute>> specAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
