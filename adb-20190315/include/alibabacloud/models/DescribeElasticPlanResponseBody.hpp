// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticPlanResponseBodyElasticPlanList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeElasticPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticPlanList, elasticPlanList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticPlanList, elasticPlanList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticPlanResponseBody() = default ;
    DescribeElasticPlanResponseBody(const DescribeElasticPlanResponseBody &) = default ;
    DescribeElasticPlanResponseBody(DescribeElasticPlanResponseBody &&) = default ;
    DescribeElasticPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticPlanResponseBody() = default ;
    DescribeElasticPlanResponseBody& operator=(const DescribeElasticPlanResponseBody &) = default ;
    DescribeElasticPlanResponseBody& operator=(DescribeElasticPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->elasticPlanList_ == nullptr
        && return this->requestId_ == nullptr; };
    // elasticPlanList Field Functions 
    bool hasElasticPlanList() const { return this->elasticPlanList_ != nullptr;};
    void deleteElasticPlanList() { this->elasticPlanList_ = nullptr;};
    inline const vector<DescribeElasticPlanResponseBodyElasticPlanList> & elasticPlanList() const { DARABONBA_PTR_GET_CONST(elasticPlanList_, vector<DescribeElasticPlanResponseBodyElasticPlanList>) };
    inline vector<DescribeElasticPlanResponseBodyElasticPlanList> elasticPlanList() { DARABONBA_PTR_GET(elasticPlanList_, vector<DescribeElasticPlanResponseBodyElasticPlanList>) };
    inline DescribeElasticPlanResponseBody& setElasticPlanList(const vector<DescribeElasticPlanResponseBodyElasticPlanList> & elasticPlanList) { DARABONBA_PTR_SET_VALUE(elasticPlanList_, elasticPlanList) };
    inline DescribeElasticPlanResponseBody& setElasticPlanList(vector<DescribeElasticPlanResponseBodyElasticPlanList> && elasticPlanList) { DARABONBA_PTR_SET_RVALUE(elasticPlanList_, elasticPlanList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried scaling plans.
    std::shared_ptr<vector<DescribeElasticPlanResponseBodyElasticPlanList>> elasticPlanList_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
