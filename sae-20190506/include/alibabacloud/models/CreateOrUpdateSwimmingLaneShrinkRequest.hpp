// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppEntryRule, appEntryRuleShrink_);
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(LaneName, laneName_);
      DARABONBA_PTR_TO_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_TO_JSON(MseGatewayEntryRule, mseGatewayEntryRuleShrink_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEntryRule, appEntryRuleShrink_);
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(LaneName, laneName_);
      DARABONBA_PTR_FROM_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_FROM_JSON(MseGatewayEntryRule, mseGatewayEntryRuleShrink_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    CreateOrUpdateSwimmingLaneShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest(const CreateOrUpdateSwimmingLaneShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest(CreateOrUpdateSwimmingLaneShrinkRequest &&) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneShrinkRequest() = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest& operator=(const CreateOrUpdateSwimmingLaneShrinkRequest &) = default ;
    CreateOrUpdateSwimmingLaneShrinkRequest& operator=(CreateOrUpdateSwimmingLaneShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appEntryRuleShrink_ != nullptr
        && this->canaryModel_ != nullptr && this->enable_ != nullptr && this->groupId_ != nullptr && this->laneId_ != nullptr && this->laneName_ != nullptr
        && this->laneTag_ != nullptr && this->mseGatewayEntryRuleShrink_ != nullptr && this->namespaceId_ != nullptr; };
    // appEntryRuleShrink Field Functions 
    bool hasAppEntryRuleShrink() const { return this->appEntryRuleShrink_ != nullptr;};
    void deleteAppEntryRuleShrink() { this->appEntryRuleShrink_ = nullptr;};
    inline string appEntryRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(appEntryRuleShrink_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setAppEntryRuleShrink(string appEntryRuleShrink) { DARABONBA_PTR_SET_VALUE(appEntryRuleShrink_, appEntryRuleShrink) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // laneName Field Functions 
    bool hasLaneName() const { return this->laneName_ != nullptr;};
    void deleteLaneName() { this->laneName_ = nullptr;};
    inline string laneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


    // laneTag Field Functions 
    bool hasLaneTag() const { return this->laneTag_ != nullptr;};
    void deleteLaneTag() { this->laneTag_ = nullptr;};
    inline string laneTag() const { DARABONBA_PTR_GET_DEFAULT(laneTag_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setLaneTag(string laneTag) { DARABONBA_PTR_SET_VALUE(laneTag_, laneTag) };


    // mseGatewayEntryRuleShrink Field Functions 
    bool hasMseGatewayEntryRuleShrink() const { return this->mseGatewayEntryRuleShrink_ != nullptr;};
    void deleteMseGatewayEntryRuleShrink() { this->mseGatewayEntryRuleShrink_ = nullptr;};
    inline string mseGatewayEntryRuleShrink() const { DARABONBA_PTR_GET_DEFAULT(mseGatewayEntryRuleShrink_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setMseGatewayEntryRuleShrink(string mseGatewayEntryRuleShrink) { DARABONBA_PTR_SET_VALUE(mseGatewayEntryRuleShrink_, mseGatewayEntryRuleShrink) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateOrUpdateSwimmingLaneShrinkRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    std::shared_ptr<string> appEntryRuleShrink_ = nullptr;
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<int64_t> laneId_ = nullptr;
    std::shared_ptr<string> laneName_ = nullptr;
    std::shared_ptr<string> laneTag_ = nullptr;
    std::shared_ptr<string> mseGatewayEntryRuleShrink_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
