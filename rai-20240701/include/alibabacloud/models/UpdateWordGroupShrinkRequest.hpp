// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORDGROUPSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORDGROUPSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RAI20240701
{
namespace Models
{
  class UpdateWordGroupShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWordGroupShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_TO_JSON(Commit, commit_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(WordInfoListModified, wordInfoListModified_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWordGroupShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BodyData, bodyDataShrink_);
      DARABONBA_PTR_FROM_JSON(Commit, commit_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(WordInfoListModified, wordInfoListModified_);
    };
    UpdateWordGroupShrinkRequest() = default ;
    UpdateWordGroupShrinkRequest(const UpdateWordGroupShrinkRequest &) = default ;
    UpdateWordGroupShrinkRequest(UpdateWordGroupShrinkRequest &&) = default ;
    UpdateWordGroupShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWordGroupShrinkRequest() = default ;
    UpdateWordGroupShrinkRequest& operator=(const UpdateWordGroupShrinkRequest &) = default ;
    UpdateWordGroupShrinkRequest& operator=(UpdateWordGroupShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bodyDataShrink_ == nullptr
        && return this->commit_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->regionId_ == nullptr && return this->wordInfoListModified_ == nullptr; };
    // bodyDataShrink Field Functions 
    bool hasBodyDataShrink() const { return this->bodyDataShrink_ != nullptr;};
    void deleteBodyDataShrink() { this->bodyDataShrink_ = nullptr;};
    inline string bodyDataShrink() const { DARABONBA_PTR_GET_DEFAULT(bodyDataShrink_, "") };
    inline UpdateWordGroupShrinkRequest& setBodyDataShrink(string bodyDataShrink) { DARABONBA_PTR_SET_VALUE(bodyDataShrink_, bodyDataShrink) };


    // commit Field Functions 
    bool hasCommit() const { return this->commit_ != nullptr;};
    void deleteCommit() { this->commit_ = nullptr;};
    inline bool commit() const { DARABONBA_PTR_GET_DEFAULT(commit_, false) };
    inline UpdateWordGroupShrinkRequest& setCommit(bool commit) { DARABONBA_PTR_SET_VALUE(commit_, commit) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline UpdateWordGroupShrinkRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateWordGroupShrinkRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateWordGroupShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // wordInfoListModified Field Functions 
    bool hasWordInfoListModified() const { return this->wordInfoListModified_ != nullptr;};
    void deleteWordInfoListModified() { this->wordInfoListModified_ = nullptr;};
    inline bool wordInfoListModified() const { DARABONBA_PTR_GET_DEFAULT(wordInfoListModified_, false) };
    inline UpdateWordGroupShrinkRequest& setWordInfoListModified(bool wordInfoListModified) { DARABONBA_PTR_SET_VALUE(wordInfoListModified_, wordInfoListModified) };


  protected:
    // Request object.
    std::shared_ptr<string> bodyDataShrink_ = nullptr;
    // Whether to commit.
    // false: Not actually saved, only checked
    // true: Commit and save
    std::shared_ptr<bool> commit_ = nullptr;
    // Keyword group ID.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // Keyword group name.
    std::shared_ptr<string> groupName_ = nullptr;
    // Region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Whether the keyword information has been modified.
    std::shared_ptr<bool> wordInfoListModified_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RAI20240701
#endif
