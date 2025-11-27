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
        && return this->cover_ == nullptr && return this->createTime_ == nullptr && return this->customId_ == nullptr && return this->customLabels_ == nullptr && return this->datasetName_ == nullptr
        && return this->faceCount_ == nullptr && return this->gender_ == nullptr && return this->imageCount_ == nullptr && return this->maxAge_ == nullptr && return this->metaLockVersion_ == nullptr
        && return this->minAge_ == nullptr && return this->name_ == nullptr && return this->objectId_ == nullptr && return this->objectType_ == nullptr && return this->ownerId_ == nullptr
        && return this->projectName_ == nullptr && return this->updateTime_ == nullptr && return this->videoCount_ == nullptr; };
    // averageAge Field Functions 
    bool hasAverageAge() const { return this->averageAge_ != nullptr;};
    void deleteAverageAge() { this->averageAge_ = nullptr;};
    inline float averageAge() const { DARABONBA_PTR_GET_DEFAULT(averageAge_, 0.0) };
    inline FigureCluster& setAverageAge(float averageAge) { DARABONBA_PTR_SET_VALUE(averageAge_, averageAge) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const File & cover() const { DARABONBA_PTR_GET_CONST(cover_, File) };
    inline File cover() { DARABONBA_PTR_GET(cover_, File) };
    inline FigureCluster& setCover(const File & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline FigureCluster& setCover(File && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline FigureCluster& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline FigureCluster& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline FigureCluster& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline FigureCluster& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline FigureCluster& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // faceCount Field Functions 
    bool hasFaceCount() const { return this->faceCount_ != nullptr;};
    void deleteFaceCount() { this->faceCount_ = nullptr;};
    inline int64_t faceCount() const { DARABONBA_PTR_GET_DEFAULT(faceCount_, 0L) };
    inline FigureCluster& setFaceCount(int64_t faceCount) { DARABONBA_PTR_SET_VALUE(faceCount_, faceCount) };


    // gender Field Functions 
    bool hasGender() const { return this->gender_ != nullptr;};
    void deleteGender() { this->gender_ = nullptr;};
    inline string gender() const { DARABONBA_PTR_GET_DEFAULT(gender_, "") };
    inline FigureCluster& setGender(string gender) { DARABONBA_PTR_SET_VALUE(gender_, gender) };


    // imageCount Field Functions 
    bool hasImageCount() const { return this->imageCount_ != nullptr;};
    void deleteImageCount() { this->imageCount_ = nullptr;};
    inline int64_t imageCount() const { DARABONBA_PTR_GET_DEFAULT(imageCount_, 0L) };
    inline FigureCluster& setImageCount(int64_t imageCount) { DARABONBA_PTR_SET_VALUE(imageCount_, imageCount) };


    // maxAge Field Functions 
    bool hasMaxAge() const { return this->maxAge_ != nullptr;};
    void deleteMaxAge() { this->maxAge_ = nullptr;};
    inline float maxAge() const { DARABONBA_PTR_GET_DEFAULT(maxAge_, 0.0) };
    inline FigureCluster& setMaxAge(float maxAge) { DARABONBA_PTR_SET_VALUE(maxAge_, maxAge) };


    // metaLockVersion Field Functions 
    bool hasMetaLockVersion() const { return this->metaLockVersion_ != nullptr;};
    void deleteMetaLockVersion() { this->metaLockVersion_ = nullptr;};
    inline int64_t metaLockVersion() const { DARABONBA_PTR_GET_DEFAULT(metaLockVersion_, 0L) };
    inline FigureCluster& setMetaLockVersion(int64_t metaLockVersion) { DARABONBA_PTR_SET_VALUE(metaLockVersion_, metaLockVersion) };


    // minAge Field Functions 
    bool hasMinAge() const { return this->minAge_ != nullptr;};
    void deleteMinAge() { this->minAge_ = nullptr;};
    inline float minAge() const { DARABONBA_PTR_GET_DEFAULT(minAge_, 0.0) };
    inline FigureCluster& setMinAge(float minAge) { DARABONBA_PTR_SET_VALUE(minAge_, minAge) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FigureCluster& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline FigureCluster& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline FigureCluster& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline FigureCluster& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline FigureCluster& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline FigureCluster& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // videoCount Field Functions 
    bool hasVideoCount() const { return this->videoCount_ != nullptr;};
    void deleteVideoCount() { this->videoCount_ = nullptr;};
    inline int64_t videoCount() const { DARABONBA_PTR_GET_DEFAULT(videoCount_, 0L) };
    inline FigureCluster& setVideoCount(int64_t videoCount) { DARABONBA_PTR_SET_VALUE(videoCount_, videoCount) };


  protected:
    std::shared_ptr<float> averageAge_ = nullptr;
    std::shared_ptr<File> cover_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> customId_ = nullptr;
    Darabonba::Json customLabels_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<int64_t> faceCount_ = nullptr;
    std::shared_ptr<string> gender_ = nullptr;
    std::shared_ptr<int64_t> imageCount_ = nullptr;
    std::shared_ptr<float> maxAge_ = nullptr;
    std::shared_ptr<int64_t> metaLockVersion_ = nullptr;
    std::shared_ptr<float> minAge_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int64_t> videoCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
