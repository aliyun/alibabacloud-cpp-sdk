// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BINDING_HPP_
#define ALIBABACLOUD_MODELS_BINDING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Binding : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Binding& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(URI, URI_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, Binding& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(URI, URI_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    Binding() = default ;
    Binding(const Binding &) = default ;
    Binding(Binding &&) = default ;
    Binding(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Binding() = default ;
    Binding& operator=(const Binding &) = default ;
    Binding& operator=(Binding &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->datasetName_ == nullptr && this->phase_ == nullptr && this->projectName_ == nullptr && this->reason_ == nullptr && this->state_ == nullptr
        && this->URI_ == nullptr && this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Binding& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline Binding& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string getPhase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline Binding& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline Binding& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline Binding& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline Binding& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // URI Field Functions 
    bool hasURI() const { return this->URI_ != nullptr;};
    void deleteURI() { this->URI_ = nullptr;};
    inline string getURI() const { DARABONBA_PTR_GET_DEFAULT(URI_, "") };
    inline Binding& setURI(string URI) { DARABONBA_PTR_SET_VALUE(URI_, URI) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Binding& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The timestamp when the binding between the dataset and the OSS bucket was created. The format is RFC3339Nano.
    shared_ptr<string> createTime_ {};
    // The name of the dataset.
    shared_ptr<string> datasetName_ {};
    // The scan type. Valid values:
    // 
    // - FullScanning: A full scan is in progress.
    // 
    // - IncrementalScanning: An incremental scan is in progress.
    shared_ptr<string> phase_ {};
    // The name of the project.
    shared_ptr<string> projectName_ {};
    // Reason
    shared_ptr<string> reason_ {};
    // The state of the binding between the dataset and the OSS bucket. Valid values:
    // 
    // - Ready: The binding is being prepared after it is created.
    // 
    // - Stopped: The binding is paused.
    // 
    // - Running: The binding is running.
    // 
    // - Retrying: The binding is being retried after it is created.
    // 
    // - Failed: The binding failed to be created.
    // 
    // - Deleted: The binding is deleted.
    shared_ptr<string> state_ {};
    // The URI of the Object Storage Service (OSS) bucket attached to the dataset.
    // 
    // The format of an OSS bucket URI is `oss://${bucketname}`. The `bucketname` is the name of an OSS bucket that is in the same region as the current project.
    shared_ptr<string> URI_ {};
    // The timestamp when the binding between the dataset and the OSS bucket was last modified. The format is RFC3339Nano.
    // 
    // > After a binding is created, if the binding has not been paused or restarted, this timestamp is the same as the creation timestamp.
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
