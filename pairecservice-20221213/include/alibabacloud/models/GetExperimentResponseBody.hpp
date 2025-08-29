// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEXPERIMENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEXPERIMENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class GetExperimentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetExperimentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AliasExperimentId, aliasExperimentId_);
      DARABONBA_PTR_TO_JSON(Buckets, buckets_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_TO_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_TO_JSON(FlowPercent, flowPercent_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_TO_JSON(LayerId, layerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetExperimentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasExperimentId, aliasExperimentId_);
      DARABONBA_PTR_FROM_JSON(Buckets, buckets_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(DebugCrowdId, debugCrowdId_);
      DARABONBA_PTR_FROM_JSON(DebugUsers, debugUsers_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExperimentGroupId, experimentGroupId_);
      DARABONBA_PTR_FROM_JSON(FlowPercent, flowPercent_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(LaboratoryId, laboratoryId_);
      DARABONBA_PTR_FROM_JSON(LayerId, layerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetExperimentResponseBody() = default ;
    GetExperimentResponseBody(const GetExperimentResponseBody &) = default ;
    GetExperimentResponseBody(GetExperimentResponseBody &&) = default ;
    GetExperimentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetExperimentResponseBody() = default ;
    GetExperimentResponseBody& operator=(const GetExperimentResponseBody &) = default ;
    GetExperimentResponseBody& operator=(GetExperimentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasExperimentId_ != nullptr
        && this->buckets_ != nullptr && this->config_ != nullptr && this->debugCrowdId_ != nullptr && this->debugUsers_ != nullptr && this->description_ != nullptr
        && this->experimentGroupId_ != nullptr && this->flowPercent_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->laboratoryId_ != nullptr
        && this->layerId_ != nullptr && this->name_ != nullptr && this->requestId_ != nullptr && this->sceneId_ != nullptr && this->status_ != nullptr
        && this->type_ != nullptr; };
    // aliasExperimentId Field Functions 
    bool hasAliasExperimentId() const { return this->aliasExperimentId_ != nullptr;};
    void deleteAliasExperimentId() { this->aliasExperimentId_ = nullptr;};
    inline string aliasExperimentId() const { DARABONBA_PTR_GET_DEFAULT(aliasExperimentId_, "") };
    inline GetExperimentResponseBody& setAliasExperimentId(string aliasExperimentId) { DARABONBA_PTR_SET_VALUE(aliasExperimentId_, aliasExperimentId) };


    // buckets Field Functions 
    bool hasBuckets() const { return this->buckets_ != nullptr;};
    void deleteBuckets() { this->buckets_ = nullptr;};
    inline string buckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
    inline GetExperimentResponseBody& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline GetExperimentResponseBody& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // debugCrowdId Field Functions 
    bool hasDebugCrowdId() const { return this->debugCrowdId_ != nullptr;};
    void deleteDebugCrowdId() { this->debugCrowdId_ = nullptr;};
    inline string debugCrowdId() const { DARABONBA_PTR_GET_DEFAULT(debugCrowdId_, "") };
    inline GetExperimentResponseBody& setDebugCrowdId(string debugCrowdId) { DARABONBA_PTR_SET_VALUE(debugCrowdId_, debugCrowdId) };


    // debugUsers Field Functions 
    bool hasDebugUsers() const { return this->debugUsers_ != nullptr;};
    void deleteDebugUsers() { this->debugUsers_ = nullptr;};
    inline string debugUsers() const { DARABONBA_PTR_GET_DEFAULT(debugUsers_, "") };
    inline GetExperimentResponseBody& setDebugUsers(string debugUsers) { DARABONBA_PTR_SET_VALUE(debugUsers_, debugUsers) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetExperimentResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // experimentGroupId Field Functions 
    bool hasExperimentGroupId() const { return this->experimentGroupId_ != nullptr;};
    void deleteExperimentGroupId() { this->experimentGroupId_ = nullptr;};
    inline string experimentGroupId() const { DARABONBA_PTR_GET_DEFAULT(experimentGroupId_, "") };
    inline GetExperimentResponseBody& setExperimentGroupId(string experimentGroupId) { DARABONBA_PTR_SET_VALUE(experimentGroupId_, experimentGroupId) };


    // flowPercent Field Functions 
    bool hasFlowPercent() const { return this->flowPercent_ != nullptr;};
    void deleteFlowPercent() { this->flowPercent_ = nullptr;};
    inline int32_t flowPercent() const { DARABONBA_PTR_GET_DEFAULT(flowPercent_, 0) };
    inline GetExperimentResponseBody& setFlowPercent(int32_t flowPercent) { DARABONBA_PTR_SET_VALUE(flowPercent_, flowPercent) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetExperimentResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetExperimentResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // laboratoryId Field Functions 
    bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
    void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
    inline string laboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
    inline GetExperimentResponseBody& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


    // layerId Field Functions 
    bool hasLayerId() const { return this->layerId_ != nullptr;};
    void deleteLayerId() { this->layerId_ = nullptr;};
    inline string layerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
    inline GetExperimentResponseBody& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetExperimentResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetExperimentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline GetExperimentResponseBody& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetExperimentResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetExperimentResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> aliasExperimentId_ = nullptr;
    std::shared_ptr<string> buckets_ = nullptr;
    std::shared_ptr<string> config_ = nullptr;
    std::shared_ptr<string> debugCrowdId_ = nullptr;
    std::shared_ptr<string> debugUsers_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> experimentGroupId_ = nullptr;
    std::shared_ptr<int32_t> flowPercent_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> laboratoryId_ = nullptr;
    std::shared_ptr<string> layerId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
