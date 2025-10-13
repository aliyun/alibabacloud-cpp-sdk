// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATESWIMMINGLANEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneRequestAppEntryRule.hpp>
#include <alibabacloud/models/CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class CreateOrUpdateSwimmingLaneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppEntryRule, appEntryRule_);
      DARABONBA_PTR_TO_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(LaneId, laneId_);
      DARABONBA_PTR_TO_JSON(LaneName, laneName_);
      DARABONBA_PTR_TO_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_TO_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateSwimmingLaneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppEntryRule, appEntryRule_);
      DARABONBA_PTR_FROM_JSON(CanaryModel, canaryModel_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(LaneId, laneId_);
      DARABONBA_PTR_FROM_JSON(LaneName, laneName_);
      DARABONBA_PTR_FROM_JSON(LaneTag, laneTag_);
      DARABONBA_PTR_FROM_JSON(MseGatewayEntryRule, mseGatewayEntryRule_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
    };
    CreateOrUpdateSwimmingLaneRequest() = default ;
    CreateOrUpdateSwimmingLaneRequest(const CreateOrUpdateSwimmingLaneRequest &) = default ;
    CreateOrUpdateSwimmingLaneRequest(CreateOrUpdateSwimmingLaneRequest &&) = default ;
    CreateOrUpdateSwimmingLaneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateSwimmingLaneRequest() = default ;
    CreateOrUpdateSwimmingLaneRequest& operator=(const CreateOrUpdateSwimmingLaneRequest &) = default ;
    CreateOrUpdateSwimmingLaneRequest& operator=(CreateOrUpdateSwimmingLaneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appEntryRule_ == nullptr
        && return this->canaryModel_ == nullptr && return this->enable_ == nullptr && return this->groupId_ == nullptr && return this->laneId_ == nullptr && return this->laneName_ == nullptr
        && return this->laneTag_ == nullptr && return this->mseGatewayEntryRule_ == nullptr && return this->namespaceId_ == nullptr; };
    // appEntryRule Field Functions 
    bool hasAppEntryRule() const { return this->appEntryRule_ != nullptr;};
    void deleteAppEntryRule() { this->appEntryRule_ = nullptr;};
    inline const CreateOrUpdateSwimmingLaneRequestAppEntryRule & appEntryRule() const { DARABONBA_PTR_GET_CONST(appEntryRule_, CreateOrUpdateSwimmingLaneRequestAppEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequestAppEntryRule appEntryRule() { DARABONBA_PTR_GET(appEntryRule_, CreateOrUpdateSwimmingLaneRequestAppEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setAppEntryRule(const CreateOrUpdateSwimmingLaneRequestAppEntryRule & appEntryRule) { DARABONBA_PTR_SET_VALUE(appEntryRule_, appEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setAppEntryRule(CreateOrUpdateSwimmingLaneRequestAppEntryRule && appEntryRule) { DARABONBA_PTR_SET_RVALUE(appEntryRule_, appEntryRule) };


    // canaryModel Field Functions 
    bool hasCanaryModel() const { return this->canaryModel_ != nullptr;};
    void deleteCanaryModel() { this->canaryModel_ = nullptr;};
    inline int32_t canaryModel() const { DARABONBA_PTR_GET_DEFAULT(canaryModel_, 0) };
    inline CreateOrUpdateSwimmingLaneRequest& setCanaryModel(int32_t canaryModel) { DARABONBA_PTR_SET_VALUE(canaryModel_, canaryModel) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline CreateOrUpdateSwimmingLaneRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline CreateOrUpdateSwimmingLaneRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // laneId Field Functions 
    bool hasLaneId() const { return this->laneId_ != nullptr;};
    void deleteLaneId() { this->laneId_ = nullptr;};
    inline int64_t laneId() const { DARABONBA_PTR_GET_DEFAULT(laneId_, 0L) };
    inline CreateOrUpdateSwimmingLaneRequest& setLaneId(int64_t laneId) { DARABONBA_PTR_SET_VALUE(laneId_, laneId) };


    // laneName Field Functions 
    bool hasLaneName() const { return this->laneName_ != nullptr;};
    void deleteLaneName() { this->laneName_ = nullptr;};
    inline string laneName() const { DARABONBA_PTR_GET_DEFAULT(laneName_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setLaneName(string laneName) { DARABONBA_PTR_SET_VALUE(laneName_, laneName) };


    // laneTag Field Functions 
    bool hasLaneTag() const { return this->laneTag_ != nullptr;};
    void deleteLaneTag() { this->laneTag_ = nullptr;};
    inline string laneTag() const { DARABONBA_PTR_GET_DEFAULT(laneTag_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setLaneTag(string laneTag) { DARABONBA_PTR_SET_VALUE(laneTag_, laneTag) };


    // mseGatewayEntryRule Field Functions 
    bool hasMseGatewayEntryRule() const { return this->mseGatewayEntryRule_ != nullptr;};
    void deleteMseGatewayEntryRule() { this->mseGatewayEntryRule_ = nullptr;};
    inline const CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule & mseGatewayEntryRule() const { DARABONBA_PTR_GET_CONST(mseGatewayEntryRule_, CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule mseGatewayEntryRule() { DARABONBA_PTR_GET(mseGatewayEntryRule_, CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setMseGatewayEntryRule(const CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule & mseGatewayEntryRule) { DARABONBA_PTR_SET_VALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };
    inline CreateOrUpdateSwimmingLaneRequest& setMseGatewayEntryRule(CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule && mseGatewayEntryRule) { DARABONBA_PTR_SET_RVALUE(mseGatewayEntryRule_, mseGatewayEntryRule) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateOrUpdateSwimmingLaneRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


  protected:
    std::shared_ptr<CreateOrUpdateSwimmingLaneRequestAppEntryRule> appEntryRule_ = nullptr;
    std::shared_ptr<int32_t> canaryModel_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<int64_t> laneId_ = nullptr;
    std::shared_ptr<string> laneName_ = nullptr;
    std::shared_ptr<string> laneTag_ = nullptr;
    std::shared_ptr<CreateOrUpdateSwimmingLaneRequestMseGatewayEntryRule> mseGatewayEntryRule_ = nullptr;
    std::shared_ptr<string> namespaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
