// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RULESVALUE_HPP_
#define ALIBABACLOUD_MODELS_RULESVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class RulesValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RulesValue& obj) { 
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Rate, rate_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, RulesValue& obj) { 
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Rate, rate_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    RulesValue() = default ;
    RulesValue(const RulesValue &) = default ;
    RulesValue(RulesValue &&) = default ;
    RulesValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RulesValue() = default ;
    RulesValue& operator=(const RulesValue &) = default ;
    RulesValue& operator=(RulesValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(springcloud, springcloud_);
        DARABONBA_PTR_TO_JSON(dubbo, dubbo_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(springcloud, springcloud_);
        DARABONBA_PTR_FROM_JSON(dubbo, dubbo_);
      };
      Rules() = default ;
      Rules(const Rules &) = default ;
      Rules(Rules &&) = default ;
      Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Rules() = default ;
      Rules& operator=(const Rules &) = default ;
      Rules& operator=(Rules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Dubbo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Dubbo& obj) { 
          DARABONBA_PTR_TO_JSON(appId, appId_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
          DARABONBA_PTR_TO_JSON(triggerPolicy, triggerPolicy_);
          DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
          DARABONBA_PTR_TO_JSON(group, group_);
          DARABONBA_PTR_TO_JSON(version, version_);
          DARABONBA_PTR_TO_JSON(methodName, methodName_);
          DARABONBA_PTR_TO_JSON(paramTypes, paramTypes_);
          DARABONBA_PTR_TO_JSON(condition, condition_);
          DARABONBA_PTR_TO_JSON(argumentItems, argumentItems_);
        };
        friend void from_json(const Darabonba::Json& j, Dubbo& obj) { 
          DARABONBA_PTR_FROM_JSON(appId, appId_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
          DARABONBA_PTR_FROM_JSON(triggerPolicy, triggerPolicy_);
          DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
          DARABONBA_PTR_FROM_JSON(group, group_);
          DARABONBA_PTR_FROM_JSON(version, version_);
          DARABONBA_PTR_FROM_JSON(methodName, methodName_);
          DARABONBA_PTR_FROM_JSON(paramTypes, paramTypes_);
          DARABONBA_PTR_FROM_JSON(condition, condition_);
          DARABONBA_PTR_FROM_JSON(argumentItems, argumentItems_);
        };
        Dubbo() = default ;
        Dubbo(const Dubbo &) = default ;
        Dubbo(Dubbo &&) = default ;
        Dubbo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Dubbo() = default ;
        Dubbo& operator=(const Dubbo &) = default ;
        Dubbo& operator=(Dubbo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ArgumentItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ArgumentItems& obj) { 
            DARABONBA_PTR_TO_JSON(operator, operator_);
            DARABONBA_PTR_TO_JSON(nameList, nameList_);
            DARABONBA_PTR_TO_JSON(datum, datum_);
            DARABONBA_PTR_TO_JSON(cond, cond_);
            DARABONBA_PTR_TO_JSON(divisor, divisor_);
            DARABONBA_PTR_TO_JSON(remainder, remainder_);
            DARABONBA_PTR_TO_JSON(rate, rate_);
            DARABONBA_PTR_TO_JSON(index, index_);
            DARABONBA_PTR_TO_JSON(expr, expr_);
            DARABONBA_ANY_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, ArgumentItems& obj) { 
            DARABONBA_PTR_FROM_JSON(operator, operator_);
            DARABONBA_PTR_FROM_JSON(nameList, nameList_);
            DARABONBA_PTR_FROM_JSON(datum, datum_);
            DARABONBA_PTR_FROM_JSON(cond, cond_);
            DARABONBA_PTR_FROM_JSON(divisor, divisor_);
            DARABONBA_PTR_FROM_JSON(remainder, remainder_);
            DARABONBA_PTR_FROM_JSON(rate, rate_);
            DARABONBA_PTR_FROM_JSON(index, index_);
            DARABONBA_PTR_FROM_JSON(expr, expr_);
            DARABONBA_ANY_FROM_JSON(value, value_);
          };
          ArgumentItems() = default ;
          ArgumentItems(const ArgumentItems &) = default ;
          ArgumentItems(ArgumentItems &&) = default ;
          ArgumentItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ArgumentItems() = default ;
          ArgumentItems& operator=(const ArgumentItems &) = default ;
          ArgumentItems& operator=(ArgumentItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->operator_ == nullptr
        && this->nameList_ == nullptr && this->datum_ == nullptr && this->cond_ == nullptr && this->divisor_ == nullptr && this->remainder_ == nullptr
        && this->rate_ == nullptr && this->index_ == nullptr && this->expr_ == nullptr && this->value_ == nullptr; };
          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline ArgumentItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // nameList Field Functions 
          bool hasNameList() const { return this->nameList_ != nullptr;};
          void deleteNameList() { this->nameList_ = nullptr;};
          inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
          inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
          inline ArgumentItems& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
          inline ArgumentItems& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


          // datum Field Functions 
          bool hasDatum() const { return this->datum_ != nullptr;};
          void deleteDatum() { this->datum_ = nullptr;};
          inline string getDatum() const { DARABONBA_PTR_GET_DEFAULT(datum_, "") };
          inline ArgumentItems& setDatum(string datum) { DARABONBA_PTR_SET_VALUE(datum_, datum) };


          // cond Field Functions 
          bool hasCond() const { return this->cond_ != nullptr;};
          void deleteCond() { this->cond_ = nullptr;};
          inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
          inline ArgumentItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


          // divisor Field Functions 
          bool hasDivisor() const { return this->divisor_ != nullptr;};
          void deleteDivisor() { this->divisor_ = nullptr;};
          inline int32_t getDivisor() const { DARABONBA_PTR_GET_DEFAULT(divisor_, 0) };
          inline ArgumentItems& setDivisor(int32_t divisor) { DARABONBA_PTR_SET_VALUE(divisor_, divisor) };


          // remainder Field Functions 
          bool hasRemainder() const { return this->remainder_ != nullptr;};
          void deleteRemainder() { this->remainder_ = nullptr;};
          inline int32_t getRemainder() const { DARABONBA_PTR_GET_DEFAULT(remainder_, 0) };
          inline ArgumentItems& setRemainder(int32_t remainder) { DARABONBA_PTR_SET_VALUE(remainder_, remainder) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
          inline ArgumentItems& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


          // index Field Functions 
          bool hasIndex() const { return this->index_ != nullptr;};
          void deleteIndex() { this->index_ = nullptr;};
          inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
          inline ArgumentItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


          // expr Field Functions 
          bool hasExpr() const { return this->expr_ != nullptr;};
          void deleteExpr() { this->expr_ = nullptr;};
          inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
          inline ArgumentItems& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline           const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
          Darabonba::Json & getValue() { DARABONBA_GET(value_) };
          inline ArgumentItems& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
          inline ArgumentItems& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


        protected:
          shared_ptr<string> operator_ {};
          shared_ptr<vector<string>> nameList_ {};
          shared_ptr<string> datum_ {};
          shared_ptr<string> cond_ {};
          shared_ptr<int32_t> divisor_ {};
          shared_ptr<int32_t> remainder_ {};
          shared_ptr<int32_t> rate_ {};
          shared_ptr<int32_t> index_ {};
          shared_ptr<string> expr_ {};
          Darabonba::Json value_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->tags_ == nullptr && this->triggerPolicy_ == nullptr && this->serviceName_ == nullptr && this->group_ == nullptr && this->version_ == nullptr
        && this->methodName_ == nullptr && this->paramTypes_ == nullptr && this->condition_ == nullptr && this->argumentItems_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Dubbo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Dubbo& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Dubbo& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // triggerPolicy Field Functions 
        bool hasTriggerPolicy() const { return this->triggerPolicy_ != nullptr;};
        void deleteTriggerPolicy() { this->triggerPolicy_ = nullptr;};
        inline string getTriggerPolicy() const { DARABONBA_PTR_GET_DEFAULT(triggerPolicy_, "") };
        inline Dubbo& setTriggerPolicy(string triggerPolicy) { DARABONBA_PTR_SET_VALUE(triggerPolicy_, triggerPolicy) };


        // serviceName Field Functions 
        bool hasServiceName() const { return this->serviceName_ != nullptr;};
        void deleteServiceName() { this->serviceName_ = nullptr;};
        inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
        inline Dubbo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline Dubbo& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
        inline Dubbo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        // methodName Field Functions 
        bool hasMethodName() const { return this->methodName_ != nullptr;};
        void deleteMethodName() { this->methodName_ = nullptr;};
        inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
        inline Dubbo& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


        // paramTypes Field Functions 
        bool hasParamTypes() const { return this->paramTypes_ != nullptr;};
        void deleteParamTypes() { this->paramTypes_ = nullptr;};
        inline const vector<string> & getParamTypes() const { DARABONBA_PTR_GET_CONST(paramTypes_, vector<string>) };
        inline vector<string> getParamTypes() { DARABONBA_PTR_GET(paramTypes_, vector<string>) };
        inline Dubbo& setParamTypes(const vector<string> & paramTypes) { DARABONBA_PTR_SET_VALUE(paramTypes_, paramTypes) };
        inline Dubbo& setParamTypes(vector<string> && paramTypes) { DARABONBA_PTR_SET_RVALUE(paramTypes_, paramTypes) };


        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
        inline Dubbo& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


        // argumentItems Field Functions 
        bool hasArgumentItems() const { return this->argumentItems_ != nullptr;};
        void deleteArgumentItems() { this->argumentItems_ = nullptr;};
        inline const vector<Dubbo::ArgumentItems> & getArgumentItems() const { DARABONBA_PTR_GET_CONST(argumentItems_, vector<Dubbo::ArgumentItems>) };
        inline vector<Dubbo::ArgumentItems> getArgumentItems() { DARABONBA_PTR_GET(argumentItems_, vector<Dubbo::ArgumentItems>) };
        inline Dubbo& setArgumentItems(const vector<Dubbo::ArgumentItems> & argumentItems) { DARABONBA_PTR_SET_VALUE(argumentItems_, argumentItems) };
        inline Dubbo& setArgumentItems(vector<Dubbo::ArgumentItems> && argumentItems) { DARABONBA_PTR_SET_RVALUE(argumentItems_, argumentItems) };


      protected:
        shared_ptr<string> appId_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<string> triggerPolicy_ {};
        shared_ptr<string> serviceName_ {};
        shared_ptr<string> group_ {};
        shared_ptr<string> version_ {};
        shared_ptr<string> methodName_ {};
        shared_ptr<vector<string>> paramTypes_ {};
        shared_ptr<string> condition_ {};
        shared_ptr<vector<Dubbo::ArgumentItems>> argumentItems_ {};
      };

      class Springcloud : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Springcloud& obj) { 
          DARABONBA_PTR_TO_JSON(condition, condition_);
          DARABONBA_PTR_TO_JSON(restItems, restItems_);
          DARABONBA_PTR_TO_JSON(triggerPolicy, triggerPolicy_);
          DARABONBA_PTR_TO_JSON(enable, enable_);
          DARABONBA_PTR_TO_JSON(appId, appId_);
          DARABONBA_PTR_TO_JSON(priority, priority_);
          DARABONBA_PTR_TO_JSON(tags, tags_);
          DARABONBA_PTR_TO_JSON(paths, paths_);
          DARABONBA_PTR_TO_JSON(path, path_);
        };
        friend void from_json(const Darabonba::Json& j, Springcloud& obj) { 
          DARABONBA_PTR_FROM_JSON(condition, condition_);
          DARABONBA_PTR_FROM_JSON(restItems, restItems_);
          DARABONBA_PTR_FROM_JSON(triggerPolicy, triggerPolicy_);
          DARABONBA_PTR_FROM_JSON(enable, enable_);
          DARABONBA_PTR_FROM_JSON(appId, appId_);
          DARABONBA_PTR_FROM_JSON(priority, priority_);
          DARABONBA_PTR_FROM_JSON(tags, tags_);
          DARABONBA_PTR_FROM_JSON(paths, paths_);
          DARABONBA_PTR_FROM_JSON(path, path_);
        };
        Springcloud() = default ;
        Springcloud(const Springcloud &) = default ;
        Springcloud(Springcloud &&) = default ;
        Springcloud(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Springcloud() = default ;
        Springcloud& operator=(const Springcloud &) = default ;
        Springcloud& operator=(Springcloud &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RestItems : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RestItems& obj) { 
            DARABONBA_PTR_TO_JSON(datum, datum_);
            DARABONBA_PTR_TO_JSON(operator, operator_);
            DARABONBA_PTR_TO_JSON(nameList, nameList_);
            DARABONBA_PTR_TO_JSON(cond, cond_);
            DARABONBA_PTR_TO_JSON(divisor, divisor_);
            DARABONBA_PTR_TO_JSON(remainder, remainder_);
            DARABONBA_PTR_TO_JSON(rate, rate_);
            DARABONBA_PTR_TO_JSON(type, type_);
            DARABONBA_PTR_TO_JSON(name, name_);
            DARABONBA_ANY_TO_JSON(value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RestItems& obj) { 
            DARABONBA_PTR_FROM_JSON(datum, datum_);
            DARABONBA_PTR_FROM_JSON(operator, operator_);
            DARABONBA_PTR_FROM_JSON(nameList, nameList_);
            DARABONBA_PTR_FROM_JSON(cond, cond_);
            DARABONBA_PTR_FROM_JSON(divisor, divisor_);
            DARABONBA_PTR_FROM_JSON(remainder, remainder_);
            DARABONBA_PTR_FROM_JSON(rate, rate_);
            DARABONBA_PTR_FROM_JSON(type, type_);
            DARABONBA_PTR_FROM_JSON(name, name_);
            DARABONBA_ANY_FROM_JSON(value, value_);
          };
          RestItems() = default ;
          RestItems(const RestItems &) = default ;
          RestItems(RestItems &&) = default ;
          RestItems(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RestItems() = default ;
          RestItems& operator=(const RestItems &) = default ;
          RestItems& operator=(RestItems &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->datum_ == nullptr
        && this->operator_ == nullptr && this->nameList_ == nullptr && this->cond_ == nullptr && this->divisor_ == nullptr && this->remainder_ == nullptr
        && this->rate_ == nullptr && this->type_ == nullptr && this->name_ == nullptr && this->value_ == nullptr; };
          // datum Field Functions 
          bool hasDatum() const { return this->datum_ != nullptr;};
          void deleteDatum() { this->datum_ = nullptr;};
          inline string getDatum() const { DARABONBA_PTR_GET_DEFAULT(datum_, "") };
          inline RestItems& setDatum(string datum) { DARABONBA_PTR_SET_VALUE(datum_, datum) };


          // operator Field Functions 
          bool hasOperator() const { return this->operator_ != nullptr;};
          void deleteOperator() { this->operator_ = nullptr;};
          inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
          inline RestItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


          // nameList Field Functions 
          bool hasNameList() const { return this->nameList_ != nullptr;};
          void deleteNameList() { this->nameList_ = nullptr;};
          inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
          inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
          inline RestItems& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
          inline RestItems& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


          // cond Field Functions 
          bool hasCond() const { return this->cond_ != nullptr;};
          void deleteCond() { this->cond_ = nullptr;};
          inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
          inline RestItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


          // divisor Field Functions 
          bool hasDivisor() const { return this->divisor_ != nullptr;};
          void deleteDivisor() { this->divisor_ = nullptr;};
          inline int32_t getDivisor() const { DARABONBA_PTR_GET_DEFAULT(divisor_, 0) };
          inline RestItems& setDivisor(int32_t divisor) { DARABONBA_PTR_SET_VALUE(divisor_, divisor) };


          // remainder Field Functions 
          bool hasRemainder() const { return this->remainder_ != nullptr;};
          void deleteRemainder() { this->remainder_ = nullptr;};
          inline int32_t getRemainder() const { DARABONBA_PTR_GET_DEFAULT(remainder_, 0) };
          inline RestItems& setRemainder(int32_t remainder) { DARABONBA_PTR_SET_VALUE(remainder_, remainder) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
          inline RestItems& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline RestItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RestItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline           const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
          Darabonba::Json & getValue() { DARABONBA_GET(value_) };
          inline RestItems& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
          inline RestItems& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


        protected:
          shared_ptr<string> datum_ {};
          shared_ptr<string> operator_ {};
          shared_ptr<vector<string>> nameList_ {};
          shared_ptr<string> cond_ {};
          shared_ptr<int32_t> divisor_ {};
          shared_ptr<int32_t> remainder_ {};
          shared_ptr<int32_t> rate_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> name_ {};
          Darabonba::Json value_ {};
        };

        virtual bool empty() const override { return this->condition_ == nullptr
        && this->restItems_ == nullptr && this->triggerPolicy_ == nullptr && this->enable_ == nullptr && this->appId_ == nullptr && this->priority_ == nullptr
        && this->tags_ == nullptr && this->paths_ == nullptr && this->path_ == nullptr; };
        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
        inline Springcloud& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


        // restItems Field Functions 
        bool hasRestItems() const { return this->restItems_ != nullptr;};
        void deleteRestItems() { this->restItems_ = nullptr;};
        inline const vector<Springcloud::RestItems> & getRestItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<Springcloud::RestItems>) };
        inline vector<Springcloud::RestItems> getRestItems() { DARABONBA_PTR_GET(restItems_, vector<Springcloud::RestItems>) };
        inline Springcloud& setRestItems(const vector<Springcloud::RestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
        inline Springcloud& setRestItems(vector<Springcloud::RestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


        // triggerPolicy Field Functions 
        bool hasTriggerPolicy() const { return this->triggerPolicy_ != nullptr;};
        void deleteTriggerPolicy() { this->triggerPolicy_ = nullptr;};
        inline string getTriggerPolicy() const { DARABONBA_PTR_GET_DEFAULT(triggerPolicy_, "") };
        inline Springcloud& setTriggerPolicy(string triggerPolicy) { DARABONBA_PTR_SET_VALUE(triggerPolicy_, triggerPolicy) };


        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Springcloud& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Springcloud& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // priority Field Functions 
        bool hasPriority() const { return this->priority_ != nullptr;};
        void deletePriority() { this->priority_ = nullptr;};
        inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
        inline Springcloud& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


        // tags Field Functions 
        bool hasTags() const { return this->tags_ != nullptr;};
        void deleteTags() { this->tags_ = nullptr;};
        inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
        inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
        inline Springcloud& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
        inline Springcloud& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline Springcloud& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline Springcloud& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline Springcloud& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


      protected:
        shared_ptr<string> condition_ {};
        shared_ptr<vector<Springcloud::RestItems>> restItems_ {};
        shared_ptr<string> triggerPolicy_ {};
        shared_ptr<bool> enable_ {};
        shared_ptr<string> appId_ {};
        shared_ptr<int32_t> priority_ {};
        shared_ptr<vector<string>> tags_ {};
        shared_ptr<vector<string>> paths_ {};
        shared_ptr<string> path_ {};
      };

      virtual bool empty() const override { return this->springcloud_ == nullptr
        && this->dubbo_ == nullptr; };
      // springcloud Field Functions 
      bool hasSpringcloud() const { return this->springcloud_ != nullptr;};
      void deleteSpringcloud() { this->springcloud_ = nullptr;};
      inline const vector<Rules::Springcloud> & getSpringcloud() const { DARABONBA_PTR_GET_CONST(springcloud_, vector<Rules::Springcloud>) };
      inline vector<Rules::Springcloud> getSpringcloud() { DARABONBA_PTR_GET(springcloud_, vector<Rules::Springcloud>) };
      inline Rules& setSpringcloud(const vector<Rules::Springcloud> & springcloud) { DARABONBA_PTR_SET_VALUE(springcloud_, springcloud) };
      inline Rules& setSpringcloud(vector<Rules::Springcloud> && springcloud) { DARABONBA_PTR_SET_RVALUE(springcloud_, springcloud) };


      // dubbo Field Functions 
      bool hasDubbo() const { return this->dubbo_ != nullptr;};
      void deleteDubbo() { this->dubbo_ = nullptr;};
      inline const vector<Rules::Dubbo> & getDubbo() const { DARABONBA_PTR_GET_CONST(dubbo_, vector<Rules::Dubbo>) };
      inline vector<Rules::Dubbo> getDubbo() { DARABONBA_PTR_GET(dubbo_, vector<Rules::Dubbo>) };
      inline Rules& setDubbo(const vector<Rules::Dubbo> & dubbo) { DARABONBA_PTR_SET_VALUE(dubbo_, dubbo) };
      inline Rules& setDubbo(vector<Rules::Dubbo> && dubbo) { DARABONBA_PTR_SET_RVALUE(dubbo_, dubbo) };


    protected:
      shared_ptr<vector<Rules::Springcloud>> springcloud_ {};
      shared_ptr<vector<Rules::Dubbo>> dubbo_ {};
    };

    virtual bool empty() const override { return this->status_ == nullptr
        && this->rate_ == nullptr && this->enable_ == nullptr && this->tag_ == nullptr && this->name_ == nullptr && this->id_ == nullptr
        && this->instanceNum_ == nullptr && this->rules_ == nullptr; };
    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline RulesValue& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // rate Field Functions 
    bool hasRate() const { return this->rate_ != nullptr;};
    void deleteRate() { this->rate_ = nullptr;};
    inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
    inline RulesValue& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline RulesValue& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
    inline RulesValue& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline RulesValue& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline RulesValue& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline RulesValue& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const RulesValue::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, RulesValue::Rules) };
    inline RulesValue::Rules getRules() { DARABONBA_PTR_GET(rules_, RulesValue::Rules) };
    inline RulesValue& setRules(const RulesValue::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline RulesValue& setRules(RulesValue::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    shared_ptr<int32_t> status_ {};
    shared_ptr<int32_t> rate_ {};
    shared_ptr<bool> enable_ {};
    shared_ptr<string> tag_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> instanceNum_ {};
    shared_ptr<RulesValue::Rules> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
