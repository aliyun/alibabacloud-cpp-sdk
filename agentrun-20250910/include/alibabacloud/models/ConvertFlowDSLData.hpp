// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTFLOWDSLDATA_HPP_
#define ALIBABACLOUD_MODELS_CONVERTFLOWDSLDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/EnvironmentConfiguration.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ConvertFlowDSLData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertFlowDSLData& obj) { 
      DARABONBA_PTR_TO_JSON(conversionPlan, conversionPlan_);
      DARABONBA_PTR_TO_JSON(flow, flow_);
      DARABONBA_PTR_TO_JSON(pluginErrors, pluginErrors_);
      DARABONBA_PTR_TO_JSON(toolsetInstallations, toolsetInstallations_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertFlowDSLData& obj) { 
      DARABONBA_PTR_FROM_JSON(conversionPlan, conversionPlan_);
      DARABONBA_PTR_FROM_JSON(flow, flow_);
      DARABONBA_PTR_FROM_JSON(pluginErrors, pluginErrors_);
      DARABONBA_PTR_FROM_JSON(toolsetInstallations, toolsetInstallations_);
    };
    ConvertFlowDSLData() = default ;
    ConvertFlowDSLData(const ConvertFlowDSLData &) = default ;
    ConvertFlowDSLData(ConvertFlowDSLData &&) = default ;
    ConvertFlowDSLData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertFlowDSLData() = default ;
    ConvertFlowDSLData& operator=(const ConvertFlowDSLData &) = default ;
    ConvertFlowDSLData& operator=(ConvertFlowDSLData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToolsetInstallations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolsetInstallations& obj) { 
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_ANY_TO_JSON(spec, spec_);
      };
      friend void from_json(const Darabonba::Json& j, ToolsetInstallations& obj) { 
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_ANY_FROM_JSON(spec, spec_);
      };
      ToolsetInstallations() = default ;
      ToolsetInstallations(const ToolsetInstallations &) = default ;
      ToolsetInstallations(ToolsetInstallations &&) = default ;
      ToolsetInstallations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolsetInstallations() = default ;
      ToolsetInstallations& operator=(const ToolsetInstallations &) = default ;
      ToolsetInstallations& operator=(ToolsetInstallations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->name_ == nullptr && this->spec_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ToolsetInstallations& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ToolsetInstallations& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // spec Field Functions 
      bool hasSpec() const { return this->spec_ != nullptr;};
      void deleteSpec() { this->spec_ = nullptr;};
      inline       const Darabonba::Json & getSpec() const { DARABONBA_GET(spec_) };
      Darabonba::Json & getSpec() { DARABONBA_GET(spec_) };
      inline ToolsetInstallations& setSpec(const Darabonba::Json & spec) { DARABONBA_SET_VALUE(spec_, spec) };
      inline ToolsetInstallations& setSpec(Darabonba::Json && spec) { DARABONBA_SET_RVALUE(spec_, spec) };


    protected:
      // Toolset描述
      shared_ptr<string> description_ {};
      // Toolset名称
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // Toolset规格配置（JSON对象）
      // 
      // This parameter is required.
      Darabonba::Json spec_ {};
    };

    class PluginErrors : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PluginErrors& obj) { 
        DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(providerName, providerName_);
        DARABONBA_PTR_TO_JSON(reason, reason_);
        DARABONBA_PTR_TO_JSON(toolName, toolName_);
      };
      friend void from_json(const Darabonba::Json& j, PluginErrors& obj) { 
        DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(providerName, providerName_);
        DARABONBA_PTR_FROM_JSON(reason, reason_);
        DARABONBA_PTR_FROM_JSON(toolName, toolName_);
      };
      PluginErrors() = default ;
      PluginErrors(const PluginErrors &) = default ;
      PluginErrors(PluginErrors &&) = default ;
      PluginErrors(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PluginErrors() = default ;
      PluginErrors& operator=(const PluginErrors &) = default ;
      PluginErrors& operator=(PluginErrors &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->nodeId_ == nullptr
        && this->providerName_ == nullptr && this->reason_ == nullptr && this->toolName_ == nullptr; };
      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline PluginErrors& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline PluginErrors& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
      inline PluginErrors& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


      // toolName Field Functions 
      bool hasToolName() const { return this->toolName_ != nullptr;};
      void deleteToolName() { this->toolName_ = nullptr;};
      inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
      inline PluginErrors& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    protected:
      // 相关节点的标识符
      shared_ptr<string> nodeId_ {};
      // 插件提供商名称
      // 
      // This parameter is required.
      shared_ptr<string> providerName_ {};
      // 错误原因描述
      // 
      // This parameter is required.
      shared_ptr<string> reason_ {};
      // 工具名称
      shared_ptr<string> toolName_ {};
    };

    class Flow : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Flow& obj) { 
        DARABONBA_PTR_TO_JSON(definition, definition_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(environmentConfiguration, environmentConfiguration_);
        DARABONBA_PTR_TO_JSON(flowName, flowName_);
      };
      friend void from_json(const Darabonba::Json& j, Flow& obj) { 
        DARABONBA_PTR_FROM_JSON(definition, definition_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(environmentConfiguration, environmentConfiguration_);
        DARABONBA_PTR_FROM_JSON(flowName, flowName_);
      };
      Flow() = default ;
      Flow(const Flow &) = default ;
      Flow(Flow &&) = default ;
      Flow(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Flow() = default ;
      Flow& operator=(const Flow &) = default ;
      Flow& operator=(Flow &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->definition_ == nullptr
        && this->description_ == nullptr && this->environmentConfiguration_ == nullptr && this->flowName_ == nullptr; };
      // definition Field Functions 
      bool hasDefinition() const { return this->definition_ != nullptr;};
      void deleteDefinition() { this->definition_ = nullptr;};
      inline string getDefinition() const { DARABONBA_PTR_GET_DEFAULT(definition_, "") };
      inline Flow& setDefinition(string definition) { DARABONBA_PTR_SET_VALUE(definition_, definition) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Flow& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // environmentConfiguration Field Functions 
      bool hasEnvironmentConfiguration() const { return this->environmentConfiguration_ != nullptr;};
      void deleteEnvironmentConfiguration() { this->environmentConfiguration_ = nullptr;};
      inline const EnvironmentConfiguration & getEnvironmentConfiguration() const { DARABONBA_PTR_GET_CONST(environmentConfiguration_, EnvironmentConfiguration) };
      inline EnvironmentConfiguration getEnvironmentConfiguration() { DARABONBA_PTR_GET(environmentConfiguration_, EnvironmentConfiguration) };
      inline Flow& setEnvironmentConfiguration(const EnvironmentConfiguration & environmentConfiguration) { DARABONBA_PTR_SET_VALUE(environmentConfiguration_, environmentConfiguration) };
      inline Flow& setEnvironmentConfiguration(EnvironmentConfiguration && environmentConfiguration) { DARABONBA_PTR_SET_RVALUE(environmentConfiguration_, environmentConfiguration) };


      // flowName Field Functions 
      bool hasFlowName() const { return this->flowName_ != nullptr;};
      void deleteFlowName() { this->flowName_ = nullptr;};
      inline string getFlowName() const { DARABONBA_PTR_GET_DEFAULT(flowName_, "") };
      inline Flow& setFlowName(string flowName) { DARABONBA_PTR_SET_VALUE(flowName_, flowName) };


    protected:
      // 工作流的FnF State Machine定义（YAML格式）
      // 
      // This parameter is required.
      shared_ptr<string> definition_ {};
      // 工作流的描述信息
      shared_ptr<string> description_ {};
      // 工作流的环境变量配置
      shared_ptr<EnvironmentConfiguration> environmentConfiguration_ {};
      // 转换后的工作流名称
      // 
      // This parameter is required.
      shared_ptr<string> flowName_ {};
    };

    class ConversionPlan : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConversionPlan& obj) { 
        DARABONBA_PTR_TO_JSON(issues, issues_);
        DARABONBA_PTR_TO_JSON(summary, summary_);
      };
      friend void from_json(const Darabonba::Json& j, ConversionPlan& obj) { 
        DARABONBA_PTR_FROM_JSON(issues, issues_);
        DARABONBA_PTR_FROM_JSON(summary, summary_);
      };
      ConversionPlan() = default ;
      ConversionPlan(const ConversionPlan &) = default ;
      ConversionPlan(ConversionPlan &&) = default ;
      ConversionPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConversionPlan() = default ;
      ConversionPlan& operator=(const ConversionPlan &) = default ;
      ConversionPlan& operator=(ConversionPlan &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Summary : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Summary& obj) { 
          DARABONBA_PTR_TO_JSON(compatibleNodes, compatibleNodes_);
          DARABONBA_PTR_TO_JSON(nodesNeedConfig, nodesNeedConfig_);
          DARABONBA_PTR_TO_JSON(nodesNeedConversion, nodesNeedConversion_);
          DARABONBA_PTR_TO_JSON(totalNodes, totalNodes_);
          DARABONBA_PTR_TO_JSON(unsupportedNodes, unsupportedNodes_);
        };
        friend void from_json(const Darabonba::Json& j, Summary& obj) { 
          DARABONBA_PTR_FROM_JSON(compatibleNodes, compatibleNodes_);
          DARABONBA_PTR_FROM_JSON(nodesNeedConfig, nodesNeedConfig_);
          DARABONBA_PTR_FROM_JSON(nodesNeedConversion, nodesNeedConversion_);
          DARABONBA_PTR_FROM_JSON(totalNodes, totalNodes_);
          DARABONBA_PTR_FROM_JSON(unsupportedNodes, unsupportedNodes_);
        };
        Summary() = default ;
        Summary(const Summary &) = default ;
        Summary(Summary &&) = default ;
        Summary(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Summary() = default ;
        Summary& operator=(const Summary &) = default ;
        Summary& operator=(Summary &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->compatibleNodes_ == nullptr
        && this->nodesNeedConfig_ == nullptr && this->nodesNeedConversion_ == nullptr && this->totalNodes_ == nullptr && this->unsupportedNodes_ == nullptr; };
        // compatibleNodes Field Functions 
        bool hasCompatibleNodes() const { return this->compatibleNodes_ != nullptr;};
        void deleteCompatibleNodes() { this->compatibleNodes_ = nullptr;};
        inline int32_t getCompatibleNodes() const { DARABONBA_PTR_GET_DEFAULT(compatibleNodes_, 0) };
        inline Summary& setCompatibleNodes(int32_t compatibleNodes) { DARABONBA_PTR_SET_VALUE(compatibleNodes_, compatibleNodes) };


        // nodesNeedConfig Field Functions 
        bool hasNodesNeedConfig() const { return this->nodesNeedConfig_ != nullptr;};
        void deleteNodesNeedConfig() { this->nodesNeedConfig_ = nullptr;};
        inline int32_t getNodesNeedConfig() const { DARABONBA_PTR_GET_DEFAULT(nodesNeedConfig_, 0) };
        inline Summary& setNodesNeedConfig(int32_t nodesNeedConfig) { DARABONBA_PTR_SET_VALUE(nodesNeedConfig_, nodesNeedConfig) };


        // nodesNeedConversion Field Functions 
        bool hasNodesNeedConversion() const { return this->nodesNeedConversion_ != nullptr;};
        void deleteNodesNeedConversion() { this->nodesNeedConversion_ = nullptr;};
        inline int32_t getNodesNeedConversion() const { DARABONBA_PTR_GET_DEFAULT(nodesNeedConversion_, 0) };
        inline Summary& setNodesNeedConversion(int32_t nodesNeedConversion) { DARABONBA_PTR_SET_VALUE(nodesNeedConversion_, nodesNeedConversion) };


        // totalNodes Field Functions 
        bool hasTotalNodes() const { return this->totalNodes_ != nullptr;};
        void deleteTotalNodes() { this->totalNodes_ = nullptr;};
        inline int32_t getTotalNodes() const { DARABONBA_PTR_GET_DEFAULT(totalNodes_, 0) };
        inline Summary& setTotalNodes(int32_t totalNodes) { DARABONBA_PTR_SET_VALUE(totalNodes_, totalNodes) };


        // unsupportedNodes Field Functions 
        bool hasUnsupportedNodes() const { return this->unsupportedNodes_ != nullptr;};
        void deleteUnsupportedNodes() { this->unsupportedNodes_ = nullptr;};
        inline int32_t getUnsupportedNodes() const { DARABONBA_PTR_GET_DEFAULT(unsupportedNodes_, 0) };
        inline Summary& setUnsupportedNodes(int32_t unsupportedNodes) { DARABONBA_PTR_SET_VALUE(unsupportedNodes_, unsupportedNodes) };


      protected:
        // 完全兼容的节点数
        // 
        // This parameter is required.
        shared_ptr<int32_t> compatibleNodes_ {};
        // 需要手动配置的节点数
        // 
        // This parameter is required.
        shared_ptr<int32_t> nodesNeedConfig_ {};
        // 需要特殊转换处理的节点数
        // 
        // This parameter is required.
        shared_ptr<int32_t> nodesNeedConversion_ {};
        // Dify DSL中的总节点数
        // 
        // This parameter is required.
        shared_ptr<int32_t> totalNodes_ {};
        // 不支持的节点数
        // 
        // This parameter is required.
        shared_ptr<int32_t> unsupportedNodes_ {};
      };

      class Issues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Issues& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_ANY_TO_JSON(details, details_);
          DARABONBA_PTR_TO_JSON(issueType, issueType_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(nodeId, nodeId_);
          DARABONBA_PTR_TO_JSON(nodeTitle, nodeTitle_);
          DARABONBA_PTR_TO_JSON(nodeType, nodeType_);
          DARABONBA_PTR_TO_JSON(suggestion, suggestion_);
        };
        friend void from_json(const Darabonba::Json& j, Issues& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_ANY_FROM_JSON(details, details_);
          DARABONBA_PTR_FROM_JSON(issueType, issueType_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(nodeId, nodeId_);
          DARABONBA_PTR_FROM_JSON(nodeTitle, nodeTitle_);
          DARABONBA_PTR_FROM_JSON(nodeType, nodeType_);
          DARABONBA_PTR_FROM_JSON(suggestion, suggestion_);
        };
        Issues() = default ;
        Issues(const Issues &) = default ;
        Issues(Issues &&) = default ;
        Issues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Issues() = default ;
        Issues& operator=(const Issues &) = default ;
        Issues& operator=(Issues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->description_ == nullptr
        && this->details_ == nullptr && this->issueType_ == nullptr && this->level_ == nullptr && this->nodeId_ == nullptr && this->nodeTitle_ == nullptr
        && this->nodeType_ == nullptr && this->suggestion_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Issues& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // details Field Functions 
        bool hasDetails() const { return this->details_ != nullptr;};
        void deleteDetails() { this->details_ = nullptr;};
        inline         const Darabonba::Json & getDetails() const { DARABONBA_GET(details_) };
        Darabonba::Json & getDetails() { DARABONBA_GET(details_) };
        inline Issues& setDetails(const Darabonba::Json & details) { DARABONBA_SET_VALUE(details_, details) };
        inline Issues& setDetails(Darabonba::Json && details) { DARABONBA_SET_RVALUE(details_, details) };


        // issueType Field Functions 
        bool hasIssueType() const { return this->issueType_ != nullptr;};
        void deleteIssueType() { this->issueType_ = nullptr;};
        inline string getIssueType() const { DARABONBA_PTR_GET_DEFAULT(issueType_, "") };
        inline Issues& setIssueType(string issueType) { DARABONBA_PTR_SET_VALUE(issueType_, issueType) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Issues& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline Issues& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // nodeTitle Field Functions 
        bool hasNodeTitle() const { return this->nodeTitle_ != nullptr;};
        void deleteNodeTitle() { this->nodeTitle_ = nullptr;};
        inline string getNodeTitle() const { DARABONBA_PTR_GET_DEFAULT(nodeTitle_, "") };
        inline Issues& setNodeTitle(string nodeTitle) { DARABONBA_PTR_SET_VALUE(nodeTitle_, nodeTitle) };


        // nodeType Field Functions 
        bool hasNodeType() const { return this->nodeType_ != nullptr;};
        void deleteNodeType() { this->nodeType_ = nullptr;};
        inline string getNodeType() const { DARABONBA_PTR_GET_DEFAULT(nodeType_, "") };
        inline Issues& setNodeType(string nodeType) { DARABONBA_PTR_SET_VALUE(nodeType_, nodeType) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline Issues& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


      protected:
        // 问题描述
        // 
        // This parameter is required.
        shared_ptr<string> description_ {};
        // 问题的详细信息（JSON对象）
        Darabonba::Json details_ {};
        // 问题类型：needs_config, needs_conversion, unsupported
        // 
        // This parameter is required.
        shared_ptr<string> issueType_ {};
        // 问题严重程度：info, warning, error
        // 
        // This parameter is required.
        shared_ptr<string> level_ {};
        // Dify DSL中的节点标识符
        // 
        // This parameter is required.
        shared_ptr<string> nodeId_ {};
        // 节点显示名称
        shared_ptr<string> nodeTitle_ {};
        // 节点类型
        // 
        // This parameter is required.
        shared_ptr<string> nodeType_ {};
        // 解决建议
        shared_ptr<string> suggestion_ {};
      };

      virtual bool empty() const override { return this->issues_ == nullptr
        && this->summary_ == nullptr; };
      // issues Field Functions 
      bool hasIssues() const { return this->issues_ != nullptr;};
      void deleteIssues() { this->issues_ = nullptr;};
      inline const vector<ConversionPlan::Issues> & getIssues() const { DARABONBA_PTR_GET_CONST(issues_, vector<ConversionPlan::Issues>) };
      inline vector<ConversionPlan::Issues> getIssues() { DARABONBA_PTR_GET(issues_, vector<ConversionPlan::Issues>) };
      inline ConversionPlan& setIssues(const vector<ConversionPlan::Issues> & issues) { DARABONBA_PTR_SET_VALUE(issues_, issues) };
      inline ConversionPlan& setIssues(vector<ConversionPlan::Issues> && issues) { DARABONBA_PTR_SET_RVALUE(issues_, issues) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline const ConversionPlan::Summary & getSummary() const { DARABONBA_PTR_GET_CONST(summary_, ConversionPlan::Summary) };
      inline ConversionPlan::Summary getSummary() { DARABONBA_PTR_GET(summary_, ConversionPlan::Summary) };
      inline ConversionPlan& setSummary(const ConversionPlan::Summary & summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };
      inline ConversionPlan& setSummary(ConversionPlan::Summary && summary) { DARABONBA_PTR_SET_RVALUE(summary_, summary) };


    protected:
      // 节点兼容性问题详情
      shared_ptr<vector<ConversionPlan::Issues>> issues_ {};
      // 节点兼容性统计摘要
      // 
      // This parameter is required.
      shared_ptr<ConversionPlan::Summary> summary_ {};
    };

    virtual bool empty() const override { return this->conversionPlan_ == nullptr
        && this->flow_ == nullptr && this->pluginErrors_ == nullptr && this->toolsetInstallations_ == nullptr; };
    // conversionPlan Field Functions 
    bool hasConversionPlan() const { return this->conversionPlan_ != nullptr;};
    void deleteConversionPlan() { this->conversionPlan_ = nullptr;};
    inline const ConvertFlowDSLData::ConversionPlan & getConversionPlan() const { DARABONBA_PTR_GET_CONST(conversionPlan_, ConvertFlowDSLData::ConversionPlan) };
    inline ConvertFlowDSLData::ConversionPlan getConversionPlan() { DARABONBA_PTR_GET(conversionPlan_, ConvertFlowDSLData::ConversionPlan) };
    inline ConvertFlowDSLData& setConversionPlan(const ConvertFlowDSLData::ConversionPlan & conversionPlan) { DARABONBA_PTR_SET_VALUE(conversionPlan_, conversionPlan) };
    inline ConvertFlowDSLData& setConversionPlan(ConvertFlowDSLData::ConversionPlan && conversionPlan) { DARABONBA_PTR_SET_RVALUE(conversionPlan_, conversionPlan) };


    // flow Field Functions 
    bool hasFlow() const { return this->flow_ != nullptr;};
    void deleteFlow() { this->flow_ = nullptr;};
    inline const ConvertFlowDSLData::Flow & getFlow() const { DARABONBA_PTR_GET_CONST(flow_, ConvertFlowDSLData::Flow) };
    inline ConvertFlowDSLData::Flow getFlow() { DARABONBA_PTR_GET(flow_, ConvertFlowDSLData::Flow) };
    inline ConvertFlowDSLData& setFlow(const ConvertFlowDSLData::Flow & flow) { DARABONBA_PTR_SET_VALUE(flow_, flow) };
    inline ConvertFlowDSLData& setFlow(ConvertFlowDSLData::Flow && flow) { DARABONBA_PTR_SET_RVALUE(flow_, flow) };


    // pluginErrors Field Functions 
    bool hasPluginErrors() const { return this->pluginErrors_ != nullptr;};
    void deletePluginErrors() { this->pluginErrors_ = nullptr;};
    inline const vector<ConvertFlowDSLData::PluginErrors> & getPluginErrors() const { DARABONBA_PTR_GET_CONST(pluginErrors_, vector<ConvertFlowDSLData::PluginErrors>) };
    inline vector<ConvertFlowDSLData::PluginErrors> getPluginErrors() { DARABONBA_PTR_GET(pluginErrors_, vector<ConvertFlowDSLData::PluginErrors>) };
    inline ConvertFlowDSLData& setPluginErrors(const vector<ConvertFlowDSLData::PluginErrors> & pluginErrors) { DARABONBA_PTR_SET_VALUE(pluginErrors_, pluginErrors) };
    inline ConvertFlowDSLData& setPluginErrors(vector<ConvertFlowDSLData::PluginErrors> && pluginErrors) { DARABONBA_PTR_SET_RVALUE(pluginErrors_, pluginErrors) };


    // toolsetInstallations Field Functions 
    bool hasToolsetInstallations() const { return this->toolsetInstallations_ != nullptr;};
    void deleteToolsetInstallations() { this->toolsetInstallations_ = nullptr;};
    inline const vector<ConvertFlowDSLData::ToolsetInstallations> & getToolsetInstallations() const { DARABONBA_PTR_GET_CONST(toolsetInstallations_, vector<ConvertFlowDSLData::ToolsetInstallations>) };
    inline vector<ConvertFlowDSLData::ToolsetInstallations> getToolsetInstallations() { DARABONBA_PTR_GET(toolsetInstallations_, vector<ConvertFlowDSLData::ToolsetInstallations>) };
    inline ConvertFlowDSLData& setToolsetInstallations(const vector<ConvertFlowDSLData::ToolsetInstallations> & toolsetInstallations) { DARABONBA_PTR_SET_VALUE(toolsetInstallations_, toolsetInstallations) };
    inline ConvertFlowDSLData& setToolsetInstallations(vector<ConvertFlowDSLData::ToolsetInstallations> && toolsetInstallations) { DARABONBA_PTR_SET_RVALUE(toolsetInstallations_, toolsetInstallations) };


  protected:
    // DSL兼容性分析和转换计划
    shared_ptr<ConvertFlowDSLData::ConversionPlan> conversionPlan_ {};
    // 转换后的AgentRun Flow配置信息
    // 
    // This parameter is required.
    shared_ptr<ConvertFlowDSLData::Flow> flow_ {};
    // 插件识别或转换过程中的错误信息
    shared_ptr<vector<ConvertFlowDSLData::PluginErrors>> pluginErrors_ {};
    // 需要安装的Toolset配置列表
    shared_ptr<vector<ConvertFlowDSLData::ToolsetInstallations>> toolsetInstallations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
