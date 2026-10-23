// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTOPERATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CsasEdr20241122
{
namespace Models
{
  class DescribeSecurityEventOperationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventOperationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventOperationsResponse, securityEventOperationsResponse_);
    };
    DescribeSecurityEventOperationsResponseBody() = default ;
    DescribeSecurityEventOperationsResponseBody(const DescribeSecurityEventOperationsResponseBody &) = default ;
    DescribeSecurityEventOperationsResponseBody(DescribeSecurityEventOperationsResponseBody &&) = default ;
    DescribeSecurityEventOperationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventOperationsResponseBody() = default ;
    DescribeSecurityEventOperationsResponseBody& operator=(const DescribeSecurityEventOperationsResponseBody &) = default ;
    DescribeSecurityEventOperationsResponseBody& operator=(DescribeSecurityEventOperationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SecurityEventOperationsResponse : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SecurityEventOperationsResponse& obj) { 
        DARABONBA_PTR_TO_JSON(MappingMarkFields, mappingMarkFields_);
        DARABONBA_PTR_TO_JSON(MarkField, markField_);
        DARABONBA_PTR_TO_JSON(MarkFieldsSource, markFieldsSource_);
        DARABONBA_PTR_TO_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_TO_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_TO_JSON(UserCanOperate, userCanOperate_);
      };
      friend void from_json(const Darabonba::Json& j, SecurityEventOperationsResponse& obj) { 
        DARABONBA_PTR_FROM_JSON(MappingMarkFields, mappingMarkFields_);
        DARABONBA_PTR_FROM_JSON(MarkField, markField_);
        DARABONBA_PTR_FROM_JSON(MarkFieldsSource, markFieldsSource_);
        DARABONBA_PTR_FROM_JSON(OperationCode, operationCode_);
        DARABONBA_PTR_FROM_JSON(OperationParams, operationParams_);
        DARABONBA_PTR_FROM_JSON(UserCanOperate, userCanOperate_);
      };
      SecurityEventOperationsResponse() = default ;
      SecurityEventOperationsResponse(const SecurityEventOperationsResponse &) = default ;
      SecurityEventOperationsResponse(SecurityEventOperationsResponse &&) = default ;
      SecurityEventOperationsResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SecurityEventOperationsResponse() = default ;
      SecurityEventOperationsResponse& operator=(const SecurityEventOperationsResponse &) = default ;
      SecurityEventOperationsResponse& operator=(SecurityEventOperationsResponse &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MarkFieldsSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MarkFieldsSource& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_TO_JSON(FiledName, filedName_);
          DARABONBA_PTR_TO_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
        };
        friend void from_json(const Darabonba::Json& j, MarkFieldsSource& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
          DARABONBA_PTR_FROM_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
        };
        MarkFieldsSource() = default ;
        MarkFieldsSource(const MarkFieldsSource &) = default ;
        MarkFieldsSource(MarkFieldsSource &&) = default ;
        MarkFieldsSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MarkFieldsSource() = default ;
        MarkFieldsSource& operator=(const MarkFieldsSource &) = default ;
        MarkFieldsSource& operator=(MarkFieldsSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->filedAliasName_ == nullptr && this->filedName_ == nullptr && this->markMisValue_ == nullptr && this->supportedMisType_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline MarkFieldsSource& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // filedAliasName Field Functions 
        bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
        void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
        inline string getFiledAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
        inline MarkFieldsSource& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


        // filedName Field Functions 
        bool hasFiledName() const { return this->filedName_ != nullptr;};
        void deleteFiledName() { this->filedName_ = nullptr;};
        inline string getFiledName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
        inline MarkFieldsSource& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


        // markMisValue Field Functions 
        bool hasMarkMisValue() const { return this->markMisValue_ != nullptr;};
        void deleteMarkMisValue() { this->markMisValue_ = nullptr;};
        inline string getMarkMisValue() const { DARABONBA_PTR_GET_DEFAULT(markMisValue_, "") };
        inline MarkFieldsSource& setMarkMisValue(string markMisValue) { DARABONBA_PTR_SET_VALUE(markMisValue_, markMisValue) };


        // supportedMisType Field Functions 
        bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
        void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
        inline const vector<string> & getSupportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
        inline vector<string> getSupportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
        inline MarkFieldsSource& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
        inline MarkFieldsSource& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


      protected:
        // The default value of the compatible retained field. The current query implementation of this operation does not assign a value to this field. You should not interpret the example value as a fixed return or default configurations. To obtain the candidate matching values used for whitelisting in the alerting details, read MarkMisValue.
        shared_ptr<string> defaultValue_ {};
        // The display name of the field available for whitelisting, which is rendered and generated by the current alert template based on the language.
        shared_ptr<string> filedAliasName_ {};
        // The field identifier available for whitelisting for the current alert, which is parsed from the alert template. When configuring rules subsequently, you should use the field identifier actually returned in this response.
        shared_ptr<string> filedName_ {};
        // The candidate matching value parsed by the server from the current alert details, which can be used to construct the whitelist rule for the field. It is not the name of the matching operator. The matching method of the actual rule must also be selected in combination with the corresponding SupportedMisType.
        shared_ptr<string> markMisValue_ {};
        // The list of matching operators allowed for the field by the current alert template. When configuring a whitelist rule, the selected operator must belong to the list actually returned for the field in this response. You cannot select it solely based on document examples or the shared enumeration full set.
        shared_ptr<vector<string>> supportedMisType_ {};
      };

      class MarkField : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MarkField& obj) { 
          DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_TO_JSON(FiledName, filedName_);
          DARABONBA_PTR_TO_JSON(MarkMisType, markMisType_);
          DARABONBA_PTR_TO_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_TO_JSON(SupportedMisType, supportedMisType_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, MarkField& obj) { 
          DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
          DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
          DARABONBA_PTR_FROM_JSON(FiledName, filedName_);
          DARABONBA_PTR_FROM_JSON(MarkMisType, markMisType_);
          DARABONBA_PTR_FROM_JSON(MarkMisValue, markMisValue_);
          DARABONBA_PTR_FROM_JSON(SupportedMisType, supportedMisType_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        MarkField() = default ;
        MarkField(const MarkField &) = default ;
        MarkField(MarkField &&) = default ;
        MarkField(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MarkField() = default ;
        MarkField& operator=(const MarkField &) = default ;
        MarkField& operator=(MarkField &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->filedAliasName_ == nullptr && this->filedName_ == nullptr && this->markMisType_ == nullptr && this->markMisValue_ == nullptr && this->supportedMisType_ == nullptr
        && this->uuid_ == nullptr; };
        // defaultValue Field Functions 
        bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
        void deleteDefaultValue() { this->defaultValue_ = nullptr;};
        inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
        inline MarkField& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


        // filedAliasName Field Functions 
        bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
        void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
        inline string getFiledAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
        inline MarkField& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


        // filedName Field Functions 
        bool hasFiledName() const { return this->filedName_ != nullptr;};
        void deleteFiledName() { this->filedName_ = nullptr;};
        inline string getFiledName() const { DARABONBA_PTR_GET_DEFAULT(filedName_, "") };
        inline MarkField& setFiledName(string filedName) { DARABONBA_PTR_SET_VALUE(filedName_, filedName) };


        // markMisType Field Functions 
        bool hasMarkMisType() const { return this->markMisType_ != nullptr;};
        void deleteMarkMisType() { this->markMisType_ = nullptr;};
        inline string getMarkMisType() const { DARABONBA_PTR_GET_DEFAULT(markMisType_, "") };
        inline MarkField& setMarkMisType(string markMisType) { DARABONBA_PTR_SET_VALUE(markMisType_, markMisType) };


        // markMisValue Field Functions 
        bool hasMarkMisValue() const { return this->markMisValue_ != nullptr;};
        void deleteMarkMisValue() { this->markMisValue_ = nullptr;};
        inline string getMarkMisValue() const { DARABONBA_PTR_GET_DEFAULT(markMisValue_, "") };
        inline MarkField& setMarkMisValue(string markMisValue) { DARABONBA_PTR_SET_VALUE(markMisValue_, markMisValue) };


        // supportedMisType Field Functions 
        bool hasSupportedMisType() const { return this->supportedMisType_ != nullptr;};
        void deleteSupportedMisType() { this->supportedMisType_ = nullptr;};
        inline const vector<string> & getSupportedMisType() const { DARABONBA_PTR_GET_CONST(supportedMisType_, vector<string>) };
        inline vector<string> getSupportedMisType() { DARABONBA_PTR_GET(supportedMisType_, vector<string>) };
        inline MarkField& setSupportedMisType(const vector<string> & supportedMisType) { DARABONBA_PTR_SET_VALUE(supportedMisType_, supportedMisType) };
        inline MarkField& setSupportedMisType(vector<string> && supportedMisType) { DARABONBA_PTR_SET_RVALUE(supportedMisType_, supportedMisType) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline MarkField& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        // The default value of the compatible retained field. The current query implementation of this operation does not assign a value to this field. You should not interpret the example value as a fixed return or default configurations. To obtain the actual matching value of a saved rule, read MarkMisValue.
        shared_ptr<string> defaultValue_ {};
        // The display name of the configured whitelist rule field. The server generates it based on the current alert template and language. If the template information is missing, it is returned based on the field rendering logic.
        shared_ptr<string> filedAliasName_ {};
        // The field identifier of the configured whitelist rule, which is derived from the saved rule field and is not the field display name.
        shared_ptr<string> filedName_ {};
        // The matching operator selected for the configured whitelist rule, which is not wildcard text. New saved rules should use the operators returned in MarkFieldsSource.SupportedMisType for the corresponding field. You should not treat the examples or the shared enumeration full set as the set supported by all fields.
        shared_ptr<string> markMisType_ {};
        // The matching value saved for the configured whitelist rule, which should be interpreted together with the FiledName and MarkMisType of the same rule. It is not the name of the matching operator.
        shared_ptr<string> markMisValue_ {};
        // The list of matching operators returned for the configured rule field. If a corresponding alert template exists, the template configuration is used. If the template field is missing, it falls back to the shared operator set. When adding or modifying a rule, you must still use the operators allowed for the field in the current MarkFieldsSource.
        shared_ptr<vector<string>> supportedMisType_ {};
        // **[Deprecated]** The effective scope of the rule should be understood in combination with the rule and its assetScope configuration. Do not use this field to replace assetScope.
        shared_ptr<string> uuid_ {};
      };

      class MappingMarkFields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MappingMarkFields& obj) { 
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(FillType, fillType_);
          DARABONBA_PTR_TO_JSON(FilterExpression, filterExpression_);
          DARABONBA_PTR_TO_JSON(MappingName, mappingName_);
          DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_TO_JSON(MinLength, minLength_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Required, required_);
          DARABONBA_PTR_TO_JSON(ShowName, showName_);
          DARABONBA_PTR_TO_JSON(ShowValue, showValue_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, MappingMarkFields& obj) { 
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(FillType, fillType_);
          DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpression_);
          DARABONBA_PTR_FROM_JSON(MappingName, mappingName_);
          DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
          DARABONBA_PTR_FROM_JSON(MinLength, minLength_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Required, required_);
          DARABONBA_PTR_FROM_JSON(ShowName, showName_);
          DARABONBA_PTR_FROM_JSON(ShowValue, showValue_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        MappingMarkFields() = default ;
        MappingMarkFields(const MappingMarkFields &) = default ;
        MappingMarkFields(MappingMarkFields &&) = default ;
        MappingMarkFields(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MappingMarkFields() = default ;
        MappingMarkFields& operator=(const MappingMarkFields &) = default ;
        MappingMarkFields& operator=(MappingMarkFields &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->fillType_ == nullptr && this->filterExpression_ == nullptr && this->mappingName_ == nullptr && this->maxLength_ == nullptr && this->minLength_ == nullptr
        && this->name_ == nullptr && this->required_ == nullptr && this->showName_ == nullptr && this->showValue_ == nullptr && this->value_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline MappingMarkFields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // fillType Field Functions 
        bool hasFillType() const { return this->fillType_ != nullptr;};
        void deleteFillType() { this->fillType_ = nullptr;};
        inline string getFillType() const { DARABONBA_PTR_GET_DEFAULT(fillType_, "") };
        inline MappingMarkFields& setFillType(string fillType) { DARABONBA_PTR_SET_VALUE(fillType_, fillType) };


        // filterExpression Field Functions 
        bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
        void deleteFilterExpression() { this->filterExpression_ = nullptr;};
        inline string getFilterExpression() const { DARABONBA_PTR_GET_DEFAULT(filterExpression_, "") };
        inline MappingMarkFields& setFilterExpression(string filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };


        // mappingName Field Functions 
        bool hasMappingName() const { return this->mappingName_ != nullptr;};
        void deleteMappingName() { this->mappingName_ = nullptr;};
        inline string getMappingName() const { DARABONBA_PTR_GET_DEFAULT(mappingName_, "") };
        inline MappingMarkFields& setMappingName(string mappingName) { DARABONBA_PTR_SET_VALUE(mappingName_, mappingName) };


        // maxLength Field Functions 
        bool hasMaxLength() const { return this->maxLength_ != nullptr;};
        void deleteMaxLength() { this->maxLength_ = nullptr;};
        inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
        inline MappingMarkFields& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


        // minLength Field Functions 
        bool hasMinLength() const { return this->minLength_ != nullptr;};
        void deleteMinLength() { this->minLength_ = nullptr;};
        inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
        inline MappingMarkFields& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline MappingMarkFields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline MappingMarkFields& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


        // showName Field Functions 
        bool hasShowName() const { return this->showName_ != nullptr;};
        void deleteShowName() { this->showName_ = nullptr;};
        inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
        inline MappingMarkFields& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


        // showValue Field Functions 
        bool hasShowValue() const { return this->showValue_ != nullptr;};
        void deleteShowValue() { this->showValue_ = nullptr;};
        inline string getShowValue() const { DARABONBA_PTR_GET_DEFAULT(showValue_, "") };
        inline MappingMarkFields& setShowValue(string showValue) { DARABONBA_PTR_SET_VALUE(showValue_, showValue) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline MappingMarkFields& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The description of the precise defense whitelist handling.
        shared_ptr<string> description_ {};
        // Specifies whether the current whitelist field value can be changed. Valid values:
        // - **CUSTOM**: The value can be changed.
        // - **SYSTEM**: The value cannot be changed.
        shared_ptr<string> fillType_ {};
        // The generic compatibility filter expression field. The current query implementation does not assign a value to it, and the current query pipeline does not populate the MappingMarkFields elements. You should not use this field to infer the actual filter conditions of the operation.
        shared_ptr<string> filterExpression_ {};
        // The generic compatibility field that indicates the mapping name of the whitelist interaction configuration. The current query implementation does not assign a value to it, and the current query pipeline does not populate the MappingMarkFields elements.
        shared_ptr<string> mappingName_ {};
        // The maximum length of the content filled in the precise defense whitelist handling information.
        shared_ptr<int32_t> maxLength_ {};
        // The minimum length of the content filled in the precise defense whitelist handling information.
        shared_ptr<int32_t> minLength_ {};
        // The name of the field that supports whitelisting in precise defense.
        shared_ptr<string> name_ {};
        // Specifies whether the field is required. Valid values:
        // - **true**: Required.
        // - **false**: Optional.
        shared_ptr<bool> required_ {};
        // The display name of the whitelist field for which whitelist rules can be configured.
        shared_ptr<string> showName_ {};
        // The display text of the generic mapping field value, which is different from the field display name indicated by ShowName. The current query pipeline does not populate the MappingMarkFields elements.
        shared_ptr<string> showValue_ {};
        // The value of the field that supports whitelisting in precise defense.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->mappingMarkFields_ == nullptr
        && this->markField_ == nullptr && this->markFieldsSource_ == nullptr && this->operationCode_ == nullptr && this->operationParams_ == nullptr && this->userCanOperate_ == nullptr; };
      // mappingMarkFields Field Functions 
      bool hasMappingMarkFields() const { return this->mappingMarkFields_ != nullptr;};
      void deleteMappingMarkFields() { this->mappingMarkFields_ = nullptr;};
      inline const vector<SecurityEventOperationsResponse::MappingMarkFields> & getMappingMarkFields() const { DARABONBA_PTR_GET_CONST(mappingMarkFields_, vector<SecurityEventOperationsResponse::MappingMarkFields>) };
      inline vector<SecurityEventOperationsResponse::MappingMarkFields> getMappingMarkFields() { DARABONBA_PTR_GET(mappingMarkFields_, vector<SecurityEventOperationsResponse::MappingMarkFields>) };
      inline SecurityEventOperationsResponse& setMappingMarkFields(const vector<SecurityEventOperationsResponse::MappingMarkFields> & mappingMarkFields) { DARABONBA_PTR_SET_VALUE(mappingMarkFields_, mappingMarkFields) };
      inline SecurityEventOperationsResponse& setMappingMarkFields(vector<SecurityEventOperationsResponse::MappingMarkFields> && mappingMarkFields) { DARABONBA_PTR_SET_RVALUE(mappingMarkFields_, mappingMarkFields) };


      // markField Field Functions 
      bool hasMarkField() const { return this->markField_ != nullptr;};
      void deleteMarkField() { this->markField_ = nullptr;};
      inline const vector<SecurityEventOperationsResponse::MarkField> & getMarkField() const { DARABONBA_PTR_GET_CONST(markField_, vector<SecurityEventOperationsResponse::MarkField>) };
      inline vector<SecurityEventOperationsResponse::MarkField> getMarkField() { DARABONBA_PTR_GET(markField_, vector<SecurityEventOperationsResponse::MarkField>) };
      inline SecurityEventOperationsResponse& setMarkField(const vector<SecurityEventOperationsResponse::MarkField> & markField) { DARABONBA_PTR_SET_VALUE(markField_, markField) };
      inline SecurityEventOperationsResponse& setMarkField(vector<SecurityEventOperationsResponse::MarkField> && markField) { DARABONBA_PTR_SET_RVALUE(markField_, markField) };


      // markFieldsSource Field Functions 
      bool hasMarkFieldsSource() const { return this->markFieldsSource_ != nullptr;};
      void deleteMarkFieldsSource() { this->markFieldsSource_ = nullptr;};
      inline const vector<SecurityEventOperationsResponse::MarkFieldsSource> & getMarkFieldsSource() const { DARABONBA_PTR_GET_CONST(markFieldsSource_, vector<SecurityEventOperationsResponse::MarkFieldsSource>) };
      inline vector<SecurityEventOperationsResponse::MarkFieldsSource> getMarkFieldsSource() { DARABONBA_PTR_GET(markFieldsSource_, vector<SecurityEventOperationsResponse::MarkFieldsSource>) };
      inline SecurityEventOperationsResponse& setMarkFieldsSource(const vector<SecurityEventOperationsResponse::MarkFieldsSource> & markFieldsSource) { DARABONBA_PTR_SET_VALUE(markFieldsSource_, markFieldsSource) };
      inline SecurityEventOperationsResponse& setMarkFieldsSource(vector<SecurityEventOperationsResponse::MarkFieldsSource> && markFieldsSource) { DARABONBA_PTR_SET_RVALUE(markFieldsSource_, markFieldsSource) };


      // operationCode Field Functions 
      bool hasOperationCode() const { return this->operationCode_ != nullptr;};
      void deleteOperationCode() { this->operationCode_ = nullptr;};
      inline string getOperationCode() const { DARABONBA_PTR_GET_DEFAULT(operationCode_, "") };
      inline SecurityEventOperationsResponse& setOperationCode(string operationCode) { DARABONBA_PTR_SET_VALUE(operationCode_, operationCode) };


      // operationParams Field Functions 
      bool hasOperationParams() const { return this->operationParams_ != nullptr;};
      void deleteOperationParams() { this->operationParams_ = nullptr;};
      inline string getOperationParams() const { DARABONBA_PTR_GET_DEFAULT(operationParams_, "") };
      inline SecurityEventOperationsResponse& setOperationParams(string operationParams) { DARABONBA_PTR_SET_VALUE(operationParams_, operationParams) };


      // userCanOperate Field Functions 
      bool hasUserCanOperate() const { return this->userCanOperate_ != nullptr;};
      void deleteUserCanOperate() { this->userCanOperate_ = nullptr;};
      inline bool getUserCanOperate() const { DARABONBA_PTR_GET_DEFAULT(userCanOperate_, false) };
      inline SecurityEventOperationsResponse& setUserCanOperate(bool userCanOperate) { DARABONBA_PTR_SET_VALUE(userCanOperate_, userCanOperate) };


    protected:
      // The list of generic compatibility mapping fields for precise defense whitelisting. Only the generic operation branches with the accurate_defense_mark_miss prefix populate this list. The current security operation set does not include such operations, so the current query pipeline does not populate its elements. Its subfields and examples are only used to retain the generic structure definition and do not represent the currently supported whitelisting capabilities.
      shared_ptr<vector<SecurityEventOperationsResponse::MappingMarkFields>> mappingMarkFields_ {};
      // The list of configured whitelist rule information corresponding to the current alert. The current implementation queries and populates this list in the advance_mark_mis_info and defense_mark_mis_info operation items. It can be empty when no matching rules exist.
      shared_ptr<vector<SecurityEventOperationsResponse::MarkField>> markField_ {};
      // The list of fields available for whitelisting and their matching capabilities for the current alert. The current implementation queries and populates this list in the advance_mark_mis_info and defense_mark_mis_info operation items. The specific fields, candidate matching values, and SupportedMisType are generated based on the current alert template and details, and are not a unified and fixed set for all endpoints or alerts.
      shared_ptr<vector<SecurityEventOperationsResponse::MarkFieldsSource>> markFieldsSource_ {};
      // The code of the endpoint alert handling operation. The current security operation set is as follows:
      // 
      // - `advance_mark_mis_info`: Advanced whitelisting.
      // - `defense_mark_mis_info`: Precise defense whitelisting.
      // - `mark_mis_info`: Standard whitelisting.
      // - `rm_mark_mis_info`: Cancel standard whitelisting.
      // - `rm_defense_mark_mis_info`: Cancel precise defense whitelisting.
      // - `ignore`: Ignore.
      // - `manual_handled`: Manually handled.
      // - `cancle_manual`: Cancel manually handled.
      // 
      // This list is the upper limit of the security scope and does not mean that every alert returns all operations. The actual returned results are also affected by feature switches, canary releases, dynamic allowlists, alert templates, statuses, and filter conditions. You should determine whether execution is allowed based on UserCanOperate. cancle_manual is the historical spelling used by the operation and must remain unchanged when called.
      shared_ptr<string> operationCode_ {};
      // The configuration parameters of the current handling operation, represented as a JSON string. The server returns it after querying based on the alert operation configuration. If no parameter query is configured, this field can be empty. When initiating a subsequent response, you should use it in combination with the corresponding OperationCode and the parameter requirements of the response operation.
      // 
      // The example only demonstrates the string format of an empty JSON object. It does not mean that an empty object is fixedly returned when no query is configured, nor does it represent the mandatory requirements for a response request.
      shared_ptr<string> operationParams_ {};
      // Specifies whether the version permissions of the current account and endpoint allow the execution of the operation. It is determined based on the sales permissions corresponding to SASE-EDR. Valid values:
      // 
      // - `true`: Allowed.
      // - `false`: Not allowed.
      // 
      // You should use it in combination with the actually returned operation items. This flag does not guarantee that the subsequent response will definitely succeed.
      shared_ptr<bool> userCanOperate_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->securityEventOperationsResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecurityEventOperationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventOperationsResponse Field Functions 
    bool hasSecurityEventOperationsResponse() const { return this->securityEventOperationsResponse_ != nullptr;};
    void deleteSecurityEventOperationsResponse() { this->securityEventOperationsResponse_ = nullptr;};
    inline const vector<DescribeSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> & getSecurityEventOperationsResponse() const { DARABONBA_PTR_GET_CONST(securityEventOperationsResponse_, vector<DescribeSecurityEventOperationsResponseBody::SecurityEventOperationsResponse>) };
    inline vector<DescribeSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> getSecurityEventOperationsResponse() { DARABONBA_PTR_GET(securityEventOperationsResponse_, vector<DescribeSecurityEventOperationsResponseBody::SecurityEventOperationsResponse>) };
    inline DescribeSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(const vector<DescribeSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> & securityEventOperationsResponse) { DARABONBA_PTR_SET_VALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };
    inline DescribeSecurityEventOperationsResponseBody& setSecurityEventOperationsResponse(vector<DescribeSecurityEventOperationsResponseBody::SecurityEventOperationsResponse> && securityEventOperationsResponse) { DARABONBA_PTR_SET_RVALUE(securityEventOperationsResponse_, securityEventOperationsResponse) };


  protected:
    // The ID of the request. It is a unique identifier generated by Alibaba Cloud for the request and can be used for troubleshooting.
    shared_ptr<string> requestId_ {};
    // The list of handling operations corresponding to the current endpoint alert.
    shared_ptr<vector<DescribeSecurityEventOperationsResponseBody::SecurityEventOperationsResponse>> securityEventOperationsResponse_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CsasEdr20241122
#endif
