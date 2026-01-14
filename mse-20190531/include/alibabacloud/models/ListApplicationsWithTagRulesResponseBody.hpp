// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPLICATIONSWITHTAGRULESRESPONSEBODY_HPP_
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
  class ListApplicationsWithTagRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListApplicationsWithTagRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListApplicationsWithTagRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListApplicationsWithTagRulesResponseBody() = default ;
    ListApplicationsWithTagRulesResponseBody(const ListApplicationsWithTagRulesResponseBody &) = default ;
    ListApplicationsWithTagRulesResponseBody(ListApplicationsWithTagRulesResponseBody &&) = default ;
    ListApplicationsWithTagRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListApplicationsWithTagRulesResponseBody() = default ;
    ListApplicationsWithTagRulesResponseBody& operator=(const ListApplicationsWithTagRulesResponseBody &) = default ;
    ListApplicationsWithTagRulesResponseBody& operator=(ListApplicationsWithTagRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(TotalSize, totalSize_);
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
      class Result : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Result& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(Namespace, namespace_);
          DARABONBA_PTR_TO_JSON(RouteRules, routeRules_);
          DARABONBA_PTR_TO_JSON(RouteStatus, routeStatus_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
          DARABONBA_PTR_FROM_JSON(RouteRules, routeRules_);
          DARABONBA_PTR_FROM_JSON(RouteStatus, routeStatus_);
        };
        Result() = default ;
        Result(const Result &) = default ;
        Result(Result &&) = default ;
        Result(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Result() = default ;
        Result& operator=(const Result &) = default ;
        Result& operator=(Result &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RouteRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouteRules& obj) { 
            DARABONBA_PTR_TO_JSON(Enable, enable_);
            DARABONBA_PTR_TO_JSON(Id, id_);
            DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Rate, rate_);
            DARABONBA_PTR_TO_JSON(Rules, rules_);
            DARABONBA_PTR_TO_JSON(Status, status_);
            DARABONBA_PTR_TO_JSON(Tag, tag_);
          };
          friend void from_json(const Darabonba::Json& j, RouteRules& obj) { 
            DARABONBA_PTR_FROM_JSON(Enable, enable_);
            DARABONBA_PTR_FROM_JSON(Id, id_);
            DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Rate, rate_);
            DARABONBA_PTR_FROM_JSON(Rules, rules_);
            DARABONBA_PTR_FROM_JSON(Status, status_);
            DARABONBA_PTR_FROM_JSON(Tag, tag_);
          };
          RouteRules() = default ;
          RouteRules(const RouteRules &) = default ;
          RouteRules(RouteRules &&) = default ;
          RouteRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RouteRules() = default ;
          RouteRules& operator=(const RouteRules &) = default ;
          RouteRules& operator=(RouteRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Rules : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Rules& obj) { 
              DARABONBA_PTR_TO_JSON(dubbo, dubbo_);
              DARABONBA_PTR_TO_JSON(springcloud, springcloud_);
            };
            friend void from_json(const Darabonba::Json& j, Rules& obj) { 
              DARABONBA_PTR_FROM_JSON(dubbo, dubbo_);
              DARABONBA_PTR_FROM_JSON(springcloud, springcloud_);
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
            class Springcloud : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Springcloud& obj) { 
                DARABONBA_PTR_TO_JSON(appId, appId_);
                DARABONBA_PTR_TO_JSON(condition, condition_);
                DARABONBA_PTR_TO_JSON(enable, enable_);
                DARABONBA_PTR_TO_JSON(path, path_);
                DARABONBA_PTR_TO_JSON(paths, paths_);
                DARABONBA_PTR_TO_JSON(priority, priority_);
                DARABONBA_PTR_TO_JSON(restItems, restItems_);
                DARABONBA_PTR_TO_JSON(tags, tags_);
                DARABONBA_PTR_TO_JSON(triggerPolicy, triggerPolicy_);
              };
              friend void from_json(const Darabonba::Json& j, Springcloud& obj) { 
                DARABONBA_PTR_FROM_JSON(appId, appId_);
                DARABONBA_PTR_FROM_JSON(condition, condition_);
                DARABONBA_PTR_FROM_JSON(enable, enable_);
                DARABONBA_PTR_FROM_JSON(path, path_);
                DARABONBA_PTR_FROM_JSON(paths, paths_);
                DARABONBA_PTR_FROM_JSON(priority, priority_);
                DARABONBA_PTR_FROM_JSON(restItems, restItems_);
                DARABONBA_PTR_FROM_JSON(tags, tags_);
                DARABONBA_PTR_FROM_JSON(triggerPolicy, triggerPolicy_);
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
                  DARABONBA_PTR_TO_JSON(cond, cond_);
                  DARABONBA_PTR_TO_JSON(datum, datum_);
                  DARABONBA_PTR_TO_JSON(divisor, divisor_);
                  DARABONBA_PTR_TO_JSON(name, name_);
                  DARABONBA_PTR_TO_JSON(nameList, nameList_);
                  DARABONBA_PTR_TO_JSON(operator, operator_);
                  DARABONBA_PTR_TO_JSON(rate, rate_);
                  DARABONBA_PTR_TO_JSON(remainder, remainder_);
                  DARABONBA_PTR_TO_JSON(type, type_);
                  DARABONBA_PTR_TO_JSON(value, value_);
                };
                friend void from_json(const Darabonba::Json& j, RestItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(cond, cond_);
                  DARABONBA_PTR_FROM_JSON(datum, datum_);
                  DARABONBA_PTR_FROM_JSON(divisor, divisor_);
                  DARABONBA_PTR_FROM_JSON(name, name_);
                  DARABONBA_PTR_FROM_JSON(nameList, nameList_);
                  DARABONBA_PTR_FROM_JSON(operator, operator_);
                  DARABONBA_PTR_FROM_JSON(rate, rate_);
                  DARABONBA_PTR_FROM_JSON(remainder, remainder_);
                  DARABONBA_PTR_FROM_JSON(type, type_);
                  DARABONBA_PTR_FROM_JSON(value, value_);
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
                virtual bool empty() const override { return this->cond_ == nullptr
        && this->datum_ == nullptr && this->divisor_ == nullptr && this->name_ == nullptr && this->nameList_ == nullptr && this->operator_ == nullptr
        && this->rate_ == nullptr && this->remainder_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
                // cond Field Functions 
                bool hasCond() const { return this->cond_ != nullptr;};
                void deleteCond() { this->cond_ = nullptr;};
                inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
                inline RestItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


                // datum Field Functions 
                bool hasDatum() const { return this->datum_ != nullptr;};
                void deleteDatum() { this->datum_ = nullptr;};
                inline string getDatum() const { DARABONBA_PTR_GET_DEFAULT(datum_, "") };
                inline RestItems& setDatum(string datum) { DARABONBA_PTR_SET_VALUE(datum_, datum) };


                // divisor Field Functions 
                bool hasDivisor() const { return this->divisor_ != nullptr;};
                void deleteDivisor() { this->divisor_ = nullptr;};
                inline int32_t getDivisor() const { DARABONBA_PTR_GET_DEFAULT(divisor_, 0) };
                inline RestItems& setDivisor(int32_t divisor) { DARABONBA_PTR_SET_VALUE(divisor_, divisor) };


                // name Field Functions 
                bool hasName() const { return this->name_ != nullptr;};
                void deleteName() { this->name_ = nullptr;};
                inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
                inline RestItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


                // nameList Field Functions 
                bool hasNameList() const { return this->nameList_ != nullptr;};
                void deleteNameList() { this->nameList_ = nullptr;};
                inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
                inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
                inline RestItems& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
                inline RestItems& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


                // operator Field Functions 
                bool hasOperator() const { return this->operator_ != nullptr;};
                void deleteOperator() { this->operator_ = nullptr;};
                inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
                inline RestItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


                // rate Field Functions 
                bool hasRate() const { return this->rate_ != nullptr;};
                void deleteRate() { this->rate_ = nullptr;};
                inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
                inline RestItems& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


                // remainder Field Functions 
                bool hasRemainder() const { return this->remainder_ != nullptr;};
                void deleteRemainder() { this->remainder_ = nullptr;};
                inline int32_t getRemainder() const { DARABONBA_PTR_GET_DEFAULT(remainder_, 0) };
                inline RestItems& setRemainder(int32_t remainder) { DARABONBA_PTR_SET_VALUE(remainder_, remainder) };


                // type Field Functions 
                bool hasType() const { return this->type_ != nullptr;};
                void deleteType() { this->type_ = nullptr;};
                inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
                inline RestItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline RestItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                shared_ptr<string> cond_ {};
                shared_ptr<string> datum_ {};
                shared_ptr<int32_t> divisor_ {};
                shared_ptr<string> name_ {};
                shared_ptr<vector<string>> nameList_ {};
                shared_ptr<string> operator_ {};
                shared_ptr<int32_t> rate_ {};
                shared_ptr<int32_t> remainder_ {};
                shared_ptr<string> type_ {};
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->appId_ == nullptr
        && this->condition_ == nullptr && this->enable_ == nullptr && this->path_ == nullptr && this->paths_ == nullptr && this->priority_ == nullptr
        && this->restItems_ == nullptr && this->tags_ == nullptr && this->triggerPolicy_ == nullptr; };
              // appId Field Functions 
              bool hasAppId() const { return this->appId_ != nullptr;};
              void deleteAppId() { this->appId_ = nullptr;};
              inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
              inline Springcloud& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


              // condition Field Functions 
              bool hasCondition() const { return this->condition_ != nullptr;};
              void deleteCondition() { this->condition_ = nullptr;};
              inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
              inline Springcloud& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


              // enable Field Functions 
              bool hasEnable() const { return this->enable_ != nullptr;};
              void deleteEnable() { this->enable_ = nullptr;};
              inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
              inline Springcloud& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


              // path Field Functions 
              bool hasPath() const { return this->path_ != nullptr;};
              void deletePath() { this->path_ = nullptr;};
              inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
              inline Springcloud& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


              // paths Field Functions 
              bool hasPaths() const { return this->paths_ != nullptr;};
              void deletePaths() { this->paths_ = nullptr;};
              inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
              inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
              inline Springcloud& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
              inline Springcloud& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


              // priority Field Functions 
              bool hasPriority() const { return this->priority_ != nullptr;};
              void deletePriority() { this->priority_ = nullptr;};
              inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
              inline Springcloud& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


              // restItems Field Functions 
              bool hasRestItems() const { return this->restItems_ != nullptr;};
              void deleteRestItems() { this->restItems_ = nullptr;};
              inline const vector<Springcloud::RestItems> & getRestItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<Springcloud::RestItems>) };
              inline vector<Springcloud::RestItems> getRestItems() { DARABONBA_PTR_GET(restItems_, vector<Springcloud::RestItems>) };
              inline Springcloud& setRestItems(const vector<Springcloud::RestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
              inline Springcloud& setRestItems(vector<Springcloud::RestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


              // tags Field Functions 
              bool hasTags() const { return this->tags_ != nullptr;};
              void deleteTags() { this->tags_ = nullptr;};
              inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
              inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
              inline Springcloud& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
              inline Springcloud& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


              // triggerPolicy Field Functions 
              bool hasTriggerPolicy() const { return this->triggerPolicy_ != nullptr;};
              void deleteTriggerPolicy() { this->triggerPolicy_ = nullptr;};
              inline string getTriggerPolicy() const { DARABONBA_PTR_GET_DEFAULT(triggerPolicy_, "") };
              inline Springcloud& setTriggerPolicy(string triggerPolicy) { DARABONBA_PTR_SET_VALUE(triggerPolicy_, triggerPolicy) };


            protected:
              shared_ptr<string> appId_ {};
              shared_ptr<string> condition_ {};
              shared_ptr<bool> enable_ {};
              shared_ptr<string> path_ {};
              shared_ptr<vector<string>> paths_ {};
              shared_ptr<int32_t> priority_ {};
              shared_ptr<vector<Springcloud::RestItems>> restItems_ {};
              shared_ptr<vector<string>> tags_ {};
              shared_ptr<string> triggerPolicy_ {};
            };

            class Dubbo : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const Dubbo& obj) { 
                DARABONBA_PTR_TO_JSON(appId, appId_);
                DARABONBA_PTR_TO_JSON(argumentItems, argumentItems_);
                DARABONBA_PTR_TO_JSON(condition, condition_);
                DARABONBA_PTR_TO_JSON(group, group_);
                DARABONBA_PTR_TO_JSON(methodName, methodName_);
                DARABONBA_PTR_TO_JSON(paramTypes, paramTypes_);
                DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
                DARABONBA_PTR_TO_JSON(tags, tags_);
                DARABONBA_PTR_TO_JSON(triggerPolicy, triggerPolicy_);
                DARABONBA_PTR_TO_JSON(version, version_);
              };
              friend void from_json(const Darabonba::Json& j, Dubbo& obj) { 
                DARABONBA_PTR_FROM_JSON(appId, appId_);
                DARABONBA_PTR_FROM_JSON(argumentItems, argumentItems_);
                DARABONBA_PTR_FROM_JSON(condition, condition_);
                DARABONBA_PTR_FROM_JSON(group, group_);
                DARABONBA_PTR_FROM_JSON(methodName, methodName_);
                DARABONBA_PTR_FROM_JSON(paramTypes, paramTypes_);
                DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
                DARABONBA_PTR_FROM_JSON(tags, tags_);
                DARABONBA_PTR_FROM_JSON(triggerPolicy, triggerPolicy_);
                DARABONBA_PTR_FROM_JSON(version, version_);
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
                  DARABONBA_PTR_TO_JSON(cond, cond_);
                  DARABONBA_PTR_TO_JSON(datum, datum_);
                  DARABONBA_PTR_TO_JSON(divisor, divisor_);
                  DARABONBA_PTR_TO_JSON(expr, expr_);
                  DARABONBA_PTR_TO_JSON(index, index_);
                  DARABONBA_PTR_TO_JSON(nameList, nameList_);
                  DARABONBA_PTR_TO_JSON(operator, operator_);
                  DARABONBA_PTR_TO_JSON(rate, rate_);
                  DARABONBA_PTR_TO_JSON(remainder, remainder_);
                  DARABONBA_PTR_TO_JSON(value, value_);
                };
                friend void from_json(const Darabonba::Json& j, ArgumentItems& obj) { 
                  DARABONBA_PTR_FROM_JSON(cond, cond_);
                  DARABONBA_PTR_FROM_JSON(datum, datum_);
                  DARABONBA_PTR_FROM_JSON(divisor, divisor_);
                  DARABONBA_PTR_FROM_JSON(expr, expr_);
                  DARABONBA_PTR_FROM_JSON(index, index_);
                  DARABONBA_PTR_FROM_JSON(nameList, nameList_);
                  DARABONBA_PTR_FROM_JSON(operator, operator_);
                  DARABONBA_PTR_FROM_JSON(rate, rate_);
                  DARABONBA_PTR_FROM_JSON(remainder, remainder_);
                  DARABONBA_PTR_FROM_JSON(value, value_);
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
                virtual bool empty() const override { return this->cond_ == nullptr
        && this->datum_ == nullptr && this->divisor_ == nullptr && this->expr_ == nullptr && this->index_ == nullptr && this->nameList_ == nullptr
        && this->operator_ == nullptr && this->rate_ == nullptr && this->remainder_ == nullptr && this->value_ == nullptr; };
                // cond Field Functions 
                bool hasCond() const { return this->cond_ != nullptr;};
                void deleteCond() { this->cond_ = nullptr;};
                inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
                inline ArgumentItems& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


                // datum Field Functions 
                bool hasDatum() const { return this->datum_ != nullptr;};
                void deleteDatum() { this->datum_ = nullptr;};
                inline string getDatum() const { DARABONBA_PTR_GET_DEFAULT(datum_, "") };
                inline ArgumentItems& setDatum(string datum) { DARABONBA_PTR_SET_VALUE(datum_, datum) };


                // divisor Field Functions 
                bool hasDivisor() const { return this->divisor_ != nullptr;};
                void deleteDivisor() { this->divisor_ = nullptr;};
                inline int32_t getDivisor() const { DARABONBA_PTR_GET_DEFAULT(divisor_, 0) };
                inline ArgumentItems& setDivisor(int32_t divisor) { DARABONBA_PTR_SET_VALUE(divisor_, divisor) };


                // expr Field Functions 
                bool hasExpr() const { return this->expr_ != nullptr;};
                void deleteExpr() { this->expr_ = nullptr;};
                inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
                inline ArgumentItems& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


                // index Field Functions 
                bool hasIndex() const { return this->index_ != nullptr;};
                void deleteIndex() { this->index_ = nullptr;};
                inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
                inline ArgumentItems& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


                // nameList Field Functions 
                bool hasNameList() const { return this->nameList_ != nullptr;};
                void deleteNameList() { this->nameList_ = nullptr;};
                inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
                inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
                inline ArgumentItems& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
                inline ArgumentItems& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


                // operator Field Functions 
                bool hasOperator() const { return this->operator_ != nullptr;};
                void deleteOperator() { this->operator_ = nullptr;};
                inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
                inline ArgumentItems& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


                // rate Field Functions 
                bool hasRate() const { return this->rate_ != nullptr;};
                void deleteRate() { this->rate_ = nullptr;};
                inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
                inline ArgumentItems& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


                // remainder Field Functions 
                bool hasRemainder() const { return this->remainder_ != nullptr;};
                void deleteRemainder() { this->remainder_ = nullptr;};
                inline int32_t getRemainder() const { DARABONBA_PTR_GET_DEFAULT(remainder_, 0) };
                inline ArgumentItems& setRemainder(int32_t remainder) { DARABONBA_PTR_SET_VALUE(remainder_, remainder) };


                // value Field Functions 
                bool hasValue() const { return this->value_ != nullptr;};
                void deleteValue() { this->value_ = nullptr;};
                inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
                inline ArgumentItems& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


              protected:
                shared_ptr<string> cond_ {};
                shared_ptr<string> datum_ {};
                shared_ptr<int32_t> divisor_ {};
                shared_ptr<string> expr_ {};
                shared_ptr<int32_t> index_ {};
                shared_ptr<vector<string>> nameList_ {};
                shared_ptr<string> operator_ {};
                shared_ptr<int32_t> rate_ {};
                shared_ptr<int32_t> remainder_ {};
                shared_ptr<string> value_ {};
              };

              virtual bool empty() const override { return this->appId_ == nullptr
        && this->argumentItems_ == nullptr && this->condition_ == nullptr && this->group_ == nullptr && this->methodName_ == nullptr && this->paramTypes_ == nullptr
        && this->serviceName_ == nullptr && this->tags_ == nullptr && this->triggerPolicy_ == nullptr && this->version_ == nullptr; };
              // appId Field Functions 
              bool hasAppId() const { return this->appId_ != nullptr;};
              void deleteAppId() { this->appId_ = nullptr;};
              inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
              inline Dubbo& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


              // argumentItems Field Functions 
              bool hasArgumentItems() const { return this->argumentItems_ != nullptr;};
              void deleteArgumentItems() { this->argumentItems_ = nullptr;};
              inline const vector<Dubbo::ArgumentItems> & getArgumentItems() const { DARABONBA_PTR_GET_CONST(argumentItems_, vector<Dubbo::ArgumentItems>) };
              inline vector<Dubbo::ArgumentItems> getArgumentItems() { DARABONBA_PTR_GET(argumentItems_, vector<Dubbo::ArgumentItems>) };
              inline Dubbo& setArgumentItems(const vector<Dubbo::ArgumentItems> & argumentItems) { DARABONBA_PTR_SET_VALUE(argumentItems_, argumentItems) };
              inline Dubbo& setArgumentItems(vector<Dubbo::ArgumentItems> && argumentItems) { DARABONBA_PTR_SET_RVALUE(argumentItems_, argumentItems) };


              // condition Field Functions 
              bool hasCondition() const { return this->condition_ != nullptr;};
              void deleteCondition() { this->condition_ = nullptr;};
              inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
              inline Dubbo& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


              // group Field Functions 
              bool hasGroup() const { return this->group_ != nullptr;};
              void deleteGroup() { this->group_ = nullptr;};
              inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
              inline Dubbo& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


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


              // serviceName Field Functions 
              bool hasServiceName() const { return this->serviceName_ != nullptr;};
              void deleteServiceName() { this->serviceName_ = nullptr;};
              inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
              inline Dubbo& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


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


              // version Field Functions 
              bool hasVersion() const { return this->version_ != nullptr;};
              void deleteVersion() { this->version_ = nullptr;};
              inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
              inline Dubbo& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


            protected:
              shared_ptr<string> appId_ {};
              shared_ptr<vector<Dubbo::ArgumentItems>> argumentItems_ {};
              shared_ptr<string> condition_ {};
              shared_ptr<string> group_ {};
              shared_ptr<string> methodName_ {};
              shared_ptr<vector<string>> paramTypes_ {};
              shared_ptr<string> serviceName_ {};
              shared_ptr<vector<string>> tags_ {};
              shared_ptr<string> triggerPolicy_ {};
              shared_ptr<string> version_ {};
            };

            virtual bool empty() const override { return this->dubbo_ == nullptr
        && this->springcloud_ == nullptr; };
            // dubbo Field Functions 
            bool hasDubbo() const { return this->dubbo_ != nullptr;};
            void deleteDubbo() { this->dubbo_ = nullptr;};
            inline const vector<Rules::Dubbo> & getDubbo() const { DARABONBA_PTR_GET_CONST(dubbo_, vector<Rules::Dubbo>) };
            inline vector<Rules::Dubbo> getDubbo() { DARABONBA_PTR_GET(dubbo_, vector<Rules::Dubbo>) };
            inline Rules& setDubbo(const vector<Rules::Dubbo> & dubbo) { DARABONBA_PTR_SET_VALUE(dubbo_, dubbo) };
            inline Rules& setDubbo(vector<Rules::Dubbo> && dubbo) { DARABONBA_PTR_SET_RVALUE(dubbo_, dubbo) };


            // springcloud Field Functions 
            bool hasSpringcloud() const { return this->springcloud_ != nullptr;};
            void deleteSpringcloud() { this->springcloud_ = nullptr;};
            inline const vector<Rules::Springcloud> & getSpringcloud() const { DARABONBA_PTR_GET_CONST(springcloud_, vector<Rules::Springcloud>) };
            inline vector<Rules::Springcloud> getSpringcloud() { DARABONBA_PTR_GET(springcloud_, vector<Rules::Springcloud>) };
            inline Rules& setSpringcloud(const vector<Rules::Springcloud> & springcloud) { DARABONBA_PTR_SET_VALUE(springcloud_, springcloud) };
            inline Rules& setSpringcloud(vector<Rules::Springcloud> && springcloud) { DARABONBA_PTR_SET_RVALUE(springcloud_, springcloud) };


          protected:
            shared_ptr<vector<Rules::Dubbo>> dubbo_ {};
            shared_ptr<vector<Rules::Springcloud>> springcloud_ {};
          };

          virtual bool empty() const override { return this->enable_ == nullptr
        && this->id_ == nullptr && this->instanceNum_ == nullptr && this->name_ == nullptr && this->rate_ == nullptr && this->rules_ == nullptr
        && this->status_ == nullptr && this->tag_ == nullptr; };
          // enable Field Functions 
          bool hasEnable() const { return this->enable_ != nullptr;};
          void deleteEnable() { this->enable_ = nullptr;};
          inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
          inline RouteRules& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


          // id Field Functions 
          bool hasId() const { return this->id_ != nullptr;};
          void deleteId() { this->id_ = nullptr;};
          inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
          inline RouteRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


          // instanceNum Field Functions 
          bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
          void deleteInstanceNum() { this->instanceNum_ = nullptr;};
          inline int32_t getInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
          inline RouteRules& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RouteRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline int32_t getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, 0) };
          inline RouteRules& setRate(int32_t rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


          // rules Field Functions 
          bool hasRules() const { return this->rules_ != nullptr;};
          void deleteRules() { this->rules_ = nullptr;};
          inline const RouteRules::Rules & getRules() const { DARABONBA_PTR_GET_CONST(rules_, RouteRules::Rules) };
          inline RouteRules::Rules getRules() { DARABONBA_PTR_GET(rules_, RouteRules::Rules) };
          inline RouteRules& setRules(const RouteRules::Rules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
          inline RouteRules& setRules(RouteRules::Rules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
          inline RouteRules& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // tag Field Functions 
          bool hasTag() const { return this->tag_ != nullptr;};
          void deleteTag() { this->tag_ = nullptr;};
          inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
          inline RouteRules& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


        protected:
          // Indicates whether the alert rule is enabled. Valid values:
          // 
          // *   `true`
          // *   `false`
          shared_ptr<bool> enable_ {};
          // The rule ID.
          shared_ptr<int64_t> id_ {};
          // The number of instances.
          shared_ptr<int32_t> instanceNum_ {};
          // The rule name.
          shared_ptr<string> name_ {};
          // The rate.
          shared_ptr<int32_t> rate_ {};
          // The details of the routing rule.
          shared_ptr<RouteRules::Rules> rules_ {};
          // The status.
          shared_ptr<int32_t> status_ {};
          // The tag.
          shared_ptr<string> tag_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->namespace_ == nullptr && this->routeRules_ == nullptr && this->routeStatus_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Result& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Result& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // namespace Field Functions 
        bool hasNamespace() const { return this->namespace_ != nullptr;};
        void deleteNamespace() { this->namespace_ = nullptr;};
        inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
        inline Result& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


        // routeRules Field Functions 
        bool hasRouteRules() const { return this->routeRules_ != nullptr;};
        void deleteRouteRules() { this->routeRules_ = nullptr;};
        inline const vector<Result::RouteRules> & getRouteRules() const { DARABONBA_PTR_GET_CONST(routeRules_, vector<Result::RouteRules>) };
        inline vector<Result::RouteRules> getRouteRules() { DARABONBA_PTR_GET(routeRules_, vector<Result::RouteRules>) };
        inline Result& setRouteRules(const vector<Result::RouteRules> & routeRules) { DARABONBA_PTR_SET_VALUE(routeRules_, routeRules) };
        inline Result& setRouteRules(vector<Result::RouteRules> && routeRules) { DARABONBA_PTR_SET_RVALUE(routeRules_, routeRules) };


        // routeStatus Field Functions 
        bool hasRouteStatus() const { return this->routeStatus_ != nullptr;};
        void deleteRouteStatus() { this->routeStatus_ = nullptr;};
        inline int64_t getRouteStatus() const { DARABONBA_PTR_GET_DEFAULT(routeStatus_, 0L) };
        inline Result& setRouteStatus(int64_t routeStatus) { DARABONBA_PTR_SET_VALUE(routeStatus_, routeStatus) };


      protected:
        // The application ID.
        shared_ptr<string> appId_ {};
        // The application name.
        shared_ptr<string> appName_ {};
        // The MSE namespace to which the application belongs.
        shared_ptr<string> namespace_ {};
        // The queried rules.
        shared_ptr<vector<Result::RouteRules>> routeRules_ {};
        // The route state. Valid values:
        // 
        // *   0: disabled
        // *   1: enabled
        shared_ptr<int64_t> routeStatus_ {};
      };

      virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Data::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Data::Result>) };
      inline vector<Data::Result> getResult() { DARABONBA_PTR_GET(result_, vector<Data::Result>) };
      inline Data& setResult(const vector<Data::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Data& setResult(vector<Data::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // totalSize Field Functions 
      bool hasTotalSize() const { return this->totalSize_ != nullptr;};
      void deleteTotalSize() { this->totalSize_ = nullptr;};
      inline int32_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0) };
      inline Data& setTotalSize(int32_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The returned data.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListApplicationsWithTagRulesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListApplicationsWithTagRulesResponseBody::Data) };
    inline ListApplicationsWithTagRulesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListApplicationsWithTagRulesResponseBody::Data) };
    inline ListApplicationsWithTagRulesResponseBody& setData(const ListApplicationsWithTagRulesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListApplicationsWithTagRulesResponseBody& setData(ListApplicationsWithTagRulesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListApplicationsWithTagRulesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListApplicationsWithTagRulesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListApplicationsWithTagRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListApplicationsWithTagRulesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response parameters.
    shared_ptr<ListApplicationsWithTagRulesResponseBody::Data> data_ {};
    // The HTTP status code returned.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The returned message.
    // 
    // *   If the request is successful, a success message is returned.
    // *   If the request fails, an error message is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   `true`: The request was successful.
    // *   `false`: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
