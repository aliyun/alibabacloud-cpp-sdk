// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateMaliciousFileWhitelistConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    CreateMaliciousFileWhitelistConfigRequest() = default ;
    CreateMaliciousFileWhitelistConfigRequest(const CreateMaliciousFileWhitelistConfigRequest &) = default ;
    CreateMaliciousFileWhitelistConfigRequest(CreateMaliciousFileWhitelistConfigRequest &&) = default ;
    CreateMaliciousFileWhitelistConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaliciousFileWhitelistConfigRequest() = default ;
    CreateMaliciousFileWhitelistConfigRequest& operator=(const CreateMaliciousFileWhitelistConfigRequest &) = default ;
    CreateMaliciousFileWhitelistConfigRequest& operator=(CreateMaliciousFileWhitelistConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && this->field_ == nullptr && this->fieldValue_ == nullptr && this->operator_ == nullptr && this->remark_ == nullptr && this->source_ == nullptr
        && this->targetType_ == nullptr && this->targetValue_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline CreateMaliciousFileWhitelistConfigRequest& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // Alert name:
    // - ALL: All alerts
    shared_ptr<string> eventName_ {};
    // Field used for whitelist in sensitive file alerts.
    shared_ptr<string> field_ {};
    // Expected value of the field to be whitelisted.
    shared_ptr<string> fieldValue_ {};
    // Rule judgment operator:
    // - strEqual: String equals
    shared_ptr<string> operator_ {};
    // Remarks.
    shared_ptr<string> remark_ {};
    // Business source:
    // - agentless: Agentless detection
    shared_ptr<string> source_ {};
    // Effective target type:
    // - ALL: All assets
    // - SELECTION_KEY: Assets selected via the asset selection component
    shared_ptr<string> targetType_ {};
    // Target effective scope:
    // - ALL: All assets
    // - Other: Key of the asset range selected by the asset selection component
    shared_ptr<string> targetValue_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
