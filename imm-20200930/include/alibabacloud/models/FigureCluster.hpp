// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FIGURECLUSTER_HPP_
#define ALIBABACLOUD_MODELS_FIGURECLUSTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/File.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class FigureCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FigureCluster& obj) { 
      DARABONBA_PTR_TO_JSON(AverageAge, averageAge_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_TO_JSON(Gender, gender_);
      DARABONBA_PTR_TO_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_TO_JSON(MaxAge, maxAge_);
      DARABONBA_PTR_TO_JSON(MetaLockVersion, metaLockVersion_);
      DARABONBA_PTR_TO_JSON(MinAge, minAge_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VideoCount, videoCount_);
    };
    friend void from_json(const Darabonba::Json& j, FigureCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(AverageAge, averageAge_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(FaceCount, faceCount_);
      DARABONBA_PTR_FROM_JSON(Gender, gender_);
      DARABONBA_PTR_FROM_JSON(ImageCount, imageCount_);
      DARABONBA_PTR_FROM_JSON(MaxAge, maxAge_);
      DARABONBA_PTR_FROM_JSON(MetaLockVersion, metaLockVersion_);
      DARABONBA_PTR_FROM_JSON(MinAge, minAge_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VideoCount, videoCount_);
    };
    FigureCluster() = default ;
    FigureCluster(const FigureCluster &) = default ;
    FigureCluster(FigureCluster &&) = default ;
    FigureCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FigureCluster() = default ;
    FigureCluster& operator=(const FigureCluster &) = default ;
    FigureCluster& operator=(FigureCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->averageAge_ == nullptr
        && this->cover_ == nullptr && this->createTime_ == nullptr && this->customId_ == nullptr && this->customLabels_ == nullptr && this->datasetName_ == nullptr
        && this->faceCount_ == nullptr && this->gender_ == nullptr && this->imageCount_ == nullptr && this->maxAge_ == nullptr && this->metaLockVersion_ == nullptr
        && this->minAge_ == nullptr && this->name_ == nullptr && this->objectId_ == nullptr && this->objectType_ == nullptr && this->ownerId_ == nullptr
        && this->projectName_ == nullptr && this->updateTime_ == nullptr && this->videoCount_ == nullptr; };
    // averageAge Field Functions 
    bool hasAverageAge() const { return this->averageAge_ != nullptr;};
    void deleteAverageAge() { this->averageAge_ = nullptr;};
    inline float getAverageAge() const { DARABONBA_PTR_GET_DEFAULT(averageAge_, 0.0) };
    inline FigureCluster& setAverageAge(float averageAge) { DARABONBA_PTR_SET_VALUE(averageAge_, averageAge) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const File & getCover() const { DARABONBA_PTR_GET_CONST(cover_, File) };
    inline File getCover() { DARABONBA_PTR_GET(cover_, File) };
    inline FigureCluster& setCover(const File & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline FigureCluster& setCover(File && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline FigureCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string getCustomId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline FigureCluster& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & getCustomLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & getCustomLabels() { DARABONBA_GET(customLabels_) };
    inline FigureCluster& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline FigureCluster& setCustomLabels(Darabonba::Json && customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline FigureCluster& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // faceCount Field Functions 
    bool hasFaceCount() const { return this->faceCount_ != nullptr;};
    void deleteFaceCount() { this->faceCount_ = nullptr;};
    inline int64_t getFaceCount() const { DARABONBA_PTR_GET_DEFAULT(faceCount_, 0L) };
    inline FigureCluster& setFaceCount(int64_t faceCount) { DARABONBA_PTR_SET_VALUE(faceCount_, faceCount) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string getGender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline FigureCluster& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int64_t getImageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0L) };
    inline FigureCluster& setImageCount(int64_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline float getMaxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0.0) };
    inline FigureCluster& setMaxAge(float maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


    // metaLockVersion Field Functions 
    bool hasMetaLockVersion() const { return this->metaLockVersion_ != nullptr;};
    void deleteMetaLockVersion() { this->metaLockVersion_ = nullptr;};
    inline int64_t getMetaLockVersion() const { DARABONBA_PTR_GET_DEFAULT(metaLockVersion_, 0L) };
    inline FigureCluster& setMetaLockVersion(int64_t metaLockVersion) { DARABONBA_PTR_SET_VALUE(metaLockVersion_, metaLockVersion) };


    // minAge Field Functions 
    bool hasMinAge() const { return this->minAge_ != nullptr;};
    void deleteMinAge() { this->minAge_ = nullptr;};
    inline float getMinAge() const { DARABONBA_PTR_GET_DEFAULT(minAge_, 0.0) };
    inline FigureCluster& setMinAge(float minAge) { DARABONBA_PTR_SET_VALUE(minAge_, minAge) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FigureCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string getObjectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline FigureCluster& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string getObjectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline FigureCluster& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline FigureCluster& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline FigureCluster& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline FigureCluster& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // videoCount Field Functions 
    bool hasVideoCount() const { return this->videoCount_ != nullptr;};
    void deleteVideoCount() { this->videoCount_ = nullptr;};
    inline int64_t getVideoCount() const { DARABONBA_PTR_GET_DEFAULT(videoCount_, 0L) };
    inline FigureCluster& setVideoCount(int64_t videoCount) { DARABONBA_PTR_SET_VALUE(videoCount_, videoCount) };


  protected:
    // The average age.
    shared_ptr<float> averageAge_ {};
    // The cover image.
    shared_ptr<File> cover_ {};
    // The creation time.
    shared_ptr<string> createTime_ {};
    // The custom ID.
    shared_ptr<string> customId_ {};
    // The custom labels. You can search for clusters by label.
    Darabonba::Json customLabels_ {};
    // The name of the dataset.
    shared_ptr<string> datasetName_ {};
    // The number of faces.
    shared_ptr<int64_t> faceCount_ {};
    // The gender.
    shared_ptr<string> gender_ {};
    // The number of images.
    shared_ptr<int64_t> imageCount_ {};
    // The maximum age.
    shared_ptr<float> maxAge_ {};
    // The version of the metadata lock. A metadata lock version can be obtained by using a get or list operation. If you include the MetaLockVersion parameter in a request to update the cluster, the server checks consistency between the MetaLockVersion parameter value sent in the request and the one on the server side and updates the cluster only when they are consistent. This parameter prevents update conflicts in concurrent scenarios. The initial version is 0. The version is automatically increased by 1 after each successful update.
    shared_ptr<int64_t> metaLockVersion_ {};
    // The minimum age.
    shared_ptr<float> minAge_ {};
    // The name of the cluster.
    shared_ptr<string> name_ {};
    // The ID of the cluster.
    shared_ptr<string> objectId_ {};
    // The type of the cluster.
    shared_ptr<string> objectType_ {};
    // The user ID.
    shared_ptr<string> ownerId_ {};
    // The name of the project.
    shared_ptr<string> projectName_ {};
    // The update time.
    shared_ptr<string> updateTime_ {};
    // The number of videos.
    shared_ptr<int64_t> videoCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
