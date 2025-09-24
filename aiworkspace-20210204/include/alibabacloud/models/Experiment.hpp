// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPERIMENT_HPP_
#define ALIBABACLOUD_MODELS_EXPERIMENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExperimentLabel.hpp>
#include <alibabacloud/models/Run.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AIWorkSpace20210204
{
namespace Models
{
  class Experiment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Experiment& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(ArtifactUri, artifactUri_);
      DARABONBA_PTR_TO_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestRun, latestRun_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TensorboardLogUri, tensorboardLogUri_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, Experiment& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(ArtifactUri, artifactUri_);
      DARABONBA_PTR_FROM_JSON(ExperimentId, experimentId_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestRun, latestRun_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TensorboardLogUri, tensorboardLogUri_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    Experiment() = default ;
    Experiment(const Experiment &) = default ;
    Experiment(Experiment &&) = default ;
    Experiment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Experiment() = default ;
    Experiment& operator=(const Experiment &) = default ;
    Experiment& operator=(Experiment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessibility_ != nullptr
        && this->artifactUri_ != nullptr && this->experimentId_ != nullptr && this->gmtCreateTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->labels_ != nullptr
        && this->latestRun_ != nullptr && this->name_ != nullptr && this->ownerId_ != nullptr && this->requestId_ != nullptr && this->tensorboardLogUri_ != nullptr
        && this->userId_ != nullptr && this->workspaceId_ != nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline Experiment& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // artifactUri Field Functions 
    bool hasArtifactUri() const { return this->artifactUri_ != nullptr;};
    void deleteArtifactUri() { this->artifactUri_ = nullptr;};
    inline string artifactUri() const { DARABONBA_PTR_GET_DEFAULT(artifactUri_, "") };
    inline Experiment& setArtifactUri(string artifactUri) { DARABONBA_PTR_SET_VALUE(artifactUri_, artifactUri) };


    // experimentId Field Functions 
    bool hasExperimentId() const { return this->experimentId_ != nullptr;};
    void deleteExperimentId() { this->experimentId_ = nullptr;};
    inline string experimentId() const { DARABONBA_PTR_GET_DEFAULT(experimentId_, "") };
    inline Experiment& setExperimentId(string experimentId) { DARABONBA_PTR_SET_VALUE(experimentId_, experimentId) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline Experiment& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline Experiment& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<ExperimentLabel> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<ExperimentLabel>) };
    inline vector<ExperimentLabel> labels() { DARABONBA_PTR_GET(labels_, vector<ExperimentLabel>) };
    inline Experiment& setLabels(const vector<ExperimentLabel> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline Experiment& setLabels(vector<ExperimentLabel> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestRun Field Functions 
    bool hasLatestRun() const { return this->latestRun_ != nullptr;};
    void deleteLatestRun() { this->latestRun_ = nullptr;};
    inline const Run & latestRun() const { DARABONBA_PTR_GET_CONST(latestRun_, Run) };
    inline Run latestRun() { DARABONBA_PTR_GET(latestRun_, Run) };
    inline Experiment& setLatestRun(const Run & latestRun) { DARABONBA_PTR_SET_VALUE(latestRun_, latestRun) };
    inline Experiment& setLatestRun(Run && latestRun) { DARABONBA_PTR_SET_RVALUE(latestRun_, latestRun) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Experiment& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline Experiment& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Experiment& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tensorboardLogUri Field Functions 
    bool hasTensorboardLogUri() const { return this->tensorboardLogUri_ != nullptr;};
    void deleteTensorboardLogUri() { this->tensorboardLogUri_ = nullptr;};
    inline string tensorboardLogUri() const { DARABONBA_PTR_GET_DEFAULT(tensorboardLogUri_, "") };
    inline Experiment& setTensorboardLogUri(string tensorboardLogUri) { DARABONBA_PTR_SET_VALUE(tensorboardLogUri_, tensorboardLogUri) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline Experiment& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline Experiment& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<string> artifactUri_ = nullptr;
    std::shared_ptr<string> experimentId_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<vector<ExperimentLabel>> labels_ = nullptr;
    std::shared_ptr<Run> latestRun_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> tensorboardLogUri_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AIWorkSpace20210204
#endif
