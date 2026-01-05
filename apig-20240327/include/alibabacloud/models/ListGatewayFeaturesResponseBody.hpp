// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYFEATURESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewayFeaturesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewayFeaturesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewayFeaturesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListGatewayFeaturesResponseBody() = default ;
    ListGatewayFeaturesResponseBody(const ListGatewayFeaturesResponseBody &) = default ;
    ListGatewayFeaturesResponseBody(ListGatewayFeaturesResponseBody &&) = default ;
    ListGatewayFeaturesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewayFeaturesResponseBody() = default ;
    ListGatewayFeaturesResponseBody& operator=(const ListGatewayFeaturesResponseBody &) = default ;
    ListGatewayFeaturesResponseBody& operator=(ListGatewayFeaturesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(items, items_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(items, items_);
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
      class Items : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Items& obj) { 
          DARABONBA_PTR_TO_JSON(definition, definition_);
          DARABONBA_PTR_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Items& obj) { 
          DARABONBA_PTR_FROM_JSON(definition, definition_);
          DARABONBA_PTR_FROM_JSON(value, value_);
        };
        Items() = default ;
        Items(const Items &) = default ;
        Items(Items &&) = default ;
        Items(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Items() = default ;
        Items& operator=(const Items &) = default ;
        Items& operator=(Items &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Definition : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Definition& obj) { 
            DARABONBA_PTR_TO_JSON(defaultValue, defaultValue_);
            DARABONBA_PTR_TO_JSON(description, description_);
            DARABONBA_PTR_TO_JSON(displayName, displayName_);
            DARABONBA_PTR_TO_JSON(group, group_);
            DARABONBA_PTR_TO_JSON(inputType, inputType_);
            DARABONBA_PTR_TO_JSON(maxLength, maxLength_);
            DARABONBA_PTR_TO_JSON(maxValue, maxValue_);
            DARABONBA_PTR_TO_JSON(minLength, minLength_);
            DARABONBA_PTR_TO_JSON(minValue, minValue_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_PTR_TO_JSON(readOnly, readOnly_);
            DARABONBA_PTR_TO_JSON(regex, regex_);
            DARABONBA_PTR_TO_JSON(valueOptions, valueOptions_);
            DARABONBA_PTR_TO_JSON(valueType, valueType_);
            DARABONBA_PTR_TO_JSON(valueUnit, valueUnit_);
          };
          friend void from_json(const Darabonba::Json& j, Definition& obj) { 
            DARABONBA_PTR_FROM_JSON(defaultValue, defaultValue_);
            DARABONBA_PTR_FROM_JSON(description, description_);
            DARABONBA_PTR_FROM_JSON(displayName, displayName_);
            DARABONBA_PTR_FROM_JSON(group, group_);
            DARABONBA_PTR_FROM_JSON(inputType, inputType_);
            DARABONBA_PTR_FROM_JSON(maxLength, maxLength_);
            DARABONBA_PTR_FROM_JSON(maxValue, maxValue_);
            DARABONBA_PTR_FROM_JSON(minLength, minLength_);
            DARABONBA_PTR_FROM_JSON(minValue, minValue_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_PTR_FROM_JSON(readOnly, readOnly_);
            DARABONBA_PTR_FROM_JSON(regex, regex_);
            DARABONBA_PTR_FROM_JSON(valueOptions, valueOptions_);
            DARABONBA_PTR_FROM_JSON(valueType, valueType_);
            DARABONBA_PTR_FROM_JSON(valueUnit, valueUnit_);
          };
          Definition() = default ;
          Definition(const Definition &) = default ;
          Definition(Definition &&) = default ;
          Definition(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Definition() = default ;
          Definition& operator=(const Definition &) = default ;
          Definition& operator=(Definition &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ValueOptions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ValueOptions& obj) { 
              DARABONBA_PTR_TO_JSON(key, key_);
              DARABONBA_PTR_TO_JSON(label, label_);
            };
            friend void from_json(const Darabonba::Json& j, ValueOptions& obj) { 
              DARABONBA_PTR_FROM_JSON(key, key_);
              DARABONBA_PTR_FROM_JSON(label, label_);
            };
            ValueOptions() = default ;
            ValueOptions(const ValueOptions &) = default ;
            ValueOptions(ValueOptions &&) = default ;
            ValueOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ValueOptions() = default ;
            ValueOptions& operator=(const ValueOptions &) = default ;
            ValueOptions& operator=(ValueOptions &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->key_ == nullptr
        && this->label_ == nullptr; };
            // key Field Functions 
            bool hasKey() const { return this->key_ != nullptr;};
            void deleteKey() { this->key_ = nullptr;};
            inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
            inline ValueOptions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline ValueOptions& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          protected:
            // The key to pass the parameter.
            shared_ptr<string> key_ {};
            // The display value.
            shared_ptr<string> label_ {};
          };

          virtual bool empty() const override { return this->defaultValue_ == nullptr
        && this->description_ == nullptr && this->displayName_ == nullptr && this->group_ == nullptr && this->inputType_ == nullptr && this->maxLength_ == nullptr
        && this->maxValue_ == nullptr && this->minLength_ == nullptr && this->minValue_ == nullptr && this->name_ == nullptr && this->readOnly_ == nullptr
        && this->regex_ == nullptr && this->valueOptions_ == nullptr && this->valueType_ == nullptr && this->valueUnit_ == nullptr; };
          // defaultValue Field Functions 
          bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
          void deleteDefaultValue() { this->defaultValue_ = nullptr;};
          inline string getDefaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
          inline Definition& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline Definition& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // displayName Field Functions 
          bool hasDisplayName() const { return this->displayName_ != nullptr;};
          void deleteDisplayName() { this->displayName_ = nullptr;};
          inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
          inline Definition& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


          // group Field Functions 
          bool hasGroup() const { return this->group_ != nullptr;};
          void deleteGroup() { this->group_ = nullptr;};
          inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
          inline Definition& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


          // inputType Field Functions 
          bool hasInputType() const { return this->inputType_ != nullptr;};
          void deleteInputType() { this->inputType_ = nullptr;};
          inline string getInputType() const { DARABONBA_PTR_GET_DEFAULT(inputType_, "") };
          inline Definition& setInputType(string inputType) { DARABONBA_PTR_SET_VALUE(inputType_, inputType) };


          // maxLength Field Functions 
          bool hasMaxLength() const { return this->maxLength_ != nullptr;};
          void deleteMaxLength() { this->maxLength_ = nullptr;};
          inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
          inline Definition& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


          // maxValue Field Functions 
          bool hasMaxValue() const { return this->maxValue_ != nullptr;};
          void deleteMaxValue() { this->maxValue_ = nullptr;};
          inline string getMaxValue() const { DARABONBA_PTR_GET_DEFAULT(maxValue_, "") };
          inline Definition& setMaxValue(string maxValue) { DARABONBA_PTR_SET_VALUE(maxValue_, maxValue) };


          // minLength Field Functions 
          bool hasMinLength() const { return this->minLength_ != nullptr;};
          void deleteMinLength() { this->minLength_ = nullptr;};
          inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
          inline Definition& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


          // minValue Field Functions 
          bool hasMinValue() const { return this->minValue_ != nullptr;};
          void deleteMinValue() { this->minValue_ = nullptr;};
          inline string getMinValue() const { DARABONBA_PTR_GET_DEFAULT(minValue_, "") };
          inline Definition& setMinValue(string minValue) { DARABONBA_PTR_SET_VALUE(minValue_, minValue) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Definition& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // readOnly Field Functions 
          bool hasReadOnly() const { return this->readOnly_ != nullptr;};
          void deleteReadOnly() { this->readOnly_ = nullptr;};
          inline bool getReadOnly() const { DARABONBA_PTR_GET_DEFAULT(readOnly_, false) };
          inline Definition& setReadOnly(bool readOnly) { DARABONBA_PTR_SET_VALUE(readOnly_, readOnly) };


          // regex Field Functions 
          bool hasRegex() const { return this->regex_ != nullptr;};
          void deleteRegex() { this->regex_ = nullptr;};
          inline string getRegex() const { DARABONBA_PTR_GET_DEFAULT(regex_, "") };
          inline Definition& setRegex(string regex) { DARABONBA_PTR_SET_VALUE(regex_, regex) };


          // valueOptions Field Functions 
          bool hasValueOptions() const { return this->valueOptions_ != nullptr;};
          void deleteValueOptions() { this->valueOptions_ = nullptr;};
          inline const vector<Definition::ValueOptions> & getValueOptions() const { DARABONBA_PTR_GET_CONST(valueOptions_, vector<Definition::ValueOptions>) };
          inline vector<Definition::ValueOptions> getValueOptions() { DARABONBA_PTR_GET(valueOptions_, vector<Definition::ValueOptions>) };
          inline Definition& setValueOptions(const vector<Definition::ValueOptions> & valueOptions) { DARABONBA_PTR_SET_VALUE(valueOptions_, valueOptions) };
          inline Definition& setValueOptions(vector<Definition::ValueOptions> && valueOptions) { DARABONBA_PTR_SET_RVALUE(valueOptions_, valueOptions) };


          // valueType Field Functions 
          bool hasValueType() const { return this->valueType_ != nullptr;};
          void deleteValueType() { this->valueType_ = nullptr;};
          inline string getValueType() const { DARABONBA_PTR_GET_DEFAULT(valueType_, "") };
          inline Definition& setValueType(string valueType) { DARABONBA_PTR_SET_VALUE(valueType_, valueType) };


          // valueUnit Field Functions 
          bool hasValueUnit() const { return this->valueUnit_ != nullptr;};
          void deleteValueUnit() { this->valueUnit_ = nullptr;};
          inline string getValueUnit() const { DARABONBA_PTR_GET_DEFAULT(valueUnit_, "") };
          inline Definition& setValueUnit(string valueUnit) { DARABONBA_PTR_SET_VALUE(valueUnit_, valueUnit) };


        protected:
          // The default value of the parameter.
          shared_ptr<string> defaultValue_ {};
          // The parameter description.
          shared_ptr<string> description_ {};
          // The display name of the parameter.
          shared_ptr<string> displayName_ {};
          // The parameter group to which the parameter belongs. Valid values:
          // 
          // *   Telemetry: an observability parameter
          // *   Engine: an engine parameter
          shared_ptr<string> group_ {};
          // The input type of the parameter. Valid values:
          // 
          // *   Trigger
          // *   Input
          // *   SingleSelect
          // *   MultiSelect
          shared_ptr<string> inputType_ {};
          // The maximum length of the value. This parameter is valid when the value type is string.
          shared_ptr<int32_t> maxLength_ {};
          // The maximum value of the parameter. This parameter is valid when the value type is int32, int64, or float.
          shared_ptr<string> maxValue_ {};
          // The minimum length of the value. This parameter is valid when the value type is string.
          shared_ptr<int32_t> minLength_ {};
          // The minimum value of the parameter. This parameter is valid when the value type is int32, int64, or float.
          shared_ptr<string> minValue_ {};
          // The parameter name.
          shared_ptr<string> name_ {};
          // Indicates whether the parameter is read-only.
          shared_ptr<bool> readOnly_ {};
          // The regular expression that the parameter value must fulfill. This parameter is valid when the value type is string.
          shared_ptr<string> regex_ {};
          // The list of options supported by the parameter value.
          shared_ptr<vector<Definition::ValueOptions>> valueOptions_ {};
          // The value type of the parameter. Valid values:
          // 
          // *   bool: boolean
          // *   string
          // *   int32: integer
          // *   int64: long integer
          // *   json
          // *   array: JSON array
          // *   float: floating point
          shared_ptr<string> valueType_ {};
          // The value unit.
          shared_ptr<string> valueUnit_ {};
        };

        virtual bool empty() const override { return this->definition_ == nullptr
        && this->value_ == nullptr; };
        // definition Field Functions 
        bool hasDefinition() const { return this->definition_ != nullptr;};
        void deleteDefinition() { this->definition_ = nullptr;};
        inline const Items::Definition & getDefinition() const { DARABONBA_PTR_GET_CONST(definition_, Items::Definition) };
        inline Items::Definition getDefinition() { DARABONBA_PTR_GET(definition_, Items::Definition) };
        inline Items& setDefinition(const Items::Definition & definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };
        inline Items& setDefinition(Items::Definition && definition) { DARABONBA_PTR_SET_RVALUE(definition_, definition) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Items& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The parameter definition.
        shared_ptr<Items::Definition> definition_ {};
        // The parameter value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->items_ == nullptr; };
      // items Field Functions 
      bool hasItems() const { return this->items_ != nullptr;};
      void deleteItems() { this->items_ = nullptr;};
      inline const vector<Data::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Data::Items>) };
      inline vector<Data::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Data::Items>) };
      inline Data& setItems(const vector<Data::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
      inline Data& setItems(vector<Data::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    protected:
      // The list of parameter configurations.
      shared_ptr<vector<Data::Items>> items_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGatewayFeaturesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGatewayFeaturesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGatewayFeaturesResponseBody::Data) };
    inline ListGatewayFeaturesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGatewayFeaturesResponseBody::Data) };
    inline ListGatewayFeaturesResponseBody& setData(const ListGatewayFeaturesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGatewayFeaturesResponseBody& setData(ListGatewayFeaturesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGatewayFeaturesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGatewayFeaturesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<ListGatewayFeaturesResponseBody::Data> data_ {};
    // The response message returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
