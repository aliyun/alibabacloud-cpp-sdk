// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFORWARDINGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTFORWARDINGRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ga20191120
{
namespace Models
{
  class ListForwardingRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListForwardingRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListForwardingRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListForwardingRulesResponseBody() = default ;
    ListForwardingRulesResponseBody(const ListForwardingRulesResponseBody &) = default ;
    ListForwardingRulesResponseBody(ListForwardingRulesResponseBody &&) = default ;
    ListForwardingRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListForwardingRulesResponseBody() = default ;
    ListForwardingRulesResponseBody& operator=(const ListForwardingRulesResponseBody &) = default ;
    ListForwardingRulesResponseBody& operator=(ListForwardingRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardingRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardingRules& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardingRuleDirection, forwardingRuleDirection_);
        DARABONBA_PTR_TO_JSON(ForwardingRuleId, forwardingRuleId_);
        DARABONBA_PTR_TO_JSON(ForwardingRuleName, forwardingRuleName_);
        DARABONBA_PTR_TO_JSON(ForwardingRuleStatus, forwardingRuleStatus_);
        DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
        DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_TO_JSON(ServiceManagedInfos, serviceManagedInfos_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardingRules& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardingRuleDirection, forwardingRuleDirection_);
        DARABONBA_PTR_FROM_JSON(ForwardingRuleId, forwardingRuleId_);
        DARABONBA_PTR_FROM_JSON(ForwardingRuleName, forwardingRuleName_);
        DARABONBA_PTR_FROM_JSON(ForwardingRuleStatus, forwardingRuleStatus_);
        DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
        DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(ServiceManaged, serviceManaged_);
        DARABONBA_PTR_FROM_JSON(ServiceManagedInfos, serviceManagedInfos_);
      };
      ForwardingRules() = default ;
      ForwardingRules(const ForwardingRules &) = default ;
      ForwardingRules(ForwardingRules &&) = default ;
      ForwardingRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ForwardingRules() = default ;
      ForwardingRules& operator=(const ForwardingRules &) = default ;
      ForwardingRules& operator=(ForwardingRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ServiceManagedInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ServiceManagedInfos& obj) { 
          DARABONBA_PTR_TO_JSON(Action, action_);
          DARABONBA_PTR_TO_JSON(ChildType, childType_);
          DARABONBA_PTR_TO_JSON(IsManaged, isManaged_);
        };
        friend void from_json(const Darabonba::Json& j, ServiceManagedInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(Action, action_);
          DARABONBA_PTR_FROM_JSON(ChildType, childType_);
          DARABONBA_PTR_FROM_JSON(IsManaged, isManaged_);
        };
        ServiceManagedInfos() = default ;
        ServiceManagedInfos(const ServiceManagedInfos &) = default ;
        ServiceManagedInfos(ServiceManagedInfos &&) = default ;
        ServiceManagedInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ServiceManagedInfos() = default ;
        ServiceManagedInfos& operator=(const ServiceManagedInfos &) = default ;
        ServiceManagedInfos& operator=(ServiceManagedInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->action_ == nullptr
        && this->childType_ == nullptr && this->isManaged_ == nullptr; };
        // action Field Functions 
        bool hasAction() const { return this->action_ != nullptr;};
        void deleteAction() { this->action_ = nullptr;};
        inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
        inline ServiceManagedInfos& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


        // childType Field Functions 
        bool hasChildType() const { return this->childType_ != nullptr;};
        void deleteChildType() { this->childType_ = nullptr;};
        inline string getChildType() const { DARABONBA_PTR_GET_DEFAULT(childType_, "") };
        inline ServiceManagedInfos& setChildType(string childType) { DARABONBA_PTR_SET_VALUE(childType_, childType) };


        // isManaged Field Functions 
        bool hasIsManaged() const { return this->isManaged_ != nullptr;};
        void deleteIsManaged() { this->isManaged_ = nullptr;};
        inline bool getIsManaged() const { DARABONBA_PTR_GET_DEFAULT(isManaged_, false) };
        inline ServiceManagedInfos& setIsManaged(bool isManaged) { DARABONBA_PTR_SET_VALUE(isManaged_, isManaged) };


      protected:
        // The name of the action that you can perform on the managed instance. Valid values:
        // 
        // *   **Create**: Create an instance.
        // *   **Update**: Update the current instance.
        // *   **Delete**: Delete the current instance.
        // *   **Associate**: Reference the current instance.
        // *   **UserUnmanaged**: Unmanage the instance.
        // *   **CreateChild**: Create a child resource on the current instance.
        shared_ptr<string> action_ {};
        // The type of the child resource. Valid values:
        // 
        // *   **Listener**: listener.
        // *   **IpSet**: acceleration region.
        // *   **EndpointGroup**: endpoint group.
        // *   **ForwardingRule**: forwarding rule.
        // *   **Endpoint**: endpoint.
        // *   **EndpointGroupDestination**: the protocol mapping of an endpoint group associated with a custom routing listener.
        // *   **EndpointPolicy**: the traffic policy of an endpoint associated with a custom routing listener.
        // 
        // >  This parameter is returned only if the value of **Action** is **CreateChild**.
        shared_ptr<string> childType_ {};
        // Indicates whether the specified actions are managed. Valid values:
        // 
        // *   **true**: The specified actions are managed, and users cannot perform the specified actions on the managed instance.
        // *   **false**: The specified actions are not managed, and users can perform the specified actions on the managed instance.
        shared_ptr<bool> isManaged_ {};
      };

      class RuleConditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleConditions& obj) { 
          DARABONBA_PTR_TO_JSON(HostConfig, hostConfig_);
          DARABONBA_PTR_TO_JSON(PathConfig, pathConfig_);
          DARABONBA_PTR_TO_JSON(RuleConditionType, ruleConditionType_);
          DARABONBA_PTR_TO_JSON(RuleConditionValue, ruleConditionValue_);
        };
        friend void from_json(const Darabonba::Json& j, RuleConditions& obj) { 
          DARABONBA_PTR_FROM_JSON(HostConfig, hostConfig_);
          DARABONBA_PTR_FROM_JSON(PathConfig, pathConfig_);
          DARABONBA_PTR_FROM_JSON(RuleConditionType, ruleConditionType_);
          DARABONBA_PTR_FROM_JSON(RuleConditionValue, ruleConditionValue_);
        };
        RuleConditions() = default ;
        RuleConditions(const RuleConditions &) = default ;
        RuleConditions(RuleConditions &&) = default ;
        RuleConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleConditions() = default ;
        RuleConditions& operator=(const RuleConditions &) = default ;
        RuleConditions& operator=(RuleConditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class PathConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const PathConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, PathConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          PathConfig() = default ;
          PathConfig(const PathConfig &) = default ;
          PathConfig(PathConfig &&) = default ;
          PathConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~PathConfig() = default ;
          PathConfig& operator=(const PathConfig &) = default ;
          PathConfig& operator=(PathConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->values_ == nullptr; };
          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline PathConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline PathConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The path configuration.
          // 
          // >  GA instances created after July 12, 2022 support all forwarding condition types and action types. We recommend that you query forwarding conditions and actions by calling the **RuleActionType** and **RuleActionValue** operations.
          shared_ptr<vector<string>> values_ {};
        };

        class HostConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const HostConfig& obj) { 
            DARABONBA_PTR_TO_JSON(Values, values_);
          };
          friend void from_json(const Darabonba::Json& j, HostConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(Values, values_);
          };
          HostConfig() = default ;
          HostConfig(const HostConfig &) = default ;
          HostConfig(HostConfig &&) = default ;
          HostConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~HostConfig() = default ;
          HostConfig& operator=(const HostConfig &) = default ;
          HostConfig& operator=(HostConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->values_ == nullptr; };
          // values Field Functions 
          bool hasValues() const { return this->values_ != nullptr;};
          void deleteValues() { this->values_ = nullptr;};
          inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
          inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
          inline HostConfig& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
          inline HostConfig& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


        protected:
          // The domain name configuration.
          // 
          // >  GA instances created after July 12, 2022 support all forwarding condition types and action types. We recommend that you query forwarding conditions and actions by calling the **RuleActionType** and **RuleActionValue** operations.
          shared_ptr<vector<string>> values_ {};
        };

        virtual bool empty() const override { return this->hostConfig_ == nullptr
        && this->pathConfig_ == nullptr && this->ruleConditionType_ == nullptr && this->ruleConditionValue_ == nullptr; };
        // hostConfig Field Functions 
        bool hasHostConfig() const { return this->hostConfig_ != nullptr;};
        void deleteHostConfig() { this->hostConfig_ = nullptr;};
        inline const RuleConditions::HostConfig & getHostConfig() const { DARABONBA_PTR_GET_CONST(hostConfig_, RuleConditions::HostConfig) };
        inline RuleConditions::HostConfig getHostConfig() { DARABONBA_PTR_GET(hostConfig_, RuleConditions::HostConfig) };
        inline RuleConditions& setHostConfig(const RuleConditions::HostConfig & hostConfig) { DARABONBA_PTR_SET_VALUE(hostConfig_, hostConfig) };
        inline RuleConditions& setHostConfig(RuleConditions::HostConfig && hostConfig) { DARABONBA_PTR_SET_RVALUE(hostConfig_, hostConfig) };


        // pathConfig Field Functions 
        bool hasPathConfig() const { return this->pathConfig_ != nullptr;};
        void deletePathConfig() { this->pathConfig_ = nullptr;};
        inline const RuleConditions::PathConfig & getPathConfig() const { DARABONBA_PTR_GET_CONST(pathConfig_, RuleConditions::PathConfig) };
        inline RuleConditions::PathConfig getPathConfig() { DARABONBA_PTR_GET(pathConfig_, RuleConditions::PathConfig) };
        inline RuleConditions& setPathConfig(const RuleConditions::PathConfig & pathConfig) { DARABONBA_PTR_SET_VALUE(pathConfig_, pathConfig) };
        inline RuleConditions& setPathConfig(RuleConditions::PathConfig && pathConfig) { DARABONBA_PTR_SET_RVALUE(pathConfig_, pathConfig) };


        // ruleConditionType Field Functions 
        bool hasRuleConditionType() const { return this->ruleConditionType_ != nullptr;};
        void deleteRuleConditionType() { this->ruleConditionType_ = nullptr;};
        inline string getRuleConditionType() const { DARABONBA_PTR_GET_DEFAULT(ruleConditionType_, "") };
        inline RuleConditions& setRuleConditionType(string ruleConditionType) { DARABONBA_PTR_SET_VALUE(ruleConditionType_, ruleConditionType) };


        // ruleConditionValue Field Functions 
        bool hasRuleConditionValue() const { return this->ruleConditionValue_ != nullptr;};
        void deleteRuleConditionValue() { this->ruleConditionValue_ = nullptr;};
        inline string getRuleConditionValue() const { DARABONBA_PTR_GET_DEFAULT(ruleConditionValue_, "") };
        inline RuleConditions& setRuleConditionValue(string ruleConditionValue) { DARABONBA_PTR_SET_VALUE(ruleConditionValue_, ruleConditionValue) };


      protected:
        // The domain name configuration.
        // 
        // >  GA instances created after July 12, 2022 support all forwarding condition types and action types. We recommend that you query forwarding conditions and actions by calling the **RuleActionType** and **RuleActionValue** operations.
        shared_ptr<RuleConditions::HostConfig> hostConfig_ {};
        // The path configuration.
        // 
        // >  GA instances created after July 12, 2022 support all forwarding condition types and action types. We recommend that you query forwarding conditions and actions by calling the **RuleActionType** and **RuleActionValue** operations.
        shared_ptr<RuleConditions::PathConfig> pathConfig_ {};
        // The type of the forwarding condition. Valid values:
        // 
        // *   **Host:** domain name.
        // *   **Path:** path.
        // *   **RequestHeader:** HTTP header.
        // *   **Query:** query string.
        // *   **Method:** HTTP method.
        // *   **Cookie:** cookie.
        // *   **SourceIP:** source IP address.
        shared_ptr<string> ruleConditionType_ {};
        // The value of the forwarding condition type.
        // 
        // Different JSON strings are returned based on the value of the **RuleConditionType** parameter.
        // 
        // *   If you set **RuleConditionType** to **Host**, a domain name condition is returned. If multiple domain names are returned in a forwarding condition, the relationship between the domain names is OR.
        // *   If you set **RuleConditionType** to **Path**, a path condition is returned. If multiple forwarding conditions of the path type are returned in a forwarding rule, the relationship between the forwarding conditions is OR. If multiple paths are returned in a forwarding condition, the relationship between the paths is OR.
        // *   If you set **RuleConditionType** to **RequestHeader**, an HTTP header condition that consists of key-value pairs is returned.
        // *   If you set **RuleConditionType** to **Query**, a query string condition that consists of key-value pairs is returned.
        // *   If you set **RuleConditionType** to **Method**, an HTTP method condition is returned.
        // *   If you set **RuleConditionType** to **Cookie**, a cookie condition that consists of key-value pairs is returned.
        // *   If you set **RuleConditionType** to **SourceIP**, a source IP address condition is returned. If multiple source IP addresses are returned in a forwarding condition, the relationship between the source IP addresses is OR.
        shared_ptr<string> ruleConditionValue_ {};
      };

      class RuleActions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuleActions& obj) { 
          DARABONBA_PTR_TO_JSON(ForwardGroupConfig, forwardGroupConfig_);
          DARABONBA_PTR_TO_JSON(Order, order_);
          DARABONBA_PTR_TO_JSON(RuleActionType, ruleActionType_);
          DARABONBA_PTR_TO_JSON(RuleActionValue, ruleActionValue_);
        };
        friend void from_json(const Darabonba::Json& j, RuleActions& obj) { 
          DARABONBA_PTR_FROM_JSON(ForwardGroupConfig, forwardGroupConfig_);
          DARABONBA_PTR_FROM_JSON(Order, order_);
          DARABONBA_PTR_FROM_JSON(RuleActionType, ruleActionType_);
          DARABONBA_PTR_FROM_JSON(RuleActionValue, ruleActionValue_);
        };
        RuleActions() = default ;
        RuleActions(const RuleActions &) = default ;
        RuleActions(RuleActions &&) = default ;
        RuleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuleActions() = default ;
        RuleActions& operator=(const RuleActions &) = default ;
        RuleActions& operator=(RuleActions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ForwardGroupConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ForwardGroupConfig& obj) { 
            DARABONBA_PTR_TO_JSON(ServerGroupTuples, serverGroupTuples_);
          };
          friend void from_json(const Darabonba::Json& j, ForwardGroupConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(ServerGroupTuples, serverGroupTuples_);
          };
          ForwardGroupConfig() = default ;
          ForwardGroupConfig(const ForwardGroupConfig &) = default ;
          ForwardGroupConfig(ForwardGroupConfig &&) = default ;
          ForwardGroupConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ForwardGroupConfig() = default ;
          ForwardGroupConfig& operator=(const ForwardGroupConfig &) = default ;
          ForwardGroupConfig& operator=(ForwardGroupConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ServerGroupTuples : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ServerGroupTuples& obj) { 
              DARABONBA_PTR_TO_JSON(EndpointGroupId, endpointGroupId_);
            };
            friend void from_json(const Darabonba::Json& j, ServerGroupTuples& obj) { 
              DARABONBA_PTR_FROM_JSON(EndpointGroupId, endpointGroupId_);
            };
            ServerGroupTuples() = default ;
            ServerGroupTuples(const ServerGroupTuples &) = default ;
            ServerGroupTuples(ServerGroupTuples &&) = default ;
            ServerGroupTuples(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ServerGroupTuples() = default ;
            ServerGroupTuples& operator=(const ServerGroupTuples &) = default ;
            ServerGroupTuples& operator=(ServerGroupTuples &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->endpointGroupId_ == nullptr; };
            // endpointGroupId Field Functions 
            bool hasEndpointGroupId() const { return this->endpointGroupId_ != nullptr;};
            void deleteEndpointGroupId() { this->endpointGroupId_ = nullptr;};
            inline string getEndpointGroupId() const { DARABONBA_PTR_GET_DEFAULT(endpointGroupId_, "") };
            inline ServerGroupTuples& setEndpointGroupId(string endpointGroupId) { DARABONBA_PTR_SET_VALUE(endpointGroupId_, endpointGroupId) };


          protected:
            // The endpoint group ID.
            // 
            // >  GA instances created after July 12, 2022 support all forwarding condition types and action types. We recommend that you query forwarding conditions and actions by calling the **RuleActionType** and **RuleActionValue** operations.
            shared_ptr<string> endpointGroupId_ {};
          };

          virtual bool empty() const override { return this->serverGroupTuples_ == nullptr; };
          // serverGroupTuples Field Functions 
          bool hasServerGroupTuples() const { return this->serverGroupTuples_ != nullptr;};
          void deleteServerGroupTuples() { this->serverGroupTuples_ = nullptr;};
          inline const vector<ForwardGroupConfig::ServerGroupTuples> & getServerGroupTuples() const { DARABONBA_PTR_GET_CONST(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
          inline vector<ForwardGroupConfig::ServerGroupTuples> getServerGroupTuples() { DARABONBA_PTR_GET(serverGroupTuples_, vector<ForwardGroupConfig::ServerGroupTuples>) };
          inline ForwardGroupConfig& setServerGroupTuples(const vector<ForwardGroupConfig::ServerGroupTuples> & serverGroupTuples) { DARABONBA_PTR_SET_VALUE(serverGroupTuples_, serverGroupTuples) };
          inline ForwardGroupConfig& setServerGroupTuples(vector<ForwardGroupConfig::ServerGroupTuples> && serverGroupTuples) { DARABONBA_PTR_SET_RVALUE(serverGroupTuples_, serverGroupTuples) };


        protected:
          // The information about the endpoint groups.
          // 
          // >  GA instances created after July 12, 2022 support all forwarding condition types and action types. We recommend that you query forwarding conditions and actions by calling the **RuleActionType** and **RuleActionValue** operations.
          shared_ptr<vector<ForwardGroupConfig::ServerGroupTuples>> serverGroupTuples_ {};
        };

        virtual bool empty() const override { return this->forwardGroupConfig_ == nullptr
        && this->order_ == nullptr && this->ruleActionType_ == nullptr && this->ruleActionValue_ == nullptr; };
        // forwardGroupConfig Field Functions 
        bool hasForwardGroupConfig() const { return this->forwardGroupConfig_ != nullptr;};
        void deleteForwardGroupConfig() { this->forwardGroupConfig_ = nullptr;};
        inline const RuleActions::ForwardGroupConfig & getForwardGroupConfig() const { DARABONBA_PTR_GET_CONST(forwardGroupConfig_, RuleActions::ForwardGroupConfig) };
        inline RuleActions::ForwardGroupConfig getForwardGroupConfig() { DARABONBA_PTR_GET(forwardGroupConfig_, RuleActions::ForwardGroupConfig) };
        inline RuleActions& setForwardGroupConfig(const RuleActions::ForwardGroupConfig & forwardGroupConfig) { DARABONBA_PTR_SET_VALUE(forwardGroupConfig_, forwardGroupConfig) };
        inline RuleActions& setForwardGroupConfig(RuleActions::ForwardGroupConfig && forwardGroupConfig) { DARABONBA_PTR_SET_RVALUE(forwardGroupConfig_, forwardGroupConfig) };


        // order Field Functions 
        bool hasOrder() const { return this->order_ != nullptr;};
        void deleteOrder() { this->order_ = nullptr;};
        inline int32_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0) };
        inline RuleActions& setOrder(int32_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


        // ruleActionType Field Functions 
        bool hasRuleActionType() const { return this->ruleActionType_ != nullptr;};
        void deleteRuleActionType() { this->ruleActionType_ = nullptr;};
        inline string getRuleActionType() const { DARABONBA_PTR_GET_DEFAULT(ruleActionType_, "") };
        inline RuleActions& setRuleActionType(string ruleActionType) { DARABONBA_PTR_SET_VALUE(ruleActionType_, ruleActionType) };


        // ruleActionValue Field Functions 
        bool hasRuleActionValue() const { return this->ruleActionValue_ != nullptr;};
        void deleteRuleActionValue() { this->ruleActionValue_ = nullptr;};
        inline string getRuleActionValue() const { DARABONBA_PTR_GET_DEFAULT(ruleActionValue_, "") };
        inline RuleActions& setRuleActionValue(string ruleActionValue) { DARABONBA_PTR_SET_VALUE(ruleActionValue_, ruleActionValue) };


      protected:
        // The forwarding action configuration.
        // 
        // >  GA instances created after July 12, 2022 support all forwarding condition types and action types. We recommend that you query forwarding conditions and actions by calling the **RuleActionType** and **RuleActionValue** operations.
        shared_ptr<RuleActions::ForwardGroupConfig> forwardGroupConfig_ {};
        // The forwarding priority.
        // 
        // >  This parameter does not take effect.
        shared_ptr<int32_t> order_ {};
        // The type of the forwarding action. Valid values:
        // 
        // *   **ForwardGroup**: forwards a request.
        // *   **Redirect**: redirects a request.
        // *   **FixResponse**: returns a fixed response.
        // *   **Rewrite**: rewrites a request.
        // *   **AddHeader**: adds a header to a request.
        // *   **RemoveHeaderConfig**: deletes the header from a request.
        // *   **Drop**: drops a request.
        shared_ptr<string> ruleActionType_ {};
        // The value of the forwarding action.
        // 
        // Different JSON strings are returned based on the value of **RuleActionType**.
        // 
        // *   If you set **RuleActionType** to **ForwardGroup**, the information about a virtual endpoint group is returned. The following section describes the parameters:
        // 
        //     *   `type`: `endpointgroup` is returned.
        //     *   `value`: the ID of the virtual endpoint group.
        // 
        // *   If you set **RuleActionType** to **Redirect**, the redirecting configuration is returned. The following section describes the parameters:
        // 
        //     *   `protocol`: the protocol of requests after the requests are redirected.
        //     *   `domain`: the domain name to which requests are redirected.
        //     *   `port`: the port to which requests are redirected.
        //     *   `path`: the path to which requests are redirected.
        //     *   `query`: the query string of the requests that are redirected.
        //     *   `code`: the redirecting code.
        // 
        // *   If you set **RuleActionType** to **FixResponse**, the information about the fixed response that you configured is returned. The following section describes the parameters:
        // 
        //     *   `code`: the HTTP status code.
        //     *   `type`: the content type of the response.
        //     *   `content`: the content of the response.
        // 
        // *   If **RuleActionType** is set to **AddHeader**, the information about the HTTP header that is added is returned. The following section describes the parameters:
        // 
        //     *   `name`: the name of the HTTP header.
        //     *   `type`: the content type of the HTTP header.
        //     *   `value`: the content of the HTTP header.
        // 
        // *   If you set **RuleActionType** to **RemoveHeader**, the information about the HTTP header that is deleted is returned.
        // 
        // *   If you set **RuleActionType** to **Rewrite**, the rewriting configuration is returned. The following section describes the parameters:
        // 
        //     *   `domain`: the domain name to which requests are redirected.
        //     *   `path`: the path to which requests are redirected.
        //     *   `query`: the query string of the requests that are redirected.
        // 
        // *   If you set **RuleActionType** to **Drop**, an empty string is returned.
        shared_ptr<string> ruleActionValue_ {};
      };

      virtual bool empty() const override { return this->forwardingRuleDirection_ == nullptr
        && this->forwardingRuleId_ == nullptr && this->forwardingRuleName_ == nullptr && this->forwardingRuleStatus_ == nullptr && this->listenerId_ == nullptr && this->priority_ == nullptr
        && this->ruleActions_ == nullptr && this->ruleConditions_ == nullptr && this->serviceId_ == nullptr && this->serviceManaged_ == nullptr && this->serviceManagedInfos_ == nullptr; };
      // forwardingRuleDirection Field Functions 
      bool hasForwardingRuleDirection() const { return this->forwardingRuleDirection_ != nullptr;};
      void deleteForwardingRuleDirection() { this->forwardingRuleDirection_ = nullptr;};
      inline string getForwardingRuleDirection() const { DARABONBA_PTR_GET_DEFAULT(forwardingRuleDirection_, "") };
      inline ForwardingRules& setForwardingRuleDirection(string forwardingRuleDirection) { DARABONBA_PTR_SET_VALUE(forwardingRuleDirection_, forwardingRuleDirection) };


      // forwardingRuleId Field Functions 
      bool hasForwardingRuleId() const { return this->forwardingRuleId_ != nullptr;};
      void deleteForwardingRuleId() { this->forwardingRuleId_ = nullptr;};
      inline string getForwardingRuleId() const { DARABONBA_PTR_GET_DEFAULT(forwardingRuleId_, "") };
      inline ForwardingRules& setForwardingRuleId(string forwardingRuleId) { DARABONBA_PTR_SET_VALUE(forwardingRuleId_, forwardingRuleId) };


      // forwardingRuleName Field Functions 
      bool hasForwardingRuleName() const { return this->forwardingRuleName_ != nullptr;};
      void deleteForwardingRuleName() { this->forwardingRuleName_ = nullptr;};
      inline string getForwardingRuleName() const { DARABONBA_PTR_GET_DEFAULT(forwardingRuleName_, "") };
      inline ForwardingRules& setForwardingRuleName(string forwardingRuleName) { DARABONBA_PTR_SET_VALUE(forwardingRuleName_, forwardingRuleName) };


      // forwardingRuleStatus Field Functions 
      bool hasForwardingRuleStatus() const { return this->forwardingRuleStatus_ != nullptr;};
      void deleteForwardingRuleStatus() { this->forwardingRuleStatus_ = nullptr;};
      inline string getForwardingRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(forwardingRuleStatus_, "") };
      inline ForwardingRules& setForwardingRuleStatus(string forwardingRuleStatus) { DARABONBA_PTR_SET_VALUE(forwardingRuleStatus_, forwardingRuleStatus) };


      // listenerId Field Functions 
      bool hasListenerId() const { return this->listenerId_ != nullptr;};
      void deleteListenerId() { this->listenerId_ = nullptr;};
      inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
      inline ForwardingRules& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline ForwardingRules& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // ruleActions Field Functions 
      bool hasRuleActions() const { return this->ruleActions_ != nullptr;};
      void deleteRuleActions() { this->ruleActions_ = nullptr;};
      inline const vector<ForwardingRules::RuleActions> & getRuleActions() const { DARABONBA_PTR_GET_CONST(ruleActions_, vector<ForwardingRules::RuleActions>) };
      inline vector<ForwardingRules::RuleActions> getRuleActions() { DARABONBA_PTR_GET(ruleActions_, vector<ForwardingRules::RuleActions>) };
      inline ForwardingRules& setRuleActions(const vector<ForwardingRules::RuleActions> & ruleActions) { DARABONBA_PTR_SET_VALUE(ruleActions_, ruleActions) };
      inline ForwardingRules& setRuleActions(vector<ForwardingRules::RuleActions> && ruleActions) { DARABONBA_PTR_SET_RVALUE(ruleActions_, ruleActions) };


      // ruleConditions Field Functions 
      bool hasRuleConditions() const { return this->ruleConditions_ != nullptr;};
      void deleteRuleConditions() { this->ruleConditions_ = nullptr;};
      inline const vector<ForwardingRules::RuleConditions> & getRuleConditions() const { DARABONBA_PTR_GET_CONST(ruleConditions_, vector<ForwardingRules::RuleConditions>) };
      inline vector<ForwardingRules::RuleConditions> getRuleConditions() { DARABONBA_PTR_GET(ruleConditions_, vector<ForwardingRules::RuleConditions>) };
      inline ForwardingRules& setRuleConditions(const vector<ForwardingRules::RuleConditions> & ruleConditions) { DARABONBA_PTR_SET_VALUE(ruleConditions_, ruleConditions) };
      inline ForwardingRules& setRuleConditions(vector<ForwardingRules::RuleConditions> && ruleConditions) { DARABONBA_PTR_SET_RVALUE(ruleConditions_, ruleConditions) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ForwardingRules& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // serviceManaged Field Functions 
      bool hasServiceManaged() const { return this->serviceManaged_ != nullptr;};
      void deleteServiceManaged() { this->serviceManaged_ = nullptr;};
      inline bool getServiceManaged() const { DARABONBA_PTR_GET_DEFAULT(serviceManaged_, false) };
      inline ForwardingRules& setServiceManaged(bool serviceManaged) { DARABONBA_PTR_SET_VALUE(serviceManaged_, serviceManaged) };


      // serviceManagedInfos Field Functions 
      bool hasServiceManagedInfos() const { return this->serviceManagedInfos_ != nullptr;};
      void deleteServiceManagedInfos() { this->serviceManagedInfos_ = nullptr;};
      inline const vector<ForwardingRules::ServiceManagedInfos> & getServiceManagedInfos() const { DARABONBA_PTR_GET_CONST(serviceManagedInfos_, vector<ForwardingRules::ServiceManagedInfos>) };
      inline vector<ForwardingRules::ServiceManagedInfos> getServiceManagedInfos() { DARABONBA_PTR_GET(serviceManagedInfos_, vector<ForwardingRules::ServiceManagedInfos>) };
      inline ForwardingRules& setServiceManagedInfos(const vector<ForwardingRules::ServiceManagedInfos> & serviceManagedInfos) { DARABONBA_PTR_SET_VALUE(serviceManagedInfos_, serviceManagedInfos) };
      inline ForwardingRules& setServiceManagedInfos(vector<ForwardingRules::ServiceManagedInfos> && serviceManagedInfos) { DARABONBA_PTR_SET_RVALUE(serviceManagedInfos_, serviceManagedInfos) };


    protected:
      // The direction in which the forwarding rule takes effect.
      // 
      // By default, **request** is returned, which indicates that the forwarding rule takes effect on requests.
      shared_ptr<string> forwardingRuleDirection_ {};
      // The forwarding rule ID.
      shared_ptr<string> forwardingRuleId_ {};
      // The forwarding rule name.
      shared_ptr<string> forwardingRuleName_ {};
      // The state of the forwarding rule. Valid values:
      // 
      // *   **active:** The forwarding rule is normal.
      // *   **configuring:** The forwarding rule is being modified.
      // *   **deleting:** The forwarding rule is being deleted.
      shared_ptr<string> forwardingRuleStatus_ {};
      // The listener ID.
      shared_ptr<string> listenerId_ {};
      // The priority of the forwarding rule.
      // 
      // A value between **1** and **10000** is returned. A smaller value indicates a higher priority.
      shared_ptr<int32_t> priority_ {};
      // The forwarding actions.
      shared_ptr<vector<ForwardingRules::RuleActions>> ruleActions_ {};
      // The conditions that trigger the forwarding rule.
      shared_ptr<vector<ForwardingRules::RuleConditions>> ruleConditions_ {};
      // The ID of the service that manages the instance.
      // 
      // >  This parameter is returned only if the value of **ServiceManaged** is **true**.
      shared_ptr<string> serviceId_ {};
      // Indicates whether the GA instance is managed. Valid values:
      // 
      // *   **true**: The GA instance is managed.
      // *   **false**: The GA instance is not managed.
      shared_ptr<bool> serviceManaged_ {};
      // The actions that you can perform on the managed instance.
      // 
      // >  This parameter takes effect only if **ServiceManaged** is set to **True**.
      // 
      // *   You can perform only specific actions on the managed instance.
      shared_ptr<vector<ForwardingRules::ServiceManagedInfos>> serviceManagedInfos_ {};
    };

    virtual bool empty() const override { return this->forwardingRules_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // forwardingRules Field Functions 
    bool hasForwardingRules() const { return this->forwardingRules_ != nullptr;};
    void deleteForwardingRules() { this->forwardingRules_ = nullptr;};
    inline const vector<ListForwardingRulesResponseBody::ForwardingRules> & getForwardingRules() const { DARABONBA_PTR_GET_CONST(forwardingRules_, vector<ListForwardingRulesResponseBody::ForwardingRules>) };
    inline vector<ListForwardingRulesResponseBody::ForwardingRules> getForwardingRules() { DARABONBA_PTR_GET(forwardingRules_, vector<ListForwardingRulesResponseBody::ForwardingRules>) };
    inline ListForwardingRulesResponseBody& setForwardingRules(const vector<ListForwardingRulesResponseBody::ForwardingRules> & forwardingRules) { DARABONBA_PTR_SET_VALUE(forwardingRules_, forwardingRules) };
    inline ListForwardingRulesResponseBody& setForwardingRules(vector<ListForwardingRulesResponseBody::ForwardingRules> && forwardingRules) { DARABONBA_PTR_SET_RVALUE(forwardingRules_, forwardingRules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListForwardingRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListForwardingRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListForwardingRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListForwardingRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The forwarding rules.
    shared_ptr<vector<ListForwardingRulesResponseBody::ForwardingRules>> forwardingRules_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used for the next query. Valid values:
    // 
    // *   If **NextToken** is not returned, it indicates that no additional results exist.
    // *   If **NextToken** is returned, the value indicates the token that is used for the next query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
