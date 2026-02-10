// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEOPASTRATEGYNEWSHRINKREQUEST_HPP_
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
  class CreateOpaStrategyNewShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOpaStrategyNewShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmDetail, alarmDetailShrink_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageName, imageName_);
      DARABONBA_PTR_TO_JSON(Label, label_);
      DARABONBA_PTR_TO_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_TO_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_TO_JSON(WhiteList, whiteList_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOpaStrategyNewShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmDetail, alarmDetailShrink_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageName, imageName_);
      DARABONBA_PTR_FROM_JSON(Label, label_);
      DARABONBA_PTR_FROM_JSON(MaliciousImage, maliciousImage_);
      DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
      DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyTemplateId, strategyTemplateId_);
      DARABONBA_PTR_FROM_JSON(UnScanedImage, unScanedImage_);
      DARABONBA_PTR_FROM_JSON(WhiteList, whiteList_);
    };
    CreateOpaStrategyNewShrinkRequest() = default ;
    CreateOpaStrategyNewShrinkRequest(const CreateOpaStrategyNewShrinkRequest &) = default ;
    CreateOpaStrategyNewShrinkRequest(CreateOpaStrategyNewShrinkRequest &&) = default ;
    CreateOpaStrategyNewShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOpaStrategyNewShrinkRequest() = default ;
    CreateOpaStrategyNewShrinkRequest& operator=(const CreateOpaStrategyNewShrinkRequest &) = default ;
    CreateOpaStrategyNewShrinkRequest& operator=(CreateOpaStrategyNewShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Scopes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Scopes& obj) { 
        DARABONBA_PTR_TO_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
        DARABONBA_PTR_TO_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(NamespaceList, namespaceList_);
      };
      friend void from_json(const Darabonba::Json& j, Scopes& obj) { 
        DARABONBA_PTR_FROM_JSON(AckPolicyInstanceId, ackPolicyInstanceId_);
        DARABONBA_PTR_FROM_JSON(AllNamespace, allNamespace_);
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(NamespaceList, namespaceList_);
      };
      Scopes() = default ;
      Scopes(const Scopes &) = default ;
      Scopes(Scopes &&) = default ;
      Scopes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Scopes() = default ;
      Scopes& operator=(const Scopes &) = default ;
      Scopes& operator=(Scopes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ackPolicyInstanceId_ == nullptr
        && this->allNamespace_ == nullptr && this->clusterId_ == nullptr && this->namespaceList_ == nullptr; };
      // ackPolicyInstanceId Field Functions 
      bool hasAckPolicyInstanceId() const { return this->ackPolicyInstanceId_ != nullptr;};
      void deleteAckPolicyInstanceId() { this->ackPolicyInstanceId_ = nullptr;};
      inline string getAckPolicyInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ackPolicyInstanceId_, "") };
      inline Scopes& setAckPolicyInstanceId(string ackPolicyInstanceId) { DARABONBA_PTR_SET_VALUE(ackPolicyInstanceId_, ackPolicyInstanceId) };


      // allNamespace Field Functions 
      bool hasAllNamespace() const { return this->allNamespace_ != nullptr;};
      void deleteAllNamespace() { this->allNamespace_ = nullptr;};
      inline int32_t getAllNamespace() const { DARABONBA_PTR_GET_DEFAULT(allNamespace_, 0) };
      inline Scopes& setAllNamespace(int32_t allNamespace) { DARABONBA_PTR_SET_VALUE(allNamespace_, allNamespace) };


      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Scopes& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // namespaceList Field Functions 
      bool hasNamespaceList() const { return this->namespaceList_ != nullptr;};
      void deleteNamespaceList() { this->namespaceList_ = nullptr;};
      inline const vector<string> & getNamespaceList() const { DARABONBA_PTR_GET_CONST(namespaceList_, vector<string>) };
      inline vector<string> getNamespaceList() { DARABONBA_PTR_GET(namespaceList_, vector<string>) };
      inline Scopes& setNamespaceList(const vector<string> & namespaceList) { DARABONBA_PTR_SET_VALUE(namespaceList_, namespaceList) };
      inline Scopes& setNamespaceList(vector<string> && namespaceList) { DARABONBA_PTR_SET_RVALUE(namespaceList_, namespaceList) };


    protected:
      // The ID of the cluster node to which the rule is applied.
      // 
      // > This parameter is not required when you create the instance.
      shared_ptr<string> ackPolicyInstanceId_ {};
      // Specifies whether to include all namespaces. Valid values:
      // 
      // *   **1**: includes all namespaces.
      // *   **0**: does not include all namespaces.
      shared_ptr<int32_t> allNamespace_ {};
      // The ID of the cluster that is specified in the rule.
      // 
      // >  You can call the [DescribeGroupedContainerInstances](https://help.aliyun.com/document_detail/421736.html) operation to query the cluster ID.
      shared_ptr<string> clusterId_ {};
      // The namespaces.
      // 
      // > This parameter is valid only when the AllNamespace parameter is set to 0.
      shared_ptr<vector<string>> namespaceList_ {};
    };

    virtual bool empty() const override { return this->alarmDetailShrink_ == nullptr
        && this->clusterId_ == nullptr && this->clusterName_ == nullptr && this->description_ == nullptr && this->imageName_ == nullptr && this->label_ == nullptr
        && this->maliciousImage_ == nullptr && this->ruleAction_ == nullptr && this->scopes_ == nullptr && this->strategyId_ == nullptr && this->strategyName_ == nullptr
        && this->strategyTemplateId_ == nullptr && this->unScanedImage_ == nullptr && this->whiteList_ == nullptr; };
    // alarmDetailShrink Field Functions 
    bool hasAlarmDetailShrink() const { return this->alarmDetailShrink_ != nullptr;};
    void deleteAlarmDetailShrink() { this->alarmDetailShrink_ = nullptr;};
    inline string getAlarmDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(alarmDetailShrink_, "") };
    inline CreateOpaStrategyNewShrinkRequest& setAlarmDetailShrink(string alarmDetailShrink) { DARABONBA_PTR_SET_VALUE(alarmDetailShrink_, alarmDetailShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateOpaStrategyNewShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateOpaStrategyNewShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateOpaStrategyNewShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & getImageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> getImageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline CreateOpaStrategyNewShrinkRequest& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline CreateOpaStrategyNewShrinkRequest& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> getLabel() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline CreateOpaStrategyNewShrinkRequest& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline CreateOpaStrategyNewShrinkRequest& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // maliciousImage Field Functions 
    bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
    void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
    inline bool getMaliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
    inline CreateOpaStrategyNewShrinkRequest& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline CreateOpaStrategyNewShrinkRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<CreateOpaStrategyNewShrinkRequest::Scopes> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<CreateOpaStrategyNewShrinkRequest::Scopes>) };
    inline vector<CreateOpaStrategyNewShrinkRequest::Scopes> getScopes() { DARABONBA_PTR_GET(scopes_, vector<CreateOpaStrategyNewShrinkRequest::Scopes>) };
    inline CreateOpaStrategyNewShrinkRequest& setScopes(const vector<CreateOpaStrategyNewShrinkRequest::Scopes> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline CreateOpaStrategyNewShrinkRequest& setScopes(vector<CreateOpaStrategyNewShrinkRequest::Scopes> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline CreateOpaStrategyNewShrinkRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline CreateOpaStrategyNewShrinkRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTemplateId Field Functions 
    bool hasStrategyTemplateId() const { return this->strategyTemplateId_ != nullptr;};
    void deleteStrategyTemplateId() { this->strategyTemplateId_ = nullptr;};
    inline int64_t getStrategyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(strategyTemplateId_, 0L) };
    inline CreateOpaStrategyNewShrinkRequest& setStrategyTemplateId(int64_t strategyTemplateId) { DARABONBA_PTR_SET_VALUE(strategyTemplateId_, strategyTemplateId) };


    // unScanedImage Field Functions 
    bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
    void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
    inline bool getUnScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
    inline CreateOpaStrategyNewShrinkRequest& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline CreateOpaStrategyNewShrinkRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline CreateOpaStrategyNewShrinkRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The risks that you want to detect by using the rule.
    shared_ptr<string> alarmDetailShrink_ {};
    // The cluster ID.
    // 
    // > This parameter is deprecated.
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    // 
    // > This parameter is deprecated.
    shared_ptr<string> clusterName_ {};
    // The rule description.
    shared_ptr<string> description_ {};
    // The image names.
    shared_ptr<vector<string>> imageName_ {};
    // The container tags.
    shared_ptr<vector<string>> label_ {};
    // Specifies whether the rule supports malicious Internet images. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> maliciousImage_ {};
    // The action that is performed when the rule is hit. Valid values:
    // 
    // *   **1**: trigger alerts
    // *   **2**: block
    // *   **3**: allow
    shared_ptr<int32_t> ruleAction_ {};
    // The application scope of the rule.
    shared_ptr<vector<CreateOpaStrategyNewShrinkRequest::Scopes>> scopes_ {};
    // The rule ID.
    // 
    // >  You can call the [ListOpaClusterStrategyNew](https://help.aliyun.com/document_detail/2623574.html) operation to query the rule ID.
    // 
    // > This parameter is invalid when you create a rule.
    shared_ptr<int64_t> strategyId_ {};
    // The rule name.
    shared_ptr<string> strategyName_ {};
    // The ID of the rule template.
    // 
    // >  You can call the [GetOpaStrategyTemplateSummary](https://help.aliyun.com/document_detail/2539952.html) operation to query the ID of the rule template.
    shared_ptr<int64_t> strategyTemplateId_ {};
    // Specifies whether the rule supports unscanned images. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> unScanedImage_ {};
    // The whitelist.
    shared_ptr<vector<string>> whiteList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
