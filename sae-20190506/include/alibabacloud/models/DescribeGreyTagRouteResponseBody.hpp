// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGREYTAGROUTERESPONSEBODY_HPP_
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
  class DescribeGreyTagRouteResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGreyTagRouteResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGreyTagRouteResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    DescribeGreyTagRouteResponseBody() = default ;
    DescribeGreyTagRouteResponseBody(const DescribeGreyTagRouteResponseBody &) = default ;
    DescribeGreyTagRouteResponseBody(DescribeGreyTagRouteResponseBody &&) = default ;
    DescribeGreyTagRouteResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGreyTagRouteResponseBody() = default ;
    DescribeGreyTagRouteResponseBody& operator=(const DescribeGreyTagRouteResponseBody &) = default ;
    DescribeGreyTagRouteResponseBody& operator=(DescribeGreyTagRouteResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AlbRules, albRules_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DubboRules, dubboRules_);
        DARABONBA_PTR_TO_JSON(GreyTagRouteId, greyTagRouteId_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ScRules, scRules_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AlbRules, albRules_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DubboRules, dubboRules_);
        DARABONBA_PTR_FROM_JSON(GreyTagRouteId, greyTagRouteId_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ScRules, scRules_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
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
          // The comparison operator. Valid values are **>**, **<**, **>=**, **<=**, **==**, and **!=**.
          shared_ptr<string> cond_ {};
          // Not used in Spring Cloud applications.
          shared_ptr<string> expr_ {};
          // Not used in Spring Cloud applications.
          shared_ptr<int32_t> index_ {};
          // The name of the element to match, as specified by the type parameter. For example, a header name or cookie name.
          shared_ptr<string> name_ {};
          // The matching operator. Valid values:
          // 
          // - **rawvalue**: Performs a direct comparison.
          // 
          // - **list**: Matches against an allowlist of values.
          // 
          // - **mod**: Calculates the remainder of a division by 100.
          // 
          // - **deterministic_proportional_steaming_division**: Performs a percentage-based match.
          shared_ptr<string> operator_ {};
          // The type of request element to match against. Valid values:
          // 
          // - **param**: A request parameter.
          // 
          // - **cookie**: A cookie.
          // 
          // - **header**: A request header.
          shared_ptr<string> type_ {};
          // The value to match. This value is compared with the actual value of the element specified by **type** and **name**.
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
        // The relationship between the conditions in the rule. Valid values:
        // 
        // - **AND**: All conditions must be met.
        // 
        // - **OR**: At least one condition must be met.
        shared_ptr<string> condition_ {};
        // The list of conditions.
        shared_ptr<vector<ScRules::Items>> items_ {};
        // The path to which the rule applies.
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
          // The comparison operator. Valid values are **>**, **<**, **>=**, **<=**, **==**, and **!=**.
          shared_ptr<string> cond_ {};
          // The expression that is used to obtain the parameter value. Valid values:
          // 
          // - **Leave empty**: If left empty, the value of the parameter itself is used.
          // 
          // - **.name**: Obtains the value of the `name` attribute of the parameter. This is equivalent to `args0.getName()`.
          // 
          // - **.isEnabled()**: Obtains the value of the `enabled` attribute of the parameter. This is equivalent to `args0.isEnabled()`.
          // 
          // - **[0]**: The parameter must be an array. This expression obtains the first value of the array, which is equivalent to `args0[0]`. Note that the expression does not start with a period (.).
          // 
          // - **.get(0)**: The parameter must be a list. This expression obtains the first value of the list, which is equivalent to `args0.get(0)`.
          // 
          // - **.get("key")**: The parameter must be a map. This expression obtains the value that corresponds to a key. This is equivalent to `args0.get("key")`.
          shared_ptr<string> expr_ {};
          // The parameter index. `0` indicates the first parameter.
          shared_ptr<int32_t> index_ {};
          // Not used in Dubbo services.
          shared_ptr<string> name_ {};
          // The matching operator. Valid values:
          // 
          // - **rawvalue**: Performs a direct comparison.
          // 
          // - **list**: Matches against an allowlist of values.
          // 
          // - **mod**: Calculates the remainder of a division by 100.
          // 
          // - **deterministic_proportional_steaming_division**: Performs a percentage-based match.
          shared_ptr<string> operator_ {};
          // Not used in Dubbo services.
          shared_ptr<string> type_ {};
          // The value to match. This value is compared with the actual value retrieved by using the specified **expr** and **index**.
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
        // The relationship between the conditions in the rule. Valid values:
        // 
        // - **AND**: All conditions must be met.
        // 
        // - **OR**: At least one condition must be met.
        shared_ptr<string> condition_ {};
        // The service group to which the canary rule applies.
        shared_ptr<string> group_ {};
        // The list of conditions.
        shared_ptr<vector<DubboRules::Items>> items_ {};
        // The method name of the Dubbo service.
        shared_ptr<string> methodName_ {};
        // The Dubbo service name.
        shared_ptr<string> serviceName_ {};
        // The Dubbo service version.
        shared_ptr<string> version_ {};
      };

      class AlbRules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlbRules& obj) { 
          DARABONBA_PTR_TO_JSON(condition, condition_);
          DARABONBA_PTR_TO_JSON(ingressId, ingressId_);
          DARABONBA_PTR_TO_JSON(items, items_);
          DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
        };
        friend void from_json(const Darabonba::Json& j, AlbRules& obj) { 
          DARABONBA_PTR_FROM_JSON(condition, condition_);
          DARABONBA_PTR_FROM_JSON(ingressId, ingressId_);
          DARABONBA_PTR_FROM_JSON(items, items_);
          DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
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
          // Currently supports ==.
          shared_ptr<string> cond_ {};
          // Not required for ALB applications.
          shared_ptr<string> expr_ {};
          // Not required for ALB applications.
          shared_ptr<int32_t> index_ {};
          // The name of the element to match, such as a header or cookie name. This parameter is not used if type is set to sourceIp.
          shared_ptr<string> name_ {};
          // The matching operator. Only **rawvalue** is supported, which indicates a direct comparison.
          shared_ptr<string> operator_ {};
          // The type of request element to match against. Valid values:
          // 
          // - **sourceIp**: The source IP address.
          // 
          // - **cookie**: A cookie.
          // 
          // - **header**: A request header.
          shared_ptr<string> type_ {};
          // The value to match. This value is compared with the actual value of the element specified by **type** and **name**.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->condition_ == nullptr
        && this->ingressId_ == nullptr && this->items_ == nullptr && this->serviceId_ == nullptr; };
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


        // serviceId Field Functions 
        bool hasServiceId() const { return this->serviceId_ != nullptr;};
        void deleteServiceId() { this->serviceId_ = nullptr;};
        inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
        inline AlbRules& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      protected:
        // The relationship between the conditions in the canary rule. Only **AND** is supported, which indicates that all conditions must be met.
        shared_ptr<string> condition_ {};
        // The ID of the Ingress.
        shared_ptr<string> ingressId_ {};
        // The list of conditions.
        shared_ptr<vector<AlbRules::Items>> items_ {};
        // The routing service ID.
        shared_ptr<string> serviceId_ {};
      };

      virtual bool empty() const override { return this->albRules_ == nullptr
        && this->appId_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->dubboRules_ == nullptr && this->greyTagRouteId_ == nullptr
        && this->name_ == nullptr && this->scRules_ == nullptr && this->updateTime_ == nullptr; };
      // albRules Field Functions 
      bool hasAlbRules() const { return this->albRules_ != nullptr;};
      void deleteAlbRules() { this->albRules_ = nullptr;};
      inline const vector<Data::AlbRules> & getAlbRules() const { DARABONBA_PTR_GET_CONST(albRules_, vector<Data::AlbRules>) };
      inline vector<Data::AlbRules> getAlbRules() { DARABONBA_PTR_GET(albRules_, vector<Data::AlbRules>) };
      inline Data& setAlbRules(const vector<Data::AlbRules> & albRules) { DARABONBA_PTR_SET_VALUE(albRules_, albRules) };
      inline Data& setAlbRules(vector<Data::AlbRules> && albRules) { DARABONBA_PTR_SET_RVALUE(albRules_, albRules) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Data& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Data& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Data& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // dubboRules Field Functions 
      bool hasDubboRules() const { return this->dubboRules_ != nullptr;};
      void deleteDubboRules() { this->dubboRules_ = nullptr;};
      inline const vector<Data::DubboRules> & getDubboRules() const { DARABONBA_PTR_GET_CONST(dubboRules_, vector<Data::DubboRules>) };
      inline vector<Data::DubboRules> getDubboRules() { DARABONBA_PTR_GET(dubboRules_, vector<Data::DubboRules>) };
      inline Data& setDubboRules(const vector<Data::DubboRules> & dubboRules) { DARABONBA_PTR_SET_VALUE(dubboRules_, dubboRules) };
      inline Data& setDubboRules(vector<Data::DubboRules> && dubboRules) { DARABONBA_PTR_SET_RVALUE(dubboRules_, dubboRules) };


      // greyTagRouteId Field Functions 
      bool hasGreyTagRouteId() const { return this->greyTagRouteId_ != nullptr;};
      void deleteGreyTagRouteId() { this->greyTagRouteId_ = nullptr;};
      inline int64_t getGreyTagRouteId() const { DARABONBA_PTR_GET_DEFAULT(greyTagRouteId_, 0L) };
      inline Data& setGreyTagRouteId(int64_t greyTagRouteId) { DARABONBA_PTR_SET_VALUE(greyTagRouteId_, greyTagRouteId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Data& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // scRules Field Functions 
      bool hasScRules() const { return this->scRules_ != nullptr;};
      void deleteScRules() { this->scRules_ = nullptr;};
      inline const vector<Data::ScRules> & getScRules() const { DARABONBA_PTR_GET_CONST(scRules_, vector<Data::ScRules>) };
      inline vector<Data::ScRules> getScRules() { DARABONBA_PTR_GET(scRules_, vector<Data::ScRules>) };
      inline Data& setScRules(const vector<Data::ScRules> & scRules) { DARABONBA_PTR_SET_VALUE(scRules_, scRules) };
      inline Data& setScRules(vector<Data::ScRules> && scRules) { DARABONBA_PTR_SET_RVALUE(scRules_, scRules) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Data& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The canary rules for the Application Load Balancer (ALB) instance.
      shared_ptr<vector<Data::AlbRules>> albRules_ {};
      // The application ID.
      shared_ptr<string> appId_ {};
      // The creation timestamp of the rule, in milliseconds.
      shared_ptr<int64_t> createTime_ {};
      // The description of the canary rule.
      shared_ptr<string> description_ {};
      // The canary rules for the Dubbo service.
      shared_ptr<vector<Data::DubboRules>> dubboRules_ {};
      // The globally unique ID of the canary rule.
      shared_ptr<int64_t> greyTagRouteId_ {};
      // The name of the canary rule.
      shared_ptr<string> name_ {};
      // The canary rules for the Spring Cloud application.
      shared_ptr<vector<Data::ScRules>> scRules_ {};
      // The timestamp of the rule\\"s last update, in milliseconds.
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->errorCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->traceId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeGreyTagRouteResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeGreyTagRouteResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeGreyTagRouteResponseBody::Data) };
    inline DescribeGreyTagRouteResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeGreyTagRouteResponseBody::Data) };
    inline DescribeGreyTagRouteResponseBody& setData(const DescribeGreyTagRouteResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeGreyTagRouteResponseBody& setData(DescribeGreyTagRouteResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DescribeGreyTagRouteResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeGreyTagRouteResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeGreyTagRouteResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeGreyTagRouteResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline DescribeGreyTagRouteResponseBody& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The status code of the API call or a POP error code. Valid values:
    // 
    // - **2xx**: The request is successful.
    // 
    // - **3xx**: The request is redirected.
    // 
    // - **4xx**: A client-side error occurred.
    // 
    // - **5xx**: A server-side error occurred.
    shared_ptr<string> code_ {};
    // The details of the canary rule.
    shared_ptr<DescribeGreyTagRouteResponseBody::Data> data_ {};
    // The error code. Valid values:
    // 
    // - This parameter is not returned if the request is successful.
    // 
    // - If the request fails, the **ErrorCode** parameter is returned. For more information, see the **Error codes** section in this topic.
    shared_ptr<string> errorCode_ {};
    // The message that indicates the result of the call.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // - **true**: The request was successful.
    // 
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
    // The trace ID for querying the details of a call.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
