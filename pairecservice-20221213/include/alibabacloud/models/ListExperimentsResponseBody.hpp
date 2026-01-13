// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPERIMENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPERIMENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListExperimentsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExperimentsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Experiments, experiments_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListExperimentsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Experiments, experiments_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListExperimentsResponseBody() = default ;
    ListExperimentsResponseBody(const ListExperimentsResponseBody &) = default ;
    ListExperimentsResponseBody(ListExperimentsResponseBody &&) = default ;
    ListExperimentsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExperimentsResponseBody() = default ;
    ListExperimentsResponseBody& operator=(const ListExperimentsResponseBody &) = default ;
    ListExperimentsResponseBody& operator=(ListExperimentsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Experiments : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Experiments& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Experiments& obj) { 
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
      Experiments() = default ;
      Experiments(const Experiments &) = default ;
      Experiments(Experiments &&) = default ;
      Experiments(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Experiments() = default ;
      Experiments& operator=(const Experiments &) = default ;
      Experiments& operator=(Experiments &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->aliasExperimentId_ == nullptr
        && this->buckets_ == nullptr && this->config_ == nullptr && this->debugCrowdId_ == nullptr && this->debugUsers_ == nullptr && this->description_ == nullptr
        && this->experimentGroupId_ == nullptr && this->experimentId_ == nullptr && this->flowPercent_ == nullptr && this->gmtCreateTime_ == nullptr && this->gmtModifiedTime_ == nullptr
        && this->laboratoryId_ == nullptr && this->layerId_ == nullptr && this->name_ == nullptr && this->sceneId_ == nullptr && this->status_ == nullptr
        && this->type_ == nullptr; };
      // aliasExperimentId Field Functions 
      bool hasAliasExperimentId() const { return this->aliasExperimentId_ != nullptr;};
      void deleteAliasExperimentId() { this->aliasExperimentId_ = nullptr;};
      inline string getAliasExperimentId() const { DARABONBA_PTR_GET_DEFAULT(aliasExperimentId_, "") };
      inline Experiments& setAliasExperimentId(string aliasExperimentId) { DARABONBA_PTR_SET_VALUE(aliasExperimentId_, aliasExperimentId) };


      // buckets Field Functions 
      bool hasBuckets() const { return this->buckets_ != nullptr;};
      void deleteBuckets() { this->buckets_ = nullptr;};
      inline string getBuckets() const { DARABONBA_PTR_GET_DEFAULT(buckets_, "") };
      inline Experiments& setBuckets(string buckets) { DARABONBA_PTR_SET_VALUE(buckets_, buckets) };


      // config Field Functions 
      bool hasConfig() const { return this->config_ != nullptr;};
      void deleteConfig() { this->config_ = nullptr;};
      inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
      inline Experiments& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


      // debugCrowdId Field Functions 
      bool hasDebugCrowdId() const { return this->debugCrowdId_ != nullptr;};
      void deleteDebugCrowdId() { this->debugCrowdId_ = nullptr;};
      inline string getDebugCrowdId() const { DARABONBA_PTR_GET_DEFAULT(debugCrowdId_, "") };
      inline Experiments& setDebugCrowdId(string debugCrowdId) { DARABONBA_PTR_SET_VALUE(debugCrowdId_, debugCrowdId) };


      // debugUsers Field Functions 
      bool hasDebugUsers() const { return this->debugUsers_ != nullptr;};
      void deleteDebugUsers() { this->debugUsers_ = nullptr;};
      inline string getDebugUsers() const { DARABONBA_PTR_GET_DEFAULT(debugUsers_, "") };
      inline Experiments& setDebugUsers(string debugUsers) { DARABONBA_PTR_SET_VALUE(debugUsers_, debugUsers) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Experiments& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // experimentGroupId Field Functions 
      bool hasExperimentGroupId() const { return this->experimentGroupId_ != nullptr;};
      void deleteExperimentGroupId() { this->experimentGroupId_ = nullptr;};
      inline string getExperimentGroupId() const { DARABONBA_PTR_GET_DEFAULT(experimentGroupId_, "") };
      inline Experiments& setExperimentGroupId(string experimentGroupId) { DARABONBA_PTR_SET_VALUE(experimentGroupId_, experimentGroupId) };


      // experimentId Field Functions 
      bool hasExperimentId() const { return this->experimentId_ != nullptr;};
      void deleteExperimentId() { this->experimentId_ = nullptr;};
      inline string getExperimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
      inline Experiments& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


      // flowPercent Field Functions 
      bool hasFlowPercent() const { return this->flowPercent_ != nullptr;};
      void deleteFlowPercent() { this->flowPercent_ = nullptr;};
      inline int32_t getFlowPercent() const { DARABONBA_PTR_GET_DEFAULT(flowPercent_, 0) };
      inline Experiments& setFlowPercent(int32_t flowPercent) { DARABONBA_PTR_SET_VALUE(flowPercent_, flowPercent) };


      // gmtCreateTime Field Functions 
      bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
      void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
      inline string getGmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
      inline Experiments& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


      // gmtModifiedTime Field Functions 
      bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
      void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
      inline string getGmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
      inline Experiments& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


      // laboratoryId Field Functions 
      bool hasLaboratoryId() const { return this->laboratoryId_ != nullptr;};
      void deleteLaboratoryId() { this->laboratoryId_ = nullptr;};
      inline string getLaboratoryId() const { DARABONBA_PTR_GET_DEFAULT(laboratoryId_, "") };
      inline Experiments& setLaboratoryId(string laboratoryId) { DARABONBA_PTR_SET_VALUE(laboratoryId_, laboratoryId) };


      // layerId Field Functions 
      bool hasLayerId() const { return this->layerId_ != nullptr;};
      void deleteLayerId() { this->layerId_ = nullptr;};
      inline string getLayerId() const { DARABONBA_PTR_GET_DEFAULT(layerId_, "") };
      inline Experiments& setLayerId(string layerId) { DARABONBA_PTR_SET_VALUE(layerId_, layerId) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Experiments& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // sceneId Field Functions 
      bool hasSceneId() const { return this->sceneId_ != nullptr;};
      void deleteSceneId() { this->sceneId_ = nullptr;};
      inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
      inline Experiments& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Experiments& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Experiments& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> aliasExperimentId_ {};
      shared_ptr<string> buckets_ {};
      shared_ptr<string> config_ {};
      shared_ptr<string> debugCrowdId_ {};
      shared_ptr<string> debugUsers_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> experimentGroupId_ {};
      shared_ptr<string> experimentId_ {};
      shared_ptr<int32_t> flowPercent_ {};
      shared_ptr<string> gmtCreateTime_ {};
      shared_ptr<string> gmtModifiedTime_ {};
      shared_ptr<string> laboratoryId_ {};
      shared_ptr<string> layerId_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> sceneId_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->experiments_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // experiments Field Functions 
    bool hasExperiments() const { return this->experiments_ != nullptr;};
    void deleteExperiments() { this->experiments_ = nullptr;};
    inline const vector<ListExperimentsResponseBody::Experiments> & getExperiments() const { DARABONBA_PTR_GET_CONST(experiments_, vector<ListExperimentsResponseBody::Experiments>) };
    inline vector<ListExperimentsResponseBody::Experiments> getExperiments() { DARABONBA_PTR_GET(experiments_, vector<ListExperimentsResponseBody::Experiments>) };
    inline ListExperimentsResponseBody& setExperiments(const vector<ListExperimentsResponseBody::Experiments> & experiments) { DARABONBA_PTR_SET_VALUE(experiments_, experiments) };
    inline ListExperimentsResponseBody& setExperiments(vector<ListExperimentsResponseBody::Experiments> && experiments) { DARABONBA_PTR_SET_RVALUE(experiments_, experiments) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListExperimentsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListExperimentsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListExperimentsResponseBody::Experiments>> experiments_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
