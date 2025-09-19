// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEMALICIOUSFILEWHITELISTCONFIGREQUESTCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEMALICIOUSFILEWHITELISTCONFIGREQUESTCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BatchUpdateMaliciousFileWhitelistConfigRequestConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    BatchUpdateMaliciousFileWhitelistConfigRequestConfigList() = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequestConfigList(const BatchUpdateMaliciousFileWhitelistConfigRequestConfigList &) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequestConfigList(BatchUpdateMaliciousFileWhitelistConfigRequestConfigList &&) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequestConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateMaliciousFileWhitelistConfigRequestConfigList() = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& operator=(const BatchUpdateMaliciousFileWhitelistConfigRequestConfigList &) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& operator=(BatchUpdateMaliciousFileWhitelistConfigRequestConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configId_ != nullptr
        && this->eventName_ != nullptr && this->field_ != nullptr && this->fieldValue_ != nullptr && this->operator_ != nullptr && this->source_ != nullptr
        && this->targetType_ != nullptr && this->targetValue_ != nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t configId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline BatchUpdateMaliciousFileWhitelistConfigRequestConfigList& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The ID of the whitelist rule. If you do not specify this parameter, a whitelist rule is created.
    std::shared_ptr<int64_t> configId_ = nullptr;
    // The name of the alert.
    // 
    // *   Set the value to **ALL**, which indicates all alert types.
    std::shared_ptr<string> eventName_ = nullptr;
    // The field that you want to use in the whitelist rule.
    std::shared_ptr<string> field_ = nullptr;
    // The value of the field that you want to use in the whitelist rule.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The logical operator that you want to use in the whitelist rule.
    // 
    // *   Set the value to strEqual, which indicates the equality operator (=).
    std::shared_ptr<string> operator_ = nullptr;
    // The feature to which this operation belongs.
    // 
    // *   Set the value to agentless, which indicates the agentless detection feature.
    std::shared_ptr<string> source_ = nullptr;
    // The type of the assets on which you want the whitelist rule to take effect. Valid values:
    // 
    // *   ALL: all assets
    // *   SELECTION_KEY: selected assets
    std::shared_ptr<string> targetType_ = nullptr;
    // The assets on which you want the whitelist rule to take effect. Valid values:
    // 
    // *   ALL: all assets
    // *   Others: selected assets
    std::shared_ptr<string> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
