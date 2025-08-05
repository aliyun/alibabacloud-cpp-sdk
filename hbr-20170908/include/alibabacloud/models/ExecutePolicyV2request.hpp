// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEPOLICYV2REQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEPOLICYV2REQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class ExecutePolicyV2Request : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecutePolicyV2Request& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ExecutePolicyV2Request& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    ExecutePolicyV2Request() = default ;
    ExecutePolicyV2Request(const ExecutePolicyV2Request &) = default ;
    ExecutePolicyV2Request(ExecutePolicyV2Request &&) = default ;
    ExecutePolicyV2Request(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecutePolicyV2Request() = default ;
    ExecutePolicyV2Request& operator=(const ExecutePolicyV2Request &) = default ;
    ExecutePolicyV2Request& operator=(ExecutePolicyV2Request &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSourceId_ != nullptr
        && this->policyId_ != nullptr && this->ruleId_ != nullptr && this->sourceType_ != nullptr; };
    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline string dataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, "") };
    inline ExecutePolicyV2Request& setDataSourceId(string dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline ExecutePolicyV2Request& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline ExecutePolicyV2Request& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ExecutePolicyV2Request& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // Data source ID.
    std::shared_ptr<string> dataSourceId_ = nullptr;
    // Policy ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // Rule ID, limited to executing rules of **RuleType** **BACKUP**.
    // 
    // This parameter is required.
    std::shared_ptr<string> ruleId_ = nullptr;
    // Data source type, with the value range as follows:
    // 
    // - **UDM_ECS**: Represents ECS full machine backup.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
