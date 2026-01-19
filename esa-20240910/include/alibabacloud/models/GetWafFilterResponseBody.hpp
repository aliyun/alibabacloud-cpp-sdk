// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWAFFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/WafQuotaInteger.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetWafFilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWafFilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetWafFilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetWafFilterResponseBody() = default ;
    GetWafFilterResponseBody(const GetWafFilterResponseBody &) = default ;
    GetWafFilterResponseBody(GetWafFilterResponseBody &&) = default ;
    GetWafFilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWafFilterResponseBody() = default ;
    GetWafFilterResponseBody& operator=(const GetWafFilterResponseBody &) = default ;
    GetWafFilterResponseBody& operator=(GetWafFilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Fields, fields_);
        DARABONBA_PTR_TO_JSON(Phase, phase_);
        DARABONBA_PTR_TO_JSON(Target, target_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Fields, fields_);
        DARABONBA_PTR_FROM_JSON(Phase, phase_);
        DARABONBA_PTR_FROM_JSON(Target, target_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Fields : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Fields& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Label, label_);
          DARABONBA_PTR_TO_JSON(Logics, logics_);
          DARABONBA_PTR_TO_JSON(MinPlan, minPlan_);
          DARABONBA_PTR_TO_JSON(Selector, selector_);
          DARABONBA_PTR_TO_JSON(Sub, sub_);
          DARABONBA_PTR_TO_JSON(SubTip, subTip_);
        };
        friend void from_json(const Darabonba::Json& j, Fields& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Label, label_);
          DARABONBA_PTR_FROM_JSON(Logics, logics_);
          DARABONBA_PTR_FROM_JSON(MinPlan, minPlan_);
          DARABONBA_PTR_FROM_JSON(Selector, selector_);
          DARABONBA_PTR_FROM_JSON(Sub, sub_);
          DARABONBA_PTR_FROM_JSON(SubTip, subTip_);
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
        class Selector : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Selector& obj) { 
            DARABONBA_PTR_TO_JSON(Data, data_);
            DARABONBA_PTR_TO_JSON(Kind, kind_);
          };
          friend void from_json(const Darabonba::Json& j, Selector& obj) { 
            DARABONBA_PTR_FROM_JSON(Data, data_);
            DARABONBA_PTR_FROM_JSON(Kind, kind_);
          };
          Selector() = default ;
          Selector(const Selector &) = default ;
          Selector(Selector &&) = default ;
          Selector(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Selector() = default ;
          Selector& operator=(const Selector &) = default ;
          Selector& operator=(Selector &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Data : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Data& obj) { 
              DARABONBA_PTR_TO_JSON(Label, label_);
              DARABONBA_PTR_TO_JSON(Value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Data& obj) { 
              DARABONBA_PTR_FROM_JSON(Label, label_);
              DARABONBA_PTR_FROM_JSON(Value, value_);
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
            virtual bool empty() const override { return this->label_ == nullptr
        && this->value_ == nullptr; };
            // label Field Functions 
            bool hasLabel() const { return this->label_ != nullptr;};
            void deleteLabel() { this->label_ = nullptr;};
            inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
            inline Data& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Data& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The label of the data.
            shared_ptr<string> label_ {};
            // The value of the data.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->data_ == nullptr
        && this->kind_ == nullptr; };
          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const vector<Selector::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Selector::Data>) };
          inline vector<Selector::Data> getData() { DARABONBA_PTR_GET(data_, vector<Selector::Data>) };
          inline Selector& setData(const vector<Selector::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Selector& setData(vector<Selector::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


          // kind Field Functions 
          bool hasKind() const { return this->kind_ != nullptr;};
          void deleteKind() { this->kind_ = nullptr;};
          inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
          inline Selector& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


        protected:
          // The data. This parameter is available only when the value of the Kind parameter is data.
          shared_ptr<vector<Selector::Data>> data_ {};
          // The type of selector. Valid values: data and others.
          shared_ptr<string> kind_ {};
        };

        class Logics : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Logics& obj) { 
            DARABONBA_PTR_TO_JSON(Attributes, attributes_);
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(Kind, kind_);
            DARABONBA_PTR_TO_JSON(MinPlan, minPlan_);
            DARABONBA_PTR_TO_JSON(Negative, negative_);
            DARABONBA_PTR_TO_JSON(Operator, operator_);
            DARABONBA_PTR_TO_JSON(Symbol, symbol_);
            DARABONBA_PTR_TO_JSON(Tip, tip_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Validator, validator_);
          };
          friend void from_json(const Darabonba::Json& j, Logics& obj) { 
            DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(Kind, kind_);
            DARABONBA_PTR_FROM_JSON(MinPlan, minPlan_);
            DARABONBA_PTR_FROM_JSON(Negative, negative_);
            DARABONBA_PTR_FROM_JSON(Operator, operator_);
            DARABONBA_PTR_FROM_JSON(Symbol, symbol_);
            DARABONBA_PTR_FROM_JSON(Tip, tip_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Validator, validator_);
          };
          Logics() = default ;
          Logics(const Logics &) = default ;
          Logics(Logics &&) = default ;
          Logics(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Logics() = default ;
          Logics& operator=(const Logics &) = default ;
          Logics& operator=(Logics &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Validator : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Validator& obj) { 
              DARABONBA_PTR_TO_JSON(ErrMsg, errMsg_);
              DARABONBA_PTR_TO_JSON(Length, length_);
              DARABONBA_PTR_TO_JSON(Pattern, pattern_);
              DARABONBA_PTR_TO_JSON(Range, range_);
            };
            friend void from_json(const Darabonba::Json& j, Validator& obj) { 
              DARABONBA_PTR_FROM_JSON(ErrMsg, errMsg_);
              DARABONBA_PTR_FROM_JSON(Length, length_);
              DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
              DARABONBA_PTR_FROM_JSON(Range, range_);
            };
            Validator() = default ;
            Validator(const Validator &) = default ;
            Validator(Validator &&) = default ;
            Validator(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~Validator() = default ;
            Validator& operator=(const Validator &) = default ;
            Validator& operator=(Validator &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->errMsg_ == nullptr
        && this->length_ == nullptr && this->pattern_ == nullptr && this->range_ == nullptr; };
            // errMsg Field Functions 
            bool hasErrMsg() const { return this->errMsg_ != nullptr;};
            void deleteErrMsg() { this->errMsg_ = nullptr;};
            inline string getErrMsg() const { DARABONBA_PTR_GET_DEFAULT(errMsg_, "") };
            inline Validator& setErrMsg(string errMsg) { DARABONBA_PTR_SET_VALUE(errMsg_, errMsg) };


            // length Field Functions 
            bool hasLength() const { return this->length_ != nullptr;};
            void deleteLength() { this->length_ = nullptr;};
            inline const WafQuotaInteger & getLength() const { DARABONBA_PTR_GET_CONST(length_, WafQuotaInteger) };
            inline WafQuotaInteger getLength() { DARABONBA_PTR_GET(length_, WafQuotaInteger) };
            inline Validator& setLength(const WafQuotaInteger & length) { DARABONBA_PTR_SET_VALUE(length_, length) };
            inline Validator& setLength(WafQuotaInteger && length) { DARABONBA_PTR_SET_RVALUE(length_, length) };


            // pattern Field Functions 
            bool hasPattern() const { return this->pattern_ != nullptr;};
            void deletePattern() { this->pattern_ = nullptr;};
            inline string getPattern() const { DARABONBA_PTR_GET_DEFAULT(pattern_, "") };
            inline Validator& setPattern(string pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };


            // range Field Functions 
            bool hasRange() const { return this->range_ != nullptr;};
            void deleteRange() { this->range_ = nullptr;};
            inline const WafQuotaInteger & getRange() const { DARABONBA_PTR_GET_CONST(range_, WafQuotaInteger) };
            inline WafQuotaInteger getRange() { DARABONBA_PTR_GET(range_, WafQuotaInteger) };
            inline Validator& setRange(const WafQuotaInteger & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
            inline Validator& setRange(WafQuotaInteger && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


          protected:
            // The error message when the validation fails.
            shared_ptr<string> errMsg_ {};
            // The length of the value.
            shared_ptr<WafQuotaInteger> length_ {};
            // The regular expression pattern of the value, which is used to validate strings.
            shared_ptr<string> pattern_ {};
            // The range of the value, which is used to validate numbers.
            shared_ptr<WafQuotaInteger> range_ {};
          };

          virtual bool empty() const override { return this->attributes_ == nullptr
        && this->enable_ == nullptr && this->kind_ == nullptr && this->minPlan_ == nullptr && this->negative_ == nullptr && this->operator_ == nullptr
        && this->symbol_ == nullptr && this->tip_ == nullptr && this->type_ == nullptr && this->validator_ == nullptr; };
          // attributes Field Functions 
          bool hasAttributes() const { return this->attributes_ != nullptr;};
          void deleteAttributes() { this->attributes_ = nullptr;};
          inline int32_t getAttributes() const { DARABONBA_PTR_GET_DEFAULT(attributes_, 0) };
          inline Logics& setAttributes(int32_t attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };


          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline Logics& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // kind Field Functions 
          bool hasKind() const { return this->kind_ != nullptr;};
          void deleteKind() { this->kind_ = nullptr;};
          inline string getKind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
          inline Logics& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


          // minPlan Field Functions 
          bool hasMinPlan() const { return this->minPlan_ != nullptr;};
          void deleteMinPlan() { this->minPlan_ = nullptr;};
          inline string getMinPlan() const { DARABONBA_PTR_GET_DEFAULT(minPlan_, "") };
          inline Logics& setMinPlan(string minPlan) { DARABONBA_PTR_SET_VALUE(minPlan_, minPlan) };


          // negative Field Functions 
          bool hasNegative() const { return this->negative_ != nullptr;};
          void deleteNegative() { this->negative_ = nullptr;};
          inline bool getNegative() const { DARABONBA_PTR_GET_DEFAULT(negative_, false) };
          inline Logics& setNegative(bool negative) { DARABONBA_PTR_SET_VALUE(negative_, negative) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline Logics& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // symbol Field Functions 
          bool hasSymbol() const { return this->symbol_ != nullptr;};
          void deleteSymbol() { this->symbol_ = nullptr;};
          inline string getSymbol() const { DARABONBA_PTR_GET_DEFAULT(symbol_, "") };
          inline Logics& setSymbol(string symbol) { DARABONBA_PTR_SET_VALUE(symbol_, symbol) };


          // tip Field Functions 
          bool hasTip() const { return this->tip_ != nullptr;};
          void deleteTip() { this->tip_ = nullptr;};
          inline string getTip() const { DARABONBA_PTR_GET_DEFAULT(tip_, "") };
          inline Logics& setTip(string tip) { DARABONBA_PTR_SET_VALUE(tip_, tip) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Logics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // validator Field Functions 
          bool hasValidator() const { return this->validator_ != nullptr;};
          void deleteValidator() { this->validator_ = nullptr;};
          inline const Logics::Validator & getValidator() const { DARABONBA_PTR_GET_CONST(validator_, Logics::Validator) };
          inline Logics::Validator getValidator() { DARABONBA_PTR_GET(validator_, Logics::Validator) };
          inline Logics& setValidator(const Logics::Validator & validator) { DARABONBA_PTR_SET_VALUE(validator_, validator) };
          inline Logics& setValidator(Logics::Validator && validator) { DARABONBA_PTR_SET_RVALUE(validator_, validator) };


        protected:
          // A custom attribute. For example, this parameter can specify whether the value is case-sensitive.
          shared_ptr<int32_t> attributes_ {};
          shared_ptr<bool> enable_ {};
          // The type of the value input box. Valid values:
          // 
          // *   select:single
          // *   select:multi
          // *   input:single
          // *   input:multi
          shared_ptr<string> kind_ {};
          shared_ptr<string> minPlan_ {};
          // Indicates whether the match result is inverted.
          shared_ptr<bool> negative_ {};
          // The displayed matching characters.
          shared_ptr<string> operator_ {};
          // The matching characters in the system.
          shared_ptr<string> symbol_ {};
          // The tip on how to enter a valid value that is required by the rules.
          shared_ptr<string> tip_ {};
          // The type of the value. Valid values:
          // 
          // *   integer
          // *   integer_slice
          // *   string
          // *   string_slice
          shared_ptr<string> type_ {};
          // The validator, which defines the validation rules for a value.
          shared_ptr<Logics::Validator> validator_ {};
        };

        virtual bool empty() const override { return this->enable_ == nullptr
        && this->key_ == nullptr && this->label_ == nullptr && this->logics_ == nullptr && this->minPlan_ == nullptr && this->selector_ == nullptr
        && this->sub_ == nullptr && this->subTip_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Fields& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Fields& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // label Field Functions 
        bool hasLabel() const { return this->label_ != nullptr;};
        void deleteLabel() { this->label_ = nullptr;};
        inline string getLabel() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
        inline Fields& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


        // logics Field Functions 
        bool hasLogics() const { return this->logics_ != nullptr;};
        void deleteLogics() { this->logics_ = nullptr;};
        inline const vector<Fields::Logics> & getLogics() const { DARABONBA_PTR_GET_CONST(logics_, vector<Fields::Logics>) };
        inline vector<Fields::Logics> getLogics() { DARABONBA_PTR_GET(logics_, vector<Fields::Logics>) };
        inline Fields& setLogics(const vector<Fields::Logics> & logics) { DARABONBA_PTR_SET_VALUE(logics_, logics) };
        inline Fields& setLogics(vector<Fields::Logics> && logics) { DARABONBA_PTR_SET_RVALUE(logics_, logics) };


        // minPlan Field Functions 
        bool hasMinPlan() const { return this->minPlan_ != nullptr;};
        void deleteMinPlan() { this->minPlan_ = nullptr;};
        inline string getMinPlan() const { DARABONBA_PTR_GET_DEFAULT(minPlan_, "") };
        inline Fields& setMinPlan(string minPlan) { DARABONBA_PTR_SET_VALUE(minPlan_, minPlan) };


        // selector Field Functions 
        bool hasSelector() const { return this->selector_ != nullptr;};
        void deleteSelector() { this->selector_ = nullptr;};
        inline const Fields::Selector & getSelector() const { DARABONBA_PTR_GET_CONST(selector_, Fields::Selector) };
        inline Fields::Selector getSelector() { DARABONBA_PTR_GET(selector_, Fields::Selector) };
        inline Fields& setSelector(const Fields::Selector & selector) { DARABONBA_PTR_SET_VALUE(selector_, selector) };
        inline Fields& setSelector(Fields::Selector && selector) { DARABONBA_PTR_SET_RVALUE(selector_, selector) };


        // sub Field Functions 
        bool hasSub() const { return this->sub_ != nullptr;};
        void deleteSub() { this->sub_ = nullptr;};
        inline bool getSub() const { DARABONBA_PTR_GET_DEFAULT(sub_, false) };
        inline Fields& setSub(bool sub) { DARABONBA_PTR_SET_VALUE(sub_, sub) };


        // subTip Field Functions 
        bool hasSubTip() const { return this->subTip_ != nullptr;};
        void deleteSubTip() { this->subTip_ = nullptr;};
        inline string getSubTip() const { DARABONBA_PTR_GET_DEFAULT(subTip_, "") };
        inline Fields& setSubTip(string subTip) { DARABONBA_PTR_SET_VALUE(subTip_, subTip) };


      protected:
        shared_ptr<bool> enable_ {};
        // The field for matched objects in the system.
        shared_ptr<string> key_ {};
        // The label of the matched object.
        shared_ptr<string> label_ {};
        // The logical conditions.
        shared_ptr<vector<Fields::Logics>> logics_ {};
        shared_ptr<string> minPlan_ {};
        // The selector, which defines how to select a matched object.
        shared_ptr<Fields::Selector> selector_ {};
        // Indicates whether the matched object contains a subfield.
        shared_ptr<bool> sub_ {};
        // The tip on how to enter a subfield.
        shared_ptr<string> subTip_ {};
      };

      virtual bool empty() const override { return this->fields_ == nullptr
        && this->phase_ == nullptr && this->target_ == nullptr && this->type_ == nullptr; };
      // fields Field Functions 
      bool hasFields() const { return this->fields_ != nullptr;};
      void deleteFields() { this->fields_ = nullptr;};
      inline const vector<Filter::Fields> & getFields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Filter::Fields>) };
      inline vector<Filter::Fields> getFields() { DARABONBA_PTR_GET(fields_, vector<Filter::Fields>) };
      inline Filter& setFields(const vector<Filter::Fields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
      inline Filter& setFields(vector<Filter::Fields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


      // phase Field Functions 
      bool hasPhase() const { return this->phase_ != nullptr;};
      void deletePhase() { this->phase_ = nullptr;};
      inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
      inline Filter& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


      // target Field Functions 
      bool hasTarget() const { return this->target_ != nullptr;};
      void deleteTarget() { this->target_ = nullptr;};
      inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
      inline Filter& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Filter& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The matched objects and related properties.
      shared_ptr<vector<Filter::Fields>> fields_ {};
      // The WAF rule category.
      shared_ptr<string> phase_ {};
      // The condition for matching incoming requests.
      shared_ptr<string> target_ {};
      // The rule type.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->requestId_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const GetWafFilterResponseBody::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, GetWafFilterResponseBody::Filter) };
    inline GetWafFilterResponseBody::Filter getFilter() { DARABONBA_PTR_GET(filter_, GetWafFilterResponseBody::Filter) };
    inline GetWafFilterResponseBody& setFilter(const GetWafFilterResponseBody::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetWafFilterResponseBody& setFilter(GetWafFilterResponseBody::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWafFilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned match conditions.
    shared_ptr<GetWafFilterResponseBody::Filter> filter_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
