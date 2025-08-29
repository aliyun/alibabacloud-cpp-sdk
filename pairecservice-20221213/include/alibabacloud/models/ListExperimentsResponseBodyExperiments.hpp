// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTSRESPONSEBODYEXPERIMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTSRESPONSEBODYEXPERIMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListExperimentsResponseBodyExperiments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentsResponseBodyExperiments& obj) { 
      DARABONBA_PTR_TO_JSON(AliasExperimentId, aliasExperimentId_);
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_TO_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(FlowPercent, flowPercent_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentsResponseBodyExperiments& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasExperimentId, aliasExperimentId_);
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_FROM_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(FlowPercent, flowPercent_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListExperimentsResponseBodyExperiments() = default ;
    ListExperimentsResponseBodyExperiments(const ListExperimentsResponseBodyExperiments &) = default ;
    ListExperimentsResponseBodyExperiments(ListExperimentsResponseBodyExperiments &&) = default ;
    ListExperimentsResponseBodyExperiments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentsResponseBodyExperiments() = default ;
    ListExperimentsResponseBodyExperiments& operator=(const ListExperimentsResponseBodyExperiments &) = default ;
    ListExperimentsResponseBodyExperiments& operator=(ListExperimentsResponseBodyExperiments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasExperimentId_ != nullptr
        && this->buckets_ != nullptr && this->config_ != nullptr && this->debugCrowdId_ != nullptr && this->debugUsers_ != nullptr && this->description_ != nullptr
        && this->experimentGroupId_ != nullptr && this->experimentId_ != nullptr && this->flowPercent_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr
        && this->laboratoryId_ != nullptr && this->layerId_ != nullptr && this->name_ != nullptr && this->sceneId_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr; };
    // aliasExperimentId Field Functions 
    bool hasAliasExperimentId() const { return this->aliasExperimentId_ != nullptr;};
    void deleteAliasExperimentId() { this->aliasExperimentId_ = nullptr;};
    inline string aliasExperimentId() const { DARABONBA_PTR_GET_DEFAULT(aliasExperimentId_, "") };
    inline ListExperimentsResponseBodyExperiments& setAliasExperimentId(string aliasExperimentId) { DARABONBA_PTR_SET_VALUE(aliasExperimentId_, aliasExperimentId) };


    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string buckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline ListExperimentsResponseBodyExperiments& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ListExperimentsResponseBodyExperiments& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // debugCrowdId Field Functions 
    bool hasDebugCrowdId() const { return this->debugCrowdId_ != nullptr;};
    void deleteDebugCrowdId() { this->debugCrowdId_ = nullptr;};
    inline string debugCrowdId() const { DARABONBA_PTR_GET_DEFAULT(debugCrowdId_, "") };
    inline ListExperimentsResponseBodyExperiments& setDebugCrowdId(string debugCrowdId) { DARABONBA_PTR_SET_VALUE(debugCrowdId_, debugCrowdId) };


    // debugUsers Field Functions 
    bool hasDebugUsers() const { return this->debugUsers_ != nullptr;};
    void deleteDebugUsers() { this->debugUsers_ = nullptr;};
    inline string debugUsers() const { DARABONBA_PTR_GET_DEFAULT(debugUsers_, "") };
    inline ListExperimentsResponseBodyExperiments& setDebugUsers(string debugUsers) { DARABONBA_PTR_SET_VALUE(debugUsers_, debugUsers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListExperimentsResponseBodyExperiments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // experimentGroupId Field Functions 
    bool hasExperimentGroupId() const { return this->experimentGroupId_ != nullptr;};
    void deleteExperimentGroupId() { this->experimentGroupId_ = nullptr;};
    inline string experimentGroupId() const { DARABONBA_PTR_GET_DEFAULT(experimentGroupId_, "") };
    inline ListExperimentsResponseBodyExperiments& setExperimentGroupId(string experimentGroupId) { DARABONBA_PTR_SET_VALUE(experimentGroupId_, experimentGroupId) };


    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline ListExperimentsResponseBodyExperiments& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // flowPercent Field Functions 
    bool hasFlowPercent() const { return this->flowPercent_ != nullptr;};
    void deleteFlowPercent() { this->flowPercent_ = nullptr;};
    inline int32_t flowPercent() const { DARABONBA_PTR_GET_DEFAULT(flowPercent_, 0) };
    inline ListExperimentsResponseBodyExperiments& setFlowPercent(int32_t flowPercent) { DARABONBA_PTR_SET_VALUE(flowPercent_, flowPercent) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline ListExperimentsResponseBodyExperiments& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline ListExperimentsResponseBodyExperiments& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // laboratoryId Field Functions 
    bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
    void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
    inline string laboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
    inline ListExperimentsResponseBodyExperiments& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string layerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline ListExperimentsResponseBodyExperiments& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListExperimentsResponseBodyExperiments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListExperimentsResponseBodyExperiments& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExperimentsResponseBodyExperiments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListExperimentsResponseBodyExperiments& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliasExperimentId_ = nullptr;
    std::shared_ptr<string> buckets_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> debugCrowdId_ = nullptr;
    std::shared_ptr<string> debugUsers_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> experimentGroupId_ = nullptr;
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<int32_t> flowPercent_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> laboratoryId_ = nullptr;
    std::shared_ptr<string> layerId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
