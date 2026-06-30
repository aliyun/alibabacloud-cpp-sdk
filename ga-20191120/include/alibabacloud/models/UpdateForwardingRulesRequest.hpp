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
          // > This parameter is deprecated. We recommend that you use the **RuleConditionType** and **RuleConditionValue** parameters.
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
          // The domain configuration.
          // 
          // > This parameter is deprecated. We recommend that you use the **RuleConditionType** and **RuleConditionValue** parameters.
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
        // The domain configuration.
        // 
        // > This parameter is deprecated. We recommend that you use the **RuleConditionType** and **RuleConditionValue** parameters.
        shared_ptr<RuleConditions::HostConfig> hostConfig_ {};
        // The path configuration.
        // 
        // > This parameter is deprecated. We recommend that you use the **RuleConditionType** and **RuleConditionValue** parameters.
        shared_ptr<RuleConditions::PathConfig> pathConfig_ {};
        // The type of the forwarding condition. Valid values:
        // 
        // - **Host**: matches a request based on its domain name.
        // 
        // - **Path**: matches a request based on its path.
        // 
        // - **RequestHeader**: matches a request based on its HTTP header.
        // 
        // - **Query**: matches a request based on its query string.
        // 
        // - **Method**: matches a request based on its HTTP request method.
        // 
        // - **Cookie**: matches a request based on its cookie.
        // 
        // - **SourceIP**: matches a request based on its source IP address.
        // 
        // This parameter is required.
        shared_ptr<string> ruleConditionType_ {};
        // The value of the forwarding condition.
        // The value is a JSON string that varies based on the value of **RuleConditionType**.
        // 
        // - If **RuleConditionType** is set to **Host**, this parameter specifies the domain configuration. A forwarding rule can contain only one Host-based rule condition. The condition can contain multiple domains that are evaluated with a logical OR. A domain must be 3 to 128 characters in length and can contain letters, digits, hyphens (-), and periods (.). You can use asterisks (\\*) and question marks (?) as wildcards. Example: `["www.example.com", "www.aliyun.com"]`.
        // 
        // - If **RuleConditionType** is set to **Path**, this parameter specifies the path configuration. A forwarding rule can contain multiple path-based rule conditions, which are evaluated with a logical OR. Each condition can contain multiple paths, which are also evaluated with a logical OR. A path must be 1 to 128 characters in length, start with a forward slash (/), and contain only letters, digits, and the following special characters: `$`, `-`, `_`, `.`, `+`, `/`, `&`, `~`, `@`, `:`, and `\\"`. You can use asterisks (\\*) and question marks (?) as wildcards. Example: `["/a", "/b/"]`.
        // 
        // - If **RuleConditionType** is set to **RequestHeader**, this parameter specifies the HTTP header configuration, which consists of key-value pairs. The values for a specific header must be unique. Example: `[{"header1":["value1","value2"]}]`.
        // 
        //   - Key: The key of the HTTP header. The key must be 1 to 40 characters in length and can contain letters, digits, hyphens (-), and underscores (_).
        // 
        //   - Value: The value of the HTTP header. The value must be 1 to 128 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The value cannot start or end with a space.
        // 
        // - If **RuleConditionType** is set to **Query**, this parameter specifies the query string configuration, which consists of key-value pairs. Example: `[{"query1":["value1"]}, {"query2":["value2"]}]`.
        // 
        //   - Key: The key of the query string. The key must be 1 to 100 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The letters must be in lowercase. Spaces and the following characters are not allowed: `[]{}<>\\;/?:@&=+,$%|"^~`.
        // 
        //   - Value: The value of the query string. The value must be 1 to 128 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The letters must be in lowercase. Spaces and the following characters are not allowed: `[]{}<>\\;/?:@&=+,$%|"^~`.
        // 
        // - If **RuleConditionType** is set to **Method**, this parameter specifies the HTTP request method configuration. Valid values: **HEAD**, **GET**, **POST**, **OPTIONS**, **PUT**, **PATCH**, and **DELETE**. Example: `["GET", "OPTIONS", "POST"]`.
        // 
        // - If **RuleConditionType** is set to **Cookie**, this parameter specifies the cookie configuration, which consists of key-value pairs. Example: `[{"cookie1":["value1"]}, {"cookie2":["value2"]}]`
        // 
        //   - Key: The key of the cookie. The key must be 1 to 100 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The letters must be in lowercase. Spaces and the following characters are not allowed: `#[]{}\\|<>&`.
        // 
        //   - Value: The value of the cookie. The value must be 1 to 128 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The letters must be in lowercase. Spaces and the following characters are not allowed: `#[]{}\\|<>&`.
        // 
        // - If **RuleConditionType** is set to **SourceIP**, this parameter specifies the source IP configuration. You can specify IP addresses such as 1.1.XX.XX/32 or CIDR blocks such as 2.2.XX.XX/24. A forwarding rule can contain only one source IP-based rule condition, which can contain multiple source IP addresses or CIDR blocks that are evaluated with a logical OR. Example: `["1.1.XX.XX/32", "2.2.XX.XX/24"]`.
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
            // > This parameter is deprecated. We recommend that you use the **RuleActionType** and **RuleActionValue** parameters.
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
          // The endpoint group configuration.
          // 
          // > This parameter is deprecated. We recommend that you use the **RuleActionType** and **RuleActionValue** parameters.
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
        // > This parameter is deprecated. We recommend that you use the **RuleActionType** and **RuleActionValue** parameters.
        shared_ptr<RuleActions::ForwardGroupConfig> forwardGroupConfig_ {};
        // The priority of the action.
        // 
        // > This parameter is not in use. You do not need to specify this parameter.
        // 
        // This parameter is required.
        shared_ptr<int32_t> order_ {};
        // The type of the action. Valid values:
        // 
        // - **ForwardGroup**: forwards a request to an endpoint group.
        // 
        // - **Redirect**: redirects a request.
        // 
        // - **FixResponse**: returns a fixed response.
        // 
        // - **Rewrite**: rewrites a request.
        // 
        // - **AddHeader**: adds a header to a request.
        // 
        // - **RemoveHeader**: removes a header from a request.
        // 
        // - **Drop**: drops a request.
        // 
        // This parameter is required.
        shared_ptr<string> ruleActionType_ {};
        // The value of the action.
        // 
        // The value is a JSON string that varies based on the value of **RuleActionType**.
        // 
        // A forwarding rule can have at most one action of the **ForwardGroup**, **Redirect**, or **FixResponse** type. The `Rewrite`, `AddHeader`, and `RemoveHeader` actions must precede a `ForwardGroup` action.
        // 
        // - If **RuleActionType** is set to **ForwardGroup**, this parameter specifies the endpoint group configuration. You can forward requests to only one endpoint group. Example: `{"type":"endpointgroup", "value":"epg-bp1enpdcrqhl78g6r****"}`, where:
        // 
        //   - `type`: Set the value to `endpointgroup`.
        // 
        //   - `value`: The ID of the destination endpoint group.
        // 
        // - If **RuleActionType** is set to **Redirect**, this parameter specifies the redirect configuration. In a **Redirect** action, at least one of the following fields must be specified with a non-default value: `protocol`, `domain`, `port`, `path`, or `query`. Example: `{"protocol":"HTTP", "domain":"www.example.com", "port":"80", "path":"/a","query":"value1", "code":"301" }`, where:
        // 
        //   - `protocol`: The protocol to which requests are redirected. Valid values: `${protocol}` (default), `HTTP`, and `HTTPS`.
        // 
        //   - `domain`: The domain to which requests are redirected. The default value is `${host}`. You can also specify another domain. The domain must be 3 to 128 characters in length and can contain only lowercase letters, digits, and the following special characters: `.-?=~_-+/^*!$&|()[]`.
        // 
        //   - `port`: The port to which requests are redirected. The default value is `${port}`. You can also specify another port. Valid values: 1 to 63335.
        // 
        //   - `path`: The path to which requests are redirected. The default value is `${path}`. The path must be 1 to 128 characters in length. A regular expression-based path must start with a tilde (\\~) and can contain letters, digits, and the following special characters: `.-_/=?~^*$:()[]+|`. A path that is not a regular expression must start with a forward slash (/) and can contain letters, digits, and the following special characters: `.-_/=?:`.
        // 
        //   - `query`: The query string to which requests are redirected. The default value is `${query}`. You can also specify another query string. The query string must be 1 to 128 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The letters must be in lowercase. Spaces and the following characters are not allowed: `[]{}<>\\#|&`.
        // 
        //   - `code`: The redirect type. Valid values: `301`, `302`, `303`, `307`, and `308`.
        // 
        // - If **RuleActionType** is set to **FixResponse**, this parameter specifies the fixed response configuration. Example: `{"code":"200", "type":"text/plain", "content":"dssacav" }`, where:
        // 
        //   - `code`: The HTTP status code. You can specify a numeric string that represents a `2xx`, `4xx`, or `5xx` status code, where `x` indicates a digit.
        // 
        //   - `type`: The content type of the response body. Valid values: **text/plain**, **text/css**, **text/html**, **application/javascript**, and **application/json**.
        // 
        //   - `content`: The content of the response body. The content can be up to 1,024 characters in length and cannot contain Chinese characters.
        // 
        // - If **RuleActionType** is set to **AddHeader**, this parameter specifies the configuration for adding an HTTP header. An **AddHeader** action must be used together with a **ForwardGroup** action. Example: `[{"name":"header1","type":"user-defined", "value":"value"}]`, where:
        // 
        //   - `name`: The name of the HTTP header. The name must be 1 to 40 characters in length and can contain letters, digits, hyphens (-), and underscores (_). The header names specified for **AddHeader** must be unique and cannot be the same as those specified for **RemoveHeader**.
        // 
        //   - `type`: The content type of the HTTP header. Valid values: `user-defined`, `ref` (reference), and `system-defined`.
        // 
        //   - `value`: The content of the HTTP header. This parameter cannot be left empty. If `type` is set to `user-defined`, the content must be 1 to 128 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The content can include letters, digits, hyphens (-), and underscores (_). The content cannot start or end with a space. If `type` is set to `ref` (reference), the content must be 1 to 128 characters in length and can contain letters, digits, hyphens (-), and underscores (_). The content cannot start or end with a space. If `type` is set to `system-defined`, the only valid value is `ClientSrcIp`.
        // 
        // - If **RuleActionType** is set to **RemoveHeader**, this parameter specifies the configuration for removing an HTTP header. A **RemoveHeader** action must be used together with a **ForwardGroup** action. The header name must be 1 to 40 characters in length and can contain letters, digits, hyphens (-), and underscores (_). Example: `["header1"]`.
        // 
        // - If **RuleActionType** is set to **Rewrite**, this parameter specifies the rewrite configuration. A **Rewrite** action must be used together with a **ForwardGroup** action. Example: `{"domain":"value1", "path":"value2", "query":"value3"}`, where:
        // 
        //   - `domain`: The domain to which requests are rewritten. The default value is `${host}`. You can also specify another domain. The domain must be 3 to 128 characters in length and can contain only lowercase letters, digits, and the following special characters: `.-?=~_-+/^*!$&|()[]`.
        // 
        //   - `path`: The path to which requests are rewritten. The default value is `${path}`. The path must be 1 to 128 characters in length. A regular expression-based path must start with a tilde (\\~) and can contain letters, digits, and the following special characters: `.-_/=?~^*$:()[]+|`. A path that is not a regular expression must start with a forward slash (/) and can contain letters, digits, and the following special characters: `.-_/=?:`.
        // 
        //   - `query`: The query string to which requests are rewritten. The default value is `${query}`. You can also specify another query string. The query string must be 1 to 128 characters in length and can contain printable ASCII characters whose character codes are in the range of `ch >= 32 && ch < 127`. The letters must be in lowercase. Spaces and the following characters are not allowed: `[]{}<>\\#|&`.
        // 
        // - If **RuleActionType** is set to **Drop**, you do not need to specify this parameter.
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
      // The ID of the forwarding rule.
      // 
      // This parameter is required.
      shared_ptr<string> forwardingRuleId_ {};
      // The name of the forwarding rule.
      // 
      // The name must be 2 to 128 characters in length, start with a letter or a Chinese character, and can contain digits, periods (.), underscores (_), and hyphens (-).
      shared_ptr<string> forwardingRuleName_ {};
      // The priority of the forwarding rule. A smaller value indicates a higher priority. Valid values: **1** to **10000**.
      // 
      // This parameter is required.
      shared_ptr<int32_t> priority_ {};
      // The actions that are performed when the forwarding conditions are met.
      // 
      // This parameter is required.
      shared_ptr<vector<ForwardingRules::RuleActions>> ruleActions_ {};
      // The forwarding conditions.
      // 
      // This parameter is required.
      shared_ptr<vector<ForwardingRules::RuleConditions>> ruleConditions_ {};
      // The direction of the rule. You do not need to specify this parameter.
      // 
      // This parameter is set to **request** by default, which indicates that the rule applies to inbound requests.
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
    // The ID of the Global Accelerator instance.
    // 
    // This parameter is required.
    shared_ptr<string> acceleratorId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // > If you do not specify this parameter, the system automatically uses the **RequestId** of the request as the **client token**. The **RequestId** of each request is different.
    shared_ptr<string> clientToken_ {};
    // The configurations of the forwarding rules.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateForwardingRulesRequest::ForwardingRules>> forwardingRules_ {};
    // The ID of the listener.
    // 
    // This parameter is required.
    shared_ptr<string> listenerId_ {};
    // The region ID of the Global Accelerator instance. Set the value to **cn-hangzhou**.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ga20191120
#endif
