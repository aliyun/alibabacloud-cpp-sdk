// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUEST_HPP_
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
  class CreateOrUpdateSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppEntryRule, appEntryRule_);
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(LaneName, laneName_);
      DARABONBA_PTR_TO_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_TO_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEntryRule, appEntryRule_);
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(LaneName, laneName_);
      DARABONBA_PTR_FROM_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_FROM_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    CreateOrUpdateSwimmingLaneRequest() = default ;
    CreateOrUpdateSwimmingLaneRequest(const CreateOrUpdateSwimmingLaneRequest &) = default ;
    CreateOrUpdateSwimmingLaneRequest(CreateOrUpdateSwimmingLaneRequest &&) = default ;
    CreateOrUpdateSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneRequest() = default ;
    CreateOrUpdateSwimmingLaneRequest& operator=(const CreateOrUpdateSwimmingLaneRequest &) = default ;
    CreateOrUpdateSwimmingLaneRequest& operator=(CreateOrUpdateSwimmingLaneRequest &&) = default ;
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
      };
      friend void from_json(const Darabonba::Json& j, MseGatewayEntryRule& obj) { 
        DARABONBA_PTR_FROM_JSON(ConditionJoiner, conditionJoiner_);
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(IndependentPercentageEnable, independentPercentageEnable_);
        DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
        DARABONBA_PTR_FROM_JSON(PercentageByRoute, percentageByRoute_);
        DARABONBA_PTR_FROM_JSON(RouteIds, routeIds_);
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
        // 
        // *   \\==: exact match.
        // *   ! =: exact match.
        // *   in: contains matches.
        // *   Percentage: Percentage matching.
        // *   Regular matching: specifies whether a regular expression is used to search for the original string.
        shared_ptr<string> condition_ {};
        // The parameter name.
        shared_ptr<string> name_ {};
        // The parameter type. Valid values:
        // 
        // *   header
        // *   param
        // *   Cookie: forwards requests based on cookies.
        shared_ptr<string> type_ {};
        // The match value of the condition.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->conditionJoiner_ == nullptr
        && this->conditions_ == nullptr && this->independentPercentageEnable_ == nullptr && this->percentage_ == nullptr && this->percentageByRoute_ == nullptr && this->routeIds_ == nullptr; };
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


    protected:
      // Logical connectors between conditions:
      // 
      // *   AND: All conditions are met at the same time.
      // *   OR: Any condition is met.
      shared_ptr<string> conditionJoiner_ {};
      // Routing Condition
      shared_ptr<vector<MseGatewayEntryRule::Conditions>> conditions_ {};
      // Whether to enable proportional grayscale.
      // 
      // *   true: Enabled. After you enable this parameter, you must configure the PercentageByPath.
      // *   false: Disabled.
      shared_ptr<bool> independentPercentageEnable_ {};
      // The percentage of traffic replication. Valid values: 0 to 100.
      shared_ptr<int32_t> percentage_ {};
      // The traffic configuration.
      shared_ptr<map<string, int32_t>> percentageByRoute_ {};
      // The ID of the route.
      shared_ptr<vector<int64_t>> routeIds_ {};
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
        // Matching Rule:
        // 
        // *   The exact match. The condition is met if the traffic value and the condition value are exactly the same.
        // *   The exact match. The condition is met if the traffic value and the condition value are exactly the same.
        // *   The inclusive match. The condition is met if the traffic value is included in the specified list.
        // *   The percentage match. Principle: The condition is met if \\"hash(get(`key`)) % 100 < value\\".
        // *   Regular match: a regular expression match. The condition is met when the match is based on regular expression rules.
        shared_ptr<string> condition_ {};
        // The parameter name.
        shared_ptr<string> name_ {};
        // The parameter type. Valid values:
        // 
        // *   header
        // *   param
        // *   Cookie: forwards requests based on cookies.
        shared_ptr<string> type_ {};
        // The match value of the condition.
        shared_ptr<string> value_ {};
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
      // The conditions that trigger circuit breaking.
      shared_ptr<vector<AppEntryRule::Conditions>> conditions_ {};
      // Whether to enable proportional grayscale.
      // 
      // *   true: enabled. After you enable this parameter, you must configure the PercentageByPath.
      // *   false: disables the service.
      shared_ptr<bool> independentPercentageEnable_ {};
      // The matched request path.
      shared_ptr<vector<string>> paths_ {};
      // The traffic ratio. Valid values: 0 to 100.
      shared_ptr<int32_t> percentage_ {};
      // The traffic configuration.
      shared_ptr<map<string, int32_t>> percentageByPath_ {};
    };

    virtual bool empty() const override { return this->appEntryRule_ == nullptr
        && this->canaryModel_ == nullptr && this->enable_ == nullptr && this->groupId_ == nullptr && this->laneId_ == nullptr && this->laneName_ == nullptr
        && this->laneTag_ == nullptr && this->mseGatewayEntryRule_ == nullptr && this->namespaceId_ == nullptr; };
    // appEntryRule Field Functions 
    bool hasAppEntryRule() const { return this->appEntryRule_ != nullptr;};
    void deleteAppEntryRule() { this->appEntryRule_ = nullptr;};
    inline const CreateOrUpdateSwimmingLaneRequest::AppEntryRule & getAppEntryRule() const { DARABONBA_PTR_GET_CONST(appEntryRule_, CreateOrUpdateSwimmingLaneRequest::AppEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest::AppEntryRule getAppEntryRule() { DARABONBA_PTR_GET(appEntryRule_, CreateOrUpdateSwimmingLaneRequest::AppEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setAppEntryRule(const CreateOrUpdateSwimmingLaneRequest::AppEntryRule & appEntryRule) { DARABONBA_PTR_SET_VALUE(appEntryRule_, appEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setAppEntryRule(CreateOrUpdateSwimmingLaneRequest::AppEntryRule && appEntryRule) { DARABONBA_PTR_SET_RVALUE(appEntryRule_, appEntryRule) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t getCanaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline CreateOrUpdateSwimmingLaneRequest& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateOrUpdateSwimmingLaneRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateOrUpdateSwimmingLaneRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t getLaneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline CreateOrUpdateSwimmingLaneRequest& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // laneName Field Functions 
    bool hasLaneName() const { return this->laneName_ != nullptr;};
    void deleteLaneName() { this->laneName_ = nullptr;};
    inline string getLaneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


    // laneTag Field Functions 
    bool hasLaneTag() const { return this->laneTag_ != nullptr;};
    void deleteLaneTag() { this->laneTag_ = nullptr;};
    inline string getLaneTag() const { DARABONBA_PTR_GET_DEFAULT(laneTag_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setLaneTag(string laneTag) { DARABONBA_PTR_SET_VALUE(laneTag_, laneTag) };


    // mseGatewayEntryRule Field Functions 
    bool hasMseGatewayEntryRule() const { return this->mseGatewayEntryRule_ != nullptr;};
    void deleteMseGatewayEntryRule() { this->mseGatewayEntryRule_ = nullptr;};
    inline const CreateOrUpdateSwimmingLaneRequest::MseGatewayEntryRule & getMseGatewayEntryRule() const { DARABONBA_PTR_GET_CONST(mseGatewayEntryRule_, CreateOrUpdateSwimmingLaneRequest::MseGatewayEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest::MseGatewayEntryRule getMseGatewayEntryRule() { DARABONBA_PTR_GET(mseGatewayEntryRule_, CreateOrUpdateSwimmingLaneRequest::MseGatewayEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setMseGatewayEntryRule(const CreateOrUpdateSwimmingLaneRequest::MseGatewayEntryRule & mseGatewayEntryRule) { DARABONBA_PTR_SET_VALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setMseGatewayEntryRule(CreateOrUpdateSwimmingLaneRequest::MseGatewayEntryRule && mseGatewayEntryRule) { DARABONBA_PTR_SET_RVALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    // The route configuration of the gateway.
    // 
    // >  This parameter is required if the gateway entry of the lane group is Java.
    shared_ptr<CreateOrUpdateSwimmingLaneRequest::AppEntryRule> appEntryRule_ {};
    // Full-link Grayscale Mode:
    // 
    // *   0: The request is routed based on the content of the request.
    // *   1: routing based on percentages
    shared_ptr<int32_t> canaryModel_ {};
    // Lane Status
    // 
    // *   true: enabled
    // *   false: disabled
    shared_ptr<bool> enable_ {};
    // The ID of the lane group to which the lane belongs.
    shared_ptr<int64_t> groupId_ {};
    // The ID of the lane.
    shared_ptr<int64_t> laneId_ {};
    // The name of the lane.
    shared_ptr<string> laneName_ {};
    // The tag of the lane.
    shared_ptr<string> laneTag_ {};
    // The route configuration of the MSE gateway.
    // 
    // >  If the **EntryAppType** is set to **apig** or **mse-gw**, it is required.
    shared_ptr<CreateOrUpdateSwimmingLaneRequest::MseGatewayEntryRule> mseGatewayEntryRule_ {};
    // The namespace ID.
    shared_ptr<string> namespaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
