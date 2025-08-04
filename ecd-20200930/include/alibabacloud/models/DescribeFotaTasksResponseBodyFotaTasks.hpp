// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSRESPONSEBODYFOTATASKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFOTATASKSRESPONSEBODYFOTATASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeFotaTasksResponseBodyFotaTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFotaTasksResponseBodyFotaTasks& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(FotaProject, fotaProject_);
      DARABONBA_PTR_TO_JSON(PendingCustomImageCount, pendingCustomImageCount_);
      DARABONBA_PTR_TO_JSON(PendingDesktopCount, pendingDesktopCount_);
      DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_TO_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskUid, taskUid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFotaTasksResponseBodyFotaTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(FotaProject, fotaProject_);
      DARABONBA_PTR_FROM_JSON(PendingCustomImageCount, pendingCustomImageCount_);
      DARABONBA_PTR_FROM_JSON(PendingDesktopCount, pendingDesktopCount_);
      DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
      DARABONBA_PTR_FROM_JSON(ReleaseNote, releaseNote_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskUid, taskUid_);
    };
    DescribeFotaTasksResponseBodyFotaTasks() = default ;
    DescribeFotaTasksResponseBodyFotaTasks(const DescribeFotaTasksResponseBodyFotaTasks &) = default ;
    DescribeFotaTasksResponseBodyFotaTasks(DescribeFotaTasksResponseBodyFotaTasks &&) = default ;
    DescribeFotaTasksResponseBodyFotaTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFotaTasksResponseBodyFotaTasks() = default ;
    DescribeFotaTasksResponseBodyFotaTasks& operator=(const DescribeFotaTasksResponseBodyFotaTasks &) = default ;
    DescribeFotaTasksResponseBodyFotaTasks& operator=(DescribeFotaTasksResponseBodyFotaTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appVersion_ != nullptr
        && this->fotaProject_ != nullptr && this->pendingCustomImageCount_ != nullptr && this->pendingDesktopCount_ != nullptr && this->publishTime_ != nullptr && this->releaseNote_ != nullptr
        && this->size_ != nullptr && this->status_ != nullptr && this->taskUid_ != nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline DescribeFotaTasksResponseBodyFotaTasks& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // fotaProject Field Functions 
    bool hasFotaProject() const { return this->fotaProject_ != nullptr;};
    void deleteFotaProject() { this->fotaProject_ = nullptr;};
    inline string fotaProject() const { DARABONBA_PTR_GET_DEFAULT(fotaProject_, "") };
    inline DescribeFotaTasksResponseBodyFotaTasks& setFotaProject(string fotaProject) { DARABONBA_PTR_SET_VALUE(fotaProject_, fotaProject) };


    // pendingCustomImageCount Field Functions 
    bool hasPendingCustomImageCount() const { return this->pendingCustomImageCount_ != nullptr;};
    void deletePendingCustomImageCount() { this->pendingCustomImageCount_ = nullptr;};
    inline int32_t pendingCustomImageCount() const { DARABONBA_PTR_GET_DEFAULT(pendingCustomImageCount_, 0) };
    inline DescribeFotaTasksResponseBodyFotaTasks& setPendingCustomImageCount(int32_t pendingCustomImageCount) { DARABONBA_PTR_SET_VALUE(pendingCustomImageCount_, pendingCustomImageCount) };


    // pendingDesktopCount Field Functions 
    bool hasPendingDesktopCount() const { return this->pendingDesktopCount_ != nullptr;};
    void deletePendingDesktopCount() { this->pendingDesktopCount_ = nullptr;};
    inline int32_t pendingDesktopCount() const { DARABONBA_PTR_GET_DEFAULT(pendingDesktopCount_, 0) };
    inline DescribeFotaTasksResponseBodyFotaTasks& setPendingDesktopCount(int32_t pendingDesktopCount) { DARABONBA_PTR_SET_VALUE(pendingDesktopCount_, pendingDesktopCount) };


    // publishTime Field Functions 
    bool hasPublishTime() const { return this->publishTime_ != nullptr;};
    void deletePublishTime() { this->publishTime_ = nullptr;};
    inline string publishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
    inline DescribeFotaTasksResponseBodyFotaTasks& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


    // releaseNote Field Functions 
    bool hasReleaseNote() const { return this->releaseNote_ != nullptr;};
    void deleteReleaseNote() { this->releaseNote_ = nullptr;};
    inline string releaseNote() const { DARABONBA_PTR_GET_DEFAULT(releaseNote_, "") };
    inline DescribeFotaTasksResponseBodyFotaTasks& setReleaseNote(string releaseNote) { DARABONBA_PTR_SET_VALUE(releaseNote_, releaseNote) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline DescribeFotaTasksResponseBodyFotaTasks& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeFotaTasksResponseBodyFotaTasks& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskUid Field Functions 
    bool hasTaskUid() const { return this->taskUid_ != nullptr;};
    void deleteTaskUid() { this->taskUid_ = nullptr;};
    inline string taskUid() const { DARABONBA_PTR_GET_DEFAULT(taskUid_, "") };
    inline DescribeFotaTasksResponseBodyFotaTasks& setTaskUid(string taskUid) { DARABONBA_PTR_SET_VALUE(taskUid_, taskUid) };


  protected:
    // The image version. You can call the [DescribeImages](https://help.aliyun.com/document_detail/188895.html) operation to obtain the value of this parameter.
    std::shared_ptr<string> appVersion_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<string> fotaProject_ = nullptr;
    // The number of custom images that can be updated to this version.
    std::shared_ptr<int32_t> pendingCustomImageCount_ = nullptr;
    // The number of cloud computers whose images can be updated to this version.
    std::shared_ptr<int32_t> pendingDesktopCount_ = nullptr;
    // The time when the image version available for update was published.
    std::shared_ptr<string> publishTime_ = nullptr;
    // The description of the image version available for update.
    std::shared_ptr<string> releaseNote_ = nullptr;
    // The size of the update package. Unit: KB.
    std::shared_ptr<int32_t> size_ = nullptr;
    // Indicates whether the image update task is automatically pushed.
    // 
    // Valid values:
    // 
    // *   Running: automatically pushes the image update task.
    // *   Pending: does not automatically push the image update task.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the image upgrade task.
    std::shared_ptr<string> taskUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
