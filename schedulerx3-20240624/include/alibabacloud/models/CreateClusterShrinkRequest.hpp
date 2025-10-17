// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECLUSTERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateClusterShrinkRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SchedulerX320240624
{
namespace Models
{
  class CreateClusterShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitchesShrink_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateClusterShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(ClusterSpec, clusterSpec_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(PricingCycle, pricingCycle_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitchesShrink_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    CreateClusterShrinkRequest() = default ;
    CreateClusterShrinkRequest(const CreateClusterShrinkRequest &) = default ;
    CreateClusterShrinkRequest(CreateClusterShrinkRequest &&) = default ;
    CreateClusterShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateClusterShrinkRequest() = default ;
    CreateClusterShrinkRequest& operator=(const CreateClusterShrinkRequest &) = default ;
    CreateClusterShrinkRequest& operator=(CreateClusterShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->chargeType_ == nullptr
        && return this->clusterName_ == nullptr && return this->clusterSpec_ == nullptr && return this->duration_ == nullptr && return this->engineType_ == nullptr && return this->pricingCycle_ == nullptr
        && return this->tag_ == nullptr && return this->vSwitchesShrink_ == nullptr && return this->vpcId_ == nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline CreateClusterShrinkRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateClusterShrinkRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // clusterSpec Field Functions 
    bool hasClusterSpec() const { return this->clusterSpec_ != nullptr;};
    void deleteClusterSpec() { this->clusterSpec_ = nullptr;};
    inline string clusterSpec() const { DARABONBA_PTR_GET_DEFAULT(clusterSpec_, "") };
    inline CreateClusterShrinkRequest& setClusterSpec(string clusterSpec) { DARABONBA_PTR_SET_VALUE(clusterSpec_, clusterSpec) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline CreateClusterShrinkRequest& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string engineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreateClusterShrinkRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // pricingCycle Field Functions 
    bool hasPricingCycle() const { return this->pricingCycle_ != nullptr;};
    void deletePricingCycle() { this->pricingCycle_ = nullptr;};
    inline string pricingCycle() const { DARABONBA_PTR_GET_DEFAULT(pricingCycle_, "") };
    inline CreateClusterShrinkRequest& setPricingCycle(string pricingCycle) { DARABONBA_PTR_SET_VALUE(pricingCycle_, pricingCycle) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateClusterShrinkRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateClusterShrinkRequestTag>) };
    inline vector<CreateClusterShrinkRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateClusterShrinkRequestTag>) };
    inline CreateClusterShrinkRequest& setTag(const vector<CreateClusterShrinkRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateClusterShrinkRequest& setTag(vector<CreateClusterShrinkRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // vSwitchesShrink Field Functions 
    bool hasVSwitchesShrink() const { return this->vSwitchesShrink_ != nullptr;};
    void deleteVSwitchesShrink() { this->vSwitchesShrink_ = nullptr;};
    inline string vSwitchesShrink() const { DARABONBA_PTR_GET_DEFAULT(vSwitchesShrink_, "") };
    inline CreateClusterShrinkRequest& setVSwitchesShrink(string vSwitchesShrink) { DARABONBA_PTR_SET_VALUE(vSwitchesShrink_, vSwitchesShrink) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline CreateClusterShrinkRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<string> chargeType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> clusterSpec_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> engineType_ = nullptr;
    std::shared_ptr<string> pricingCycle_ = nullptr;
    std::shared_ptr<vector<CreateClusterShrinkRequestTag>> tag_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vSwitchesShrink_ = nullptr;
    // VPC id
    // 
    // This parameter is required.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SchedulerX320240624
#endif
