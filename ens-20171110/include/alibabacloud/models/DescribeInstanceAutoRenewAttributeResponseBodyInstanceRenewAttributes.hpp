// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODYINSTANCERENEWATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEAUTORENEWATTRIBUTERESPONSEBODYINSTANCERENEWATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceRenewAttribute, instanceRenewAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceRenewAttribute, instanceRenewAttribute_);
    };
    DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes() = default ;
    DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes(const DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes(DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes &&) = default ;
    DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes() = default ;
    DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes& operator=(const DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes &) = default ;
    DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes& operator=(DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceRenewAttribute_ == nullptr; };
    // instanceRenewAttribute Field Functions 
    bool hasInstanceRenewAttribute() const { return this->instanceRenewAttribute_ != nullptr;};
    void deleteInstanceRenewAttribute() { this->instanceRenewAttribute_ = nullptr;};
    inline const vector<Models::DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute> & instanceRenewAttribute() const { DARABONBA_PTR_GET_CONST(instanceRenewAttribute_, vector<Models::DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute>) };
    inline vector<Models::DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute> instanceRenewAttribute() { DARABONBA_PTR_GET(instanceRenewAttribute_, vector<Models::DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute>) };
    inline DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes& setInstanceRenewAttribute(const vector<Models::DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute> & instanceRenewAttribute) { DARABONBA_PTR_SET_VALUE(instanceRenewAttribute_, instanceRenewAttribute) };
    inline DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributes& setInstanceRenewAttribute(vector<Models::DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute> && instanceRenewAttribute) { DARABONBA_PTR_SET_RVALUE(instanceRenewAttribute_, instanceRenewAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceAutoRenewAttributeResponseBodyInstanceRenewAttributesInstanceRenewAttribute>> instanceRenewAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
