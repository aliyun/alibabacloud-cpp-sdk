// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETADDONSCHEMARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetAddonSchemaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAddonSchemaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAddonSchemaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetAddonSchemaResponseBody() = default ;
    GetAddonSchemaResponseBody(const GetAddonSchemaResponseBody &) = default ;
    GetAddonSchemaResponseBody(GetAddonSchemaResponseBody &&) = default ;
    GetAddonSchemaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAddonSchemaResponseBody() = default ;
    GetAddonSchemaResponseBody& operator=(const GetAddonSchemaResponseBody &) = default ;
    GetAddonSchemaResponseBody& operator=(GetAddonSchemaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Fields : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Fields& obj) { 
        DARABONBA_PTR_TO_JSON(conditions, conditions_);
        DARABONBA_ANY_TO_JSON(defaultValue, defaultValue_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(disabled, disabled_);
        DARABONBA_PTR_TO_JSON(element, element_);
        DARABONBA_PTR_TO_JSON(fieldPath, fieldPath_);
        DARABONBA_PTR_TO_JSON(label, label_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(placeholder, placeholder_);
        DARABONBA_PTR_TO_JSON(props, props_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(validation, validation_);
      };
      friend void from_json(const Darabonba::Json& j, Fields& obj) { 
        DARABONBA_PTR_FROM_JSON(conditions, conditions_);
        DARABONBA_ANY_FROM_JSON(defaultValue, defaultValue_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(disabled, disabled_);
        DARABONBA_PTR_FROM_JSON(element, element_);
        DARABONBA_PTR_FROM_JSON(fieldPath, fieldPath_);
        DARABONBA_PTR_FROM_JSON(label, label_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(placeholder, placeholder_);
        DARABONBA_PTR_FROM_JSON(props, props_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(validation, validation_);
      };
      Fields() = default ;
      Fields(const Fields &) = default ;
      Fields(Fields &&) = default ;
      Fields(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Fields() = default ;
      Fields& operator=(const Fields &) = default ;
      Fields& operator=(Fields &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Validation : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Validation& obj) { 
          DARABONBA_PTR_TO_JSON(max, max_);
          DARABONBA_PTR_TO_JSON(maxLength, maxLength_);
          DARABONBA_PTR_TO_JSON(message, message_);
          DARABONBA_PTR_TO_JSON(min, min_);
          DARABONBA_PTR_TO_JSON(minLength, minLength_);
          DARABONBA_PTR_TO_JSON(regular, regular_);
          DARABONBA_PTR_TO_JSON(required, required_);
        };
        friend void from_json(const Darabonba::Json& j, Validation& obj) { 
          DARABONBA_PTR_FROM_JSON(max, max_);
          DARABONBA_PTR_FROM_JSON(maxLength, maxLength_);
          DARABONBA_PTR_FROM_JSON(message, message_);
          DARABONBA_PTR_FROM_JSON(min, min_);
          DARABONBA_PTR_FROM_JSON(minLength, minLength_);
          DARABONBA_PTR_FROM_JSON(regular, regular_);
          DARABONBA_PTR_FROM_JSON(required, required_);
        };
        Validation() = default ;
        Validation(const Validation &) = default ;
        Validation(Validation &&) = default ;
        Validation(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Validation() = default ;
        Validation& operator=(const Validation &) = default ;
        Validation& operator=(Validation &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->max_ == nullptr
        && this->maxLength_ == nullptr && this->message_ == nullptr && this->min_ == nullptr && this->minLength_ == nullptr && this->regular_ == nullptr
        && this->required_ == nullptr; };
        // max Field Functions 
        bool hasMax() const { return this->max_ != nullptr;};
        void deleteMax() { this->max_ = nullptr;};
        inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
        inline Validation& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


        // maxLength Field Functions 
        bool hasMaxLength() const { return this->maxLength_ != nullptr;};
        void deleteMaxLength() { this->maxLength_ = nullptr;};
        inline int32_t getMaxLength() const { DARABONBA_PTR_GET_DEFAULT(maxLength_, 0) };
        inline Validation& setMaxLength(int32_t maxLength) { DARABONBA_PTR_SET_VALUE(maxLength_, maxLength) };


        // message Field Functions 
        bool hasMessage() const { return this->message_ != nullptr;};
        void deleteMessage() { this->message_ = nullptr;};
        inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
        inline Validation& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


        // min Field Functions 
        bool hasMin() const { return this->min_ != nullptr;};
        void deleteMin() { this->min_ = nullptr;};
        inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
        inline Validation& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


        // minLength Field Functions 
        bool hasMinLength() const { return this->minLength_ != nullptr;};
        void deleteMinLength() { this->minLength_ = nullptr;};
        inline int32_t getMinLength() const { DARABONBA_PTR_GET_DEFAULT(minLength_, 0) };
        inline Validation& setMinLength(int32_t minLength) { DARABONBA_PTR_SET_VALUE(minLength_, minLength) };


        // regular Field Functions 
        bool hasRegular() const { return this->regular_ != nullptr;};
        void deleteRegular() { this->regular_ = nullptr;};
        inline string getRegular() const { DARABONBA_PTR_GET_DEFAULT(regular_, "") };
        inline Validation& setRegular(string regular) { DARABONBA_PTR_SET_VALUE(regular_, regular) };


        // required Field Functions 
        bool hasRequired() const { return this->required_ != nullptr;};
        void deleteRequired() { this->required_ = nullptr;};
        inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
        inline Validation& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


      protected:
        shared_ptr<int32_t> max_ {};
        shared_ptr<int32_t> maxLength_ {};
        shared_ptr<string> message_ {};
        shared_ptr<int32_t> min_ {};
        shared_ptr<int32_t> minLength_ {};
        shared_ptr<string> regular_ {};
        shared_ptr<bool> required_ {};
      };

      class Props : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Props& obj) { 
          DARABONBA_PTR_TO_JSON(dataSource, dataSource_);
          DARABONBA_PTR_TO_JSON(related, related_);
          DARABONBA_PTR_TO_JSON(selectMode, selectMode_);
        };
        friend void from_json(const Darabonba::Json& j, Props& obj) { 
          DARABONBA_PTR_FROM_JSON(dataSource, dataSource_);
          DARABONBA_PTR_FROM_JSON(related, related_);
          DARABONBA_PTR_FROM_JSON(selectMode, selectMode_);
        };
        Props() = default ;
        Props(const Props &) = default ;
        Props(Props &&) = default ;
        Props(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Props() = default ;
        Props& operator=(const Props &) = default ;
        Props& operator=(Props &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DataSource : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
            DARABONBA_PTR_TO_JSON(label, label_);
            DARABONBA_PTR_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
            DARABONBA_PTR_FROM_JSON(label, label_);
            DARABONBA_PTR_FROM_JSON(value, value_);
          };
          DataSource() = default ;
          DataSource(const DataSource &) = default ;
          DataSource(DataSource &&) = default ;
          DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DataSource() = default ;
          DataSource& operator=(const DataSource &) = default ;
          DataSource& operator=(DataSource &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->label_ == nullptr
        && this->value_ == nullptr; };
          // label Field Functions 
          bool hasLabel() const { return this->label_ != nullptr;};
          void deleteLabel() { this->label_ = nullptr;};
          inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
          inline DataSource& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline DataSource& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          shared_ptr<string> label_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->dataSource_ == nullptr
        && this->related_ == nullptr && this->selectMode_ == nullptr; };
        // dataSource Field Functions 
        bool hasDataSource() const { return this->dataSource_ != nullptr;};
        void deleteDataSource() { this->dataSource_ = nullptr;};
        inline const vector<Props::DataSource> & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, vector<Props::DataSource>) };
        inline vector<Props::DataSource> getDataSource() { DARABONBA_PTR_GET(dataSource_, vector<Props::DataSource>) };
        inline Props& setDataSource(const vector<Props::DataSource> & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
        inline Props& setDataSource(vector<Props::DataSource> && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


        // related Field Functions 
        bool hasRelated() const { return this->related_ != nullptr;};
        void deleteRelated() { this->related_ = nullptr;};
        inline const vector<string> & getRelated() const { DARABONBA_PTR_GET_CONST(related_, vector<string>) };
        inline vector<string> getRelated() { DARABONBA_PTR_GET(related_, vector<string>) };
        inline Props& setRelated(const vector<string> & related) { DARABONBA_PTR_SET_VALUE(related_, related) };
        inline Props& setRelated(vector<string> && related) { DARABONBA_PTR_SET_RVALUE(related_, related) };


        // selectMode Field Functions 
        bool hasSelectMode() const { return this->selectMode_ != nullptr;};
        void deleteSelectMode() { this->selectMode_ = nullptr;};
        inline string getSelectMode() const { DARABONBA_PTR_GET_DEFAULT(selectMode_, "") };
        inline Props& setSelectMode(string selectMode) { DARABONBA_PTR_SET_VALUE(selectMode_, selectMode) };


      protected:
        // AK
        shared_ptr<vector<Props::DataSource>> dataSource_ {};
        shared_ptr<vector<string>> related_ {};
        shared_ptr<string> selectMode_ {};
      };

      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(action, action_);
          DARABONBA_PTR_TO_JSON(field, field_);
          DARABONBA_PTR_TO_JSON(op, op_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(action, action_);
          DARABONBA_PTR_FROM_JSON(field, field_);
          DARABONBA_PTR_FROM_JSON(op, op_);
          DARABONBA_ANY_FROM_JSON(value, value_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->field_ == nullptr && this->op_ == nullptr && this->value_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline Conditions& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // field Field Functions 
        bool hasField() const { return this->field_ != nullptr;};
        void deleteField() { this->field_ = nullptr;};
        inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
        inline Conditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        // op Field Functions 
        bool hasOp() const { return this->op_ != nullptr;};
        void deleteOp() { this->op_ = nullptr;};
        inline string getOp() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
        inline Conditions& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Conditions& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Conditions& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        shared_ptr<string> action_ {};
        shared_ptr<string> field_ {};
        shared_ptr<string> op_ {};
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->defaultValue_ == nullptr && this->description_ == nullptr && this->disabled_ == nullptr && this->element_ == nullptr && this->fieldPath_ == nullptr
        && this->label_ == nullptr && this->name_ == nullptr && this->placeholder_ == nullptr && this->props_ == nullptr && this->type_ == nullptr
        && this->validation_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Fields::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Fields::Conditions>) };
      inline vector<Fields::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Fields::Conditions>) };
      inline Fields& setConditions(const vector<Fields::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Fields& setConditions(vector<Fields::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // defaultValue Field Functions 
      bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
      void deleteDefaultValue() { this->defaultValue_ = nullptr;};
      inline       const Darabonba::Json & getDefaultValue() const { DARABONBA_GET(defaultValue_) };
      Darabonba::Json & getDefaultValue() { DARABONBA_GET(defaultValue_) };
      inline Fields& setDefaultValue(const Darabonba::Json & defaultValue) { DARABONBA_SET_VALUE(defaultValue_, defaultValue) };
      inline Fields& setDefaultValue(Darabonba::Json && defaultValue) { DARABONBA_SET_RVALUE(defaultValue_, defaultValue) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Fields& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // disabled Field Functions 
      bool hasDisabled() const { return this->disabled_ != nullptr;};
      void deleteDisabled() { this->disabled_ = nullptr;};
      inline bool getDisabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
      inline Fields& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


      // element Field Functions 
      bool hasElement() const { return this->element_ != nullptr;};
      void deleteElement() { this->element_ = nullptr;};
      inline string getElement() const { DARABONBA_PTR_GET_DEFAULT(element_, "") };
      inline Fields& setElement(string element) { DARABONBA_PTR_SET_VALUE(element_, element) };


      // fieldPath Field Functions 
      bool hasFieldPath() const { return this->fieldPath_ != nullptr;};
      void deleteFieldPath() { this->fieldPath_ = nullptr;};
      inline string getFieldPath() const { DARABONBA_PTR_GET_DEFAULT(fieldPath_, "") };
      inline Fields& setFieldPath(string fieldPath) { DARABONBA_PTR_SET_VALUE(fieldPath_, fieldPath) };


      // label Field Functions 
      bool hasLabel() const { return this->label_ != nullptr;};
      void deleteLabel() { this->label_ = nullptr;};
      inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
      inline Fields& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Fields& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // placeholder Field Functions 
      bool hasPlaceholder() const { return this->placeholder_ != nullptr;};
      void deletePlaceholder() { this->placeholder_ = nullptr;};
      inline string getPlaceholder() const { DARABONBA_PTR_GET_DEFAULT(placeholder_, "") };
      inline Fields& setPlaceholder(string placeholder) { DARABONBA_PTR_SET_VALUE(placeholder_, placeholder) };


      // props Field Functions 
      bool hasProps() const { return this->props_ != nullptr;};
      void deleteProps() { this->props_ = nullptr;};
      inline const Fields::Props & getProps() const { DARABONBA_PTR_GET_CONST(props_, Fields::Props) };
      inline Fields::Props getProps() { DARABONBA_PTR_GET(props_, Fields::Props) };
      inline Fields& setProps(const Fields::Props & props) { DARABONBA_PTR_SET_VALUE(props_, props) };
      inline Fields& setProps(Fields::Props && props) { DARABONBA_PTR_SET_RVALUE(props_, props) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Fields& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // validation Field Functions 
      bool hasValidation() const { return this->validation_ != nullptr;};
      void deleteValidation() { this->validation_ = nullptr;};
      inline const Fields::Validation & getValidation() const { DARABONBA_PTR_GET_CONST(validation_, Fields::Validation) };
      inline Fields::Validation getValidation() { DARABONBA_PTR_GET(validation_, Fields::Validation) };
      inline Fields& setValidation(const Fields::Validation & validation) { DARABONBA_PTR_SET_VALUE(validation_, validation) };
      inline Fields& setValidation(Fields::Validation && validation) { DARABONBA_PTR_SET_RVALUE(validation_, validation) };


    protected:
      shared_ptr<vector<Fields::Conditions>> conditions_ {};
      Darabonba::Json defaultValue_ {};
      shared_ptr<string> description_ {};
      shared_ptr<bool> disabled_ {};
      shared_ptr<string> element_ {};
      shared_ptr<string> fieldPath_ {};
      shared_ptr<string> label_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> placeholder_ {};
      shared_ptr<Fields::Props> props_ {};
      shared_ptr<string> type_ {};
      shared_ptr<Fields::Validation> validation_ {};
    };

    virtual bool empty() const override { return this->fields_ == nullptr
        && this->requestId_ == nullptr && this->type_ == nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<GetAddonSchemaResponseBody::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<GetAddonSchemaResponseBody::Fields>) };
    inline vector<GetAddonSchemaResponseBody::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<GetAddonSchemaResponseBody::Fields>) };
    inline GetAddonSchemaResponseBody& setFields(const vector<GetAddonSchemaResponseBody::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline GetAddonSchemaResponseBody& setFields(vector<GetAddonSchemaResponseBody::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAddonSchemaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAddonSchemaResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    shared_ptr<vector<GetAddonSchemaResponseBody::Fields>> fields_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
