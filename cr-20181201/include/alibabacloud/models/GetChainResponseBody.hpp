// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCHAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cr20181201
{
namespace Models
{
  class GetChainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetChainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_TO_JSON(ChainId, chainId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ScopeExclude, scopeExclude_);
      DARABONBA_PTR_TO_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_TO_JSON(ScopeType, scopeType_);
    };
    friend void from_json(const Darabonba::Json& j, GetChainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ChainConfig, chainConfig_);
      DARABONBA_PTR_FROM_JSON(ChainId, chainId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ScopeExclude, scopeExclude_);
      DARABONBA_PTR_FROM_JSON(ScopeId, scopeId_);
      DARABONBA_PTR_FROM_JSON(ScopeType, scopeType_);
    };
    GetChainResponseBody() = default ;
    GetChainResponseBody(const GetChainResponseBody &) = default ;
    GetChainResponseBody(GetChainResponseBody &&) = default ;
    GetChainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetChainResponseBody() = default ;
    GetChainResponseBody& operator=(const GetChainResponseBody &) = default ;
    GetChainResponseBody& operator=(GetChainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ChainConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ChainConfig& obj) { 
        DARABONBA_PTR_TO_JSON(ChainConfigId, chainConfigId_);
        DARABONBA_PTR_TO_JSON(IsActive, isActive_);
        DARABONBA_PTR_TO_JSON(Nodes, nodes_);
        DARABONBA_PTR_TO_JSON(Routers, routers_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, ChainConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(ChainConfigId, chainConfigId_);
        DARABONBA_PTR_FROM_JSON(IsActive, isActive_);
        DARABONBA_PTR_FROM_JSON(Nodes, nodes_);
        DARABONBA_PTR_FROM_JSON(Routers, routers_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      ChainConfig() = default ;
      ChainConfig(const ChainConfig &) = default ;
      ChainConfig(ChainConfig &&) = default ;
      ChainConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ChainConfig() = default ;
      ChainConfig& operator=(const ChainConfig &) = default ;
      ChainConfig& operator=(ChainConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Routers : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Routers& obj) { 
          DARABONBA_PTR_TO_JSON(From, from_);
          DARABONBA_PTR_TO_JSON(To, to_);
        };
        friend void from_json(const Darabonba::Json& j, Routers& obj) { 
          DARABONBA_PTR_FROM_JSON(From, from_);
          DARABONBA_PTR_FROM_JSON(To, to_);
        };
        Routers() = default ;
        Routers(const Routers &) = default ;
        Routers(Routers &&) = default ;
        Routers(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Routers() = default ;
        Routers& operator=(const Routers &) = default ;
        Routers& operator=(Routers &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class To : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const To& obj) { 
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          };
          friend void from_json(const Darabonba::Json& j, To& obj) { 
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          };
          To() = default ;
          To(const To &) = default ;
          To(To &&) = default ;
          To(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~To() = default ;
          To& operator=(const To &) = default ;
          To& operator=(To &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nodeName_ == nullptr; };
          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline To& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        protected:
          shared_ptr<string> nodeName_ {};
        };

        class From : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const From& obj) { 
            DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
          };
          friend void from_json(const Darabonba::Json& j, From& obj) { 
            DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
          };
          From() = default ;
          From(const From &) = default ;
          From(From &&) = default ;
          From(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~From() = default ;
          From& operator=(const From &) = default ;
          From& operator=(From &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->nodeName_ == nullptr; };
          // nodeName Field Functions 
          bool hasNodeName() const { return this->nodeName_ != nullptr;};
          void deleteNodeName() { this->nodeName_ = nullptr;};
          inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
          inline From& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


        protected:
          shared_ptr<string> nodeName_ {};
        };

        virtual bool empty() const override { return this->from_ == nullptr
        && this->to_ == nullptr; };
        // from Field Functions 
        bool hasFrom() const { return this->from_ != nullptr;};
        void deleteFrom() { this->from_ = nullptr;};
        inline const Routers::From & getFrom() const { DARABONBA_PTR_GET_CONST(from_, Routers::From) };
        inline Routers::From getFrom() { DARABONBA_PTR_GET(from_, Routers::From) };
        inline Routers& setFrom(const Routers::From & from) { DARABONBA_PTR_SET_VALUE(from_, from) };
        inline Routers& setFrom(Routers::From && from) { DARABONBA_PTR_SET_RVALUE(from_, from) };


        // to Field Functions 
        bool hasTo() const { return this->to_ != nullptr;};
        void deleteTo() { this->to_ = nullptr;};
        inline const Routers::To & getTo() const { DARABONBA_PTR_GET_CONST(to_, Routers::To) };
        inline Routers::To getTo() { DARABONBA_PTR_GET(to_, Routers::To) };
        inline Routers& setTo(const Routers::To & to) { DARABONBA_PTR_SET_VALUE(to_, to) };
        inline Routers& setTo(Routers::To && to) { DARABONBA_PTR_SET_RVALUE(to_, to) };


      protected:
        shared_ptr<Routers::From> from_ {};
        shared_ptr<Routers::To> to_ {};
      };

      class Nodes : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Nodes& obj) { 
          DARABONBA_PTR_TO_JSON(Enable, enable_);
          DARABONBA_PTR_TO_JSON(NodeConfig, nodeConfig_);
          DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
        };
        friend void from_json(const Darabonba::Json& j, Nodes& obj) { 
          DARABONBA_PTR_FROM_JSON(Enable, enable_);
          DARABONBA_PTR_FROM_JSON(NodeConfig, nodeConfig_);
          DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
        };
        Nodes() = default ;
        Nodes(const Nodes &) = default ;
        Nodes(Nodes &&) = default ;
        Nodes(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Nodes() = default ;
        Nodes& operator=(const Nodes &) = default ;
        Nodes& operator=(Nodes &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class NodeConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const NodeConfig& obj) { 
            DARABONBA_PTR_TO_JSON(DenyPolicy, denyPolicy_);
            DARABONBA_PTR_TO_JSON(Retry, retry_);
            DARABONBA_PTR_TO_JSON(ScanEngine, scanEngine_);
            DARABONBA_PTR_TO_JSON(Timeout, timeout_);
          };
          friend void from_json(const Darabonba::Json& j, NodeConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(DenyPolicy, denyPolicy_);
            DARABONBA_PTR_FROM_JSON(Retry, retry_);
            DARABONBA_PTR_FROM_JSON(ScanEngine, scanEngine_);
            DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
          };
          NodeConfig() = default ;
          NodeConfig(const NodeConfig &) = default ;
          NodeConfig(NodeConfig &&) = default ;
          NodeConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~NodeConfig() = default ;
          NodeConfig& operator=(const NodeConfig &) = default ;
          NodeConfig& operator=(NodeConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class DenyPolicy : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const DenyPolicy& obj) { 
              DARABONBA_PTR_TO_JSON(Action, action_);
              DARABONBA_PTR_TO_JSON(BaselineList, baselineList_);
              DARABONBA_PTR_TO_JSON(IssueCount, issueCount_);
              DARABONBA_PTR_TO_JSON(IssueLevel, issueLevel_);
              DARABONBA_PTR_TO_JSON(IssueList, issueList_);
              DARABONBA_PTR_TO_JSON(Logic, logic_);
              DARABONBA_PTR_TO_JSON(MaliciousList, maliciousList_);
            };
            friend void from_json(const Darabonba::Json& j, DenyPolicy& obj) { 
              DARABONBA_PTR_FROM_JSON(Action, action_);
              DARABONBA_PTR_FROM_JSON(BaselineList, baselineList_);
              DARABONBA_PTR_FROM_JSON(IssueCount, issueCount_);
              DARABONBA_PTR_FROM_JSON(IssueLevel, issueLevel_);
              DARABONBA_PTR_FROM_JSON(IssueList, issueList_);
              DARABONBA_PTR_FROM_JSON(Logic, logic_);
              DARABONBA_PTR_FROM_JSON(MaliciousList, maliciousList_);
            };
            DenyPolicy() = default ;
            DenyPolicy(const DenyPolicy &) = default ;
            DenyPolicy(DenyPolicy &&) = default ;
            DenyPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~DenyPolicy() = default ;
            DenyPolicy& operator=(const DenyPolicy &) = default ;
            DenyPolicy& operator=(DenyPolicy &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->action_ == nullptr
        && this->baselineList_ == nullptr && this->issueCount_ == nullptr && this->issueLevel_ == nullptr && this->issueList_ == nullptr && this->logic_ == nullptr
        && this->maliciousList_ == nullptr; };
            // action Field Functions 
            bool hasAction() const { return this->action_ != nullptr;};
            void deleteAction() { this->action_ = nullptr;};
            inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
            inline DenyPolicy& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


            // baselineList Field Functions 
            bool hasBaselineList() const { return this->baselineList_ != nullptr;};
            void deleteBaselineList() { this->baselineList_ = nullptr;};
            inline string getBaselineList() const { DARABONBA_PTR_GET_DEFAULT(baselineList_, "") };
            inline DenyPolicy& setBaselineList(string baselineList) { DARABONBA_PTR_SET_VALUE(baselineList_, baselineList) };


            // issueCount Field Functions 
            bool hasIssueCount() const { return this->issueCount_ != nullptr;};
            void deleteIssueCount() { this->issueCount_ = nullptr;};
            inline string getIssueCount() const { DARABONBA_PTR_GET_DEFAULT(issueCount_, "") };
            inline DenyPolicy& setIssueCount(string issueCount) { DARABONBA_PTR_SET_VALUE(issueCount_, issueCount) };


            // issueLevel Field Functions 
            bool hasIssueLevel() const { return this->issueLevel_ != nullptr;};
            void deleteIssueLevel() { this->issueLevel_ = nullptr;};
            inline string getIssueLevel() const { DARABONBA_PTR_GET_DEFAULT(issueLevel_, "") };
            inline DenyPolicy& setIssueLevel(string issueLevel) { DARABONBA_PTR_SET_VALUE(issueLevel_, issueLevel) };


            // issueList Field Functions 
            bool hasIssueList() const { return this->issueList_ != nullptr;};
            void deleteIssueList() { this->issueList_ = nullptr;};
            inline string getIssueList() const { DARABONBA_PTR_GET_DEFAULT(issueList_, "") };
            inline DenyPolicy& setIssueList(string issueList) { DARABONBA_PTR_SET_VALUE(issueList_, issueList) };


            // logic Field Functions 
            bool hasLogic() const { return this->logic_ != nullptr;};
            void deleteLogic() { this->logic_ = nullptr;};
            inline string getLogic() const { DARABONBA_PTR_GET_DEFAULT(logic_, "") };
            inline DenyPolicy& setLogic(string logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


            // maliciousList Field Functions 
            bool hasMaliciousList() const { return this->maliciousList_ != nullptr;};
            void deleteMaliciousList() { this->maliciousList_ = nullptr;};
            inline string getMaliciousList() const { DARABONBA_PTR_GET_DEFAULT(maliciousList_, "") };
            inline DenyPolicy& setMaliciousList(string maliciousList) { DARABONBA_PTR_SET_VALUE(maliciousList_, maliciousList) };


          protected:
            shared_ptr<string> action_ {};
            shared_ptr<string> baselineList_ {};
            shared_ptr<string> issueCount_ {};
            shared_ptr<string> issueLevel_ {};
            shared_ptr<string> issueList_ {};
            shared_ptr<string> logic_ {};
            shared_ptr<string> maliciousList_ {};
          };

          virtual bool empty() const override { return this->denyPolicy_ == nullptr
        && this->retry_ == nullptr && this->scanEngine_ == nullptr && this->timeout_ == nullptr; };
          // denyPolicy Field Functions 
          bool hasDenyPolicy() const { return this->denyPolicy_ != nullptr;};
          void deleteDenyPolicy() { this->denyPolicy_ = nullptr;};
          inline const NodeConfig::DenyPolicy & getDenyPolicy() const { DARABONBA_PTR_GET_CONST(denyPolicy_, NodeConfig::DenyPolicy) };
          inline NodeConfig::DenyPolicy getDenyPolicy() { DARABONBA_PTR_GET(denyPolicy_, NodeConfig::DenyPolicy) };
          inline NodeConfig& setDenyPolicy(const NodeConfig::DenyPolicy & denyPolicy) { DARABONBA_PTR_SET_VALUE(denyPolicy_, denyPolicy) };
          inline NodeConfig& setDenyPolicy(NodeConfig::DenyPolicy && denyPolicy) { DARABONBA_PTR_SET_RVALUE(denyPolicy_, denyPolicy) };


          // retry Field Functions 
          bool hasRetry() const { return this->retry_ != nullptr;};
          void deleteRetry() { this->retry_ = nullptr;};
          inline int32_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0) };
          inline NodeConfig& setRetry(int32_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


          // scanEngine Field Functions 
          bool hasScanEngine() const { return this->scanEngine_ != nullptr;};
          void deleteScanEngine() { this->scanEngine_ = nullptr;};
          inline string getScanEngine() const { DARABONBA_PTR_GET_DEFAULT(scanEngine_, "") };
          inline NodeConfig& setScanEngine(string scanEngine) { DARABONBA_PTR_SET_VALUE(scanEngine_, scanEngine) };


          // timeout Field Functions 
          bool hasTimeout() const { return this->timeout_ != nullptr;};
          void deleteTimeout() { this->timeout_ = nullptr;};
          inline int64_t getTimeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
          inline NodeConfig& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


        protected:
          shared_ptr<NodeConfig::DenyPolicy> denyPolicy_ {};
          shared_ptr<int32_t> retry_ {};
          shared_ptr<string> scanEngine_ {};
          shared_ptr<int64_t> timeout_ {};
        };

        virtual bool empty() const override { return this->enable_ == nullptr
        && this->nodeConfig_ == nullptr && this->nodeName_ == nullptr; };
        // enable Field Functions 
        bool hasEnable() const { return this->enable_ != nullptr;};
        void deleteEnable() { this->enable_ = nullptr;};
        inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
        inline Nodes& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


        // nodeConfig Field Functions 
        bool hasNodeConfig() const { return this->nodeConfig_ != nullptr;};
        void deleteNodeConfig() { this->nodeConfig_ = nullptr;};
        inline const Nodes::NodeConfig & getNodeConfig() const { DARABONBA_PTR_GET_CONST(nodeConfig_, Nodes::NodeConfig) };
        inline Nodes::NodeConfig getNodeConfig() { DARABONBA_PTR_GET(nodeConfig_, Nodes::NodeConfig) };
        inline Nodes& setNodeConfig(const Nodes::NodeConfig & nodeConfig) { DARABONBA_PTR_SET_VALUE(nodeConfig_, nodeConfig) };
        inline Nodes& setNodeConfig(Nodes::NodeConfig && nodeConfig) { DARABONBA_PTR_SET_RVALUE(nodeConfig_, nodeConfig) };


        // nodeName Field Functions 
        bool hasNodeName() const { return this->nodeName_ != nullptr;};
        void deleteNodeName() { this->nodeName_ = nullptr;};
        inline string getNodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
        inline Nodes& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


      protected:
        shared_ptr<bool> enable_ {};
        shared_ptr<Nodes::NodeConfig> nodeConfig_ {};
        shared_ptr<string> nodeName_ {};
      };

      virtual bool empty() const override { return this->chainConfigId_ == nullptr
        && this->isActive_ == nullptr && this->nodes_ == nullptr && this->routers_ == nullptr && this->version_ == nullptr; };
      // chainConfigId Field Functions 
      bool hasChainConfigId() const { return this->chainConfigId_ != nullptr;};
      void deleteChainConfigId() { this->chainConfigId_ = nullptr;};
      inline string getChainConfigId() const { DARABONBA_PTR_GET_DEFAULT(chainConfigId_, "") };
      inline ChainConfig& setChainConfigId(string chainConfigId) { DARABONBA_PTR_SET_VALUE(chainConfigId_, chainConfigId) };


      // isActive Field Functions 
      bool hasIsActive() const { return this->isActive_ != nullptr;};
      void deleteIsActive() { this->isActive_ = nullptr;};
      inline bool getIsActive() const { DARABONBA_PTR_GET_DEFAULT(isActive_, false) };
      inline ChainConfig& setIsActive(bool isActive) { DARABONBA_PTR_SET_VALUE(isActive_, isActive) };


      // nodes Field Functions 
      bool hasNodes() const { return this->nodes_ != nullptr;};
      void deleteNodes() { this->nodes_ = nullptr;};
      inline const vector<ChainConfig::Nodes> & getNodes() const { DARABONBA_PTR_GET_CONST(nodes_, vector<ChainConfig::Nodes>) };
      inline vector<ChainConfig::Nodes> getNodes() { DARABONBA_PTR_GET(nodes_, vector<ChainConfig::Nodes>) };
      inline ChainConfig& setNodes(const vector<ChainConfig::Nodes> & nodes) { DARABONBA_PTR_SET_VALUE(nodes_, nodes) };
      inline ChainConfig& setNodes(vector<ChainConfig::Nodes> && nodes) { DARABONBA_PTR_SET_RVALUE(nodes_, nodes) };


      // routers Field Functions 
      bool hasRouters() const { return this->routers_ != nullptr;};
      void deleteRouters() { this->routers_ = nullptr;};
      inline const vector<ChainConfig::Routers> & getRouters() const { DARABONBA_PTR_GET_CONST(routers_, vector<ChainConfig::Routers>) };
      inline vector<ChainConfig::Routers> getRouters() { DARABONBA_PTR_GET(routers_, vector<ChainConfig::Routers>) };
      inline ChainConfig& setRouters(const vector<ChainConfig::Routers> & routers) { DARABONBA_PTR_SET_VALUE(routers_, routers) };
      inline ChainConfig& setRouters(vector<ChainConfig::Routers> && routers) { DARABONBA_PTR_SET_RVALUE(routers_, routers) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline ChainConfig& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<string> chainConfigId_ {};
      shared_ptr<bool> isActive_ {};
      shared_ptr<vector<ChainConfig::Nodes>> nodes_ {};
      shared_ptr<vector<ChainConfig::Routers>> routers_ {};
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->chainConfig_ == nullptr
        && this->chainId_ == nullptr && this->code_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->instanceId_ == nullptr
        && this->isSuccess_ == nullptr && this->modifiedTime_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr && this->scopeExclude_ == nullptr
        && this->scopeId_ == nullptr && this->scopeType_ == nullptr; };
    // chainConfig Field Functions 
    bool hasChainConfig() const { return this->chainConfig_ != nullptr;};
    void deleteChainConfig() { this->chainConfig_ = nullptr;};
    inline const GetChainResponseBody::ChainConfig & getChainConfig() const { DARABONBA_PTR_GET_CONST(chainConfig_, GetChainResponseBody::ChainConfig) };
    inline GetChainResponseBody::ChainConfig getChainConfig() { DARABONBA_PTR_GET(chainConfig_, GetChainResponseBody::ChainConfig) };
    inline GetChainResponseBody& setChainConfig(const GetChainResponseBody::ChainConfig & chainConfig) { DARABONBA_PTR_SET_VALUE(chainConfig_, chainConfig) };
    inline GetChainResponseBody& setChainConfig(GetChainResponseBody::ChainConfig && chainConfig) { DARABONBA_PTR_SET_RVALUE(chainConfig_, chainConfig) };


    // chainId Field Functions 
    bool hasChainId() const { return this->chainId_ != nullptr;};
    void deleteChainId() { this->chainId_ = nullptr;};
    inline string getChainId() const { DARABONBA_PTR_GET_DEFAULT(chainId_, "") };
    inline GetChainResponseBody& setChainId(string chainId) { DARABONBA_PTR_SET_VALUE(chainId_, chainId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetChainResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetChainResponseBody& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetChainResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetChainResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // isSuccess Field Functions 
    bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
    void deleteIsSuccess() { this->isSuccess_ = nullptr;};
    inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
    inline GetChainResponseBody& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetChainResponseBody& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetChainResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetChainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // scopeExclude Field Functions 
    bool hasScopeExclude() const { return this->scopeExclude_ != nullptr;};
    void deleteScopeExclude() { this->scopeExclude_ = nullptr;};
    inline const vector<string> & getScopeExclude() const { DARABONBA_PTR_GET_CONST(scopeExclude_, vector<string>) };
    inline vector<string> getScopeExclude() { DARABONBA_PTR_GET(scopeExclude_, vector<string>) };
    inline GetChainResponseBody& setScopeExclude(const vector<string> & scopeExclude) { DARABONBA_PTR_SET_VALUE(scopeExclude_, scopeExclude) };
    inline GetChainResponseBody& setScopeExclude(vector<string> && scopeExclude) { DARABONBA_PTR_SET_RVALUE(scopeExclude_, scopeExclude) };


    // scopeId Field Functions 
    bool hasScopeId() const { return this->scopeId_ != nullptr;};
    void deleteScopeId() { this->scopeId_ = nullptr;};
    inline string getScopeId() const { DARABONBA_PTR_GET_DEFAULT(scopeId_, "") };
    inline GetChainResponseBody& setScopeId(string scopeId) { DARABONBA_PTR_SET_VALUE(scopeId_, scopeId) };


    // scopeType Field Functions 
    bool hasScopeType() const { return this->scopeType_ != nullptr;};
    void deleteScopeType() { this->scopeType_ = nullptr;};
    inline string getScopeType() const { DARABONBA_PTR_GET_DEFAULT(scopeType_, "") };
    inline GetChainResponseBody& setScopeType(string scopeType) { DARABONBA_PTR_SET_VALUE(scopeType_, scopeType) };


  protected:
    shared_ptr<GetChainResponseBody::ChainConfig> chainConfig_ {};
    shared_ptr<string> chainId_ {};
    shared_ptr<string> code_ {};
    shared_ptr<int64_t> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<bool> isSuccess_ {};
    shared_ptr<int64_t> modifiedTime_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<string>> scopeExclude_ {};
    shared_ptr<string> scopeId_ {};
    shared_ptr<string> scopeType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cr20181201
#endif
