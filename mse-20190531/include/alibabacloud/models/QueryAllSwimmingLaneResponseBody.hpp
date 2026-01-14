// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYALLSWIMMINGLANERESPONSEBODY_HPP_
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
  class QueryAllSwimmingLaneResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAllSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAllSwimmingLaneResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAllSwimmingLaneResponseBody() = default ;
    QueryAllSwimmingLaneResponseBody(const QueryAllSwimmingLaneResponseBody &) = default ;
    QueryAllSwimmingLaneResponseBody(QueryAllSwimmingLaneResponseBody &&) = default ;
    QueryAllSwimmingLaneResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAllSwimmingLaneResponseBody() = default ;
    QueryAllSwimmingLaneResponseBody& operator=(const QueryAllSwimmingLaneResponseBody &) = default ;
    QueryAllSwimmingLaneResponseBody& operator=(QueryAllSwimmingLaneResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EntryRules, entryRules_);
        DARABONBA_PTR_TO_JSON(GatewaySwimmingLaneRoute, gatewaySwimmingLaneRoute_);
        DARABONBA_PTR_TO_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
        DARABONBA_PTR_TO_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
        DARABONBA_PTR_TO_JSON(RecordCanaryDetail, recordCanaryDetail_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Tag, tag_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(enableRules, enableRules_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EntryRules, entryRules_);
        DARABONBA_PTR_FROM_JSON(GatewaySwimmingLaneRoute, gatewaySwimmingLaneRoute_);
        DARABONBA_PTR_FROM_JSON(GatewaySwimmingLaneRouteJson, gatewaySwimmingLaneRouteJson_);
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MessageQueueFilterSide, messageQueueFilterSide_);
        DARABONBA_PTR_FROM_JSON(MessageQueueGrayEnable, messageQueueGrayEnable_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(PathIndependentPercentageEnable, pathIndependentPercentageEnable_);
        DARABONBA_PTR_FROM_JSON(RecordCanaryDetail, recordCanaryDetail_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Tag, tag_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(enableRules, enableRules_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
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
      class GatewaySwimmingLaneRoute : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GatewaySwimmingLaneRoute& obj) { 
          DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
          DARABONBA_PTR_TO_JSON(Condition, condition_);
          DARABONBA_PTR_TO_JSON(Conditions, conditions_);
          DARABONBA_PTR_TO_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_TO_JSON(Percentage, percentage_);
          DARABONBA_PTR_TO_JSON(RouteIdList, routeIdList_);
          DARABONBA_PTR_TO_JSON(RouteIndependentPercentageEnable, routeIndependentPercentageEnable_);
          DARABONBA_PTR_TO_JSON(RouteIndependentPercentageList, routeIndependentPercentageList_);
        };
        friend void from_json(const Darabonba::Json& j, GatewaySwimmingLaneRoute& obj) { 
          DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
          DARABONBA_PTR_FROM_JSON(Condition, condition_);
          DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
          DARABONBA_PTR_FROM_JSON(GatewayId, gatewayId_);
          DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
          DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
          DARABONBA_PTR_FROM_JSON(RouteIdList, routeIdList_);
          DARABONBA_PTR_FROM_JSON(RouteIndependentPercentageEnable, routeIndependentPercentageEnable_);
          DARABONBA_PTR_FROM_JSON(RouteIndependentPercentageList, routeIndependentPercentageList_);
        };
        GatewaySwimmingLaneRoute() = default ;
        GatewaySwimmingLaneRoute(const GatewaySwimmingLaneRoute &) = default ;
        GatewaySwimmingLaneRoute(GatewaySwimmingLaneRoute &&) = default ;
        GatewaySwimmingLaneRoute(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GatewaySwimmingLaneRoute() = default ;
        GatewaySwimmingLaneRoute& operator=(const GatewaySwimmingLaneRoute &) = default ;
        GatewaySwimmingLaneRoute& operator=(GatewaySwimmingLaneRoute &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RouteIndependentPercentageList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RouteIndependentPercentageList& obj) { 
            DARABONBA_PTR_TO_JSON(Percentage, percentage_);
            DARABONBA_PTR_TO_JSON(RouteId, routeId_);
          };
          friend void from_json(const Darabonba::Json& j, RouteIndependentPercentageList& obj) { 
            DARABONBA_PTR_FROM_JSON(Percentage, percentage_);
            DARABONBA_PTR_FROM_JSON(RouteId, routeId_);
          };
          RouteIndependentPercentageList() = default ;
          RouteIndependentPercentageList(const RouteIndependentPercentageList &) = default ;
          RouteIndependentPercentageList(RouteIndependentPercentageList &&) = default ;
          RouteIndependentPercentageList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RouteIndependentPercentageList() = default ;
          RouteIndependentPercentageList& operator=(const RouteIndependentPercentageList &) = default ;
          RouteIndependentPercentageList& operator=(RouteIndependentPercentageList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->percentage_ == nullptr
        && this->routeId_ == nullptr; };
          // percentage Field Functions 
          bool hasPercentage() const { return this->percentage_ != nullptr;};
          void deletePercentage() { this->percentage_ = nullptr;};
          inline string getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, "") };
          inline RouteIndependentPercentageList& setPercentage(string percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


          // routeId Field Functions 
          bool hasRouteId() const { return this->routeId_ != nullptr;};
          void deleteRouteId() { this->routeId_ = nullptr;};
          inline string getRouteId() const { DARABONBA_PTR_GET_DEFAULT(routeId_, "") };
          inline RouteIndependentPercentageList& setRouteId(string routeId) { DARABONBA_PTR_SET_VALUE(routeId_, routeId) };


        protected:
          shared_ptr<string> percentage_ {};
          shared_ptr<string> routeId_ {};
        };

        class Conditions : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
            DARABONBA_PTR_TO_JSON(Cond, cond_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(NameList, nameList_);
            DARABONBA_PTR_TO_JSON(Type, type_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
            DARABONBA_PTR_FROM_JSON(Cond, cond_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(NameList, nameList_);
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
          virtual bool empty() const override { return this->cond_ == nullptr
        && this->name_ == nullptr && this->nameList_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
          // cond Field Functions 
          bool hasCond() const { return this->cond_ != nullptr;};
          void deleteCond() { this->cond_ = nullptr;};
          inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
          inline Conditions& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Conditions& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // nameList Field Functions 
          bool hasNameList() const { return this->nameList_ != nullptr;};
          void deleteNameList() { this->nameList_ = nullptr;};
          inline const vector<string> & getNameList() const { DARABONBA_PTR_GET_CONST(nameList_, vector<string>) };
          inline vector<string> getNameList() { DARABONBA_PTR_GET(nameList_, vector<string>) };
          inline Conditions& setNameList(const vector<string> & nameList) { DARABONBA_PTR_SET_VALUE(nameList_, nameList) };
          inline Conditions& setNameList(vector<string> && nameList) { DARABONBA_PTR_SET_RVALUE(nameList_, nameList) };


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
          shared_ptr<string> cond_ {};
          shared_ptr<string> name_ {};
          shared_ptr<vector<string>> nameList_ {};
          shared_ptr<string> type_ {};
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->canaryModel_ == nullptr
        && this->condition_ == nullptr && this->conditions_ == nullptr && this->gatewayId_ == nullptr && this->gatewayUniqueId_ == nullptr && this->percentage_ == nullptr
        && this->routeIdList_ == nullptr && this->routeIndependentPercentageEnable_ == nullptr && this->routeIndependentPercentageList_ == nullptr; };
        // canaryModel Field Functions 
        bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
        void deleteCanaryModel() { this->canaryModel_ = nullptr;};
        inline int32_t getCanaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
        inline GatewaySwimmingLaneRoute& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
        inline GatewaySwimmingLaneRoute& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


        // conditions Field Functions 
        bool hasConditions() const { return this->conditions_ != nullptr;};
        void deleteConditions() { this->conditions_ = nullptr;};
        inline const vector<GatewaySwimmingLaneRoute::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<GatewaySwimmingLaneRoute::Conditions>) };
        inline vector<GatewaySwimmingLaneRoute::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<GatewaySwimmingLaneRoute::Conditions>) };
        inline GatewaySwimmingLaneRoute& setConditions(const vector<GatewaySwimmingLaneRoute::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
        inline GatewaySwimmingLaneRoute& setConditions(vector<GatewaySwimmingLaneRoute::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


        // gatewayId Field Functions 
        bool hasGatewayId() const { return this->gatewayId_ != nullptr;};
        void deleteGatewayId() { this->gatewayId_ = nullptr;};
        inline int64_t getGatewayId() const { DARABONBA_PTR_GET_DEFAULT(gatewayId_, 0L) };
        inline GatewaySwimmingLaneRoute& setGatewayId(int64_t gatewayId) { DARABONBA_PTR_SET_VALUE(gatewayId_, gatewayId) };


        // gatewayUniqueId Field Functions 
        bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
        void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
        inline string getGatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
        inline GatewaySwimmingLaneRoute& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


        // percentage Field Functions 
        bool hasPercentage() const { return this->percentage_ != nullptr;};
        void deletePercentage() { this->percentage_ = nullptr;};
        inline int32_t getPercentage() const { DARABONBA_PTR_GET_DEFAULT(percentage_, 0) };
        inline GatewaySwimmingLaneRoute& setPercentage(int32_t percentage) { DARABONBA_PTR_SET_VALUE(percentage_, percentage) };


        // routeIdList Field Functions 
        bool hasRouteIdList() const { return this->routeIdList_ != nullptr;};
        void deleteRouteIdList() { this->routeIdList_ = nullptr;};
        inline const vector<int64_t> & getRouteIdList() const { DARABONBA_PTR_GET_CONST(routeIdList_, vector<int64_t>) };
        inline vector<int64_t> getRouteIdList() { DARABONBA_PTR_GET(routeIdList_, vector<int64_t>) };
        inline GatewaySwimmingLaneRoute& setRouteIdList(const vector<int64_t> & routeIdList) { DARABONBA_PTR_SET_VALUE(routeIdList_, routeIdList) };
        inline GatewaySwimmingLaneRoute& setRouteIdList(vector<int64_t> && routeIdList) { DARABONBA_PTR_SET_RVALUE(routeIdList_, routeIdList) };


        // routeIndependentPercentageEnable Field Functions 
        bool hasRouteIndependentPercentageEnable() const { return this->routeIndependentPercentageEnable_ != nullptr;};
        void deleteRouteIndependentPercentageEnable() { this->routeIndependentPercentageEnable_ = nullptr;};
        inline string getRouteIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(routeIndependentPercentageEnable_, "") };
        inline GatewaySwimmingLaneRoute& setRouteIndependentPercentageEnable(string routeIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(routeIndependentPercentageEnable_, routeIndependentPercentageEnable) };


        // routeIndependentPercentageList Field Functions 
        bool hasRouteIndependentPercentageList() const { return this->routeIndependentPercentageList_ != nullptr;};
        void deleteRouteIndependentPercentageList() { this->routeIndependentPercentageList_ = nullptr;};
        inline const vector<GatewaySwimmingLaneRoute::RouteIndependentPercentageList> & getRouteIndependentPercentageList() const { DARABONBA_PTR_GET_CONST(routeIndependentPercentageList_, vector<GatewaySwimmingLaneRoute::RouteIndependentPercentageList>) };
        inline vector<GatewaySwimmingLaneRoute::RouteIndependentPercentageList> getRouteIndependentPercentageList() { DARABONBA_PTR_GET(routeIndependentPercentageList_, vector<GatewaySwimmingLaneRoute::RouteIndependentPercentageList>) };
        inline GatewaySwimmingLaneRoute& setRouteIndependentPercentageList(const vector<GatewaySwimmingLaneRoute::RouteIndependentPercentageList> & routeIndependentPercentageList) { DARABONBA_PTR_SET_VALUE(routeIndependentPercentageList_, routeIndependentPercentageList) };
        inline GatewaySwimmingLaneRoute& setRouteIndependentPercentageList(vector<GatewaySwimmingLaneRoute::RouteIndependentPercentageList> && routeIndependentPercentageList) { DARABONBA_PTR_SET_RVALUE(routeIndependentPercentageList_, routeIndependentPercentageList) };


      protected:
        shared_ptr<int32_t> canaryModel_ {};
        shared_ptr<string> condition_ {};
        shared_ptr<vector<GatewaySwimmingLaneRoute::Conditions>> conditions_ {};
        shared_ptr<int64_t> gatewayId_ {};
        shared_ptr<string> gatewayUniqueId_ {};
        shared_ptr<int32_t> percentage_ {};
        shared_ptr<vector<int64_t>> routeIdList_ {};
        shared_ptr<string> routeIndependentPercentageEnable_ {};
        shared_ptr<vector<GatewaySwimmingLaneRoute::RouteIndependentPercentageList>> routeIndependentPercentageList_ {};
      };

      class EntryRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EntryRules& obj) { 
          DARABONBA_PTR_TO_JSON(condition, condition_);
          DARABONBA_PTR_TO_JSON(path, path_);
          DARABONBA_PTR_TO_JSON(paths, paths_);
          DARABONBA_PTR_TO_JSON(restItems, restItems_);
        };
        friend void from_json(const Darabonba::Json& j, EntryRules& obj) { 
          DARABONBA_PTR_FROM_JSON(condition, condition_);
          DARABONBA_PTR_FROM_JSON(path, path_);
          DARABONBA_PTR_FROM_JSON(paths, paths_);
          DARABONBA_PTR_FROM_JSON(restItems, restItems_);
        };
        EntryRules() = default ;
        EntryRules(const EntryRules &) = default ;
        EntryRules(EntryRules &&) = default ;
        EntryRules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EntryRules() = default ;
        EntryRules& operator=(const EntryRules &) = default ;
        EntryRules& operator=(EntryRules &&) = default ;
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

        virtual bool empty() const override { return this->condition_ == nullptr
        && this->path_ == nullptr && this->paths_ == nullptr && this->restItems_ == nullptr; };
        // condition Field Functions 
        bool hasCondition() const { return this->condition_ != nullptr;};
        void deleteCondition() { this->condition_ = nullptr;};
        inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
        inline EntryRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


        // path Field Functions 
        bool hasPath() const { return this->path_ != nullptr;};
        void deletePath() { this->path_ = nullptr;};
        inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
        inline EntryRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        // paths Field Functions 
        bool hasPaths() const { return this->paths_ != nullptr;};
        void deletePaths() { this->paths_ = nullptr;};
        inline const vector<string> & getPaths() const { DARABONBA_PTR_GET_CONST(paths_, vector<string>) };
        inline vector<string> getPaths() { DARABONBA_PTR_GET(paths_, vector<string>) };
        inline EntryRules& setPaths(const vector<string> & paths) { DARABONBA_PTR_SET_VALUE(paths_, paths) };
        inline EntryRules& setPaths(vector<string> && paths) { DARABONBA_PTR_SET_RVALUE(paths_, paths) };


        // restItems Field Functions 
        bool hasRestItems() const { return this->restItems_ != nullptr;};
        void deleteRestItems() { this->restItems_ = nullptr;};
        inline const vector<EntryRules::RestItems> & getRestItems() const { DARABONBA_PTR_GET_CONST(restItems_, vector<EntryRules::RestItems>) };
        inline vector<EntryRules::RestItems> getRestItems() { DARABONBA_PTR_GET(restItems_, vector<EntryRules::RestItems>) };
        inline EntryRules& setRestItems(const vector<EntryRules::RestItems> & restItems) { DARABONBA_PTR_SET_VALUE(restItems_, restItems) };
        inline EntryRules& setRestItems(vector<EntryRules::RestItems> && restItems) { DARABONBA_PTR_SET_RVALUE(restItems_, restItems) };


      protected:
        shared_ptr<string> condition_ {};
        shared_ptr<string> path_ {};
        shared_ptr<vector<string>> paths_ {};
        shared_ptr<vector<EntryRules::RestItems>> restItems_ {};
      };

      virtual bool empty() const override { return this->enable_ == nullptr
        && this->entryRules_ == nullptr && this->gatewaySwimmingLaneRoute_ == nullptr && this->gatewaySwimmingLaneRouteJson_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr
        && this->messageQueueFilterSide_ == nullptr && this->messageQueueGrayEnable_ == nullptr && this->name_ == nullptr && this->namespace_ == nullptr && this->pathIndependentPercentageEnable_ == nullptr
        && this->recordCanaryDetail_ == nullptr && this->regionId_ == nullptr && this->tag_ == nullptr && this->userId_ == nullptr && this->enableRules_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr; };
      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline string getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, "") };
      inline Data& setEnable(string enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // entryRules Field Functions 
      bool hasEntryRules() const { return this->entryRules_ != nullptr;};
      void deleteEntryRules() { this->entryRules_ = nullptr;};
      inline const vector<Data::EntryRules> & getEntryRules() const { DARABONBA_PTR_GET_CONST(entryRules_, vector<Data::EntryRules>) };
      inline vector<Data::EntryRules> getEntryRules() { DARABONBA_PTR_GET(entryRules_, vector<Data::EntryRules>) };
      inline Data& setEntryRules(const vector<Data::EntryRules> & entryRules) { DARABONBA_PTR_SET_VALUE(entryRules_, entryRules) };
      inline Data& setEntryRules(vector<Data::EntryRules> && entryRules) { DARABONBA_PTR_SET_RVALUE(entryRules_, entryRules) };


      // gatewaySwimmingLaneRoute Field Functions 
      bool hasGatewaySwimmingLaneRoute() const { return this->gatewaySwimmingLaneRoute_ != nullptr;};
      void deleteGatewaySwimmingLaneRoute() { this->gatewaySwimmingLaneRoute_ = nullptr;};
      inline const Data::GatewaySwimmingLaneRoute & getGatewaySwimmingLaneRoute() const { DARABONBA_PTR_GET_CONST(gatewaySwimmingLaneRoute_, Data::GatewaySwimmingLaneRoute) };
      inline Data::GatewaySwimmingLaneRoute getGatewaySwimmingLaneRoute() { DARABONBA_PTR_GET(gatewaySwimmingLaneRoute_, Data::GatewaySwimmingLaneRoute) };
      inline Data& setGatewaySwimmingLaneRoute(const Data::GatewaySwimmingLaneRoute & gatewaySwimmingLaneRoute) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRoute_, gatewaySwimmingLaneRoute) };
      inline Data& setGatewaySwimmingLaneRoute(Data::GatewaySwimmingLaneRoute && gatewaySwimmingLaneRoute) { DARABONBA_PTR_SET_RVALUE(gatewaySwimmingLaneRoute_, gatewaySwimmingLaneRoute) };


      // gatewaySwimmingLaneRouteJson Field Functions 
      bool hasGatewaySwimmingLaneRouteJson() const { return this->gatewaySwimmingLaneRouteJson_ != nullptr;};
      void deleteGatewaySwimmingLaneRouteJson() { this->gatewaySwimmingLaneRouteJson_ = nullptr;};
      inline string getGatewaySwimmingLaneRouteJson() const { DARABONBA_PTR_GET_DEFAULT(gatewaySwimmingLaneRouteJson_, "") };
      inline Data& setGatewaySwimmingLaneRouteJson(string gatewaySwimmingLaneRouteJson) { DARABONBA_PTR_SET_VALUE(gatewaySwimmingLaneRouteJson_, gatewaySwimmingLaneRouteJson) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Data& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // messageQueueFilterSide Field Functions 
      bool hasMessageQueueFilterSide() const { return this->messageQueueFilterSide_ != nullptr;};
      void deleteMessageQueueFilterSide() { this->messageQueueFilterSide_ = nullptr;};
      inline string getMessageQueueFilterSide() const { DARABONBA_PTR_GET_DEFAULT(messageQueueFilterSide_, "") };
      inline Data& setMessageQueueFilterSide(string messageQueueFilterSide) { DARABONBA_PTR_SET_VALUE(messageQueueFilterSide_, messageQueueFilterSide) };


      // messageQueueGrayEnable Field Functions 
      bool hasMessageQueueGrayEnable() const { return this->messageQueueGrayEnable_ != nullptr;};
      void deleteMessageQueueGrayEnable() { this->messageQueueGrayEnable_ = nullptr;};
      inline bool getMessageQueueGrayEnable() const { DARABONBA_PTR_GET_DEFAULT(messageQueueGrayEnable_, false) };
      inline Data& setMessageQueueGrayEnable(bool messageQueueGrayEnable) { DARABONBA_PTR_SET_VALUE(messageQueueGrayEnable_, messageQueueGrayEnable) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Data& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // pathIndependentPercentageEnable Field Functions 
      bool hasPathIndependentPercentageEnable() const { return this->pathIndependentPercentageEnable_ != nullptr;};
      void deletePathIndependentPercentageEnable() { this->pathIndependentPercentageEnable_ = nullptr;};
      inline bool getPathIndependentPercentageEnable() const { DARABONBA_PTR_GET_DEFAULT(pathIndependentPercentageEnable_, false) };
      inline Data& setPathIndependentPercentageEnable(bool pathIndependentPercentageEnable) { DARABONBA_PTR_SET_VALUE(pathIndependentPercentageEnable_, pathIndependentPercentageEnable) };


      // recordCanaryDetail Field Functions 
      bool hasRecordCanaryDetail() const { return this->recordCanaryDetail_ != nullptr;};
      void deleteRecordCanaryDetail() { this->recordCanaryDetail_ = nullptr;};
      inline bool getRecordCanaryDetail() const { DARABONBA_PTR_GET_DEFAULT(recordCanaryDetail_, false) };
      inline Data& setRecordCanaryDetail(bool recordCanaryDetail) { DARABONBA_PTR_SET_VALUE(recordCanaryDetail_, recordCanaryDetail) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Data& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // tag Field Functions 
      bool hasTag() const { return this->tag_ != nullptr;};
      void deleteTag() { this->tag_ = nullptr;};
      inline string getTag() const { DARABONBA_PTR_GET_DEFAULT(tag_, "") };
      inline Data& setTag(string tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Data& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // enableRules Field Functions 
      bool hasEnableRules() const { return this->enableRules_ != nullptr;};
      void deleteEnableRules() { this->enableRules_ = nullptr;};
      inline bool getEnableRules() const { DARABONBA_PTR_GET_DEFAULT(enableRules_, false) };
      inline Data& setEnableRules(bool enableRules) { DARABONBA_PTR_SET_VALUE(enableRules_, enableRules) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
      inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    protected:
      shared_ptr<string> enable_ {};
      shared_ptr<vector<Data::EntryRules>> entryRules_ {};
      shared_ptr<Data::GatewaySwimmingLaneRoute> gatewaySwimmingLaneRoute_ {};
      shared_ptr<string> gatewaySwimmingLaneRouteJson_ {};
      shared_ptr<string> groupId_ {};
      shared_ptr<int64_t> id_ {};
      shared_ptr<string> messageQueueFilterSide_ {};
      shared_ptr<bool> messageQueueGrayEnable_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> namespace_ {};
      shared_ptr<bool> pathIndependentPercentageEnable_ {};
      shared_ptr<bool> recordCanaryDetail_ {};
      shared_ptr<string> regionId_ {};
      shared_ptr<string> tag_ {};
      shared_ptr<string> userId_ {};
      shared_ptr<bool> enableRules_ {};
      shared_ptr<string> gmtCreate_ {};
      shared_ptr<string> gmtModified_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<QueryAllSwimmingLaneResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<QueryAllSwimmingLaneResponseBody::Data>) };
    inline vector<QueryAllSwimmingLaneResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<QueryAllSwimmingLaneResponseBody::Data>) };
    inline QueryAllSwimmingLaneResponseBody& setData(const vector<QueryAllSwimmingLaneResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAllSwimmingLaneResponseBody& setData(vector<QueryAllSwimmingLaneResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline QueryAllSwimmingLaneResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAllSwimmingLaneResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAllSwimmingLaneResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAllSwimmingLaneResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The details of the data.
    shared_ptr<vector<QueryAllSwimmingLaneResponseBody::Data>> data_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The returned message.
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
