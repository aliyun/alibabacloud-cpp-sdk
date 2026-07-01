// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEPOINT_HPP_
#define ALIBABACLOUD_MODELS_SAVEPOINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SavepointStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class Savepoint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Savepoint& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(nativeFormat, nativeFormat_);
      DARABONBA_PTR_TO_JSON(savepointId, savepointId_);
      DARABONBA_PTR_TO_JSON(savepointLocation, savepointLocation_);
      DARABONBA_PTR_TO_JSON(savepointOrigin, savepointOrigin_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(stopWithDrainEnabled, stopWithDrainEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, Savepoint& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(deploymentId, deploymentId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(modifiedAt, modifiedAt_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(nativeFormat, nativeFormat_);
      DARABONBA_PTR_FROM_JSON(savepointId, savepointId_);
      DARABONBA_PTR_FROM_JSON(savepointLocation, savepointLocation_);
      DARABONBA_PTR_FROM_JSON(savepointOrigin, savepointOrigin_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(stopWithDrainEnabled, stopWithDrainEnabled_);
    };
    Savepoint() = default ;
    Savepoint(const Savepoint &) = default ;
    Savepoint(Savepoint &&) = default ;
    Savepoint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Savepoint() = default ;
    Savepoint& operator=(const Savepoint &) = default ;
    Savepoint& operator=(Savepoint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->deploymentId_ == nullptr && this->description_ == nullptr && this->jobId_ == nullptr && this->modifiedAt_ == nullptr && this->namespace_ == nullptr
        && this->nativeFormat_ == nullptr && this->savepointId_ == nullptr && this->savepointLocation_ == nullptr && this->savepointOrigin_ == nullptr && this->status_ == nullptr
        && this->stopWithDrainEnabled_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline Savepoint& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // deploymentId Field Functions 
    bool hasDeploymentId() const { return this->deploymentId_ != nullptr;};
    void deleteDeploymentId() { this->deploymentId_ = nullptr;};
    inline string getDeploymentId() const { DARABONBA_PTR_GET_DEFAULT(deploymentId_, "") };
    inline Savepoint& setDeploymentId(string deploymentId) { DARABONBA_PTR_SET_VALUE(deploymentId_, deploymentId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Savepoint& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline Savepoint& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // modifiedAt Field Functions 
    bool hasModifiedAt() const { return this->modifiedAt_ != nullptr;};
    void deleteModifiedAt() { this->modifiedAt_ = nullptr;};
    inline int64_t getModifiedAt() const { DARABONBA_PTR_GET_DEFAULT(modifiedAt_, 0L) };
    inline Savepoint& setModifiedAt(int64_t modifiedAt) { DARABONBA_PTR_SET_VALUE(modifiedAt_, modifiedAt) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline Savepoint& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // nativeFormat Field Functions 
    bool hasNativeFormat() const { return this->nativeFormat_ != nullptr;};
    void deleteNativeFormat() { this->nativeFormat_ = nullptr;};
    inline bool getNativeFormat() const { DARABONBA_PTR_GET_DEFAULT(nativeFormat_, false) };
    inline Savepoint& setNativeFormat(bool nativeFormat) { DARABONBA_PTR_SET_VALUE(nativeFormat_, nativeFormat) };


    // savepointId Field Functions 
    bool hasSavepointId() const { return this->savepointId_ != nullptr;};
    void deleteSavepointId() { this->savepointId_ = nullptr;};
    inline string getSavepointId() const { DARABONBA_PTR_GET_DEFAULT(savepointId_, "") };
    inline Savepoint& setSavepointId(string savepointId) { DARABONBA_PTR_SET_VALUE(savepointId_, savepointId) };


    // savepointLocation Field Functions 
    bool hasSavepointLocation() const { return this->savepointLocation_ != nullptr;};
    void deleteSavepointLocation() { this->savepointLocation_ = nullptr;};
    inline string getSavepointLocation() const { DARABONBA_PTR_GET_DEFAULT(savepointLocation_, "") };
    inline Savepoint& setSavepointLocation(string savepointLocation) { DARABONBA_PTR_SET_VALUE(savepointLocation_, savepointLocation) };


    // savepointOrigin Field Functions 
    bool hasSavepointOrigin() const { return this->savepointOrigin_ != nullptr;};
    void deleteSavepointOrigin() { this->savepointOrigin_ = nullptr;};
    inline string getSavepointOrigin() const { DARABONBA_PTR_GET_DEFAULT(savepointOrigin_, "") };
    inline Savepoint& setSavepointOrigin(string savepointOrigin) { DARABONBA_PTR_SET_VALUE(savepointOrigin_, savepointOrigin) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const SavepointStatus & getStatus() const { DARABONBA_PTR_GET_CONST(status_, SavepointStatus) };
    inline SavepointStatus getStatus() { DARABONBA_PTR_GET(status_, SavepointStatus) };
    inline Savepoint& setStatus(const SavepointStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline Savepoint& setStatus(SavepointStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // stopWithDrainEnabled Field Functions 
    bool hasStopWithDrainEnabled() const { return this->stopWithDrainEnabled_ != nullptr;};
    void deleteStopWithDrainEnabled() { this->stopWithDrainEnabled_ = nullptr;};
    inline bool getStopWithDrainEnabled() const { DARABONBA_PTR_GET_DEFAULT(stopWithDrainEnabled_, false) };
    inline Savepoint& setStopWithDrainEnabled(bool stopWithDrainEnabled) { DARABONBA_PTR_SET_VALUE(stopWithDrainEnabled_, stopWithDrainEnabled) };


  protected:
    // The time when the savepoint was created.
    shared_ptr<int64_t> createdAt_ {};
    // The deployment ID.
    shared_ptr<string> deploymentId_ {};
    // The description of the savepoint.
    shared_ptr<string> description_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The time when the savepoint was last modified.
    shared_ptr<int64_t> modifiedAt_ {};
    // The name of the namespace.
    shared_ptr<string> namespace_ {};
    // Specifies whether the savepoint is in native format.
    shared_ptr<bool> nativeFormat_ {};
    // The savepoint ID.
    shared_ptr<string> savepointId_ {};
    // The storage URL of the savepoint.
    shared_ptr<string> savepointLocation_ {};
    // The method that is used to create a savepoint.
    // 
    // - `USER_REQUEST`: The savepoint is manually created.
    // 
    // - `STOP_WITH_SAVEPOINT`: The savepoint is created when you cancel the deployment.
    // 
    // - `RETAINED_CHECKPOINT`: The savepoint is created based on the returned checkpoint.
    shared_ptr<string> savepointOrigin_ {};
    // The status of the savepoint.
    shared_ptr<SavepointStatus> status_ {};
    // Specifies whether to use the stop-with-drain mode.
    shared_ptr<bool> stopWithDrainEnabled_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
