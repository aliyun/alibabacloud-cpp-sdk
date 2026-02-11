// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITERULELISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class DescribeWhiteRuleListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteRuleListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteRuleListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeWhiteRuleListResponseBody() = default ;
    DescribeWhiteRuleListResponseBody(const DescribeWhiteRuleListResponseBody &) = default ;
    DescribeWhiteRuleListResponseBody(DescribeWhiteRuleListResponseBody &&) = default ;
    DescribeWhiteRuleListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteRuleListResponseBody() = default ;
    DescribeWhiteRuleListResponseBody& operator=(const DescribeWhiteRuleListResponseBody &) = default ;
    DescribeWhiteRuleListResponseBody& operator=(DescribeWhiteRuleListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_TO_JSON(ResponseData, responseData_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
        DARABONBA_PTR_FROM_JSON(ResponseData, responseData_);
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
      class ResponseData : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResponseData& obj) { 
          DARABONBA_PTR_TO_JSON(AlertName, alertName_);
          DARABONBA_PTR_TO_JSON(AlertNameId, alertNameId_);
          DARABONBA_PTR_TO_JSON(AlertType, alertType_);
          DARABONBA_PTR_TO_JSON(AlertTypeId, alertTypeId_);
          DARABONBA_PTR_TO_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_TO_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_TO_JSON(Expression, expression_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SubAliuid, subAliuid_);
        };
        friend void from_json(const Darabonba::Json& j, ResponseData& obj) { 
          DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
          DARABONBA_PTR_FROM_JSON(AlertNameId, alertNameId_);
          DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
          DARABONBA_PTR_FROM_JSON(AlertTypeId, alertTypeId_);
          DARABONBA_PTR_FROM_JSON(AlertUuid, alertUuid_);
          DARABONBA_PTR_FROM_JSON(Aliuid, aliuid_);
          DARABONBA_PTR_FROM_JSON(Expression, expression_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(IncidentUuid, incidentUuid_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SubAliuid, subAliuid_);
        };
        ResponseData() = default ;
        ResponseData(const ResponseData &) = default ;
        ResponseData(ResponseData &&) = default ;
        ResponseData(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResponseData() = default ;
        ResponseData& operator=(const ResponseData &) = default ;
        ResponseData& operator=(ResponseData &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Expression : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Expression& obj) { 
            DARABONBA_PTR_TO_JSON(Conditions, conditions_);
            DARABONBA_PTR_TO_JSON(Logic, logic_);
          };
          friend void from_json(const Darabonba::Json& j, Expression& obj) { 
            DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
            DARABONBA_PTR_FROM_JSON(Logic, logic_);
          };
          Expression() = default ;
          Expression(const Expression &) = default ;
          Expression(Expression &&) = default ;
          Expression(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Expression() = default ;
          Expression& operator=(const Expression &) = default ;
          Expression& operator=(Expression &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Conditions : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
              DARABONBA_PTR_TO_JSON(IsNot, isNot_);
              DARABONBA_PTR_TO_JSON(ItemId, itemId_);
              DARABONBA_PTR_TO_JSON(Left, left_);
              DARABONBA_PTR_TO_JSON(Operator, operator_);
              DARABONBA_PTR_TO_JSON(Right, right_);
            };
            friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
              DARABONBA_PTR_FROM_JSON(IsNot, isNot_);
              DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
              DARABONBA_PTR_FROM_JSON(Left, left_);
              DARABONBA_PTR_FROM_JSON(Operator, operator_);
              DARABONBA_PTR_FROM_JSON(Right, right_);
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
            class Right : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Right& obj) { 
                DARABONBA_PTR_TO_JSON(IsVar, isVar_);
                DARABONBA_PTR_TO_JSON(Modifier, modifier_);
                DARABONBA_ANY_TO_JSON(ModifierParam, modifierParam_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Right& obj) { 
                DARABONBA_PTR_FROM_JSON(IsVar, isVar_);
                DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
                DARABONBA_ANY_FROM_JSON(ModifierParam, modifierParam_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              Right() = default ;
              Right(const Right &) = default ;
              Right(Right &&) = default ;
              Right(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Right() = default ;
              Right& operator=(const Right &) = default ;
              Right& operator=(Right &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->isVar_ == nullptr
        && this->modifier_ == nullptr && this->modifierParam_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
              // isVar Field Functions 
              bool hasIsVar() const { return this->isVar_ != nullptr;};
              void deleteIsVar() { this->isVar_ = nullptr;};
              inline bool getIsVar() const { DARABONBA_PTR_GET_DEFAULT(isVar_, false) };
              inline Right& setIsVar(bool isVar) { DARABONBA_PTR_SET_VALUE(isVar_, isVar) };


              // modifier Field Functions 
              bool hasModifier() const { return this->modifier_ != nullptr;};
              void deleteModifier() { this->modifier_ = nullptr;};
              inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
              inline Right& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


              // modifierParam Field Functions 
              bool hasModifierParam() const { return this->modifierParam_ != nullptr;};
              void deleteModifierParam() { this->modifierParam_ = nullptr;};
              inline               const Darabonba::Json & getModifierParam() const { DARABONBA_GET(modifierParam_) };
              Darabonba::Json & getModifierParam() { DARABONBA_GET(modifierParam_) };
              inline Right& setModifierParam(const Darabonba::Json & modifierParam) { DARABONBA_SET_VALUE(modifierParam_, modifierParam) };
              inline Right& setModifierParam(Darabonba::Json && modifierParam) { DARABONBA_SET_RVALUE(modifierParam_, modifierParam) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Right& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline Right& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // Indicates whether the right operand is a constant or a runtime variable that is obtained from the runtime context. Valid values:
              // 
              // *   true: runtime variable.
              // *   false: constant.
              shared_ptr<bool> isVar_ {};
              // The remarks on the right operand.
              shared_ptr<string> modifier_ {};
              // The key-value pair information of the remarks.
              Darabonba::Json modifierParam_ {};
              // The data type of the right operand.
              shared_ptr<string> type_ {};
              // The right operand.
              shared_ptr<string> value_ {};
            };

            class Left : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Left& obj) { 
                DARABONBA_PTR_TO_JSON(IsVar, isVar_);
                DARABONBA_PTR_TO_JSON(Modifier, modifier_);
                DARABONBA_ANY_TO_JSON(ModifierParam, modifierParam_);
                DARABONBA_PTR_TO_JSON(Type, type_);
                DARABONBA_PTR_TO_JSON(Value, value_);
              };
              friend void from_json(const Darabonba::Json& j, Left& obj) { 
                DARABONBA_PTR_FROM_JSON(IsVar, isVar_);
                DARABONBA_PTR_FROM_JSON(Modifier, modifier_);
                DARABONBA_ANY_FROM_JSON(ModifierParam, modifierParam_);
                DARABONBA_PTR_FROM_JSON(Type, type_);
                DARABONBA_PTR_FROM_JSON(Value, value_);
              };
              Left() = default ;
              Left(const Left &) = default ;
              Left(Left &&) = default ;
              Left(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~Left() = default ;
              Left& operator=(const Left &) = default ;
              Left& operator=(Left &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->isVar_ == nullptr
        && this->modifier_ == nullptr && this->modifierParam_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
              // isVar Field Functions 
              bool hasIsVar() const { return this->isVar_ != nullptr;};
              void deleteIsVar() { this->isVar_ = nullptr;};
              inline bool getIsVar() const { DARABONBA_PTR_GET_DEFAULT(isVar_, false) };
              inline Left& setIsVar(bool isVar) { DARABONBA_PTR_SET_VALUE(isVar_, isVar) };


              // modifier Field Functions 
              bool hasModifier() const { return this->modifier_ != nullptr;};
              void deleteModifier() { this->modifier_ = nullptr;};
              inline string getModifier() const { DARABONBA_PTR_GET_DEFAULT(modifier_, "") };
              inline Left& setModifier(string modifier) { DARABONBA_PTR_SET_VALUE(modifier_, modifier) };


              // modifierParam Field Functions 
              bool hasModifierParam() const { return this->modifierParam_ != nullptr;};
              void deleteModifierParam() { this->modifierParam_ = nullptr;};
              inline               const Darabonba::Json & getModifierParam() const { DARABONBA_GET(modifierParam_) };
              Darabonba::Json & getModifierParam() { DARABONBA_GET(modifierParam_) };
              inline Left& setModifierParam(const Darabonba::Json & modifierParam) { DARABONBA_SET_VALUE(modifierParam_, modifierParam) };
              inline Left& setModifierParam(Darabonba::Json && modifierParam) { DARABONBA_SET_RVALUE(modifierParam_, modifierParam) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline Left& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


              // value Field Functions 
              bool hasValue() const { return this->value_ != nullptr;};
              void deleteValue() { this->value_ = nullptr;};
              inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
              inline Left& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


            protected:
              // Indicates whether the left operand is a variable. Valid values:
              // 
              // *   true: variable.
              // *   false: constant.
              shared_ptr<bool> isVar_ {};
              // The remarks on the right operand.
              shared_ptr<string> modifier_ {};
              // The key-value pair information of the remarks.
              Darabonba::Json modifierParam_ {};
              // Indicates whether the left operand is a constant. Valid values:
              // 
              // *   true
              // *   false
              shared_ptr<string> type_ {};
              // The variable of the left operand.
              shared_ptr<string> value_ {};
            };

            virtual bool empty() const override { return this->isNot_ == nullptr
        && this->itemId_ == nullptr && this->left_ == nullptr && this->operator_ == nullptr && this->right_ == nullptr; };
            // isNot Field Functions 
            bool hasIsNot() const { return this->isNot_ != nullptr;};
            void deleteIsNot() { this->isNot_ = nullptr;};
            inline bool getIsNot() const { DARABONBA_PTR_GET_DEFAULT(isNot_, false) };
            inline Conditions& setIsNot(bool isNot) { DARABONBA_PTR_SET_VALUE(isNot_, isNot) };


            // itemId Field Functions 
            bool hasItemId() const { return this->itemId_ != nullptr;};
            void deleteItemId() { this->itemId_ = nullptr;};
            inline int32_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0) };
            inline Conditions& setItemId(int32_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


            // left Field Functions 
            bool hasLeft() const { return this->left_ != nullptr;};
            void deleteLeft() { this->left_ = nullptr;};
            inline const Conditions::Left & getLeft() const { DARABONBA_PTR_GET_CONST(left_, Conditions::Left) };
            inline Conditions::Left getLeft() { DARABONBA_PTR_GET(left_, Conditions::Left) };
            inline Conditions& setLeft(const Conditions::Left & left) { DARABONBA_PTR_SET_VALUE(left_, left) };
            inline Conditions& setLeft(Conditions::Left && left) { DARABONBA_PTR_SET_RVALUE(left_, left) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline Conditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // right Field Functions 
            bool hasRight() const { return this->right_ != nullptr;};
            void deleteRight() { this->right_ = nullptr;};
            inline const Conditions::Right & getRight() const { DARABONBA_PTR_GET_CONST(right_, Conditions::Right) };
            inline Conditions::Right getRight() { DARABONBA_PTR_GET(right_, Conditions::Right) };
            inline Conditions& setRight(const Conditions::Right & right) { DARABONBA_PTR_SET_VALUE(right_, right) };
            inline Conditions& setRight(Conditions::Right && right) { DARABONBA_PTR_SET_RVALUE(right_, right) };


          protected:
            // Indicates whether the result is inverted. Valid values:
            // 
            // *   true
            // *   false
            shared_ptr<bool> isNot_ {};
            // The ID of the rule condition.
            shared_ptr<int32_t> itemId_ {};
            // The left operand of the rule condition.
            shared_ptr<Conditions::Left> left_ {};
            // The logical operator of the rule condition. Valid values:
            // 
            // *   `=`: equals to.
            // *   `<>`: does not equal to.
            // *   `in`: contains.
            // *   `not in`: does not contain.
            // *   `REGEXP`: matches a regular expression.
            // *   `NOT REGEXP`: does not match a regular expression.
            shared_ptr<string> operator_ {};
            // The right operand of the rule condition.
            shared_ptr<Conditions::Right> right_ {};
          };

          virtual bool empty() const override { return this->conditions_ == nullptr
        && this->logic_ == nullptr; };
          // conditions Field Functions 
          bool hasConditions() const { return this->conditions_ != nullptr;};
          void deleteConditions() { this->conditions_ = nullptr;};
          inline const vector<Expression::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Expression::Conditions>) };
          inline vector<Expression::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Expression::Conditions>) };
          inline Expression& setConditions(const vector<Expression::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
          inline Expression& setConditions(vector<Expression::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


          // logic Field Functions 
          bool hasLogic() const { return this->logic_ != nullptr;};
          void deleteLogic() { this->logic_ = nullptr;};
          inline string getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
          inline Expression& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


        protected:
          // The rule conditions.
          shared_ptr<vector<Expression::Conditions>> conditions_ {};
          // The logical relationships among the rule conditions.
          shared_ptr<string> logic_ {};
        };

        virtual bool empty() const override { return this->alertName_ == nullptr
        && this->alertNameId_ == nullptr && this->alertType_ == nullptr && this->alertTypeId_ == nullptr && this->alertUuid_ == nullptr && this->aliuid_ == nullptr
        && this->expression_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->incidentUuid_ == nullptr
        && this->status_ == nullptr && this->subAliuid_ == nullptr; };
        // alertName Field Functions 
        bool hasAlertName() const { return this->alertName_ != nullptr;};
        void deleteAlertName() { this->alertName_ = nullptr;};
        inline string getAlertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
        inline ResponseData& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


        // alertNameId Field Functions 
        bool hasAlertNameId() const { return this->alertNameId_ != nullptr;};
        void deleteAlertNameId() { this->alertNameId_ = nullptr;};
        inline string getAlertNameId() const { DARABONBA_PTR_GET_DEFAULT(alertNameId_, "") };
        inline ResponseData& setAlertNameId(string alertNameId) { DARABONBA_PTR_SET_VALUE(alertNameId_, alertNameId) };


        // alertType Field Functions 
        bool hasAlertType() const { return this->alertType_ != nullptr;};
        void deleteAlertType() { this->alertType_ = nullptr;};
        inline string getAlertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
        inline ResponseData& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


        // alertTypeId Field Functions 
        bool hasAlertTypeId() const { return this->alertTypeId_ != nullptr;};
        void deleteAlertTypeId() { this->alertTypeId_ = nullptr;};
        inline string getAlertTypeId() const { DARABONBA_PTR_GET_DEFAULT(alertTypeId_, "") };
        inline ResponseData& setAlertTypeId(string alertTypeId) { DARABONBA_PTR_SET_VALUE(alertTypeId_, alertTypeId) };


        // alertUuid Field Functions 
        bool hasAlertUuid() const { return this->alertUuid_ != nullptr;};
        void deleteAlertUuid() { this->alertUuid_ = nullptr;};
        inline string getAlertUuid() const { DARABONBA_PTR_GET_DEFAULT(alertUuid_, "") };
        inline ResponseData& setAlertUuid(string alertUuid) { DARABONBA_PTR_SET_VALUE(alertUuid_, alertUuid) };


        // aliuid Field Functions 
        bool hasAliuid() const { return this->aliuid_ != nullptr;};
        void deleteAliuid() { this->aliuid_ = nullptr;};
        inline int64_t getAliuid() const { DARABONBA_PTR_GET_DEFAULT(aliuid_, 0L) };
        inline ResponseData& setAliuid(int64_t aliuid) { DARABONBA_PTR_SET_VALUE(aliuid_, aliuid) };


        // expression Field Functions 
        bool hasExpression() const { return this->expression_ != nullptr;};
        void deleteExpression() { this->expression_ = nullptr;};
        inline const ResponseData::Expression & getExpression() const { DARABONBA_PTR_GET_CONST(expression_, ResponseData::Expression) };
        inline ResponseData::Expression getExpression() { DARABONBA_PTR_GET(expression_, ResponseData::Expression) };
        inline ResponseData& setExpression(const ResponseData::Expression & expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };
        inline ResponseData& setExpression(ResponseData::Expression && expression) { DARABONBA_PTR_SET_RVALUE(expression_, expression) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline ResponseData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline ResponseData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline ResponseData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // incidentUuid Field Functions 
        bool hasIncidentUuid() const { return this->incidentUuid_ != nullptr;};
        void deleteIncidentUuid() { this->incidentUuid_ = nullptr;};
        inline string getIncidentUuid() const { DARABONBA_PTR_GET_DEFAULT(incidentUuid_, "") };
        inline ResponseData& setIncidentUuid(string incidentUuid) { DARABONBA_PTR_SET_VALUE(incidentUuid_, incidentUuid) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline ResponseData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // subAliuid Field Functions 
        bool hasSubAliuid() const { return this->subAliuid_ != nullptr;};
        void deleteSubAliuid() { this->subAliuid_ = nullptr;};
        inline int64_t getSubAliuid() const { DARABONBA_PTR_GET_DEFAULT(subAliuid_, 0L) };
        inline ResponseData& setSubAliuid(int64_t subAliuid) { DARABONBA_PTR_SET_VALUE(subAliuid_, subAliuid) };


      protected:
        // The alert name.
        shared_ptr<string> alertName_ {};
        // The ID of the alert name.
        shared_ptr<string> alertNameId_ {};
        // The alert type.
        shared_ptr<string> alertType_ {};
        // The ID of the alert type.
        shared_ptr<string> alertTypeId_ {};
        // The UUID of the alert.
        shared_ptr<string> alertUuid_ {};
        // The ID of the Alibaba Cloud account that is used to purchase the threat analysis feature.
        shared_ptr<int64_t> aliuid_ {};
        // The conditions in the rule. The value is a JSON array.
        shared_ptr<ResponseData::Expression> expression_ {};
        // The time when the whitelist rule was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the whitelist rule was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the whitelist rule.
        shared_ptr<int64_t> id_ {};
        // The UUID of the event.
        shared_ptr<string> incidentUuid_ {};
        // The status of the whitelist rule. Valid values:
        // 
        // *   1: enabled.
        // *   0: disabled.
        shared_ptr<int32_t> status_ {};
        // The ID of the Alibaba Cloud account that is used to create the whitelist rule.
        shared_ptr<int64_t> subAliuid_ {};
      };

      class PageInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
          DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        PageInfo() = default ;
        PageInfo(const PageInfo &) = default ;
        PageInfo(PageInfo &&) = default ;
        PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~PageInfo() = default ;
        PageInfo& operator=(const PageInfo &) = default ;
        PageInfo& operator=(PageInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
        // currentPage Field Functions 
        bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
        void deleteCurrentPage() { this->currentPage_ = nullptr;};
        inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
        inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


        // pageSize Field Functions 
        bool hasPageSize() const { return this->pageSize_ != nullptr;};
        void deletePageSize() { this->pageSize_ = nullptr;};
        inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
        inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline PageInfo& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // The current page number.
        shared_ptr<int32_t> currentPage_ {};
        // The number of entries per page.
        shared_ptr<int32_t> pageSize_ {};
        // The total number of entries returned.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->responseData_ == nullptr; };
      // pageInfo Field Functions 
      bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
      void deletePageInfo() { this->pageInfo_ = nullptr;};
      inline const Data::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, Data::PageInfo) };
      inline Data::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, Data::PageInfo) };
      inline Data& setPageInfo(const Data::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
      inline Data& setPageInfo(Data::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


      // responseData Field Functions 
      bool hasResponseData() const { return this->responseData_ != nullptr;};
      void deleteResponseData() { this->responseData_ = nullptr;};
      inline const vector<Data::ResponseData> & getResponseData() const { DARABONBA_PTR_GET_CONST(responseData_, vector<Data::ResponseData>) };
      inline vector<Data::ResponseData> getResponseData() { DARABONBA_PTR_GET(responseData_, vector<Data::ResponseData>) };
      inline Data& setResponseData(const vector<Data::ResponseData> & responseData) { DARABONBA_PTR_SET_VALUE(responseData_, responseData) };
      inline Data& setResponseData(vector<Data::ResponseData> && responseData) { DARABONBA_PTR_SET_RVALUE(responseData_, responseData) };


    protected:
      // The pagination information.
      shared_ptr<Data::PageInfo> pageInfo_ {};
      // The detailed data.
      shared_ptr<vector<Data::ResponseData>> responseData_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeWhiteRuleListResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeWhiteRuleListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeWhiteRuleListResponseBody::Data) };
    inline DescribeWhiteRuleListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeWhiteRuleListResponseBody::Data) };
    inline DescribeWhiteRuleListResponseBody& setData(const DescribeWhiteRuleListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeWhiteRuleListResponseBody& setData(DescribeWhiteRuleListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeWhiteRuleListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteRuleListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeWhiteRuleListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<int32_t> code_ {};
    // The data returned.
    shared_ptr<DescribeWhiteRuleListResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
