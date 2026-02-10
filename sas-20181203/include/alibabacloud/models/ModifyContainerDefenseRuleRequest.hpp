// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCONTAINERDEFENSERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyContainerDefenseRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(Whitelist, whitelist_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyContainerDefenseRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(RuleSwitch, ruleSwitch_);
      DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(Whitelist, whitelist_);
    };
    ModifyContainerDefenseRuleRequest() = default ;
    ModifyContainerDefenseRuleRequest(const ModifyContainerDefenseRuleRequest &) = default ;
    ModifyContainerDefenseRuleRequest(ModifyContainerDefenseRuleRequest &&) = default ;
    ModifyContainerDefenseRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyContainerDefenseRuleRequest() = default ;
    ModifyContainerDefenseRuleRequest& operator=(const ModifyContainerDefenseRuleRequest &) = default ;
    ModifyContainerDefenseRuleRequest& operator=(ModifyContainerDefenseRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Whitelist : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Whitelist& obj) { 
        DARABONBA_PTR_TO_JSON(Hash, hash_);
        DARABONBA_PTR_TO_JSON(Image, image_);
        DARABONBA_PTR_TO_JSON(Path, path_);
      };
      friend void from_json(const Darabonba::Json& j, Whitelist& obj) { 
        DARABONBA_PTR_FROM_JSON(Hash, hash_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
        DARABONBA_PTR_FROM_JSON(Path, path_);
      };
      Whitelist() = default ;
      Whitelist(const Whitelist &) = default ;
      Whitelist(Whitelist &&) = default ;
      Whitelist(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Whitelist() = default ;
      Whitelist& operator=(const Whitelist &) = default ;
      Whitelist& operator=(Whitelist &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hash_ == nullptr
        && this->image_ == nullptr && this->path_ == nullptr; };
      // hash Field Functions 
      bool hasHash() const { return this->hash_ != nullptr;};
      void deleteHash() { this->hash_ = nullptr;};
      inline const vector<string> & getHash() const { DARABONBA_PTR_GET_CONST(hash_, vector<string>) };
      inline vector<string> getHash() { DARABONBA_PTR_GET(hash_, vector<string>) };
      inline Whitelist& setHash(const vector<string> & hash) { DARABONBA_PTR_SET_VALUE(hash_, hash) };
      inline Whitelist& setHash(vector<string> && hash) { DARABONBA_PTR_SET_RVALUE(hash_, hash) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline const vector<string> & getImage() const { DARABONBA_PTR_GET_CONST(image_, vector<string>) };
      inline vector<string> getImage() { DARABONBA_PTR_GET(image_, vector<string>) };
      inline Whitelist& setImage(const vector<string> & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
      inline Whitelist& setImage(vector<string> && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


      // path Field Functions 
      bool hasPath() const { return this->path_ != nullptr;};
      void deletePath() { this->path_ = nullptr;};
      inline const vector<string> & getPath() const { DARABONBA_PTR_GET_CONST(path_, vector<string>) };
      inline vector<string> getPath() { DARABONBA_PTR_GET(path_, vector<string>) };
      inline Whitelist& setPath(const vector<string> & path) { DARABONBA_PTR_SET_VALUE(path_, path) };
      inline Whitelist& setPath(vector<string> && path) { DARABONBA_PTR_SET_RVALUE(path_, path) };


    protected:
      // The hash values of the files that need to be added to the whitelist.
      // 
      // >  This parameter is not supported.
      shared_ptr<vector<string>> hash_ {};
      // The images that need to be added to the whitelist.
      shared_ptr<vector<string>> image_ {};
      // The paths to the files that need to be added to the whitelist.
      shared_ptr<vector<string>> path_ {};
    };

    class Scope : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scope& obj) { 
        DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Namespaces, namespaces_);
      };
      friend void from_json(const Darabonba::Json& j, Scope& obj) { 
        DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Namespaces, namespaces_);
      };
      Scope() = default ;
      Scope(const Scope &) = default ;
      Scope(Scope &&) = default ;
      Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scope() = default ;
      Scope& operator=(const Scope &) = default ;
      Scope& operator=(Scope &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->allNamespace_ == nullptr
        && this->clusterId_ == nullptr && this->namespaces_ == nullptr; };
      // allNamespace Field Functions 
      bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
      void deleteAllNamespace() { this->allNamespace_ = nullptr;};
      inline int32_t getAllNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
      inline Scope& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Scope& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // namespaces Field Functions 
      bool hasNamespaces() const { return this->namespaces_ != nullptr;};
      void deleteNamespaces() { this->namespaces_ = nullptr;};
      inline const vector<string> & getNamespaces() const { DARABONBA_PTR_GET_CONST(namespaces_, vector<string>) };
      inline vector<string> getNamespaces() { DARABONBA_PTR_GET(namespaces_, vector<string>) };
      inline Scope& setNamespaces(const vector<string> & namespaces) { DARABONBA_PTR_SET_VALUE(namespaces_, namespaces) };
      inline Scope& setNamespaces(vector<string> && namespaces) { DARABONBA_PTR_SET_RVALUE(namespaces_, namespaces) };


    protected:
      // Specifies whether to include all namespaces. Valid values:
      // 
      // *   **0**: no
      // *   **1**: yes
      shared_ptr<int32_t> allNamespace_ {};
      // The ID of the cluster on which the rule takes effect.
      // 
      // >  You can call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to query the IDs of clusters.
      shared_ptr<string> clusterId_ {};
      // The namespaces.
      shared_ptr<vector<string>> namespaces_ {};
    };

    virtual bool empty() const override { return this->description_ == nullptr
        && this->ruleAction_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr && this->ruleSwitch_ == nullptr && this->ruleType_ == nullptr
        && this->scope_ == nullptr && this->whitelist_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyContainerDefenseRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline ModifyContainerDefenseRuleRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline ModifyContainerDefenseRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyContainerDefenseRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // ruleSwitch Field Functions 
    bool hasRuleSwitch() const { return this->ruleSwitch_ != nullptr;};
    void deleteRuleSwitch() { this->ruleSwitch_ = nullptr;};
    inline int32_t getRuleSwitch() const { DARABONBA_PTR_GET_DEFAULT(ruleSwitch_, 0) };
    inline ModifyContainerDefenseRuleRequest& setRuleSwitch(int32_t ruleSwitch) { DARABONBA_PTR_SET_VALUE(ruleSwitch_, ruleSwitch) };


    // ruleType Field Functions 
    bool hasRuleType() const { return this->ruleType_ != nullptr;};
    void deleteRuleType() { this->ruleType_ = nullptr;};
    inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
    inline ModifyContainerDefenseRuleRequest& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline const vector<ModifyContainerDefenseRuleRequest::Scope> & getScope() const { DARABONBA_PTR_GET_CONST(scope_, vector<ModifyContainerDefenseRuleRequest::Scope>) };
    inline vector<ModifyContainerDefenseRuleRequest::Scope> getScope() { DARABONBA_PTR_GET(scope_, vector<ModifyContainerDefenseRuleRequest::Scope>) };
    inline ModifyContainerDefenseRuleRequest& setScope(const vector<ModifyContainerDefenseRuleRequest::Scope> & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
    inline ModifyContainerDefenseRuleRequest& setScope(vector<ModifyContainerDefenseRuleRequest::Scope> && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


    // whitelist Field Functions 
    bool hasWhitelist() const { return this->whitelist_ != nullptr;};
    void deleteWhitelist() { this->whitelist_ = nullptr;};
    inline const ModifyContainerDefenseRuleRequest::Whitelist & getWhitelist() const { DARABONBA_PTR_GET_CONST(whitelist_, ModifyContainerDefenseRuleRequest::Whitelist) };
    inline ModifyContainerDefenseRuleRequest::Whitelist getWhitelist() { DARABONBA_PTR_GET(whitelist_, ModifyContainerDefenseRuleRequest::Whitelist) };
    inline ModifyContainerDefenseRuleRequest& setWhitelist(const ModifyContainerDefenseRuleRequest::Whitelist & whitelist) { DARABONBA_PTR_SET_VALUE(whitelist_, whitelist) };
    inline ModifyContainerDefenseRuleRequest& setWhitelist(ModifyContainerDefenseRuleRequest::Whitelist && whitelist) { DARABONBA_PTR_SET_RVALUE(whitelist_, whitelist) };


  protected:
    // The description of the rule.
    shared_ptr<string> description_ {};
    // The action specified in the rule. Valid values:
    // 
    // *   **1**: alert
    // *   **2**: block
    shared_ptr<int32_t> ruleAction_ {};
    // The ID of the rule.
    // 
    // >  You can call the [ListContainerDefenseRule](https://help.aliyun.com/document_detail/2590599.html) operation to query the IDs of rules.
    shared_ptr<int64_t> ruleId_ {};
    // The name of the rule.
    shared_ptr<string> ruleName_ {};
    // The status of the rule. Valid values:
    // 
    // *   **1**: enabled
    // *   **0**: disabled
    shared_ptr<int32_t> ruleSwitch_ {};
    // The type of the rule. Valid values:
    // 
    // *   1: system rule
    // *   2: custom rule
    shared_ptr<int32_t> ruleType_ {};
    // The effective scope of the rule.
    shared_ptr<vector<ModifyContainerDefenseRuleRequest::Scope>> scope_ {};
    // The whitelist.
    shared_ptr<ModifyContainerDefenseRuleRequest::Whitelist> whitelist_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
