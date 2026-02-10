// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class UpdateMaliciousFileWhitelistConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    UpdateMaliciousFileWhitelistConfigRequest() = default ;
    UpdateMaliciousFileWhitelistConfigRequest(const UpdateMaliciousFileWhitelistConfigRequest &) = default ;
    UpdateMaliciousFileWhitelistConfigRequest(UpdateMaliciousFileWhitelistConfigRequest &&) = default ;
    UpdateMaliciousFileWhitelistConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMaliciousFileWhitelistConfigRequest() = default ;
    UpdateMaliciousFileWhitelistConfigRequest& operator=(const UpdateMaliciousFileWhitelistConfigRequest &) = default ;
    UpdateMaliciousFileWhitelistConfigRequest& operator=(UpdateMaliciousFileWhitelistConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->configId_ == nullptr
        && this->eventName_ == nullptr && this->field_ == nullptr && this->fieldValue_ == nullptr && this->operator_ == nullptr && this->remark_ == nullptr
        && this->source_ == nullptr && this->targetType_ == nullptr && this->targetValue_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateMaliciousFileWhitelistConfigRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline UpdateMaliciousFileWhitelistConfigRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The ID of the whitelist rule. If you do not specify this parameter, a whitelist rule is created.
    shared_ptr<int64_t> configId_ {};
    // The name of the alert.
    // 
    // *   Set the value to ALL, which indicates all alert types.
    shared_ptr<string> eventName_ {};
    // The field that you want to use in the whitelist rule.
    shared_ptr<string> field_ {};
    // The value of the field that you want to use in the whitelist rule.
    shared_ptr<string> fieldValue_ {};
    // The logical operator that you want to use in the whitelist rule.
    // 
    // *   Set the value to strEqual, which indicates the equality operator (=).
    shared_ptr<string> operator_ {};
    // Remark.
    shared_ptr<string> remark_ {};
    // The feature to which this operation belongs.
    // 
    // *   Set the value to agentless, which indicates the agentless detection feature.
    shared_ptr<string> source_ {};
    // The type of the assets on which you want the whitelist rule to take effect. Valid values:
    // 
    // *   ALL: all assets
    // *   SELECTION_KEY: selected assets
    shared_ptr<string> targetType_ {};
    // The assets on which you want the whitelist rule to take effect. Valid values:
    // 
    // *   ALL: all assets
    // *   Others: selected assets
    shared_ptr<string> targetValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
