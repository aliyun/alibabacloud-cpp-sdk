// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHTTPINCOMINGREQUESTHEADERMODIFICATIONRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ListHttpIncomingRequestHeaderModificationRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHttpIncomingRequestHeaderModificationRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Configs, configs_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListHttpIncomingRequestHeaderModificationRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Configs, configs_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListHttpIncomingRequestHeaderModificationRulesResponseBody() = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody(const ListHttpIncomingRequestHeaderModificationRulesResponseBody &) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody(ListHttpIncomingRequestHeaderModificationRulesResponseBody &&) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHttpIncomingRequestHeaderModificationRulesResponseBody() = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody& operator=(const ListHttpIncomingRequestHeaderModificationRulesResponseBody &) = default ;
    ListHttpIncomingRequestHeaderModificationRulesResponseBody& operator=(ListHttpIncomingRequestHeaderModificationRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Configs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Configs& obj) { 
        DARABONBA_PTR_TO_JSON(ConfigId, configId_);
        DARABONBA_PTR_TO_JSON(ConfigType, configType_);
        DARABONBA_PTR_TO_JSON(RequestHeaderModification, requestHeaderModification_);
        DARABONBA_PTR_TO_JSON(Rule, rule_);
        DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(Sequence, sequence_);
        DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
      };
      friend void from_json(const Darabonba::Json& j, Configs& obj) { 
        DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
        DARABONBA_PTR_FROM_JSON(ConfigType, configType_);
        DARABONBA_PTR_FROM_JSON(RequestHeaderModification, requestHeaderModification_);
        DARABONBA_PTR_FROM_JSON(Rule, rule_);
        DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
        DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
      };
      Configs() = default ;
      Configs(const Configs &) = default ;
      Configs(Configs &&) = default ;
      Configs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Configs() = default ;
      Configs& operator=(const Configs &) = default ;
      Configs& operator=(Configs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RequestHeaderModification : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RequestHeaderModification& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Operation, operation_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, RequestHeaderModification& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Operation, operation_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        RequestHeaderModification() = default ;
        RequestHeaderModification(const RequestHeaderModification &) = default ;
        RequestHeaderModification(RequestHeaderModification &&) = default ;
        RequestHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RequestHeaderModification() = default ;
        RequestHeaderModification& operator=(const RequestHeaderModification &) = default ;
        RequestHeaderModification& operator=(RequestHeaderModification &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline RequestHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // operation Field Functions 
        bool hasOperation() const { return this->operation_ != nullptr;};
        void deleteOperation() { this->operation_ = nullptr;};
        inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
        inline RequestHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline RequestHeaderModification& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline RequestHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The name of the request header.
        shared_ptr<string> name_ {};
        // The action. Valid values:
        // 
        // *   add: adds a response header.
        // *   del: deletes a response header.
        // *   modify: modifies a response header.
        shared_ptr<string> operation_ {};
        // The type of the value. Valid values:
        // 
        // *   static
        // *   dynamic
        shared_ptr<string> type_ {};
        // The value of the request header.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->configId_ == nullptr
        && this->configType_ == nullptr && this->requestHeaderModification_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr
        && this->sequence_ == nullptr && this->siteVersion_ == nullptr; };
      // configId Field Functions 
      bool hasConfigId() const { return this->configId_ != nullptr;};
      void deleteConfigId() { this->configId_ = nullptr;};
      inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
      inline Configs& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


      // configType Field Functions 
      bool hasConfigType() const { return this->configType_ != nullptr;};
      void deleteConfigType() { this->configType_ = nullptr;};
      inline string getConfigType() const { DARABONBA_PTR_GET_DEFAULT(configType_, "") };
      inline Configs& setConfigType(string configType) { DARABONBA_PTR_SET_VALUE(configType_, configType) };


      // requestHeaderModification Field Functions 
      bool hasRequestHeaderModification() const { return this->requestHeaderModification_ != nullptr;};
      void deleteRequestHeaderModification() { this->requestHeaderModification_ = nullptr;};
      inline const vector<Configs::RequestHeaderModification> & getRequestHeaderModification() const { DARABONBA_PTR_GET_CONST(requestHeaderModification_, vector<Configs::RequestHeaderModification>) };
      inline vector<Configs::RequestHeaderModification> getRequestHeaderModification() { DARABONBA_PTR_GET(requestHeaderModification_, vector<Configs::RequestHeaderModification>) };
      inline Configs& setRequestHeaderModification(const vector<Configs::RequestHeaderModification> & requestHeaderModification) { DARABONBA_PTR_SET_VALUE(requestHeaderModification_, requestHeaderModification) };
      inline Configs& setRequestHeaderModification(vector<Configs::RequestHeaderModification> && requestHeaderModification) { DARABONBA_PTR_SET_RVALUE(requestHeaderModification_, requestHeaderModification) };


      // rule Field Functions 
      bool hasRule() const { return this->rule_ != nullptr;};
      void deleteRule() { this->rule_ = nullptr;};
      inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
      inline Configs& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


      // ruleEnable Field Functions 
      bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
      void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
      inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
      inline Configs& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline Configs& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // sequence Field Functions 
      bool hasSequence() const { return this->sequence_ != nullptr;};
      void deleteSequence() { this->sequence_ = nullptr;};
      inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
      inline Configs& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


      // siteVersion Field Functions 
      bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
      void deleteSiteVersion() { this->siteVersion_ = nullptr;};
      inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
      inline Configs& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


    protected:
      // The configuration ID.
      shared_ptr<int64_t> configId_ {};
      // The type of the configuration. Valid values:
      // 
      // *   global: global configurations.
      // *   rule: rule configurations.
      shared_ptr<string> configType_ {};
      // The configurations of modifying request headers. You can add, delete, or modify a request header.
      shared_ptr<vector<Configs::RequestHeaderModification>> requestHeaderModification_ {};
      // The content of the rule. A conditional expression is used to match a user request. You do not need to set this parameter when you add global configuration. Use cases:
      // 
      // *   true: Match all incoming requests.
      // *   Set the value to a custom expression, for example, (http.host eq "video.example.com"): Match the specified request.
      shared_ptr<string> rule_ {};
      // Specifies whether to enable the rule. Valid values: You do not need to set this parameter when you add global configuration. Valid values:
      // 
      // *   on
      // *   off
      shared_ptr<string> ruleEnable_ {};
      // The rule name. You do not need to set this parameter when you add global configuration.
      shared_ptr<string> ruleName_ {};
      // The order in which the rule is executed. A smaller value gives priority to the rule.
      shared_ptr<int32_t> sequence_ {};
      // The version number of the website configurations. You can use this parameter to specify a version of your website to apply the feature settings. By default, version 0 is used.
      shared_ptr<int32_t> siteVersion_ {};
    };

    virtual bool empty() const override { return this->configs_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // configs Field Functions 
    bool hasConfigs() const { return this->configs_ != nullptr;};
    void deleteConfigs() { this->configs_ = nullptr;};
    inline const vector<ListHttpIncomingRequestHeaderModificationRulesResponseBody::Configs> & getConfigs() const { DARABONBA_PTR_GET_CONST(configs_, vector<ListHttpIncomingRequestHeaderModificationRulesResponseBody::Configs>) };
    inline vector<ListHttpIncomingRequestHeaderModificationRulesResponseBody::Configs> getConfigs() { DARABONBA_PTR_GET(configs_, vector<ListHttpIncomingRequestHeaderModificationRulesResponseBody::Configs>) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setConfigs(const vector<ListHttpIncomingRequestHeaderModificationRulesResponseBody::Configs> & configs) { DARABONBA_PTR_SET_VALUE(configs_, configs) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setConfigs(vector<ListHttpIncomingRequestHeaderModificationRulesResponseBody::Configs> && configs) { DARABONBA_PTR_SET_RVALUE(configs_, configs) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListHttpIncomingRequestHeaderModificationRulesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // The configuration list of the incoming HTTP request header modification.
    shared_ptr<vector<ListHttpIncomingRequestHeaderModificationRulesResponseBody::Configs>> configs_ {};
    // The number of the returned page. Default value: **1**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 500. Valid values: 1 to 500.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
    // The number of entries per page.
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
