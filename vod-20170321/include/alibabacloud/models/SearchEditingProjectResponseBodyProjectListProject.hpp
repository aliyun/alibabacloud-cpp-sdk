// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODYPROJECTLISTPROJECT_HPP_
#define ALIBABACLOUD_MODELS_SEARCHEDITINGPROJECTRESPONSEBODYPROJECTLISTPROJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchEditingProjectResponseBodyProjectListProject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchEditingProjectResponseBodyProjectListProject& obj) { 
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, SearchEditingProjectResponseBodyProjectListProject& obj) { 
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StorageLocation, storageLocation_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    SearchEditingProjectResponseBodyProjectListProject() = default ;
    SearchEditingProjectResponseBodyProjectListProject(const SearchEditingProjectResponseBodyProjectListProject &) = default ;
    SearchEditingProjectResponseBodyProjectListProject(SearchEditingProjectResponseBodyProjectListProject &&) = default ;
    SearchEditingProjectResponseBodyProjectListProject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchEditingProjectResponseBodyProjectListProject() = default ;
    SearchEditingProjectResponseBodyProjectListProject& operator=(const SearchEditingProjectResponseBodyProjectListProject &) = default ;
    SearchEditingProjectResponseBodyProjectListProject& operator=(SearchEditingProjectResponseBodyProjectListProject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->coverURL_ != nullptr
        && this->creationTime_ != nullptr && this->description_ != nullptr && this->duration_ != nullptr && this->modifiedTime_ != nullptr && this->projectId_ != nullptr
        && this->regionId_ != nullptr && this->status_ != nullptr && this->storageLocation_ != nullptr && this->title_ != nullptr; };
    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline SearchEditingProjectResponseBodyProjectListProject& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // storageLocation Field Functions 
    bool hasStorageLocation() const { return this->storageLocation_ != nullptr;};
    void deleteStorageLocation() { this->storageLocation_ = nullptr;};
    inline string storageLocation() const { DARABONBA_PTR_GET_DEFAULT(storageLocation_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setStorageLocation(string storageLocation) { DARABONBA_PTR_SET_VALUE(storageLocation_, storageLocation) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchEditingProjectResponseBodyProjectListProject& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The thumbnail URL of the online editing project.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The time when the online editing project was created. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The description of the online editing project.
    std::shared_ptr<string> description_ = nullptr;
    // The duration of the online editing project, which must be consistent with the duration of the timeline.
    // > The Timeline parameter is not included in response parameters.
    std::shared_ptr<float> duration_ = nullptr;
    // The last time when the online editing project was modified. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The ID of the online editing project.
    std::shared_ptr<string> projectId_ = nullptr;
    // The region where the online editing project was created.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the online editing project. Separate multiple states with commas (,). By default, all online editing projects were queried. Valid values:
    // *   **Normal**: indicates that the online editing project is in draft.
    // *   **Producing**: indicates that the video is being produced.
    // *   **Produced**: indicates that the video was produced.
    // *   **ProduceFailed**: indicates that the video failed to be produced.
    std::shared_ptr<string> status_ = nullptr;
    // The path of the Object Storage Service (OSS) bucket where the produced video is stored.
    // > To view the path of the OSS bucket, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com/?spm=a2c4g.11186623.2.15.6948257eaZ4m54#/vod/settings/censored), and choose **Configuration Management** > **Media Management** > **Storage**. On the Storage page, you can view the path of the OSS bucket.
    std::shared_ptr<string> storageLocation_ = nullptr;
    // The title of the online editing project.
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
