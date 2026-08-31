// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSETTYPEATTRIBUTECODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETASSETTYPEATTRIBUTECODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetAssetTypeAttributeCodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssetTypeAttributeCodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssetTypeAttributeCodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAssetTypeAttributeCodesResponseBody() = default ;
    GetAssetTypeAttributeCodesResponseBody(const GetAssetTypeAttributeCodesResponseBody &) = default ;
    GetAssetTypeAttributeCodesResponseBody(GetAssetTypeAttributeCodesResponseBody &&) = default ;
    GetAssetTypeAttributeCodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssetTypeAttributeCodesResponseBody() = default ;
    GetAssetTypeAttributeCodesResponseBody& operator=(const GetAssetTypeAttributeCodesResponseBody &) = default ;
    GetAssetTypeAttributeCodesResponseBody& operator=(GetAssetTypeAttributeCodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AttributeCode, attributeCode_);
        DARABONBA_PTR_TO_JSON(AttributeName, attributeName_);
        DARABONBA_PTR_TO_JSON(AttributeSource, attributeSource_);
        DARABONBA_PTR_TO_JSON(AttributeType, attributeType_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EditableIn, editableIn_);
        DARABONBA_PTR_TO_JSON(EnumSourceType, enumSourceType_);
        DARABONBA_PTR_TO_JSON(EnumValues, enumValues_);
        DARABONBA_PTR_TO_JSON(InputMode, inputMode_);
        DARABONBA_PTR_TO_JSON(LinkTarget, linkTarget_);
        DARABONBA_PTR_TO_JSON(MaxLength, maxLength_);
        DARABONBA_PTR_TO_JSON(Required, required_);
        DARABONBA_PTR_TO_JSON(SystemReferenceType, systemReferenceType_);
        DARABONBA_PTR_TO_JSON(ValueType, valueType_);
        DARABONBA_PTR_TO_JSON(VisibleIn, visibleIn_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AttributeCode, attributeCode_);
        DARABONBA_PTR_FROM_JSON(AttributeName, attributeName_);
        DARABONBA_PTR_FROM_JSON(AttributeSource, attributeSource_);
        DARABONBA_PTR_FROM_JSON(AttributeType, attributeType_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EditableIn, editableIn_);
        DARABONBA_PTR_FROM_JSON(EnumSourceType, enumSourceType_);
        DARABONBA_PTR_FROM_JSON(EnumValues, enumValues_);
        DARABONBA_PTR_FROM_JSON(InputMode, inputMode_);
        DARABONBA_PTR_FROM_JSON(LinkTarget, linkTarget_);
        DARABONBA_PTR_FROM_JSON(MaxLength, maxLength_);
        DARABONBA_PTR_FROM_JSON(Required, required_);
        DARABONBA_PTR_FROM_JSON(SystemReferenceType, systemReferenceType_);
        DARABONBA_PTR_FROM_JSON(ValueType, valueType_);
        DARABONBA_PTR_FROM_JSON(VisibleIn, visibleIn_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EnumValues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EnumValues& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, EnumValues& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        EnumValues() = default ;
        EnumValues(const EnumValues &) = default ;
        EnumValues(EnumValues &&) = default ;
        EnumValues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EnumValues() = default ;
        EnumValues& operator=(const EnumValues &) = default ;
        EnumValues& operator=(EnumValues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->value_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline EnumValues& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline EnumValues& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The display name of the option.
        shared_ptr<string> displayName_ {};
        // The option value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->attributeCode_ == nullptr
        && this->attributeName_ == nullptr && this->attributeSource_ == nullptr && this->attributeType_ == nullptr && this->description_ == nullptr && this->editableIn_ == nullptr
        && this->enumSourceType_ == nullptr && this->enumValues_ == nullptr && this->inputMode_ == nullptr && this->linkTarget_ == nullptr && this->maxLength_ == nullptr
        && this->required_ == nullptr && this->systemReferenceType_ == nullptr && this->valueType_ == nullptr && this->visibleIn_ == nullptr; };
      // attributeCode Field Functions 
      bool hasAttributeCode() const { return this->attributeCode_ != nullptr;};
      void deleteAttributeCode() { this->attributeCode_ = nullptr;};
      inline string getAttributeCode() const { DARABONBA_PTR_GET_DEFAULT(attributeCode_, "") };
      inline Data& setAttributeCode(string attributeCode) { DARABONBA_PTR_SET_VALUE(attributeCode_, attributeCode) };


      // attributeName Field Functions 
      bool hasAttributeName() const { return this->attributeName_ != nullptr;};
      void deleteAttributeName() { this->attributeName_ = nullptr;};
      inline string getAttributeName() const { DARABONBA_PTR_GET_DEFAULT(attributeName_, "") };
      inline Data& setAttributeName(string attributeName) { DARABONBA_PTR_SET_VALUE(attributeName_, attributeName) };


      // attributeSource Field Functions 
      bool hasAttributeSource() const { return this->attributeSource_ != nullptr;};
      void deleteAttributeSource() { this->attributeSource_ = nullptr;};
      inline string getAttributeSource() const { DARABONBA_PTR_GET_DEFAULT(attributeSource_, "") };
      inline Data& setAttributeSource(string attributeSource) { DARABONBA_PTR_SET_VALUE(attributeSource_, attributeSource) };


      // attributeType Field Functions 
      bool hasAttributeType() const { return this->attributeType_ != nullptr;};
      void deleteAttributeType() { this->attributeType_ = nullptr;};
      inline string getAttributeType() const { DARABONBA_PTR_GET_DEFAULT(attributeType_, "") };
      inline Data& setAttributeType(string attributeType) { DARABONBA_PTR_SET_VALUE(attributeType_, attributeType) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // editableIn Field Functions 
      bool hasEditableIn() const { return this->editableIn_ != nullptr;};
      void deleteEditableIn() { this->editableIn_ = nullptr;};
      inline const vector<string> & getEditableIn() const { DARABONBA_PTR_GET_CONST(editableIn_, vector<string>) };
      inline vector<string> getEditableIn() { DARABONBA_PTR_GET(editableIn_, vector<string>) };
      inline Data& setEditableIn(const vector<string> & editableIn) { DARABONBA_PTR_SET_VALUE(editableIn_, editableIn) };
      inline Data& setEditableIn(vector<string> && editableIn) { DARABONBA_PTR_SET_RVALUE(editableIn_, editableIn) };


      // enumSourceType Field Functions 
      bool hasEnumSourceType() const { return this->enumSourceType_ != nullptr;};
      void deleteEnumSourceType() { this->enumSourceType_ = nullptr;};
      inline string getEnumSourceType() const { DARABONBA_PTR_GET_DEFAULT(enumSourceType_, "") };
      inline Data& setEnumSourceType(string enumSourceType) { DARABONBA_PTR_SET_VALUE(enumSourceType_, enumSourceType) };


      // enumValues Field Functions 
      bool hasEnumValues() const { return this->enumValues_ != nullptr;};
      void deleteEnumValues() { this->enumValues_ = nullptr;};
      inline const vector<Data::EnumValues> & getEnumValues() const { DARABONBA_PTR_GET_CONST(enumValues_, vector<Data::EnumValues>) };
      inline vector<Data::EnumValues> getEnumValues() { DARABONBA_PTR_GET(enumValues_, vector<Data::EnumValues>) };
      inline Data& setEnumValues(const vector<Data::EnumValues> & enumValues) { DARABONBA_PTR_SET_VALUE(enumValues_, enumValues) };
      inline Data& setEnumValues(vector<Data::EnumValues> && enumValues) { DARABONBA_PTR_SET_RVALUE(enumValues_, enumValues) };


      // inputMode Field Functions 
      bool hasInputMode() const { return this->inputMode_ != nullptr;};
      void deleteInputMode() { this->inputMode_ = nullptr;};
      inline string getInputMode() const { DARABONBA_PTR_GET_DEFAULT(inputMode_, "") };
      inline Data& setInputMode(string inputMode) { DARABONBA_PTR_SET_VALUE(inputMode_, inputMode) };


      // linkTarget Field Functions 
      bool hasLinkTarget() const { return this->linkTarget_ != nullptr;};
      void deleteLinkTarget() { this->linkTarget_ = nullptr;};
      inline string getLinkTarget() const { DARABONBA_PTR_GET_DEFAULT(linkTarget_, "") };
      inline Data& setLinkTarget(string linkTarget) { DARABONBA_PTR_SET_VALUE(linkTarget_, linkTarget) };


      // maxLength Field Functions 
      bool hasMaxLength() const { return this->maxLength_ != nullptr;};
      void deleteMaxLength() { this->maxLength_ = nullptr;};
      inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
      inline Data& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline Data& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      // systemReferenceType Field Functions 
      bool hasSystemReferenceType() const { return this->systemReferenceType_ != nullptr;};
      void deleteSystemReferenceType() { this->systemReferenceType_ = nullptr;};
      inline string getSystemReferenceType() const { DARABONBA_PTR_GET_DEFAULT(systemReferenceType_, "") };
      inline Data& setSystemReferenceType(string systemReferenceType) { DARABONBA_PTR_SET_VALUE(systemReferenceType_, systemReferenceType) };


      // valueType Field Functions 
      bool hasValueType() const { return this->valueType_ != nullptr;};
      void deleteValueType() { this->valueType_ = nullptr;};
      inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
      inline Data& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


      // visibleIn Field Functions 
      bool hasVisibleIn() const { return this->visibleIn_ != nullptr;};
      void deleteVisibleIn() { this->visibleIn_ = nullptr;};
      inline const vector<string> & getVisibleIn() const { DARABONBA_PTR_GET_CONST(visibleIn_, vector<string>) };
      inline vector<string> getVisibleIn() { DARABONBA_PTR_GET(visibleIn_, vector<string>) };
      inline Data& setVisibleIn(const vector<string> & visibleIn) { DARABONBA_PTR_SET_VALUE(visibleIn_, visibleIn) };
      inline Data& setVisibleIn(vector<string> && visibleIn) { DARABONBA_PTR_SET_RVALUE(visibleIn_, visibleIn) };


    protected:
      // The property code (unique identifier).
      shared_ptr<string> attributeCode_ {};
      // The property name (display name).
      shared_ptr<string> attributeName_ {};
      // The property source. Valid values:
      // - SYSTEM: system preset.
      // - CUSTOM: custom.
      shared_ptr<string> attributeSource_ {};
      // The property type. Valid values:
      // - MANAGEMENT: management property.
      // - TECHNICAL: technical property.
      // - BUSINESS: business property.
      shared_ptr<string> attributeType_ {};
      // The property description.
      shared_ptr<string> description_ {};
      // The location where the property can be edited. Valid values:
      // - ASSET: asset catalog.
      // - DEVELOPMENT: development.
      shared_ptr<vector<string>> editableIn_ {};
      // The source of dropdown options. Valid values:
      // - MANUAL: manual input.
      // - SYSTEM_REFERENCE: reference to a system property.
      shared_ptr<string> enumSourceType_ {};
      // The list of dropdown options. This parameter has a value only when EnumSourceType is set to MANUAL.
      shared_ptr<vector<Data::EnumValues>> enumValues_ {};
      // The input mode. Valid values:
      // - CUSTOM_INPUT: custom input.
      // - DROPDOWN_SINGLE: single-select dropdown.
      // - DROPDOWN_MULTI: multi-select dropdown.
      // - HYPERLINK: hyperlink.
      shared_ptr<string> inputMode_ {};
      // The hyperlink navigation method. This parameter has a value only when InputMode is set to HYPERLINK. Valid values:
      // - CURRENT_PAGE: opens in the current page.
      // - NEW_PAGE: opens in a new page.
      shared_ptr<string> linkTarget_ {};
      // The maximum length. This parameter is valid only when ValueType is set to STRING.
      shared_ptr<int32_t> maxLength_ {};
      // Indicates whether the property is required.
      shared_ptr<bool> required_ {};
      // The type of the referenced system property. This parameter has a value only when EnumSourceType is set to SYSTEM_REFERENCE.
      shared_ptr<string> systemReferenceType_ {};
      // The data type of the property value.
      shared_ptr<string> valueType_ {};
      // The location where the property is visible. Valid values:
      // - ASSET: asset catalog.
      // - DEVELOPMENT: development.
      shared_ptr<vector<string>> visibleIn_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAssetTypeAttributeCodesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetAssetTypeAttributeCodesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetAssetTypeAttributeCodesResponseBody::Data>) };
    inline vector<GetAssetTypeAttributeCodesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetAssetTypeAttributeCodesResponseBody::Data>) };
    inline GetAssetTypeAttributeCodesResponseBody& setData(const vector<GetAssetTypeAttributeCodesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAssetTypeAttributeCodesResponseBody& setData(vector<GetAssetTypeAttributeCodesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetAssetTypeAttributeCodesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAssetTypeAttributeCodesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAssetTypeAttributeCodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAssetTypeAttributeCodesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The backend response code.
    shared_ptr<string> code_ {};
    // The list of property definitions.
    shared_ptr<vector<GetAssetTypeAttributeCodesResponseBody::Data>> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The backend exception details.
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
