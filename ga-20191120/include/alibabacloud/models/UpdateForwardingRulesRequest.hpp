// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFORWARDINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFORWARDINGRULESREQUEST_HPP_
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
  class UpdateForwardingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateForwardingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_TO_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateForwardingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceleratorId, acceleratorId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ForwardingRules, forwardingRules_);
      DARABONBA_PTR_FROM_JSON(ListenerId, listenerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateForwardingRulesRequest() = default ;
    UpdateForwardingRulesRequest(const UpdateForwardingRulesRequest &) = default ;
    UpdateForwardingRulesRequest(UpdateForwardingRulesRequest &&) = default ;
    UpdateForwardingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateForwardingRulesRequest() = default ;
    UpdateForwardingRulesRequest& operator=(const UpdateForwardingRulesRequest &) = default ;
    UpdateForwardingRulesRequest& operator=(UpdateForwardingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ForwardingRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ForwardingRules& obj) { 
        DARABONBA_PTR_TO_JSON(ForwardingRuleId, forwardingRuleId_);
        DARABONBA_PTR_TO_JSON(ForwardingRuleName, forwardingRuleName_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RuleActions, ruleActions_);
        DARABONBA_PTR_TO_JSON(RuleConditions, ruleConditions_);
        DARABONBA_PTR_TO_JSON(RuleDirection, ruleDirection_);
      };
      friend void from_json(const Darabonba::Json& j, ForwardingRules& obj) { 
        DARABONBA_PTR_FROM_JSON(ForwardingRuleId, forwardingRuleId_);
        DARABONBA_PTR_FROM_JSON(ForwardingRuleName, forwardingRuleName_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RuleActions, ruleActions_);
        DARABONBA_PTR_FROM_JSON(RuleConditions, ruleConditions_);
        DARABONBA_PTR_FROM_JSON(RuleDirection, ruleDirection_);
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
          // >  We recommend that you use **RuleConditionType** and **RuleConditionValue** rather than this parameter to configure forwarding conditions.
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
          // >  We recommend that you use **RuleConditionType** and **RuleConditionValue** rather than this parameter to configure forwarding conditions.
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
        // >  We recommend that you use **RuleConditionType** and **RuleConditionValue** rather than this parameter to configure forwarding conditions.
        shared_ptr<RuleConditions::HostConfig> hostConfig_ {};
        // The path configuration.
        // 
        // >  We recommend that you use **RuleConditionType** and **RuleConditionValue** rather than this parameter to configure forwarding conditions.
        shared_ptr<RuleConditions::PathConfig> pathConfig_ {};
        // The type of the forwarding condition. Valid values:
        // 
        // *   **Host**: Requests are forwarded based on domain names.
        // *   **Path**: Requests are forwarded based on paths.
        // *   **RequestHeader**: Requests are forwarded based on HTTP headers.
        // *   **Query**: Requests are forwarded based on query strings.
        // *   **Method**: Requests are forwarded based on HTTP request methods.
        // *   **Cookie**: Requests are forwarded based on cookies.
        // *   **SourceIp**: Requests are forwarded based on source IP addresses.
        // 
        // This parameter is required.
        shared_ptr<string> ruleConditionType_ {};
        // The value of the forwarding condition. You must specify different JSON strings based on **RuleConditionType**.
        // 
        // *   If **RuleConditionType** is set to **Host**, RuleConditionValue specifies a domain name condition. A forwarding rule can contain only one forwarding condition of the host type. You can specify multiple domain names in a forwarding condition. The relationship between multiple domain names is OR. The domain name must be 3 to 128 characters in length, and can contain letters, digits, hyphens (-), and periods (.). You can use asterisks (\\*) and question marks (?) as wildcard characters. Example: `["www.example.com", "www.aliyun.com"]`.
        // 
        // *   If **RuleConditionType** is set to **Path**, RuleConditionValue specifies a path condition. A forwarding rule can contain multiple forwarding conditions of the path type. The relationship between multiple path conditions is OR. You can specify multiple paths in a forwarding condition. The relationship between multiple paths is OR. The path must be 1 to 128 characters in length, and must start with a forward slash (/). The path can contain letters, digits, and the following special characters: $ - _ . + / & ~ @ : \\". Supported wildcard characters are asterisks (\\*) and question marks (?). Example: `["/a", "/b/"]`.
        // 
        // *   If **RuleConditionType** is set to **RequestHeader**, RuleConditionValue specifies an HTTP header condition. An HTTP header consists of a key and a value. The header values in a forwarding condition must be unique. Example: `[{"header1":["value1","value2"]}]`.
        // 
        //     *   Key: The key of an HTTP header must be 1 to 40 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
        //     *   Value: The value of an HTTP header must be 1 to 128 characters in length and can contain printable characters whose ASCII values `are larger than or equal to 32 and smaller than 127`. The value cannot start or end with a space.
        // 
        // *   If **RuleConditionType** is set to **Query**, RuleConditionValue specifies a query string condition. A query string consists of a key and a value. Example: `[{"query1":["value1"]}, {"query2":["value2"]}]`.
        // 
        //     *   Key: The key must be 1 to 100 characters in length and can contain printable characters whose ASCII values `are larger than or equal to 32 and smaller than 127`, excluding uppercase letters, spaces, and the following special characters: `[ ] { } < > \\ ; / ? : @ & = + , $ % " ^ ~`.
        //     *   Value: The value must be 1 to 128 characters in length and can contain printable characters whose ASCII values `are larger than or equal to 32 and smaller than 127`, excluding uppercase letters, spaces, and the following special characters: `[ ] { } < > \\ ; / ? : @ & = + , $ % " ^ ~`.
        // 
        // *   If **RuleConditionType** is set to **Method**, RuleConditionValue specifies an HTTP method condition. Valid values: **HEAD**, **GET**, **POST**, **OPTIONS**, **PUT**, **PATCH**, and **DELETE**. Example: `["GET", "OPTIONS", "POST"]`.
        // 
        // *   If **RuleConditionType** is set to **Cookie**, RuleConditionValue specifies a cookie condition. A cookie consists of a key and a value. Example: `[{"cookie1":["value1"]}, {"cookie2":["value2"]}]`.
        // 
        //     *   Key: The key of a cookie must be 1 to 100 characters in length and can contain printable characters whose ASCII values `are larger than or equal to 32 and smaller than 127`, excluding uppercase letters, spaces, and the following special characters: `# [ ] { } \\ < > &`.
        //     *   Value: The value of a cookie must be 1 to 128 characters in length and can contain printable characters whose ASCII values `are larger than or equal to 32 and smaller than 127`, excluding uppercase letters, spaces, and the following special characters: `# [ ] { } \\ < > &`.
        // 
        // *   If **RuleConditionType** is set to **SourceIP**, RuleConditionValue specifies a source IP address condition. IP addresses, such as 1.1.XX.XX/32, and CIDR blocks, such as 2.2.XX.XX/24, are supported. A forwarding rule can contain only one forwarding condition of the SourceIP type. You can specify multiple source IP addresses or CIDR blocks in a forwarding condition. The relationship between multiple IP addresses or CIDR blocks is OR. Example: `["1.1.XX.XX/32", "2.2.XX.XX/24"]`.
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
            // The ID of the endpoint group.
            // 
            // >  We recommend that you use **RuleActionType** and **RuleActionValue** rather than this parameter to configure forwarding actions.
            // 
            // This parameter is required.
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
          // The configuration of an endpoint group.
          // 
          // >  We recommend that you use **RuleActionType** and **RuleActionValue** rather than this parameter to configure forwarding actions.
          // 
          // This parameter is required.
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
        // The forwarding configuration.
        // 
        // >  We recommend that you use **RuleActionType** and **RuleActionValue** rather than this parameter to configure forwarding actions.
        shared_ptr<RuleActions::ForwardGroupConfig> forwardGroupConfig_ {};
        // The forwarding priority.
        // 
        // >  This parameter does not take effect. Ignore this parameter.
        // 
        // This parameter is required.
        shared_ptr<int32_t> order_ {};
        // The type of the forwarding action. Valid values:
        // 
        // *   **ForwardGroup**: forwards a request.
        // *   **Redirect**: redirects a request.
        // *   **FixResponse**: returns a fixed response.
        // *   **Rewrite**: rewrites a request.
        // *   **AddHeader**: adds a header to a request.
        // *   **RemoveHeaderConfig**: deletes the header of a request.
        // *   **Drop**: drops a request.
        // 
        // This parameter is required.
        shared_ptr<string> ruleActionType_ {};
        // The value of the forwarding action.
        // 
        // You must specify different JSON strings based on **RuleActionType**.
        // 
        // A forwarding rule can contain only one forwarding action whose type is **ForwardGroup**, **Redirect**, or **FixResponse**. You must specify a forwarding action whose type is **Rewrite**, **AddHeader**, or **RemoveHeader** before a forwarding action whose type is **ForwardGroup**.
        // 
        // *   If **RuleActionType** is set to **ForwardGroup**, this parameter specifies the information of a virtual endpoint group. You can forward requests to only one virtual endpoint group. Example: `{"type":"endpointgroup", "value":"epg-bp1enpdcrqhl78g6r****"}`.
        // 
        //     *   `type`: Set this parameter to `endpointgroup`.
        //     *   `value`: Set this parameter to the ID of a virtual endpoint group.
        // 
        // *   If **RuleActionType** is set to **Redirect**, this parameter specifies redirecting configurations. You cannot leave the following parameters empty or use the default values for the following parameters for a forwarding action whose type is **Redirect**: `protocol`, `domain`, `port`, `path`, and `query`. Example: `{"protocol":"HTTP", "domain":"www.example.com", "port":"80", "path":"/a","query":"value1", "code":"301" }`.
        // 
        //     *   `protocol`: the protocol of requests after the requests are redirected. Valid values: `${protocol}` (default), `HTTP`, and `HTTPS`.
        //     *   `domain`: the domain name to which requests are redirected. Default value: `${host}`. You can also enter a domain name. The domain name must be 3 to 128 characters in length, and can contain only letters, digits, and the following special characters: `. - ? = ~ _ - + / ^ * ! $ & | ( ) [ ]`.
        //     *   `port`: the port to which requests are redirected. Default value: `${port}`. You can enter a port number from 1 to 63335.
        //     *   `path`: the path to which requests are redirected. Default value: `${path}`. The path must be 1 to 128 characters in length. To use a regular expression, the path can contain letters, digits, and the following special characters: `. - _ / = ? ~ ^ * $ : ( ) [ ] + |`. The path must start with a tilde (~). If you do not want to use a regular expression, the path can contain letters, digits, and the following special characters: `. - _ / = ? :`. The path must start with a forward slash (/).
        //     *   `query`: the query string of the requests that are redirected. Default value: `${query}`. You can also specify a query string. The query string must be 1 to 128 characters in length, and can contain printable characters whose ASCII values are `greater than or equal to 32 and smaller than 127`. The query string cannot contain uppercase letters, space characters, or the following special characters: `[ ] { } < > # | &`.
        //     *   `code`: the redirect code. Valid values: `301`, `302`, `303`, `307`, and `308`.
        // 
        // *   If **RuleActionType** is set to **FixResponse**, this parameter specifies a fixed response. Example: `{"code":"200", "type":"text/plain", "content":"dssacav" }`.
        // 
        //     *   `code`: the HTTP response status code. The response status code must be one of the following numeric strings: `2xx`, `4xx`, and `5xx`. The letter `x` indicates a number from 0 to 9.
        //     *   `type`: the type of the response content. Valid values: **text/plain**, **text/css**, **text/html**, **application/javascript**, and **application/json**.
        //     *   `content`: the response content. The response content cannot exceed 1,000 characters in length, and does not support Chinese characters.
        // 
        // *   If **RuleActionType** is set to **AddHeader**, this parameter specifies an HTTP header to be added. If a forwarding rule contains a forwarding action whose type is **AddHeader**, you must specify another forwarding action whose type is **ForwardGroup**. Example: `[{"name":"header1","type":"userdefined", "value":"value"}]`.
        // 
        //     *   `name`: the name of the HTTP header. The name must be 1 to 40 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). The name of the HTTP header specified by **AddHeader** must be unique and cannot be the same as the name of the HTTP header specified by **RemoveHeader**.
        //     *   `type`: the content type of the HTTP header. Valid values: `user-defined`, `ref`, and `system-defined`.
        //     *   `value`: the content of the HTTP header. You cannot leave this parameter empty. If you set `type` to `user-defined`, the content must be 1 to 128 characters in length, and can contain printable characters whose ASCII values are `greater than or equal to 32 and smaller than 127`. The content can contain letters, digits, hyphens (-), and underscores (_*). The content cannot start or end with a space character. If you set `type` to `ref`, the content must be 1 to 128 characters in length, and can contain letters, digits, hyphens (-), and underscores (_*). The content cannot start or end with a space character. If you set `type` to `system-defined`, only `ClientSrcIp` is supported.
        // 
        // *   If **RuleActionType** is set to **RemoveHeader**, this parameter specifies an HTTP header to be removed. If a forwarding rule contains a forwarding action whose type is **RemoveHeader**, you must specify another forwarding action whose type is **ForwardGroup**. The header must be 1 to 40 characters in length, and can contain letters, digits, hyphens (-), and underscores (_). Example: `["header1"]`.
        // 
        // *   If **RuleActionType** is set to **Rewrite**, this parameter specifies the rewriting configuration. If a forwarding rule contains a forwarding action whose type is **Rewrite**, you must specify another forwarding action whose type is **ForwardGroup**. Example: `{"domain":"value1", "path":"value2", "query":"value3"}`.
        // 
        //     *   `domain`: the domain name to which requests are redirected. Default value: `${host}`. You can also enter a domain name. The domain name must be 3 to 128 characters in length, and can contain only lowercase letters, digits, and the following special characters: `. - ? = ~ _ - + / ^ * ! $ & | ( ) [ ]`.
        //     *   `path`: the path to which requests are redirected. Default value: `${path}`. The path must be 1 to 128 characters in length. To use a regular expression, the path can contain letters, digits, and the following special characters: `. - _ / = ? ~ ^ * $ : ( ) [ ] + |`. The path must start with a tilde (~). If you do not want to use a regular expression, the path can contain letters, digits, and the following special characters: `. - _ / = ? :`. The path must start with a forward slash (/).
        //     *   `query`: the query string of the requests that are redirected. Default value: `${query}`. You can also specify a query string. The query string must be 1 to 128 characters in length, and can contain printable characters whose ASCII values are `greater than or equal to 32 and smaller than 127`. The query string cannot contain uppercase letters, space characters, or the following special characters: `[ ] { } < > # | &`.
        // 
        // *   If **RuleActionType** is set to **Drop**, you do not need to specify this parameter.
        shared_ptr<string> ruleActionValue_ {};
      };

      virtual bool empty() const override { return this->forwardingRuleId_ == nullptr
        && this->forwardingRuleName_ == nullptr && this->priority_ == nullptr && this->ruleActions_ == nullptr && this->ruleConditions_ == nullptr && this->ruleDirection_ == nullptr; };
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


      // ruleDirection Field Functions 
      bool hasRuleDirection() const { return this->ruleDirection_ != nullptr;};
      void deleteRuleDirection() { this->ruleDirection_ = nullptr;};
      inline string getRuleDirection() const { DARABONBA_PTR_GET_DEFAULT(ruleDirection_, "") };
      inline ForwardingRules& setRuleDirection(string ruleDirection) { DARABONBA_PTR_SET_VALUE(ruleDirection_, ruleDirection) };


    protected:
      // The forwarding rule ID.
      // 
      // This parameter is required.
      shared_ptr<string> forwardingRuleId_ {};
      // The forwarding rule name.
      // 
      // The name must be 2 to 128 characters in length, and can contain letters, digits, periods (.), underscores (_), and hyphens (-). The name must start with a letter.
      shared_ptr<string> forwardingRuleName_ {};
      // The priority of the forwarding rule. Valid values: **1** to **10000**. A smaller value specifies a higher priority.
      // 
      // This parameter is required.
      shared_ptr<int32_t> priority_ {};
      // The configurations of the forwarding actions.
      // 
      // This parameter is required.
      shared_ptr<vector<ForwardingRules::RuleActions>> ruleActions_ {};
      // The conditions that trigger the forwarding rule.
      // 
      // This parameter is required.
      shared_ptr<vector<ForwardingRules::RuleConditions>> ruleConditions_ {};
      // The direction in which the rule takes effect. You do not need to specify this parameter.
      // 
      // By default, this parameter is set to **request**, which specifies that the rule takes effect on requests.
      shared_ptr<string> ruleDirection_ {};
    };

    virtual bool empty() const override { return this->acceleratorId_ == nullptr
        && this->clientToken_ == nullptr && this->forwardingRules_ == nullptr && this->listenerId_ == nullptr && this->regionId_ == nullptr; };
    // acceleratorId Field Functions 
    bool hasAcceleratorId() const { return this->acceleratorId_ != nullptr;};
    void deleteAcceleratorId() { this->acceleratorId_ = nullptr;};
    inline string getAcceleratorId() const { DARABONBA_PTR_GET_DEFAULT(acceleratorId_, "") };
    inline UpdateForwardingRulesRequest& setAcceleratorId(string acceleratorId) { DARABONBA_PTR_SET_VALUE(acceleratorId_, acceleratorId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateForwardingRulesRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // forwardingRules Field Functions 
    bool hasForwardingRules() const { return this->forwardingRules_ != nullptr;};
    void deleteForwardingRules() { this->forwardingRules_ = nullptr;};
    inline const vector<UpdateForwardingRulesRequest::ForwardingRules> & getForwardingRules() const { DARABONBA_PTR_GET_CONST(forwardingRules_, vector<UpdateForwardingRulesRequest::ForwardingRules>) };
    inline vector<UpdateForwardingRulesRequest::ForwardingRules> getForwardingRules() { DARABONBA_PTR_GET(forwardingRules_, vector<UpdateForwardingRulesRequest::ForwardingRules>) };
    inline UpdateForwardingRulesRequest& setForwardingRules(const vector<UpdateForwardingRulesRequest::ForwardingRules> & forwardingRules) { DARABONBA_PTR_SET_VALUE(forwardingRules_, forwardingRules) };
    inline UpdateForwardingRulesRequest& setForwardingRules(vector<UpdateForwardingRulesRequest::ForwardingRules> && forwardingRules) { DARABONBA_PTR_SET_RVALUE(forwardingRules_, forwardingRules) };


    // listenerId Field Functions 
    bool hasListenerId() const { return this->listenerId_ != nullptr;};
    void deleteListenerId() { this->listenerId_ = nullptr;};
    inline string getListenerId() const { DARABONBA_PTR_GET_DEFAULT(listenerId_, "") };
    inline UpdateForwardingRulesRequest& setListenerId(string listenerId) { DARABONBA_PTR_SET_VALUE(listenerId_, listenerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateForwardingRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The GA instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // The configurations of the forwarding rules.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateForwardingRulesRequest::ForwardingRules>> forwardingRules_ {};
    // The listener ID.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The region ID of the GA instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
