// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHAGGREGATECONFIGRULETOCOMPLIANCEPACKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ATTACHAGGREGATECONFIGRULETOCOMPLIANCEPACKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class AttachAggregateConfigRuleToCompliancePackResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachAggregateConfigRuleToCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleResult, operateRuleResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachAggregateConfigRuleToCompliancePackResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleResult, operateRuleResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AttachAggregateConfigRuleToCompliancePackResponseBody() = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBody(const AttachAggregateConfigRuleToCompliancePackResponseBody &) = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBody(AttachAggregateConfigRuleToCompliancePackResponseBody &&) = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachAggregateConfigRuleToCompliancePackResponseBody() = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBody& operator=(const AttachAggregateConfigRuleToCompliancePackResponseBody &) = default ;
    AttachAggregateConfigRuleToCompliancePackResponseBody& operator=(AttachAggregateConfigRuleToCompliancePackResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // operateRuleResult Field Functions 
    bool hasOperateRuleResult() const { return this->operateRuleResult_ != nullptr;};
    void deleteOperateRuleResult() { this->operateRuleResult_ = nullptr;};
    inline const AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult & operateRuleResult() const { DARABONBA_PTR_GET_CONST(operateRuleResult_, AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult) };
    inline AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult operateRuleResult() { DARABONBA_PTR_GET(operateRuleResult_, AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult) };
    inline AttachAggregateConfigRuleToCompliancePackResponseBody& setOperateRuleResult(const AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult & operateRuleResult) { DARABONBA_PTR_SET_VALUE(operateRuleResult_, operateRuleResult) };
    inline AttachAggregateConfigRuleToCompliancePackResponseBody& setOperateRuleResult(AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult && operateRuleResult) { DARABONBA_PTR_SET_RVALUE(operateRuleResult_, operateRuleResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AttachAggregateConfigRuleToCompliancePackResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The results of the operations to add one or more rules.
    std::shared_ptr<AttachAggregateConfigRuleToCompliancePackResponseBodyOperateRuleResult> operateRuleResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
