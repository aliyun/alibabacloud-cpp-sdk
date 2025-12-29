// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGREYTAGROUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListGreyTagRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGreyTagRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGreyTagRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    ListGreyTagRouteResponseBody() = default ;
    ListGreyTagRouteResponseBody(const ListGreyTagRouteResponseBody &) = default ;
    ListGreyTagRouteResponseBody(ListGreyTagRouteResponseBody &&) = default ;
    ListGreyTagRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGreyTagRouteResponseBody() = default ;
    ListGreyTagRouteResponseBody& operator=(const ListGreyTagRouteResponseBody &) = default ;
    ListGreyTagRouteResponseBody& operator=(ListGreyTagRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(TotalSize, totalSize_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
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
          DARABONBA_PTR_TO_JSON(AlbRules, albRules_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(DubboRules, dubboRules_);
          DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(ScRules, scRules_);
          DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        };
        friend void from_json(const Darabonba::Json& j, Result& obj) { 
          DARABONBA_PTR_FROM_JSON(AlbRules, albRules_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(DubboRules, dubboRules_);
          DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(ScRules, scRules_);
          DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
        class ScRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ScRules& obj) { 
            DARABONBA_PTR_TO_JSON(condition, condition_);
            DARABONBA_PTR_TO_JSON(items, items_);
            DARABONBA_PTR_TO_JSON(path, path_);
          };
          friend void from_json(const Darabonba::Json& j, ScRules& obj) { 
            DARABONBA_PTR_FROM_JSON(condition, condition_);
            DARABONBA_PTR_FROM_JSON(items, items_);
            DARABONBA_PTR_FROM_JSON(path, path_);
          };
          ScRules() = default ;
          ScRules(const ScRules &) = default ;
          ScRules(ScRules &&) = default ;
          ScRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ScRules() = default ;
          ScRules& operator=(const ScRules &) = default ;
          ScRules& operator=(ScRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(cond, cond_);
              DARABONBA_PTR_TO_JSON(expr, expr_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(operator, operator_);
              DARABONBA_PTR_TO_JSON(type, type_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(cond, cond_);
              DARABONBA_PTR_FROM_JSON(expr, expr_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(operator, operator_);
              DARABONBA_PTR_FROM_JSON(type, type_);
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
            virtual bool empty() const override { return this->cond_ == nullptr
        && this->expr_ == nullptr && this->index_ == nullptr && this->name_ == nullptr && this->operator_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
            // cond Field Functions 
            bool hasCond() const { return this->cond_ != nullptr;};
            void deleteCond() { this->cond_ = nullptr;};
            inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
            inline Items& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


            // expr Field Functions 
            bool hasExpr() const { return this->expr_ != nullptr;};
            void deleteExpr() { this->expr_ = nullptr;};
            inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
            inline Items& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline Items& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline Items& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Items& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The comparison operator. Valid values: **>**, **<**, **>=**, **<=**, **==**, and **! =**.
            shared_ptr<string> cond_ {};
            // This parameter is not returned for Spring Cloud applications.
            shared_ptr<string> expr_ {};
            // This parameter is not returned for Spring Cloud applications.
            shared_ptr<int32_t> index_ {};
            // The name of the parameter.
            shared_ptr<string> name_ {};
            // The operator. Valid values:
            // 
            // *   **rawvalue**: direct comparison.
            // *   **list**: whitelist.
            // *   **mod**: mods 100.
            // *   **deterministic_proportional_steaming_division**: percentage.
            shared_ptr<string> operator_ {};
            // The type of the comparison. Valid values:
            // 
            // *   **param**: parameter
            // *   **cookie**: cookie
            // *   **header**: header
            shared_ptr<string> type_ {};
            // The value of the parameter. This value is compared with the value that is obtained based on the **type** and **name** parameters.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->condition_ == nullptr
        && this->items_ == nullptr && this->path_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline ScRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const vector<ScRules::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<ScRules::Items>) };
          inline vector<ScRules::Items> getItems() { DARABONBA_PTR_GET(items_, vector<ScRules::Items>) };
          inline ScRules& setItems(const vector<ScRules::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline ScRules& setItems(vector<ScRules::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


          // path Field Functions 
          bool hasPath() const { return this->path_ != nullptr;};
          void deletePath() { this->path_ = nullptr;};
          inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
          inline ScRules& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


        protected:
          // The relationship between the conditions in the canary release rule. Valid values:
          // 
          // *   **AND**: The conditions are in the logical AND relation. All conditions must be met at the same time.
          // *   **OR**: The conditions are in the logical OR relation. At least one of the conditions must be met.
          shared_ptr<string> condition_ {};
          // The conditions.
          shared_ptr<vector<ScRules::Items>> items_ {};
          // The path of the canary release rule of the Spring Cloud application.
          shared_ptr<string> path_ {};
        };

        class DubboRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DubboRules& obj) { 
            DARABONBA_PTR_TO_JSON(condition, condition_);
            DARABONBA_PTR_TO_JSON(group, group_);
            DARABONBA_PTR_TO_JSON(items, items_);
            DARABONBA_PTR_TO_JSON(methodName, methodName_);
            DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
            DARABONBA_PTR_TO_JSON(version, version_);
          };
          friend void from_json(const Darabonba::Json& j, DubboRules& obj) { 
            DARABONBA_PTR_FROM_JSON(condition, condition_);
            DARABONBA_PTR_FROM_JSON(group, group_);
            DARABONBA_PTR_FROM_JSON(items, items_);
            DARABONBA_PTR_FROM_JSON(methodName, methodName_);
            DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
            DARABONBA_PTR_FROM_JSON(version, version_);
          };
          DubboRules() = default ;
          DubboRules(const DubboRules &) = default ;
          DubboRules(DubboRules &&) = default ;
          DubboRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DubboRules() = default ;
          DubboRules& operator=(const DubboRules &) = default ;
          DubboRules& operator=(DubboRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(cond, cond_);
              DARABONBA_PTR_TO_JSON(expr, expr_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(operator, operator_);
              DARABONBA_PTR_TO_JSON(type, type_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(cond, cond_);
              DARABONBA_PTR_FROM_JSON(expr, expr_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(operator, operator_);
              DARABONBA_PTR_FROM_JSON(type, type_);
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
            virtual bool empty() const override { return this->cond_ == nullptr
        && this->expr_ == nullptr && this->index_ == nullptr && this->name_ == nullptr && this->operator_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
            // cond Field Functions 
            bool hasCond() const { return this->cond_ != nullptr;};
            void deleteCond() { this->cond_ = nullptr;};
            inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
            inline Items& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


            // expr Field Functions 
            bool hasExpr() const { return this->expr_ != nullptr;};
            void deleteExpr() { this->expr_ = nullptr;};
            inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
            inline Items& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline Items& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline Items& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Items& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            // The comparison operator. Valid values: **>**, **<**, **>=**, **<=**, **==**, and **! =**.
            shared_ptr<string> cond_ {};
            // The expression that is used to obtain the value of the parameter. The syntax of the expression must follow the standard of the SpEL. Valid values:
            // 
            // - **Empty**: obtains the value of the parameter.
            // - **.name**: obtains the name property of the parameter. This expression works the same way as args0.getName().
            // - **.isEnabled()**: obtains the enabled property of the parameter. This expression works the same way as args0.isEnabled().
            // - **[0]**: indicates that the value of the parameter is an array and obtains the first value of the array. This expression works the same way as args0[0]. This expression does not start with a period (.).
            // - **.get(0)**: indicates that the value of the parameter is a list and obtains the first value of the list. This expression works the same way as args0.get(0).
            // - **.get("key")**: indicates that the value of the parameter is a map and obtains the value of the key in the map. This expression works the same way as args0.get("key").  >  For more information about the expressions that are used to obtain parameter values, see  [Spring Expression Language (SpEL)](https://docs.spring.io/spring-integration/docs/current/reference/html/spel.html).
            shared_ptr<string> expr_ {};
            // The index of the parameter. The value 0 indicates the first parameter.
            shared_ptr<int32_t> index_ {};
            // This parameter is not returned for Dubbo services.
            shared_ptr<string> name_ {};
            // The operator. Valid values:
            // 
            // - **rawvalue**: direct comparison.
            // - **list**: whitelist.
            // - **mod**: mods 100.
            // - **deterministic_proportional_steaming_division**: percentage.
            shared_ptr<string> operator_ {};
            // This parameter is not returned for Dubbo services.
            shared_ptr<string> type_ {};
            // The value of the parameter. This value is compared with the value that is obtained based on the **expr** and **index** parameters.
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->condition_ == nullptr
        && this->group_ == nullptr && this->items_ == nullptr && this->methodName_ == nullptr && this->serviceName_ == nullptr && this->version_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline DubboRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // group Field Functions 
          bool hasGroup() const { return this->group_ != nullptr;};
          void deleteGroup() { this->group_ = nullptr;};
          inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
          inline DubboRules& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const vector<DubboRules::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DubboRules::Items>) };
          inline vector<DubboRules::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DubboRules::Items>) };
          inline DubboRules& setItems(const vector<DubboRules::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline DubboRules& setItems(vector<DubboRules::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


          // methodName Field Functions 
          bool hasMethodName() const { return this->methodName_ != nullptr;};
          void deleteMethodName() { this->methodName_ = nullptr;};
          inline string getMethodName() const { DARABONBA_PTR_GET_DEFAULT(methodName_, "") };
          inline DubboRules& setMethodName(string methodName) { DARABONBA_PTR_SET_VALUE(methodName_, methodName) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline DubboRules& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


          // version Field Functions 
          bool hasVersion() const { return this->version_ != nullptr;};
          void deleteVersion() { this->version_ = nullptr;};
          inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
          inline DubboRules& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


        protected:
          // The relationship between the conditions in the canary release rule. Valid values:
          // 
          // - **AND**: The conditions are in the logical AND relation. All conditions must be met at the same time.
          // - **OR**: The conditions are in the logical OR relation. At least one of the conditions must be met.
          shared_ptr<string> condition_ {};
          // The group of the Dubbo service that corresponds to the canary release rule.
          shared_ptr<string> group_ {};
          // The conditions.
          shared_ptr<vector<DubboRules::Items>> items_ {};
          // The method name of the Dubbo service.
          shared_ptr<string> methodName_ {};
          // The name of the Dubbo service.
          shared_ptr<string> serviceName_ {};
          // The version of the Dubbo service.
          shared_ptr<string> version_ {};
        };

        class AlbRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const AlbRules& obj) { 
            DARABONBA_PTR_TO_JSON(condition, condition_);
            DARABONBA_PTR_TO_JSON(ingressId, ingressId_);
            DARABONBA_PTR_TO_JSON(items, items_);
            DARABONBA_PTR_TO_JSON(serviceName, serviceName_);
          };
          friend void from_json(const Darabonba::Json& j, AlbRules& obj) { 
            DARABONBA_PTR_FROM_JSON(condition, condition_);
            DARABONBA_PTR_FROM_JSON(ingressId, ingressId_);
            DARABONBA_PTR_FROM_JSON(items, items_);
            DARABONBA_PTR_FROM_JSON(serviceName, serviceName_);
          };
          AlbRules() = default ;
          AlbRules(const AlbRules &) = default ;
          AlbRules(AlbRules &&) = default ;
          AlbRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~AlbRules() = default ;
          AlbRules& operator=(const AlbRules &) = default ;
          AlbRules& operator=(AlbRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class Items : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const Items& obj) { 
              DARABONBA_PTR_TO_JSON(cond, cond_);
              DARABONBA_PTR_TO_JSON(expr, expr_);
              DARABONBA_PTR_TO_JSON(index, index_);
              DARABONBA_PTR_TO_JSON(name, name_);
              DARABONBA_PTR_TO_JSON(operator, operator_);
              DARABONBA_PTR_TO_JSON(type, type_);
              DARABONBA_PTR_TO_JSON(value, value_);
            };
            friend void from_json(const Darabonba::Json& j, Items& obj) { 
              DARABONBA_PTR_FROM_JSON(cond, cond_);
              DARABONBA_PTR_FROM_JSON(expr, expr_);
              DARABONBA_PTR_FROM_JSON(index, index_);
              DARABONBA_PTR_FROM_JSON(name, name_);
              DARABONBA_PTR_FROM_JSON(operator, operator_);
              DARABONBA_PTR_FROM_JSON(type, type_);
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
            virtual bool empty() const override { return this->cond_ == nullptr
        && this->expr_ == nullptr && this->index_ == nullptr && this->name_ == nullptr && this->operator_ == nullptr && this->type_ == nullptr
        && this->value_ == nullptr; };
            // cond Field Functions 
            bool hasCond() const { return this->cond_ != nullptr;};
            void deleteCond() { this->cond_ = nullptr;};
            inline string getCond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
            inline Items& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


            // expr Field Functions 
            bool hasExpr() const { return this->expr_ != nullptr;};
            void deleteExpr() { this->expr_ = nullptr;};
            inline string getExpr() const { DARABONBA_PTR_GET_DEFAULT(expr_, "") };
            inline Items& setExpr(string expr) { DARABONBA_PTR_SET_VALUE(expr_, expr) };


            // index Field Functions 
            bool hasIndex() const { return this->index_ != nullptr;};
            void deleteIndex() { this->index_ = nullptr;};
            inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
            inline Items& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


            // name Field Functions 
            bool hasName() const { return this->name_ != nullptr;};
            void deleteName() { this->name_ = nullptr;};
            inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
            inline Items& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


            // operator Field Functions 
            bool hasOperator() const { return this->operator_ != nullptr;};
            void deleteOperator() { this->operator_ = nullptr;};
            inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
            inline Items& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


            // type Field Functions 
            bool hasType() const { return this->type_ != nullptr;};
            void deleteType() { this->type_ = nullptr;};
            inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
            inline Items& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


            // value Field Functions 
            bool hasValue() const { return this->value_ != nullptr;};
            void deleteValue() { this->value_ = nullptr;};
            inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
            inline Items& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


          protected:
            shared_ptr<string> cond_ {};
            shared_ptr<string> expr_ {};
            shared_ptr<int32_t> index_ {};
            shared_ptr<string> name_ {};
            shared_ptr<string> operator_ {};
            shared_ptr<string> type_ {};
            shared_ptr<string> value_ {};
          };

          virtual bool empty() const override { return this->condition_ == nullptr
        && this->ingressId_ == nullptr && this->items_ == nullptr && this->serviceName_ == nullptr; };
          // condition Field Functions 
          bool hasCondition() const { return this->condition_ != nullptr;};
          void deleteCondition() { this->condition_ = nullptr;};
          inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
          inline AlbRules& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


          // ingressId Field Functions 
          bool hasIngressId() const { return this->ingressId_ != nullptr;};
          void deleteIngressId() { this->ingressId_ = nullptr;};
          inline string getIngressId() const { DARABONBA_PTR_GET_DEFAULT(ingressId_, "") };
          inline AlbRules& setIngressId(string ingressId) { DARABONBA_PTR_SET_VALUE(ingressId_, ingressId) };


          // items Field Functions 
          bool hasItems() const { return this->items_ != nullptr;};
          void deleteItems() { this->items_ = nullptr;};
          inline const vector<AlbRules::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<AlbRules::Items>) };
          inline vector<AlbRules::Items> getItems() { DARABONBA_PTR_GET(items_, vector<AlbRules::Items>) };
          inline AlbRules& setItems(const vector<AlbRules::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
          inline AlbRules& setItems(vector<AlbRules::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline AlbRules& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        protected:
          shared_ptr<string> condition_ {};
          shared_ptr<string> ingressId_ {};
          shared_ptr<vector<AlbRules::Items>> items_ {};
          shared_ptr<string> serviceName_ {};
        };

        virtual bool empty() const override { return this->albRules_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->dubboRules_ == nullptr && this->greyTagRouteId_ == nullptr && this->name_ == nullptr
        && this->scRules_ == nullptr && this->updateTime_ == nullptr; };
        // albRules Field Functions 
        bool hasAlbRules() const { return this->albRules_ != nullptr;};
        void deleteAlbRules() { this->albRules_ = nullptr;};
        inline const vector<Result::AlbRules> & getAlbRules() const { DARABONBA_PTR_GET_CONST(albRules_, vector<Result::AlbRules>) };
        inline vector<Result::AlbRules> getAlbRules() { DARABONBA_PTR_GET(albRules_, vector<Result::AlbRules>) };
        inline Result& setAlbRules(const vector<Result::AlbRules> & albRules) { DARABONBA_PTR_SET_VALUE(albRules_, albRules) };
        inline Result& setAlbRules(vector<Result::AlbRules> && albRules) { DARABONBA_PTR_SET_RVALUE(albRules_, albRules) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline Result& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Result& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // dubboRules Field Functions 
        bool hasDubboRules() const { return this->dubboRules_ != nullptr;};
        void deleteDubboRules() { this->dubboRules_ = nullptr;};
        inline const vector<Result::DubboRules> & getDubboRules() const { DARABONBA_PTR_GET_CONST(dubboRules_, vector<Result::DubboRules>) };
        inline vector<Result::DubboRules> getDubboRules() { DARABONBA_PTR_GET(dubboRules_, vector<Result::DubboRules>) };
        inline Result& setDubboRules(const vector<Result::DubboRules> & dubboRules) { DARABONBA_PTR_SET_VALUE(dubboRules_, dubboRules) };
        inline Result& setDubboRules(vector<Result::DubboRules> && dubboRules) { DARABONBA_PTR_SET_RVALUE(dubboRules_, dubboRules) };


        // greyTagRouteId Field Functions 
        bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
        void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
        inline int64_t getGreyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
        inline Result& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // scRules Field Functions 
        bool hasScRules() const { return this->scRules_ != nullptr;};
        void deleteScRules() { this->scRules_ = nullptr;};
        inline const vector<Result::ScRules> & getScRules() const { DARABONBA_PTR_GET_CONST(scRules_, vector<Result::ScRules>) };
        inline vector<Result::ScRules> getScRules() { DARABONBA_PTR_GET(scRules_, vector<Result::ScRules>) };
        inline Result& setScRules(const vector<Result::ScRules> & scRules) { DARABONBA_PTR_SET_VALUE(scRules_, scRules) };
        inline Result& setScRules(vector<Result::ScRules> && scRules) { DARABONBA_PTR_SET_RVALUE(scRules_, scRules) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
        inline Result& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        shared_ptr<vector<Result::AlbRules>> albRules_ {};
        // The timestamp when the canary release rule was created. Unit: milliseconds.
        shared_ptr<int64_t> createTime_ {};
        // The description of the canary release rule.
        shared_ptr<string> description_ {};
        // The canary release rule of the Dubbo service.
        shared_ptr<vector<Result::DubboRules>> dubboRules_ {};
        // The ID of the canary release rule.
        shared_ptr<int64_t> greyTagRouteId_ {};
        // The name of the canary release rule.
        shared_ptr<string> name_ {};
        // The canary release rule of the Spring Cloud application.
        shared_ptr<vector<Result::ScRules>> scRules_ {};
        // The timestamp when the canary release rule was updated. Unit: milliseconds.
        shared_ptr<int64_t> updateTime_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->result_ == nullptr && this->totalSize_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline Data& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


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
      inline int64_t getTotalSize() const { DARABONBA_PTR_GET_DEFAULT(totalSize_, 0L) };
      inline Data& setTotalSize(int64_t totalSize) { DARABONBA_PTR_SET_VALUE(totalSize_, totalSize) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned on each page. Valid value: **1**.
      shared_ptr<int32_t> pageSize_ {};
      // The returned result.
      shared_ptr<vector<Data::Result>> result_ {};
      // The total number of canary release rules. Valid value: **1**.
      shared_ptr<int64_t> totalSize_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListGreyTagRouteResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListGreyTagRouteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListGreyTagRouteResponseBody::Data) };
    inline ListGreyTagRouteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListGreyTagRouteResponseBody::Data) };
    inline ListGreyTagRouteResponseBody& setData(const ListGreyTagRouteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListGreyTagRouteResponseBody& setData(ListGreyTagRouteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListGreyTagRouteResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListGreyTagRouteResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGreyTagRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListGreyTagRouteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ListGreyTagRouteResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The HTTP status code. Valid values:
    // 
    // - **2xx**: The call was successful.
    // - **3xx**: The call was redirected.
    // - **4xx**: The call failed.
    // - **5xx**: A server error occurred.
    shared_ptr<string> code_ {};
    // The information about the canary release rule.
    shared_ptr<ListGreyTagRouteResponseBody::Data> data_ {};
    // The returned error code. Valid values:
    // 
    // - If the call is successful, the **ErrorCode** parameter is not returned.
    // - If the call fails, the **ErrorCode** parameter is returned. For more information, see the "**Error codes**" section of this topic.
    shared_ptr<string> errorCode_ {};
    // The returned information. Valid values:
    // 
    // *   success: If the call is successful, **success** is returned.
    // *   An error code: If the call fails, an error code is returned.
    shared_ptr<string> message_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the information of the change order was queried. Valid values:
    // 
    // - **true**: The information was queried.
    // - **false**: The information failed to be queried.
    shared_ptr<bool> success_ {};
    // The trace ID that is used to query the details of the request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
