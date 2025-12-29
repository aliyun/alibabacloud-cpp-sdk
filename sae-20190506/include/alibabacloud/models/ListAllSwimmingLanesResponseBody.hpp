// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTALLSWIMMINGLANESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListAllSwimmingLanesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllSwimmingLanesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllSwimmingLanesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListAllSwimmingLanesResponseBody() = default ;
    ListAllSwimmingLanesResponseBody(const ListAllSwimmingLanesResponseBody &) = default ;
    ListAllSwimmingLanesResponseBody(ListAllSwimmingLanesResponseBody &&) = default ;
    ListAllSwimmingLanesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllSwimmingLanesResponseBody() = default ;
    ListAllSwimmingLanesResponseBody& operator=(const ListAllSwimmingLanesResponseBody &) = default ;
    ListAllSwimmingLanesResponseBody& operator=(ListAllSwimmingLanesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AppEntryRule, appEntryRule_);
        DARABONBA_PTR_TO_JSON(Apps, apps_);
        DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EnableRules, enableRules_);
        DARABONBA_PTR_TO_JSON(LaneId, laneId_);
        DARABONBA_PTR_TO_JSON(LaneName, laneName_);
        DARABONBA_PTR_TO_JSON(LaneTag, laneTag_);
        DARABONBA_PTR_TO_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AppEntryRule, appEntryRule_);
        DARABONBA_PTR_FROM_JSON(Apps, apps_);
        DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EnableRules, enableRules_);
        DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
        DARABONBA_PTR_FROM_JSON(LaneName, laneName_);
        DARABONBA_PTR_FROM_JSON(LaneTag, laneTag_);
        DARABONBA_PTR_FROM_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
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
      class MseGatewayEntryRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MseGatewayEntryRule& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionJoiner, conditionJoiner_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(IndependentPercentageEnable, independentPercentageEnable_);
          DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          DARABONBA_PTR_TO_JSON(PercentageByRoute, percentageByRoute_);
          DARABONBA_PTR_TO_JSON(RouteIds, routeIds_);
          DARABONBA_PTR_TO_JSON(Routes, routes_);
        };
        friend void from_json(const Darabonba::Json& j, MseGatewayEntryRule& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionJoiner, conditionJoiner_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(IndependentPercentageEnable, independentPercentageEnable_);
          DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(PercentageByRoute, percentageByRoute_);
          DARABONBA_PTR_FROM_JSON(RouteIds, routeIds_);
          DARABONBA_PTR_FROM_JSON(Routes, routes_);
        };
        MseGatewayEntryRule() = default ;
        MseGatewayEntryRule(const MseGatewayEntryRule &) = default ;
        MseGatewayEntryRule(MseGatewayEntryRule &&) = default ;
        MseGatewayEntryRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MseGatewayEntryRule() = default ;
        MseGatewayEntryRule& operator=(const MseGatewayEntryRule &) = default ;
        MseGatewayEntryRule& operator=(MseGatewayEntryRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Routes : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Routes& obj) { 
            DARABONBA_PTR_TO_JSON(RouteId, routeId_);
            DARABONBA_PTR_TO_JSON(RouteName, routeName_);
            DARABONBA_PTR_TO_JSON(RoutePredicate, routePredicate_);
          };
          friend void from_json(const Darabonba::Json& j, Routes& obj) { 
            DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
            DARABONBA_PTR_FROM_JSON(RouteName, routeName_);
            DARABONBA_PTR_FROM_JSON(RoutePredicate, routePredicate_);
          };
          Routes() = default ;
          Routes(const Routes &) = default ;
          Routes(Routes &&) = default ;
          Routes(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Routes() = default ;
          Routes& operator=(const Routes &) = default ;
          Routes& operator=(Routes &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class RoutePredicate : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RoutePredicate& obj) { 
              DARABONBA_PTR_TO_JSON(PathPredicate, pathPredicate_);
            };
            friend void from_json(const Darabonba::Json& j, RoutePredicate& obj) { 
              DARABONBA_PTR_FROM_JSON(PathPredicate, pathPredicate_);
            };
            RoutePredicate() = default ;
            RoutePredicate(const RoutePredicate &) = default ;
            RoutePredicate(RoutePredicate &&) = default ;
            RoutePredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RoutePredicate() = default ;
            RoutePredicate& operator=(const RoutePredicate &) = default ;
            RoutePredicate& operator=(RoutePredicate &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            class PathPredicate : public Darabonba::Model {
            public:
              friend void to_json(Darabonba::Json& j, const PathPredicate& obj) { 
                DARABONBA_PTR_TO_JSON(path, path_);
                DARABONBA_PTR_TO_JSON(type, type_);
              };
              friend void from_json(const Darabonba::Json& j, PathPredicate& obj) { 
                DARABONBA_PTR_FROM_JSON(path, path_);
                DARABONBA_PTR_FROM_JSON(type, type_);
              };
              PathPredicate() = default ;
              PathPredicate(const PathPredicate &) = default ;
              PathPredicate(PathPredicate &&) = default ;
              PathPredicate(const Darabonba::Json & obj) { from_json(obj, *this); };
              virtual ~PathPredicate() = default ;
              PathPredicate& operator=(const PathPredicate &) = default ;
              PathPredicate& operator=(PathPredicate &&) = default ;
              virtual void validate() const override {
              };
              virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
              virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
              virtual bool empty() const override { return this->path_ == nullptr
        && this->type_ == nullptr; };
              // path Field Functions 
              bool hasPath() const { return this->path_ != nullptr;};
              void deletePath() { this->path_ = nullptr;};
              inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
              inline PathPredicate& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


              // type Field Functions 
              bool hasType() const { return this->type_ != nullptr;};
              void deleteType() { this->type_ = nullptr;};
              inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
              inline PathPredicate& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            protected:
              // The path.
              shared_ptr<string> path_ {};
              // The matching rule.
              shared_ptr<string> type_ {};
            };

            virtual bool empty() const override { return this->pathPredicate_ == nullptr; };
            // pathPredicate Field Functions 
            bool hasPathPredicate() const { return this->pathPredicate_ != nullptr;};
            void deletePathPredicate() { this->pathPredicate_ = nullptr;};
            inline const RoutePredicate::PathPredicate & getPathPredicate() const { DARABONBA_PTR_GET_CONST(pathPredicate_, RoutePredicate::PathPredicate) };
            inline RoutePredicate::PathPredicate getPathPredicate() { DARABONBA_PTR_GET(pathPredicate_, RoutePredicate::PathPredicate) };
            inline RoutePredicate& setPathPredicate(const RoutePredicate::PathPredicate & pathPredicate) { DARABONBA_PTR_SET_VALUE(pathPredicate_, pathPredicate) };
            inline RoutePredicate& setPathPredicate(RoutePredicate::PathPredicate && pathPredicate) { DARABONBA_PTR_SET_RVALUE(pathPredicate_, pathPredicate) };


          protected:
            // The path matching rule.
            shared_ptr<RoutePredicate::PathPredicate> pathPredicate_ {};
          };

          virtual bool empty() const override { return this->routeId_ == nullptr
        && this->routeName_ == nullptr && this->routePredicate_ == nullptr; };
          // routeId Field Functions 
          bool hasRouteId() const { return this->routeId_ != nullptr;};
          void deleteRouteId() { this->routeId_ = nullptr;};
          inline int64_t getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, 0L) };
          inline Routes& setRouteId(int64_t routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


          // routeName Field Functions 
          bool hasRouteName() const { return this->routeName_ != nullptr;};
          void deleteRouteName() { this->routeName_ = nullptr;};
          inline string getRouteName() const { DARABONBA_PTR_GET_DEFAULT(routeName_, "") };
          inline Routes& setRouteName(string routeName) { DARABONBA_PTR_SET_VALUE(routeName_, routeName) };


          // routePredicate Field Functions 
          bool hasRoutePredicate() const { return this->routePredicate_ != nullptr;};
          void deleteRoutePredicate() { this->routePredicate_ = nullptr;};
          inline const Routes::RoutePredicate & getRoutePredicate() const { DARABONBA_PTR_GET_CONST(routePredicate_, Routes::RoutePredicate) };
          inline Routes::RoutePredicate getRoutePredicate() { DARABONBA_PTR_GET(routePredicate_, Routes::RoutePredicate) };
          inline Routes& setRoutePredicate(const Routes::RoutePredicate & routePredicate) { DARABONBA_PTR_SET_VALUE(routePredicate_, routePredicate) };
          inline Routes& setRoutePredicate(Routes::RoutePredicate && routePredicate) { DARABONBA_PTR_SET_RVALUE(routePredicate_, routePredicate) };


        protected:
          // The route ID.
          shared_ptr<int64_t> routeId_ {};
          // The name of the route.
          shared_ptr<string> routeName_ {};
          // The routing rule.
          shared_ptr<Routes::RoutePredicate> routePredicate_ {};
        };

        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(Condition, condition_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(Condition, condition_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
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
          virtual bool empty() const override { return this->condition_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline Conditions& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Conditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The matching rule.
          shared_ptr<string> condition_ {};
          // The parameter name.
          shared_ptr<string> name_ {};
          // The type of the parameter.
          shared_ptr<string> type_ {};
          // The match value of the condition.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->conditionJoiner_ == nullptr
        && this->conditions_ == nullptr && this->independentPercentageEnable_ == nullptr && this->percentage_ == nullptr && this->percentageByRoute_ == nullptr && this->routeIds_ == nullptr
        && this->routes_ == nullptr; };
        // conditionJoiner Field Functions 
        bool hasConditionJoiner() const { return this->conditionJoiner_ != nullptr;};
        void deleteConditionJoiner() { this->conditionJoiner_ = nullptr;};
        inline string getConditionJoiner() const { DARABONBA_PTR_GET_DEFAULT(conditionJoiner_, "") };
        inline MseGatewayEntryRule& setConditionJoiner(string conditionJoiner) { DARABONBA_PTR_SET_VALUE(conditionJoiner_, conditionJoiner) };


        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<MseGatewayEntryRule::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<MseGatewayEntryRule::Conditions>) };
        inline vector<MseGatewayEntryRule::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<MseGatewayEntryRule::Conditions>) };
        inline MseGatewayEntryRule& setConditions(const vector<MseGatewayEntryRule::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline MseGatewayEntryRule& setConditions(vector<MseGatewayEntryRule::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // independentPercentageEnable Field Functions 
        bool hasIndependentPercentageEnable() const { return this->independentPercentageEnable_ != nullptr;};
        void deleteIndependentPercentageEnable() { this->independentPercentageEnable_ = nullptr;};
        inline bool getIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(independentPercentageEnable_, false) };
        inline MseGatewayEntryRule& setIndependentPercentageEnable(bool independentPercentageEnable) { DARABONBA_PTR_SET_VALUE(independentPercentageEnable_, independentPercentageEnable) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
        inline MseGatewayEntryRule& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // percentageByRoute Field Functions 
        bool hasPercentageByRoute() const { return this->percentageByRoute_ != nullptr;};
        void deletePercentageByRoute() { this->percentageByRoute_ = nullptr;};
        inline const map<string, int32_t> & getPercentageByRoute() const { DARABONBA_PTR_GET_CONST(percentageByRoute_, map<string, int32_t>) };
        inline map<string, int32_t> getPercentageByRoute() { DARABONBA_PTR_GET(percentageByRoute_, map<string, int32_t>) };
        inline MseGatewayEntryRule& setPercentageByRoute(const map<string, int32_t> & percentageByRoute) { DARABONBA_PTR_SET_VALUE(percentageByRoute_, percentageByRoute) };
        inline MseGatewayEntryRule& setPercentageByRoute(map<string, int32_t> && percentageByRoute) { DARABONBA_PTR_SET_RVALUE(percentageByRoute_, percentageByRoute) };


        // routeIds Field Functions 
        bool hasRouteIds() const { return this->routeIds_ != nullptr;};
        void deleteRouteIds() { this->routeIds_ = nullptr;};
        inline const vector<int64_t> & getRouteIds() const { DARABONBA_PTR_GET_CONST(routeIds_, vector<int64_t>) };
        inline vector<int64_t> getRouteIds() { DARABONBA_PTR_GET(routeIds_, vector<int64_t>) };
        inline MseGatewayEntryRule& setRouteIds(const vector<int64_t> & routeIds) { DARABONBA_PTR_SET_VALUE(routeIds_, routeIds) };
        inline MseGatewayEntryRule& setRouteIds(vector<int64_t> && routeIds) { DARABONBA_PTR_SET_RVALUE(routeIds_, routeIds) };


        // routes Field Functions 
        bool hasRoutes() const { return this->routes_ != nullptr;};
        void deleteRoutes() { this->routes_ = nullptr;};
        inline const vector<MseGatewayEntryRule::Routes> & getRoutes() const { DARABONBA_PTR_GET_CONST(routes_, vector<MseGatewayEntryRule::Routes>) };
        inline vector<MseGatewayEntryRule::Routes> getRoutes() { DARABONBA_PTR_GET(routes_, vector<MseGatewayEntryRule::Routes>) };
        inline MseGatewayEntryRule& setRoutes(const vector<MseGatewayEntryRule::Routes> & routes) { DARABONBA_PTR_SET_VALUE(routes_, routes) };
        inline MseGatewayEntryRule& setRoutes(vector<MseGatewayEntryRule::Routes> && routes) { DARABONBA_PTR_SET_RVALUE(routes_, routes) };


      protected:
        // The logical connector between conditions.
        shared_ptr<string> conditionJoiner_ {};
        // The matching condition.
        shared_ptr<vector<MseGatewayEntryRule::Conditions>> conditions_ {};
        // Whether to enable proportional grayscale.
        shared_ptr<bool> independentPercentageEnable_ {};
        // The proportion of path traffic.
        shared_ptr<int32_t> percentage_ {};
        // The traffic configuration.
        shared_ptr<map<string, int32_t>> percentageByRoute_ {};
        // The IDs of the route tables.
        shared_ptr<vector<int64_t>> routeIds_ {};
        // The detailed configuration of the routing rule.
        shared_ptr<vector<MseGatewayEntryRule::Routes>> routes_ {};
      };

      class Apps : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Apps& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(MseAppId, mseAppId_);
          DARABONBA_PTR_TO_JSON(MseAppName, mseAppName_);
          DARABONBA_PTR_TO_JSON(MseNamespaceId, mseNamespaceId_);
        };
        friend void from_json(const Darabonba::Json& j, Apps& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(MseAppId, mseAppId_);
          DARABONBA_PTR_FROM_JSON(MseAppName, mseAppName_);
          DARABONBA_PTR_FROM_JSON(MseNamespaceId, mseNamespaceId_);
        };
        Apps() = default ;
        Apps(const Apps &) = default ;
        Apps(Apps &&) = default ;
        Apps(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Apps() = default ;
        Apps& operator=(const Apps &) = default ;
        Apps& operator=(Apps &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->mseAppId_ == nullptr && this->mseAppName_ == nullptr && this->mseNamespaceId_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
        inline Apps& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline Apps& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // mseAppId Field Functions 
        bool hasMseAppId() const { return this->mseAppId_ != nullptr;};
        void deleteMseAppId() { this->mseAppId_ = nullptr;};
        inline string getMseAppId() const { DARABONBA_PTR_GET_DEFAULT(mseAppId_, "") };
        inline Apps& setMseAppId(string mseAppId) { DARABONBA_PTR_SET_VALUE(mseAppId_, mseAppId) };


        // mseAppName Field Functions 
        bool hasMseAppName() const { return this->mseAppName_ != nullptr;};
        void deleteMseAppName() { this->mseAppName_ = nullptr;};
        inline string getMseAppName() const { DARABONBA_PTR_GET_DEFAULT(mseAppName_, "") };
        inline Apps& setMseAppName(string mseAppName) { DARABONBA_PTR_SET_VALUE(mseAppName_, mseAppName) };


        // mseNamespaceId Field Functions 
        bool hasMseNamespaceId() const { return this->mseNamespaceId_ != nullptr;};
        void deleteMseNamespaceId() { this->mseNamespaceId_ = nullptr;};
        inline string getMseNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(mseNamespaceId_, "") };
        inline Apps& setMseNamespaceId(string mseNamespaceId) { DARABONBA_PTR_SET_VALUE(mseNamespaceId_, mseNamespaceId) };


      protected:
        // The ID of the application.
        shared_ptr<string> appId_ {};
        // The name of the application.
        shared_ptr<string> appName_ {};
        // The ID of the MSE instance.
        shared_ptr<string> mseAppId_ {};
        // The name of the MSE instance.
        shared_ptr<string> mseAppName_ {};
        // The ID of the namespace to which the MSE instance belongs.
        shared_ptr<string> mseNamespaceId_ {};
      };

      class AppEntryRule : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AppEntryRule& obj) { 
          DARABONBA_PTR_TO_JSON(ConditionJoiner, conditionJoiner_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(IndependentPercentageEnable, independentPercentageEnable_);
          DARABONBA_PTR_TO_JSON(Paths, paths_);
          DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          DARABONBA_PTR_TO_JSON(PercentageByPath, percentageByPath_);
        };
        friend void from_json(const Darabonba::Json& j, AppEntryRule& obj) { 
          DARABONBA_PTR_FROM_JSON(ConditionJoiner, conditionJoiner_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(IndependentPercentageEnable, independentPercentageEnable_);
          DARABONBA_PTR_FROM_JSON(Paths, paths_);
          DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(PercentageByPath, percentageByPath_);
        };
        AppEntryRule() = default ;
        AppEntryRule(const AppEntryRule &) = default ;
        AppEntryRule(AppEntryRule &&) = default ;
        AppEntryRule(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AppEntryRule() = default ;
        AppEntryRule& operator=(const AppEntryRule &) = default ;
        AppEntryRule& operator=(AppEntryRule &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(Condition, condition_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(Condition, condition_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Type, type_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
            DARABONBA_PTR_FROM_JSON(Values, values_);
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
          virtual bool empty() const override { return this->condition_ == nullptr
        && this->name_ == nullptr && this->type_ == nullptr && this->value_ == nullptr && this->values_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline Conditions& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Conditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // type Field Functions 
          bool hasType() const { return this->type_ != nullptr;};
          void deleteType() { this->type_ = nullptr;};
          inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
          inline Conditions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Conditions& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline Conditions& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline Conditions& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The matching rule.
          shared_ptr<string> condition_ {};
          // The parameter name.
          shared_ptr<string> name_ {};
          // The type of the parameter.
          shared_ptr<string> type_ {};
          // The match value.
          shared_ptr<string> value_ {};
          // The match value of the condition.
          shared_ptr<vector<string>> values_ {};
        };

        virtual bool empty() const override { return this->conditionJoiner_ == nullptr
        && this->conditions_ == nullptr && this->independentPercentageEnable_ == nullptr && this->paths_ == nullptr && this->percentage_ == nullptr && this->percentageByPath_ == nullptr; };
        // conditionJoiner Field Functions 
        bool hasConditionJoiner() const { return this->conditionJoiner_ != nullptr;};
        void deleteConditionJoiner() { this->conditionJoiner_ = nullptr;};
        inline string getConditionJoiner() const { DARABONBA_PTR_GET_DEFAULT(conditionJoiner_, "") };
        inline AppEntryRule& setConditionJoiner(string conditionJoiner) { DARABONBA_PTR_SET_VALUE(conditionJoiner_, conditionJoiner) };


        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<AppEntryRule::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<AppEntryRule::Conditions>) };
        inline vector<AppEntryRule::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<AppEntryRule::Conditions>) };
        inline AppEntryRule& setConditions(const vector<AppEntryRule::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline AppEntryRule& setConditions(vector<AppEntryRule::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // independentPercentageEnable Field Functions 
        bool hasIndependentPercentageEnable() const { return this->independentPercentageEnable_ != nullptr;};
        void deleteIndependentPercentageEnable() { this->independentPercentageEnable_ = nullptr;};
        inline bool getIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(independentPercentageEnable_, false) };
        inline AppEntryRule& setIndependentPercentageEnable(bool independentPercentageEnable) { DARABONBA_PTR_SET_VALUE(independentPercentageEnable_, independentPercentageEnable) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline AppEntryRule& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline AppEntryRule& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
        inline AppEntryRule& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // percentageByPath Field Functions 
        bool hasPercentageByPath() const { return this->percentageByPath_ != nullptr;};
        void deletePercentageByPath() { this->percentageByPath_ = nullptr;};
        inline const map<string, int32_t> & getPercentageByPath() const { DARABONBA_PTR_GET_CONST(percentageByPath_, map<string, int32_t>) };
        inline map<string, int32_t> getPercentageByPath() { DARABONBA_PTR_GET(percentageByPath_, map<string, int32_t>) };
        inline AppEntryRule& setPercentageByPath(const map<string, int32_t> & percentageByPath) { DARABONBA_PTR_SET_VALUE(percentageByPath_, percentageByPath) };
        inline AppEntryRule& setPercentageByPath(map<string, int32_t> && percentageByPath) { DARABONBA_PTR_SET_RVALUE(percentageByPath_, percentageByPath) };


      protected:
        // Logical connectors between conditions:
        // 
        // *   AND: All conditions are met at the same time.
        // *   OR: Any condition is met.
        shared_ptr<string> conditionJoiner_ {};
        // The matching condition.
        shared_ptr<vector<AppEntryRule::Conditions>> conditions_ {};
        // Whether to enable proportional grayscale.
        shared_ptr<bool> independentPercentageEnable_ {};
        // The request path.
        shared_ptr<vector<string>> paths_ {};
        // The traffic ratio. Valid values: 0 to 100.
        shared_ptr<int32_t> percentage_ {};
        // Traffic matching.
        shared_ptr<map<string, int32_t>> percentageByPath_ {};
      };

      virtual bool empty() const override { return this->appEntryRule_ == nullptr
        && this->apps_ == nullptr && this->canaryModel_ == nullptr && this->enable_ == nullptr && this->enableRules_ == nullptr && this->laneId_ == nullptr
        && this->laneName_ == nullptr && this->laneTag_ == nullptr && this->mseGatewayEntryRule_ == nullptr; };
      // appEntryRule Field Functions 
      bool hasAppEntryRule() const { return this->appEntryRule_ != nullptr;};
      void deleteAppEntryRule() { this->appEntryRule_ = nullptr;};
      inline const Data::AppEntryRule & getAppEntryRule() const { DARABONBA_PTR_GET_CONST(appEntryRule_, Data::AppEntryRule) };
      inline Data::AppEntryRule getAppEntryRule() { DARABONBA_PTR_GET(appEntryRule_, Data::AppEntryRule) };
      inline Data& setAppEntryRule(const Data::AppEntryRule & appEntryRule) { DARABONBA_PTR_SET_VALUE(appEntryRule_, appEntryRule) };
      inline Data& setAppEntryRule(Data::AppEntryRule && appEntryRule) { DARABONBA_PTR_SET_RVALUE(appEntryRule_, appEntryRule) };


      // apps Field Functions 
      bool hasApps() const { return this->apps_ != nullptr;};
      void deleteApps() { this->apps_ = nullptr;};
      inline const vector<Data::Apps> & getApps() const { DARABONBA_PTR_GET_CONST(apps_, vector<Data::Apps>) };
      inline vector<Data::Apps> getApps() { DARABONBA_PTR_GET(apps_, vector<Data::Apps>) };
      inline Data& setApps(const vector<Data::Apps> & apps) { DARABONBA_PTR_SET_VALUE(apps_, apps) };
      inline Data& setApps(vector<Data::Apps> && apps) { DARABONBA_PTR_SET_RVALUE(apps_, apps) };


      // canaryModel Field Functions 
      bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
      void deleteCanaryModel() { this->canaryModel_ = nullptr;};
      inline int32_t getCanaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
      inline Data& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline Data& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // enableRules Field Functions 
      bool hasEnableRules() const { return this->enableRules_ != nullptr;};
      void deleteEnableRules() { this->enableRules_ = nullptr;};
      inline bool getEnableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
      inline Data& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


      // laneId Field Functions 
      bool hasLaneId() const { return this->laneId_ != nullptr;};
      void deleteLaneId() { this->laneId_ = nullptr;};
      inline int64_t getLaneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
      inline Data& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


      // laneName Field Functions 
      bool hasLaneName() const { return this->laneName_ != nullptr;};
      void deleteLaneName() { this->laneName_ = nullptr;};
      inline string getLaneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
      inline Data& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


      // laneTag Field Functions 
      bool hasLaneTag() const { return this->laneTag_ != nullptr;};
      void deleteLaneTag() { this->laneTag_ = nullptr;};
      inline string getLaneTag() const { DARABONBA_PTR_GET_DEFAULT(laneTag_, "") };
      inline Data& setLaneTag(string laneTag) { DARABONBA_PTR_SET_VALUE(laneTag_, laneTag) };


      // mseGatewayEntryRule Field Functions 
      bool hasMseGatewayEntryRule() const { return this->mseGatewayEntryRule_ != nullptr;};
      void deleteMseGatewayEntryRule() { this->mseGatewayEntryRule_ = nullptr;};
      inline const Data::MseGatewayEntryRule & getMseGatewayEntryRule() const { DARABONBA_PTR_GET_CONST(mseGatewayEntryRule_, Data::MseGatewayEntryRule) };
      inline Data::MseGatewayEntryRule getMseGatewayEntryRule() { DARABONBA_PTR_GET(mseGatewayEntryRule_, Data::MseGatewayEntryRule) };
      inline Data& setMseGatewayEntryRule(const Data::MseGatewayEntryRule & mseGatewayEntryRule) { DARABONBA_PTR_SET_VALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };
      inline Data& setMseGatewayEntryRule(Data::MseGatewayEntryRule && mseGatewayEntryRule) { DARABONBA_PTR_SET_RVALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };


    protected:
      // Apply ingress rules.
      shared_ptr<Data::AppEntryRule> appEntryRule_ {};
      // The associated application.
      shared_ptr<vector<Data::Apps>> apps_ {};
      // Full-link Grayscale Mode:
      // 
      // *   0: The request is routed based on the content of the request.
      // *   1: Proportional routing
      shared_ptr<int32_t> canaryModel_ {};
      // Lane status:
      // 
      // *   true: enabled
      // *   false: disabled
      shared_ptr<bool> enable_ {};
      // Whether the traffic rule is enabled.
      shared_ptr<bool> enableRules_ {};
      // The ID of the lane.
      shared_ptr<int64_t> laneId_ {};
      // The name of the lane group.
      shared_ptr<string> laneName_ {};
      // The tag of the lane.
      shared_ptr<string> laneTag_ {};
      // MSE gateway routing
      shared_ptr<Data::MseGatewayEntryRule> mseGatewayEntryRule_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListAllSwimmingLanesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListAllSwimmingLanesResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListAllSwimmingLanesResponseBody::Data>) };
    inline vector<ListAllSwimmingLanesResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListAllSwimmingLanesResponseBody::Data>) };
    inline ListAllSwimmingLanesResponseBody& setData(const vector<ListAllSwimmingLanesResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListAllSwimmingLanesResponseBody& setData(vector<ListAllSwimmingLanesResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListAllSwimmingLanesResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListAllSwimmingLanesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAllSwimmingLanesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListAllSwimmingLanesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListAllSwimmingLanesResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The interface status or POP error code. Valid values:
    // 
    // *   **2xx**: The request was successful.
    // *   **3xx**: Redirection.
    // *   **4xx**: Request error.
    // *   **5xx**: Server error.
    shared_ptr<string> code_ {};
    // The output parameters of the node.
    shared_ptr<vector<ListAllSwimmingLanesResponseBody::Data>> data_ {};
    // Error code. Valid values:
    // 
    // *   If the request is successful, no **ErrorCode** fields are returned.
    // *   Request failed: **ErrorCode** fields are returned. For more information, see **Error codes**.
    shared_ptr<string> errorCode_ {};
    // Additional information. Valid values:
    // 
    // *   The error message returned because the request is normal and **success** is returned.
    // *   If the request is abnormal, the specific exception error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Whether the data is successful. Valid values:
    // 
    // *   **true**: The application instances were restarted.
    // *   **false**: Restart failed.
    shared_ptr<bool> success_ {};
    // The ID of the trace. This parameter is used to query the exact call information.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
