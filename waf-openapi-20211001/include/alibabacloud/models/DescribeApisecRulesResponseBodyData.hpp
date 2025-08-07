// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeApisecRulesResponseBodyData() = default ;
    DescribeApisecRulesResponseBodyData(const DescribeApisecRulesResponseBodyData &) = default ;
    DescribeApisecRulesResponseBodyData(DescribeApisecRulesResponseBodyData &&) = default ;
    DescribeApisecRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecRulesResponseBodyData() = default ;
    DescribeApisecRulesResponseBodyData& operator=(const DescribeApisecRulesResponseBodyData &) = default ;
    DescribeApisecRulesResponseBodyData& operator=(DescribeApisecRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->rule_ != nullptr && this->status_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeApisecRulesResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline DescribeApisecRulesResponseBodyData& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline DescribeApisecRulesResponseBodyData& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeApisecRulesResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline DescribeApisecRulesResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The ID of the policy.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The details of the policy. The value is a string that consists of multiple parameters in the JSON format.
    std::shared_ptr<string> rule_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    std::shared_ptr<int64_t> status_ = nullptr;
    // The type of the policy. Valid values:
    // 
    // *   **risk**: risk detection
    // *   **event**: security event
    // *   **sensitive_word**: sensitive data
    // *   **auth_flag**: authentication credential
    // *   **api_tag**: business purpose
    // *   **desensitization**: data masking
    // *   **whitelist**: whitelist
    // *   **recognition**: API recognition
    // *   **offline_api**: lifecycle management
    std::shared_ptr<string> type_ = nullptr;
    // The time when the policy was updated. The value is a UNIX timestamp displayed in UTC. Unit: seconds.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
