// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPASTRATEGYNEWSHRINKREQUEST_HPP_
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
  class UpdateOpaStrategyNewShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOpaStrategyNewShrinkRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateOpaStrategyNewShrinkRequest& obj) { 
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
    UpdateOpaStrategyNewShrinkRequest() = default ;
    UpdateOpaStrategyNewShrinkRequest(const UpdateOpaStrategyNewShrinkRequest &) = default ;
    UpdateOpaStrategyNewShrinkRequest(UpdateOpaStrategyNewShrinkRequest &&) = default ;
    UpdateOpaStrategyNewShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOpaStrategyNewShrinkRequest() = default ;
    UpdateOpaStrategyNewShrinkRequest& operator=(const UpdateOpaStrategyNewShrinkRequest &) = default ;
    UpdateOpaStrategyNewShrinkRequest& operator=(UpdateOpaStrategyNewShrinkRequest &&) = default ;
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
      // The policy instance ID in the cluster.
      // > Call the [GetOpaStrategyDetailNew](~~GetOpaStrategyDetailNew~~) operation to obtain this parameter.
      shared_ptr<string> ackPolicyInstanceId_ {};
      // Specifies whether all namespaces are included. Valid values:
      // 
      // - **0**: No.
      // - **1**: Yes.
      shared_ptr<int32_t> allNamespace_ {};
      // The ID of the container cluster.
      // > Call the [DescribeGroupedContainerInstances](~~DescribeGroupedContainerInstances~~) operation to obtain this parameter.
      shared_ptr<string> clusterId_ {};
      // The list of namespaces.
      // 
      // >Notice: This parameter takes effect only when AllNamespace is set to 0..
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
    inline UpdateOpaStrategyNewShrinkRequest& setAlarmDetailShrink(string alarmDetailShrink) { DARABONBA_PTR_SET_VALUE(alarmDetailShrink_, alarmDetailShrink) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageName Field Functions 
    bool hasImageName() const { return this->imageName_ != nullptr;};
    void deleteImageName() { this->imageName_ = nullptr;};
    inline const vector<string> & getImageName() const { DARABONBA_PTR_GET_CONST(imageName_, vector<string>) };
    inline vector<string> getImageName() { DARABONBA_PTR_GET(imageName_, vector<string>) };
    inline UpdateOpaStrategyNewShrinkRequest& setImageName(const vector<string> & imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };
    inline UpdateOpaStrategyNewShrinkRequest& setImageName(vector<string> && imageName) { DARABONBA_PTR_SET_RVALUE(imageName_, imageName) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline const vector<string> & getLabel() const { DARABONBA_PTR_GET_CONST(label_, vector<string>) };
    inline vector<string> getLabel() { DARABONBA_PTR_GET(label_, vector<string>) };
    inline UpdateOpaStrategyNewShrinkRequest& setLabel(const vector<string> & label) { DARABONBA_PTR_SET_VALUE(label_, label) };
    inline UpdateOpaStrategyNewShrinkRequest& setLabel(vector<string> && label) { DARABONBA_PTR_SET_RVALUE(label_, label) };


    // maliciousImage Field Functions 
    bool hasMaliciousImage() const { return this->maliciousImage_ != nullptr;};
    void deleteMaliciousImage() { this->maliciousImage_ = nullptr;};
    inline bool getMaliciousImage() const { DARABONBA_PTR_GET_DEFAULT(maliciousImage_, false) };
    inline UpdateOpaStrategyNewShrinkRequest& setMaliciousImage(bool maliciousImage) { DARABONBA_PTR_SET_VALUE(maliciousImage_, maliciousImage) };


    // ruleAction Field Functions 
    bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
    void deleteRuleAction() { this->ruleAction_ = nullptr;};
    inline int32_t getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, 0) };
    inline UpdateOpaStrategyNewShrinkRequest& setRuleAction(int32_t ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


    // scopes Field Functions 
    bool hasScopes() const { return this->scopes_ != nullptr;};
    void deleteScopes() { this->scopes_ = nullptr;};
    inline const vector<UpdateOpaStrategyNewShrinkRequest::Scopes> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<UpdateOpaStrategyNewShrinkRequest::Scopes>) };
    inline vector<UpdateOpaStrategyNewShrinkRequest::Scopes> getScopes() { DARABONBA_PTR_GET(scopes_, vector<UpdateOpaStrategyNewShrinkRequest::Scopes>) };
    inline UpdateOpaStrategyNewShrinkRequest& setScopes(const vector<UpdateOpaStrategyNewShrinkRequest::Scopes> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
    inline UpdateOpaStrategyNewShrinkRequest& setScopes(vector<UpdateOpaStrategyNewShrinkRequest::Scopes> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline int64_t getStrategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, 0L) };
    inline UpdateOpaStrategyNewShrinkRequest& setStrategyId(int64_t strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string getStrategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline UpdateOpaStrategyNewShrinkRequest& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyTemplateId Field Functions 
    bool hasStrategyTemplateId() const { return this->strategyTemplateId_ != nullptr;};
    void deleteStrategyTemplateId() { this->strategyTemplateId_ = nullptr;};
    inline int64_t getStrategyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(strategyTemplateId_, 0L) };
    inline UpdateOpaStrategyNewShrinkRequest& setStrategyTemplateId(int64_t strategyTemplateId) { DARABONBA_PTR_SET_VALUE(strategyTemplateId_, strategyTemplateId) };


    // unScanedImage Field Functions 
    bool hasUnScanedImage() const { return this->unScanedImage_ != nullptr;};
    void deleteUnScanedImage() { this->unScanedImage_ = nullptr;};
    inline bool getUnScanedImage() const { DARABONBA_PTR_GET_DEFAULT(unScanedImage_, false) };
    inline UpdateOpaStrategyNewShrinkRequest& setUnScanedImage(bool unScanedImage) { DARABONBA_PTR_SET_VALUE(unScanedImage_, unScanedImage) };


    // whiteList Field Functions 
    bool hasWhiteList() const { return this->whiteList_ != nullptr;};
    void deleteWhiteList() { this->whiteList_ = nullptr;};
    inline const vector<string> & getWhiteList() const { DARABONBA_PTR_GET_CONST(whiteList_, vector<string>) };
    inline vector<string> getWhiteList() { DARABONBA_PTR_GET(whiteList_, vector<string>) };
    inline UpdateOpaStrategyNewShrinkRequest& setWhiteList(const vector<string> & whiteList) { DARABONBA_PTR_SET_VALUE(whiteList_, whiteList) };
    inline UpdateOpaStrategyNewShrinkRequest& setWhiteList(vector<string> && whiteList) { DARABONBA_PTR_SET_RVALUE(whiteList_, whiteList) };


  protected:
    // The alert content details included in the policy.
    shared_ptr<string> alarmDetailShrink_ {};
    // The cluster ID.
    // 
    // >Notice: This parameter is deprecated. Use the Scopes parameter to specify the scope of clusters to which the policy applies..
    shared_ptr<string> clusterId_ {};
    // The cluster name.
    // >Notice: This parameter is deprecated..
    shared_ptr<string> clusterName_ {};
    // The policy description.
    shared_ptr<string> description_ {};
    // The list of image names included in the policy.
    shared_ptr<vector<string>> imageName_ {};
    // The list of image tags included in the policy.
    shared_ptr<vector<string>> label_ {};
    // Specifies whether the policy supports Internet malicious images. Valid values:
    // 
    // - **true**: Supported.
    // - **false**: Not supported.
    shared_ptr<bool> maliciousImage_ {};
    // The action to take when the policy is hit. Valid values:
    // 
    // - **1**: Alert.
    // - **2**: Block.
    // - **3**: Allow.
    shared_ptr<int32_t> ruleAction_ {};
    // The scope of the policy.
    shared_ptr<vector<UpdateOpaStrategyNewShrinkRequest::Scopes>> scopes_ {};
    // The policy ID.
    // >Call the [ListOpaClusterStrategyNew](https://help.aliyun.com/document_detail/2623574.html) operation to obtain this parameter.
    shared_ptr<int64_t> strategyId_ {};
    // The policy name.
    shared_ptr<string> strategyName_ {};
    // The policy template ID.
    // >Call the [GetOpaStrategyTemplateSummary](https://help.aliyun.com/document_detail/2539952.html) operation to obtain this parameter.
    shared_ptr<int64_t> strategyTemplateId_ {};
    // Specifies whether the policy supports unscanned images. Valid values:
    // 
    // - **true**: Supported.
    // - **false**: Not supported.
    shared_ptr<bool> unScanedImage_ {};
    // The whitelist.
    shared_ptr<vector<string>> whiteList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
