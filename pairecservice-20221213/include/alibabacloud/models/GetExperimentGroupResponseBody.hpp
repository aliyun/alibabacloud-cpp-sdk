// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetExperimentGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_TO_JSON(CrowdTargetType, crowdTargetType_);
      DARABONBA_PTR_TO_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_TO_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DistributionTimeDuration, distributionTimeDuration_);
      DARABONBA_PTR_TO_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HoldingBuckets, holdingBuckets_);
      DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NeedAA, needAA_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RandomFlow, randomFlow_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ReservedBuckets, reservedBuckets_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(CrowdId, crowdId_);
      DARABONBA_PTR_FROM_JSON(CrowdTargetType, crowdTargetType_);
      DARABONBA_PTR_FROM_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_FROM_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DistributionTimeDuration, distributionTimeDuration_);
      DARABONBA_PTR_FROM_JSON(DistributionType, distributionType_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HoldingBuckets, holdingBuckets_);
      DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NeedAA, needAA_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RandomFlow, randomFlow_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ReservedBuckets, reservedBuckets_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetExperimentGroupResponseBody() = default ;
    GetExperimentGroupResponseBody(const GetExperimentGroupResponseBody &) = default ;
    GetExperimentGroupResponseBody(GetExperimentGroupResponseBody &&) = default ;
    GetExperimentGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentGroupResponseBody() = default ;
    GetExperimentGroupResponseBody& operator=(const GetExperimentGroupResponseBody &) = default ;
    GetExperimentGroupResponseBody& operator=(GetExperimentGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->crowdId_ == nullptr && this->crowdTargetType_ == nullptr && this->debugCrowdId_ == nullptr && this->debugUsers_ == nullptr && this->description_ == nullptr
        && this->distributionTimeDuration_ == nullptr && this->distributionType_ == nullptr && this->filter_ == nullptr && this->holdingBuckets_ == nullptr && this->laboratoryId_ == nullptr
        && this->layerId_ == nullptr && this->name_ == nullptr && this->needAA_ == nullptr && this->owner_ == nullptr && this->randomFlow_ == nullptr
        && this->requestId_ == nullptr && this->reservedBuckets_ == nullptr && this->sceneId_ == nullptr && this->status_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetExperimentGroupResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // crowdId Field Functions 
    bool hasCrowdId() const { return this->crowdId_ != nullptr;};
    void deleteCrowdId() { this->crowdId_ = nullptr;};
    inline string getCrowdId() const { DARABONBA_PTR_GET_DEFAULT(crowdId_, "") };
    inline GetExperimentGroupResponseBody& setCrowdId(string crowdId) { DARABONBA_PTR_SET_VALUE(crowdId_, crowdId) };


    // crowdTargetType Field Functions 
    bool hasCrowdTargetType() const { return this->crowdTargetType_ != nullptr;};
    void deleteCrowdTargetType() { this->crowdTargetType_ = nullptr;};
    inline string getCrowdTargetType() const { DARABONBA_PTR_GET_DEFAULT(crowdTargetType_, "") };
    inline GetExperimentGroupResponseBody& setCrowdTargetType(string crowdTargetType) { DARABONBA_PTR_SET_VALUE(crowdTargetType_, crowdTargetType) };


    // debugCrowdId Field Functions 
    bool hasDebugCrowdId() const { return this->debugCrowdId_ != nullptr;};
    void deleteDebugCrowdId() { this->debugCrowdId_ = nullptr;};
    inline string getDebugCrowdId() const { DARABONBA_PTR_GET_DEFAULT(debugCrowdId_, "") };
    inline GetExperimentGroupResponseBody& setDebugCrowdId(string debugCrowdId) { DARABONBA_PTR_SET_VALUE(debugCrowdId_, debugCrowdId) };


    // debugUsers Field Functions 
    bool hasDebugUsers() const { return this->debugUsers_ != nullptr;};
    void deleteDebugUsers() { this->debugUsers_ = nullptr;};
    inline string getDebugUsers() const { DARABONBA_PTR_GET_DEFAULT(debugUsers_, "") };
    inline GetExperimentGroupResponseBody& setDebugUsers(string debugUsers) { DARABONBA_PTR_SET_VALUE(debugUsers_, debugUsers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetExperimentGroupResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // distributionTimeDuration Field Functions 
    bool hasDistributionTimeDuration() const { return this->distributionTimeDuration_ != nullptr;};
    void deleteDistributionTimeDuration() { this->distributionTimeDuration_ = nullptr;};
    inline int32_t getDistributionTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(distributionTimeDuration_, 0) };
    inline GetExperimentGroupResponseBody& setDistributionTimeDuration(int32_t distributionTimeDuration) { DARABONBA_PTR_SET_VALUE(distributionTimeDuration_, distributionTimeDuration) };


    // distributionType Field Functions 
    bool hasDistributionType() const { return this->distributionType_ != nullptr;};
    void deleteDistributionType() { this->distributionType_ = nullptr;};
    inline string getDistributionType() const { DARABONBA_PTR_GET_DEFAULT(distributionType_, "") };
    inline GetExperimentGroupResponseBody& setDistributionType(string distributionType) { DARABONBA_PTR_SET_VALUE(distributionType_, distributionType) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline GetExperimentGroupResponseBody& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // holdingBuckets Field Functions 
    bool hasHoldingBuckets() const { return this->holdingBuckets_ != nullptr;};
    void deleteHoldingBuckets() { this->holdingBuckets_ = nullptr;};
    inline string getHoldingBuckets() const { DARABONBA_PTR_GET_DEFAULT(holdingBuckets_, "") };
    inline GetExperimentGroupResponseBody& setHoldingBuckets(string holdingBuckets) { DARABONBA_PTR_SET_VALUE(holdingBuckets_, holdingBuckets) };


    // laboratoryId Field Functions 
    bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
    void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
    inline string getLaboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
    inline GetExperimentGroupResponseBody& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string getLayerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline GetExperimentGroupResponseBody& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetExperimentGroupResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // needAA Field Functions 
    bool hasNeedAA() const { return this->needAA_ != nullptr;};
    void deleteNeedAA() { this->needAA_ = nullptr;};
    inline bool getNeedAA() const { DARABONBA_PTR_GET_DEFAULT(needAA_, false) };
    inline GetExperimentGroupResponseBody& setNeedAA(bool needAA) { DARABONBA_PTR_SET_VALUE(needAA_, needAA) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetExperimentGroupResponseBody& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // randomFlow Field Functions 
    bool hasRandomFlow() const { return this->randomFlow_ != nullptr;};
    void deleteRandomFlow() { this->randomFlow_ = nullptr;};
    inline int64_t getRandomFlow() const { DARABONBA_PTR_GET_DEFAULT(randomFlow_, 0L) };
    inline GetExperimentGroupResponseBody& setRandomFlow(int64_t randomFlow) { DARABONBA_PTR_SET_VALUE(randomFlow_, randomFlow) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExperimentGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reservedBuckets Field Functions 
    bool hasReservedBuckets() const { return this->reservedBuckets_ != nullptr;};
    void deleteReservedBuckets() { this->reservedBuckets_ = nullptr;};
    inline string getReservedBuckets() const { DARABONBA_PTR_GET_DEFAULT(reservedBuckets_, "") };
    inline GetExperimentGroupResponseBody& setReservedBuckets(string reservedBuckets) { DARABONBA_PTR_SET_VALUE(reservedBuckets_, reservedBuckets) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetExperimentGroupResponseBody& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetExperimentGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<string> config_ {};
    shared_ptr<string> crowdId_ {};
    shared_ptr<string> crowdTargetType_ {};
    shared_ptr<string> debugCrowdId_ {};
    shared_ptr<string> debugUsers_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> distributionTimeDuration_ {};
    shared_ptr<string> distributionType_ {};
    shared_ptr<string> filter_ {};
    shared_ptr<string> holdingBuckets_ {};
    shared_ptr<string> laboratoryId_ {};
    shared_ptr<string> layerId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> needAA_ {};
    shared_ptr<string> owner_ {};
    shared_ptr<int64_t> randomFlow_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<string> reservedBuckets_ {};
    shared_ptr<string> sceneId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
