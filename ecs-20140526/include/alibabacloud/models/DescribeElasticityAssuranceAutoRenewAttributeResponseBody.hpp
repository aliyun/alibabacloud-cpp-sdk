// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICITYASSURANCEAUTORENEWATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeElasticityAssuranceAutoRenewAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticityAssuranceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticityAssuranceRenewAttributes, elasticityAssuranceRenewAttributes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticityAssuranceAutoRenewAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticityAssuranceRenewAttributes, elasticityAssuranceRenewAttributes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody(const DescribeElasticityAssuranceAutoRenewAttributeResponseBody &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody(DescribeElasticityAssuranceAutoRenewAttributeResponseBody &&) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticityAssuranceAutoRenewAttributeResponseBody() = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody& operator=(const DescribeElasticityAssuranceAutoRenewAttributeResponseBody &) = default ;
    DescribeElasticityAssuranceAutoRenewAttributeResponseBody& operator=(DescribeElasticityAssuranceAutoRenewAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticityAssuranceRenewAttributes_ == nullptr
        && return this->requestId_ == nullptr; };
    // elasticityAssuranceRenewAttributes Field Functions 
    bool hasElasticityAssuranceRenewAttributes() const { return this->elasticityAssuranceRenewAttributes_ != nullptr;};
    void deleteElasticityAssuranceRenewAttributes() { this->elasticityAssuranceRenewAttributes_ = nullptr;};
    inline const DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes & elasticityAssuranceRenewAttributes() const { DARABONBA_PTR_GET_CONST(elasticityAssuranceRenewAttributes_, DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes elasticityAssuranceRenewAttributes() { DARABONBA_PTR_GET(elasticityAssuranceRenewAttributes_, DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBody& setElasticityAssuranceRenewAttributes(const DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes & elasticityAssuranceRenewAttributes) { DARABONBA_PTR_SET_VALUE(elasticityAssuranceRenewAttributes_, elasticityAssuranceRenewAttributes) };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBody& setElasticityAssuranceRenewAttributes(DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes && elasticityAssuranceRenewAttributes) { DARABONBA_PTR_SET_RVALUE(elasticityAssuranceRenewAttributes_, elasticityAssuranceRenewAttributes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticityAssuranceAutoRenewAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The auto-renewal attribute of the elasticity assurances.
    std::shared_ptr<DescribeElasticityAssuranceAutoRenewAttributeResponseBodyElasticityAssuranceRenewAttributes> elasticityAssuranceRenewAttributes_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
