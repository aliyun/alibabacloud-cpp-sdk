// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEELASTICDAILYPLANRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeElasticDailyPlanResponseBodyElasticDailyPlanList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeElasticDailyPlanResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeElasticDailyPlanResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ElasticDailyPlanList, elasticDailyPlanList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeElasticDailyPlanResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ElasticDailyPlanList, elasticDailyPlanList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeElasticDailyPlanResponseBody() = default ;
    DescribeElasticDailyPlanResponseBody(const DescribeElasticDailyPlanResponseBody &) = default ;
    DescribeElasticDailyPlanResponseBody(DescribeElasticDailyPlanResponseBody &&) = default ;
    DescribeElasticDailyPlanResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeElasticDailyPlanResponseBody() = default ;
    DescribeElasticDailyPlanResponseBody& operator=(const DescribeElasticDailyPlanResponseBody &) = default ;
    DescribeElasticDailyPlanResponseBody& operator=(DescribeElasticDailyPlanResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->elasticDailyPlanList_ != nullptr
        && this->requestId_ != nullptr; };
    // elasticDailyPlanList Field Functions 
    bool hasElasticDailyPlanList() const { return this->elasticDailyPlanList_ != nullptr;};
    void deleteElasticDailyPlanList() { this->elasticDailyPlanList_ = nullptr;};
    inline const vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList> & elasticDailyPlanList() const { DARABONBA_PTR_GET_CONST(elasticDailyPlanList_, vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList>) };
    inline vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList> elasticDailyPlanList() { DARABONBA_PTR_GET(elasticDailyPlanList_, vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList>) };
    inline DescribeElasticDailyPlanResponseBody& setElasticDailyPlanList(const vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList> & elasticDailyPlanList) { DARABONBA_PTR_SET_VALUE(elasticDailyPlanList_, elasticDailyPlanList) };
    inline DescribeElasticDailyPlanResponseBody& setElasticDailyPlanList(vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList> && elasticDailyPlanList) { DARABONBA_PTR_SET_RVALUE(elasticDailyPlanList_, elasticDailyPlanList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeElasticDailyPlanResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details of the current-day scaling plans.
    std::shared_ptr<vector<DescribeElasticDailyPlanResponseBodyElasticDailyPlanList>> elasticDailyPlanList_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
