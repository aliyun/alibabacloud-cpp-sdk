// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STORY_HPP_
#define ALIBABACLOUD_MODELS_STORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Address.hpp>
#include <alibabacloud/models/File.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Story : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Story& obj) { 
      DARABONBA_PTR_TO_JSON(Addresses, addresses_);
      DARABONBA_PTR_TO_JSON(Cover, cover_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CustomId, customId_);
      DARABONBA_ANY_TO_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(FigureClusterIds, figureClusterIds_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(ObjectId, objectId_);
      DARABONBA_PTR_TO_JSON(ObjectType, objectType_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(StoryEndTime, storyEndTime_);
      DARABONBA_PTR_TO_JSON(StoryName, storyName_);
      DARABONBA_PTR_TO_JSON(StoryStartTime, storyStartTime_);
      DARABONBA_PTR_TO_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_TO_JSON(StoryType, storyType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, Story& obj) { 
      DARABONBA_PTR_FROM_JSON(Addresses, addresses_);
      DARABONBA_PTR_FROM_JSON(Cover, cover_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CustomId, customId_);
      DARABONBA_ANY_FROM_JSON(CustomLabels, customLabels_);
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(FigureClusterIds, figureClusterIds_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(ObjectId, objectId_);
      DARABONBA_PTR_FROM_JSON(ObjectType, objectType_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(StoryEndTime, storyEndTime_);
      DARABONBA_PTR_FROM_JSON(StoryName, storyName_);
      DARABONBA_PTR_FROM_JSON(StoryStartTime, storyStartTime_);
      DARABONBA_PTR_FROM_JSON(StorySubType, storySubType_);
      DARABONBA_PTR_FROM_JSON(StoryType, storyType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    Story() = default ;
    Story(const Story &) = default ;
    Story(Story &&) = default ;
    Story(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Story() = default ;
    Story& operator=(const Story &) = default ;
    Story& operator=(Story &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addresses_ == nullptr
        && return this->cover_ == nullptr && return this->createTime_ == nullptr && return this->customId_ == nullptr && return this->customLabels_ == nullptr && return this->datasetName_ == nullptr
        && return this->figureClusterIds_ == nullptr && return this->files_ == nullptr && return this->objectId_ == nullptr && return this->objectType_ == nullptr && return this->ownerId_ == nullptr
        && return this->projectName_ == nullptr && return this->storyEndTime_ == nullptr && return this->storyName_ == nullptr && return this->storyStartTime_ == nullptr && return this->storySubType_ == nullptr
        && return this->storyType_ == nullptr && return this->updateTime_ == nullptr; };
    // addresses Field Functions 
    bool hasAddresses() const { return this->addresses_ != nullptr;};
    void deleteAddresses() { this->addresses_ = nullptr;};
    inline const vector<Address> & addresses() const { DARABONBA_PTR_GET_CONST(addresses_, vector<Address>) };
    inline vector<Address> addresses() { DARABONBA_PTR_GET(addresses_, vector<Address>) };
    inline Story& setAddresses(const vector<Address> & addresses) { DARABONBA_PTR_SET_VALUE(addresses_, addresses) };
    inline Story& setAddresses(vector<Address> && addresses) { DARABONBA_PTR_SET_RVALUE(addresses_, addresses) };


    // cover Field Functions 
    bool hasCover() const { return this->cover_ != nullptr;};
    void deleteCover() { this->cover_ = nullptr;};
    inline const File & cover() const { DARABONBA_PTR_GET_CONST(cover_, File) };
    inline File cover() { DARABONBA_PTR_GET(cover_, File) };
    inline Story& setCover(const File & cover) { DARABONBA_PTR_SET_VALUE(cover_, cover) };
    inline Story& setCover(File && cover) { DARABONBA_PTR_SET_RVALUE(cover_, cover) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline Story& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // customId Field Functions 
    bool hasCustomId() const { return this->customId_ != nullptr;};
    void deleteCustomId() { this->customId_ = nullptr;};
    inline string customId() const { DARABONBA_PTR_GET_DEFAULT(customId_, "") };
    inline Story& setCustomId(string customId) { DARABONBA_PTR_SET_VALUE(customId_, customId) };


    // customLabels Field Functions 
    bool hasCustomLabels() const { return this->customLabels_ != nullptr;};
    void deleteCustomLabels() { this->customLabels_ = nullptr;};
    inline     const Darabonba::Json & customLabels() const { DARABONBA_GET(customLabels_) };
    Darabonba::Json & customLabels() { DARABONBA_GET(customLabels_) };
    inline Story& setCustomLabels(const Darabonba::Json & customLabels) { DARABONBA_SET_VALUE(customLabels_, customLabels) };
    inline Story& setCustomLabels(Darabonba::Json & customLabels) { DARABONBA_SET_RVALUE(customLabels_, customLabels) };


    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline Story& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // figureClusterIds Field Functions 
    bool hasFigureClusterIds() const { return this->figureClusterIds_ != nullptr;};
    void deleteFigureClusterIds() { this->figureClusterIds_ = nullptr;};
    inline const vector<string> & figureClusterIds() const { DARABONBA_PTR_GET_CONST(figureClusterIds_, vector<string>) };
    inline vector<string> figureClusterIds() { DARABONBA_PTR_GET(figureClusterIds_, vector<string>) };
    inline Story& setFigureClusterIds(const vector<string> & figureClusterIds) { DARABONBA_PTR_SET_VALUE(figureClusterIds_, figureClusterIds) };
    inline Story& setFigureClusterIds(vector<string> && figureClusterIds) { DARABONBA_PTR_SET_RVALUE(figureClusterIds_, figureClusterIds) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<File> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<File>) };
    inline vector<File> files() { DARABONBA_PTR_GET(files_, vector<File>) };
    inline Story& setFiles(const vector<File> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline Story& setFiles(vector<File> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // objectId Field Functions 
    bool hasObjectId() const { return this->objectId_ != nullptr;};
    void deleteObjectId() { this->objectId_ = nullptr;};
    inline string objectId() const { DARABONBA_PTR_GET_DEFAULT(objectId_, "") };
    inline Story& setObjectId(string objectId) { DARABONBA_PTR_SET_VALUE(objectId_, objectId) };


    // objectType Field Functions 
    bool hasObjectType() const { return this->objectType_ != nullptr;};
    void deleteObjectType() { this->objectType_ = nullptr;};
    inline string objectType() const { DARABONBA_PTR_GET_DEFAULT(objectType_, "") };
    inline Story& setObjectType(string objectType) { DARABONBA_PTR_SET_VALUE(objectType_, objectType) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline Story& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline Story& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // storyEndTime Field Functions 
    bool hasStoryEndTime() const { return this->storyEndTime_ != nullptr;};
    void deleteStoryEndTime() { this->storyEndTime_ = nullptr;};
    inline string storyEndTime() const { DARABONBA_PTR_GET_DEFAULT(storyEndTime_, "") };
    inline Story& setStoryEndTime(string storyEndTime) { DARABONBA_PTR_SET_VALUE(storyEndTime_, storyEndTime) };


    // storyName Field Functions 
    bool hasStoryName() const { return this->storyName_ != nullptr;};
    void deleteStoryName() { this->storyName_ = nullptr;};
    inline string storyName() const { DARABONBA_PTR_GET_DEFAULT(storyName_, "") };
    inline Story& setStoryName(string storyName) { DARABONBA_PTR_SET_VALUE(storyName_, storyName) };


    // storyStartTime Field Functions 
    bool hasStoryStartTime() const { return this->storyStartTime_ != nullptr;};
    void deleteStoryStartTime() { this->storyStartTime_ = nullptr;};
    inline string storyStartTime() const { DARABONBA_PTR_GET_DEFAULT(storyStartTime_, "") };
    inline Story& setStoryStartTime(string storyStartTime) { DARABONBA_PTR_SET_VALUE(storyStartTime_, storyStartTime) };


    // storySubType Field Functions 
    bool hasStorySubType() const { return this->storySubType_ != nullptr;};
    void deleteStorySubType() { this->storySubType_ = nullptr;};
    inline string storySubType() const { DARABONBA_PTR_GET_DEFAULT(storySubType_, "") };
    inline Story& setStorySubType(string storySubType) { DARABONBA_PTR_SET_VALUE(storySubType_, storySubType) };


    // storyType Field Functions 
    bool hasStoryType() const { return this->storyType_ != nullptr;};
    void deleteStoryType() { this->storyType_ = nullptr;};
    inline string storyType() const { DARABONBA_PTR_GET_DEFAULT(storyType_, "") };
    inline Story& setStoryType(string storyType) { DARABONBA_PTR_SET_VALUE(storyType_, storyType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline Story& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Address>> addresses_ = nullptr;
    std::shared_ptr<File> cover_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> customId_ = nullptr;
    Darabonba::Json customLabels_ = nullptr;
    std::shared_ptr<string> datasetName_ = nullptr;
    std::shared_ptr<vector<string>> figureClusterIds_ = nullptr;
    std::shared_ptr<vector<File>> files_ = nullptr;
    std::shared_ptr<string> objectId_ = nullptr;
    std::shared_ptr<string> objectType_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> projectName_ = nullptr;
    std::shared_ptr<string> storyEndTime_ = nullptr;
    std::shared_ptr<string> storyName_ = nullptr;
    std::shared_ptr<string> storyStartTime_ = nullptr;
    std::shared_ptr<string> storySubType_ = nullptr;
    std::shared_ptr<string> storyType_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
