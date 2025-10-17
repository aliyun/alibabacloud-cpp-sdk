// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTERESPONSEBODYELASTICITYASSURANCERENEWATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTERESPONSEBODYELASTICITYASSURANCERENEWATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceRenewAttribute, elasticityAssuranceRenewAttribute_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceRenewAttribute, elasticityAssuranceRenewAttribute_);
    };
    DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes(const DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes(DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes &&) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes& operator=(const DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes& operator=(DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticityAssuranceRenewAttribute_ == nullptr; };
    // elasticityAssuranceRenewAttribute Field Functions 
    bool hasElasticityAssuranceRenewAttribute() const { return this->elasticityAssuranceRenewAttribute_ != nullptr;};
    void deleteElasticityAssuranceRenewAttribute() { this->elasticityAssuranceRenewAttribute_ = nullptr;};
    inline const vector<Models::DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute> & elasticityAssuranceRenewAttribute() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceRenewAttribute_, vector<Models::DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute>) };
    inline vector<Models::DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute> elasticityAssuranceRenewAttribute() { DARABONBA_PTR_GET(elasticityAssuranceRenewAttribute_, vector<Models::DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute>) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes& setElasticityAssuranceRenewAttribute(const vector<Models::DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute> & elasticityAssuranceRenewAttribute) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceRenewAttribute_, elasticityAssuranceRenewAttribute) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes& setElasticityAssuranceRenewAttribute(vector<Models::DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute> && elasticityAssuranceRenewAttribute) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceRenewAttribute_, elasticityAssuranceRenewAttribute) };


  protected:
    std::shared_ptr<vector<Models::DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributesElasticityAssuranceRenewAttribute>> elasticityAssuranceRenewAttribute_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
