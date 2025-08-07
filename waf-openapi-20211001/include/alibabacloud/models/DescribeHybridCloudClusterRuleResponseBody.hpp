// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHybridCloudClusterRuleResponseBodyClusterRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterRule, clusterRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterRule, clusterRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHybridCloudClusterRuleResponseBody() = default ;
    DescribeHybridCloudClusterRuleResponseBody(const DescribeHybridCloudClusterRuleResponseBody &) = default ;
    DescribeHybridCloudClusterRuleResponseBody(DescribeHybridCloudClusterRuleResponseBody &&) = default ;
    DescribeHybridCloudClusterRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterRuleResponseBody() = default ;
    DescribeHybridCloudClusterRuleResponseBody& operator=(const DescribeHybridCloudClusterRuleResponseBody &) = default ;
    DescribeHybridCloudClusterRuleResponseBody& operator=(DescribeHybridCloudClusterRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterRule_ != nullptr
        && this->requestId_ != nullptr; };
    // clusterRule Field Functions 
    bool hasClusterRule() const { return this->clusterRule_ != nullptr;};
    void deleteClusterRule() { this->clusterRule_ = nullptr;};
    inline const DescribeHybridCloudClusterRuleResponseBodyClusterRule & clusterRule() const { DARABONBA_PTR_GET_CONST(clusterRule_, DescribeHybridCloudClusterRuleResponseBodyClusterRule) };
    inline DescribeHybridCloudClusterRuleResponseBodyClusterRule clusterRule() { DARABONBA_PTR_GET(clusterRule_, DescribeHybridCloudClusterRuleResponseBodyClusterRule) };
    inline DescribeHybridCloudClusterRuleResponseBody& setClusterRule(const DescribeHybridCloudClusterRuleResponseBodyClusterRule & clusterRule) { DARABONBA_PTR_SET_VALUE(clusterRule_, clusterRule) };
    inline DescribeHybridCloudClusterRuleResponseBody& setClusterRule(DescribeHybridCloudClusterRuleResponseBodyClusterRule && clusterRule) { DARABONBA_PTR_SET_RVALUE(clusterRule_, clusterRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudClusterRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the rule.
    std::shared_ptr<DescribeHybridCloudClusterRuleResponseBodyClusterRule> clusterRule_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
