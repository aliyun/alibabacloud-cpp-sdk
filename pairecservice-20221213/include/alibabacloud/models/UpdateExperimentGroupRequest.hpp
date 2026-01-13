// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEXPERIMENTGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEXPERIMENTGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class UpdateExperimentGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateExperimentGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_TO_JSON(CrowdTargetType, crowdTargetType_);
      DARABONBA_PTR_TO_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_TO_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DistributionTimeDuration, distributionTimeDuration_);
      DARABONBA_PTR_TO_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedAA, needAA_);
      DARABONBA_PTR_TO_JSON(RandomFlow, randomFlow_);
      DARABONBA_PTR_TO_JSON(ReservcedBuckets, reservcedBuckets_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateExperimentGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_FROM_JSON(CrowdTargetType, crowdTargetType_);
      DARABONBA_PTR_FROM_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_FROM_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DistributionTimeDuration, distributionTimeDuration_);
      DARABONBA_PTR_FROM_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedAA, needAA_);
      DARABONBA_PTR_FROM_JSON(RandomFlow, randomFlow_);
      DARABONBA_PTR_FROM_JSON(ReservcedBuckets, reservcedBuckets_);
    };
    UpdateExperimentGroupRequest() = default ;
    UpdateExperimentGroupRequest(const UpdateExperimentGroupRequest &) = default ;
    UpdateExperimentGroupRequest(UpdateExperimentGroupRequest &&) = default ;
    UpdateExperimentGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateExperimentGroupRequest() = default ;
    UpdateExperimentGroupRequest& operator=(const UpdateExperimentGroupRequest &) = default ;
    UpdateExperimentGroupRequest& operator=(UpdateExperimentGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->crowdId_ == nullptr && this->crowdTargetType_ == nullptr && this->debugCrowdId_ == nullptr && this->debugUsers_ == nullptr && this->description_ == nullptr
        && this->distributionTimeDuration_ == nullptr && this->distributionType_ == nullptr && this->filter_ == nullptr && this->instanceId_ == nullptr && this->layerId_ == nullptr
        && this->name_ == nullptr && this->needAA_ == nullptr && this->randomFlow_ == nullptr && this->reservcedBuckets_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline UpdateExperimentGroupRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // crowdId Field Functions 
    bool hasCrowdId() const { return this->crowdId_ != nullptr;};
    void deleteCrowdId() { this->crowdId_ = nullptr;};
    inline string getCrowdId() const { DARABONBA_PTR_GET_DEFAULT(crowdId_, "") };
    inline UpdateExperimentGroupRequest& setCrowdId(string crowdId) { DARABONBA_PTR_SET_VALUE(crowdId_, crowdId) };


    // crowdTargetType Field Functions 
    bool hasCrowdTargetType() const { return this->crowdTargetType_ != nullptr;};
    void deleteCrowdTargetType() { this->crowdTargetType_ = nullptr;};
    inline string getCrowdTargetType() const { DARABONBA_PTR_GET_DEFAULT(crowdTargetType_, "") };
    inline UpdateExperimentGroupRequest& setCrowdTargetType(string crowdTargetType) { DARABONBA_PTR_SET_VALUE(crowdTargetType_, crowdTargetType) };


    // debugCrowdId Field Functions 
    bool hasDebugCrowdId() const { return this->debugCrowdId_ != nullptr;};
    void deleteDebugCrowdId() { this->debugCrowdId_ = nullptr;};
    inline string getDebugCrowdId() const { DARABONBA_PTR_GET_DEFAULT(debugCrowdId_, "") };
    inline UpdateExperimentGroupRequest& setDebugCrowdId(string debugCrowdId) { DARABONBA_PTR_SET_VALUE(debugCrowdId_, debugCrowdId) };


    // debugUsers Field Functions 
    bool hasDebugUsers() const { return this->debugUsers_ != nullptr;};
    void deleteDebugUsers() { this->debugUsers_ = nullptr;};
    inline string getDebugUsers() const { DARABONBA_PTR_GET_DEFAULT(debugUsers_, "") };
    inline UpdateExperimentGroupRequest& setDebugUsers(string debugUsers) { DARABONBA_PTR_SET_VALUE(debugUsers_, debugUsers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateExperimentGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // distributionTimeDuration Field Functions 
    bool hasDistributionTimeDuration() const { return this->distributionTimeDuration_ != nullptr;};
    void deleteDistributionTimeDuration() { this->distributionTimeDuration_ = nullptr;};
    inline int32_t getDistributionTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(distributionTimeDuration_, 0) };
    inline UpdateExperimentGroupRequest& setDistributionTimeDuration(int32_t distributionTimeDuration) { DARABONBA_PTR_SET_VALUE(distributionTimeDuration_, distributionTimeDuration) };


    // distributionType Field Functions 
    bool hasDistributionType() const { return this->distributionType_ != nullptr;};
    void deleteDistributionType() { this->distributionType_ = nullptr;};
    inline string getDistributionType() const { DARABONBA_PTR_GET_DEFAULT(distributionType_, "") };
    inline UpdateExperimentGroupRequest& setDistributionType(string distributionType) { DARABONBA_PTR_SET_VALUE(distributionType_, distributionType) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline UpdateExperimentGroupRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateExperimentGroupRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string getLayerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline UpdateExperimentGroupRequest& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateExperimentGroupRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needAA Field Functions 
    bool hasNeedAA() const { return this->needAA_ != nullptr;};
    void deleteNeedAA() { this->needAA_ = nullptr;};
    inline bool getNeedAA() const { DARABONBA_PTR_GET_DEFAULT(needAA_, false) };
    inline UpdateExperimentGroupRequest& setNeedAA(bool needAA) { DARABONBA_PTR_SET_VALUE(needAA_, needAA) };


    // randomFlow Field Functions 
    bool hasRandomFlow() const { return this->randomFlow_ != nullptr;};
    void deleteRandomFlow() { this->randomFlow_ = nullptr;};
    inline int64_t getRandomFlow() const { DARABONBA_PTR_GET_DEFAULT(randomFlow_, 0L) };
    inline UpdateExperimentGroupRequest& setRandomFlow(int64_t randomFlow) { DARABONBA_PTR_SET_VALUE(randomFlow_, randomFlow) };


    // reservcedBuckets Field Functions 
    bool hasReservcedBuckets() const { return this->reservcedBuckets_ != nullptr;};
    void deleteReservcedBuckets() { this->reservcedBuckets_ = nullptr;};
    inline string getReservcedBuckets() const { DARABONBA_PTR_GET_DEFAULT(reservcedBuckets_, "") };
    inline UpdateExperimentGroupRequest& setReservcedBuckets(string reservcedBuckets) { DARABONBA_PTR_SET_VALUE(reservcedBuckets_, reservcedBuckets) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> crowdId_ {};
    shared_ptr<string> crowdTargetType_ {};
    shared_ptr<string> debugCrowdId_ {};
    shared_ptr<string> debugUsers_ {};
    // This parameter is required.
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> distributionTimeDuration_ {};
    shared_ptr<string> distributionType_ {};
    shared_ptr<string> filter_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> layerId_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    shared_ptr<bool> needAA_ {};
    shared_ptr<int64_t> randomFlow_ {};
    shared_ptr<string> reservcedBuckets_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
