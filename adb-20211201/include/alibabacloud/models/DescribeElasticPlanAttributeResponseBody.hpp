// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeElasticPlanAttributeResponseBodyElasticPlan.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeElasticPlanAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticPlan, elasticPlan_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticPlan, elasticPlan_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticPlanAttributeResponseBody() = default ;
    DescribeElasticPlanAttributeResponseBody(const DescribeElasticPlanAttributeResponseBody &) = default ;
    DescribeElasticPlanAttributeResponseBody(DescribeElasticPlanAttributeResponseBody &&) = default ;
    DescribeElasticPlanAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanAttributeResponseBody() = default ;
    DescribeElasticPlanAttributeResponseBody& operator=(const DescribeElasticPlanAttributeResponseBody &) = default ;
    DescribeElasticPlanAttributeResponseBody& operator=(DescribeElasticPlanAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticPlan_ != nullptr
        && this->requestId_ != nullptr; };
    // elasticPlan Field Functions 
    bool hasElasticPlan() const { return this->elasticPlan_ != nullptr;};
    void deleteElasticPlan() { this->elasticPlan_ = nullptr;};
    inline const DescribeElasticPlanAttributeResponseBodyElasticPlan & elasticPlan() const { DARABONBA_PTR_GET_CONST(elasticPlan_, DescribeElasticPlanAttributeResponseBodyElasticPlan) };
    inline DescribeElasticPlanAttributeResponseBodyElasticPlan elasticPlan() { DARABONBA_PTR_GET(elasticPlan_, DescribeElasticPlanAttributeResponseBodyElasticPlan) };
    inline DescribeElasticPlanAttributeResponseBody& setElasticPlan(const DescribeElasticPlanAttributeResponseBodyElasticPlan & elasticPlan) { DARABONBA_PTR_SET_VALUE(elasticPlan_, elasticPlan) };
    inline DescribeElasticPlanAttributeResponseBody& setElasticPlan(DescribeElasticPlanAttributeResponseBodyElasticPlan && elasticPlan) { DARABONBA_PTR_SET_RVALUE(elasticPlan_, elasticPlan) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlanAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried scaling plan.
    std::shared_ptr<DescribeElasticPlanAttributeResponseBodyElasticPlan> elasticPlan_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
