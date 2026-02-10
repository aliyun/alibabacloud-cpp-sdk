// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHUPDATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHUPDATEMALICIOUSFILEWHITELISTCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class BatchUpdateMaliciousFileWhitelistConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchUpdateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
    };
    friend void from_json(const Darabonba::Json& j, BatchUpdateMaliciousFileWhitelistConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
    };
    BatchUpdateMaliciousFileWhitelistConfigRequest() = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest(const BatchUpdateMaliciousFileWhitelistConfigRequest &) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest(BatchUpdateMaliciousFileWhitelistConfigRequest &&) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchUpdateMaliciousFileWhitelistConfigRequest() = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest& operator=(const BatchUpdateMaliciousFileWhitelistConfigRequest &) = default ;
    BatchUpdateMaliciousFileWhitelistConfigRequest& operator=(BatchUpdateMaliciousFileWhitelistConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(EventName, eventName_);
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(EventName, eventName_);
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
      };
      ConfigList() = default ;
      ConfigList(const ConfigList &) = default ;
      ConfigList(ConfigList &&) = default ;
      ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigList() = default ;
      ConfigList& operator=(const ConfigList &) = default ;
      ConfigList& operator=(ConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->configId_ == nullptr
        && this->eventName_ == nullptr && this->field_ == nullptr && this->fieldValue_ == nullptr && this->operator_ == nullptr && this->source_ == nullptr
        && this->targetType_ == nullptr && this->targetValue_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline ConfigList& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // eventName Field Functions 
      bool hasEventName() const { return this->eventName_ != nullptr;};
      void deleteEventName() { this->eventName_ = nullptr;};
      inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
      inline ConfigList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline ConfigList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // fieldValue Field Functions 
      bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
      void deleteFieldValue() { this->fieldValue_ = nullptr;};
      inline string getFieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
      inline ConfigList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline ConfigList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline ConfigList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline ConfigList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // targetValue Field Functions 
      bool hasTargetValue() const { return this->targetValue_ != nullptr;};
      void deleteTargetValue() { this->targetValue_ = nullptr;};
      inline string getTargetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
      inline ConfigList& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


    protected:
      // The ID of the whitelist rule. If you do not specify this parameter, a whitelist rule is created.
      shared_ptr<int64_t> configId_ {};
      // The name of the alert.
      // 
      // *   Set the value to **ALL**, which indicates all alert types.
      shared_ptr<string> eventName_ {};
      // The field that you want to use in the whitelist rule.
      shared_ptr<string> field_ {};
      // The value of the field that you want to use in the whitelist rule.
      shared_ptr<string> fieldValue_ {};
      // The logical operator that you want to use in the whitelist rule.
      // 
      // *   Set the value to strEqual, which indicates the equality operator (=).
      shared_ptr<string> operator_ {};
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

    virtual bool empty() const override { return this->configList_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<BatchUpdateMaliciousFileWhitelistConfigRequest::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<BatchUpdateMaliciousFileWhitelistConfigRequest::ConfigList>) };
    inline vector<BatchUpdateMaliciousFileWhitelistConfigRequest::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<BatchUpdateMaliciousFileWhitelistConfigRequest::ConfigList>) };
    inline BatchUpdateMaliciousFileWhitelistConfigRequest& setConfigList(const vector<BatchUpdateMaliciousFileWhitelistConfigRequest::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline BatchUpdateMaliciousFileWhitelistConfigRequest& setConfigList(vector<BatchUpdateMaliciousFileWhitelistConfigRequest::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


  protected:
    // The whitelist rules.
    shared_ptr<vector<BatchUpdateMaliciousFileWhitelistConfigRequest::ConfigList>> configList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
