// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJENKINSIMAGESCANTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEJENKINSIMAGESCANTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateJenkinsImageScanTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJenkinsImageScanTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_TO_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJenkinsImageScanTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageScanCapacity, imageScanCapacity_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoInstanceId, repoInstanceId_);
      DARABONBA_PTR_FROM_JSON(RepoRegionId, repoRegionId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    CreateJenkinsImageScanTaskResponseBodyData() = default ;
    CreateJenkinsImageScanTaskResponseBodyData(const CreateJenkinsImageScanTaskResponseBodyData &) = default ;
    CreateJenkinsImageScanTaskResponseBodyData(CreateJenkinsImageScanTaskResponseBodyData &&) = default ;
    CreateJenkinsImageScanTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJenkinsImageScanTaskResponseBodyData() = default ;
    CreateJenkinsImageScanTaskResponseBodyData& operator=(const CreateJenkinsImageScanTaskResponseBodyData &) = default ;
    CreateJenkinsImageScanTaskResponseBodyData& operator=(CreateJenkinsImageScanTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->imageScanCapacity_ != nullptr
        && this->repoId_ != nullptr && this->repoInstanceId_ != nullptr && this->repoRegionId_ != nullptr && this->taskId_ != nullptr && this->uuid_ != nullptr; };
    // imageScanCapacity Field Functions 
    bool hasImageScanCapacity() const { return this->imageScanCapacity_ != nullptr;};
    void deleteImageScanCapacity() { this->imageScanCapacity_ = nullptr;};
    inline int64_t imageScanCapacity() const { DARABONBA_PTR_GET_DEFAULT(imageScanCapacity_, 0L) };
    inline CreateJenkinsImageScanTaskResponseBodyData& setImageScanCapacity(int64_t imageScanCapacity) { DARABONBA_PTR_SET_VALUE(imageScanCapacity_, imageScanCapacity) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline CreateJenkinsImageScanTaskResponseBodyData& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoInstanceId Field Functions 
    bool hasRepoInstanceId() const { return this->repoInstanceId_ != nullptr;};
    void deleteRepoInstanceId() { this->repoInstanceId_ = nullptr;};
    inline string repoInstanceId() const { DARABONBA_PTR_GET_DEFAULT(repoInstanceId_, "") };
    inline CreateJenkinsImageScanTaskResponseBodyData& setRepoInstanceId(string repoInstanceId) { DARABONBA_PTR_SET_VALUE(repoInstanceId_, repoInstanceId) };


    // repoRegionId Field Functions 
    bool hasRepoRegionId() const { return this->repoRegionId_ != nullptr;};
    void deleteRepoRegionId() { this->repoRegionId_ = nullptr;};
    inline string repoRegionId() const { DARABONBA_PTR_GET_DEFAULT(repoRegionId_, "") };
    inline CreateJenkinsImageScanTaskResponseBodyData& setRepoRegionId(string repoRegionId) { DARABONBA_PTR_SET_VALUE(repoRegionId_, repoRegionId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateJenkinsImageScanTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline CreateJenkinsImageScanTaskResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The quota for image scan.
    std::shared_ptr<int64_t> imageScanCapacity_ = nullptr;
    // The ID of the image repository.
    std::shared_ptr<string> repoId_ = nullptr;
    // The instance ID of the image repository.
    std::shared_ptr<string> repoInstanceId_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> repoRegionId_ = nullptr;
    // The ID of the scan task.
    std::shared_ptr<string> taskId_ = nullptr;
    // The UUID of the image asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
