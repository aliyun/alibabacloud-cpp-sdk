// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EDITSHOWANDREPLACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EDITSHOWANDREPLACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class EditShowAndReplaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EditShowAndReplaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ShowId, showId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StorageInfo, storageInfo_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, EditShowAndReplaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ShowId, showId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StorageInfo, storageInfo_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    EditShowAndReplaceRequest() = default ;
    EditShowAndReplaceRequest(const EditShowAndReplaceRequest &) = default ;
    EditShowAndReplaceRequest(EditShowAndReplaceRequest &&) = default ;
    EditShowAndReplaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EditShowAndReplaceRequest() = default ;
    EditShowAndReplaceRequest& operator=(const EditShowAndReplaceRequest &) = default ;
    EditShowAndReplaceRequest& operator=(EditShowAndReplaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->showId_ == nullptr && this->startTime_ == nullptr
        && this->storageInfo_ == nullptr && this->userData_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline EditShowAndReplaceRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline float getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0.0) };
    inline EditShowAndReplaceRequest& setEndTime(float endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EditShowAndReplaceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EditShowAndReplaceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // showId Field Functions 
    bool hasShowId() const { return this->showId_ != nullptr;};
    void deleteShowId() { this->showId_ = nullptr;};
    inline string getShowId() const { DARABONBA_PTR_GET_DEFAULT(showId_, "") };
    inline EditShowAndReplaceRequest& setShowId(string showId) { DARABONBA_PTR_SET_VALUE(showId_, showId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline float getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0.0) };
    inline EditShowAndReplaceRequest& setStartTime(float startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // storageInfo Field Functions 
    bool hasStorageInfo() const { return this->storageInfo_ != nullptr;};
    void deleteStorageInfo() { this->storageInfo_ = nullptr;};
    inline string getStorageInfo() const { DARABONBA_PTR_GET_DEFAULT(storageInfo_, "") };
    inline EditShowAndReplaceRequest& setStorageInfo(string storageInfo) { DARABONBA_PTR_SET_VALUE(storageInfo_, storageInfo) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline EditShowAndReplaceRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The end time of the editing task. Unit: seconds.
    // 
    // > 
    // 
    // *   The valid values range from 0 to the value indicated by the total length of the episode.
    // 
    // *   By default, this parameter is set to the value that indicates the total length of the episode. The editing period cannot exceed the total length of the episode.
    // 
    // *   If you want to edit a VOD file from the 2nd second to the 5th second, set the StartTime parameter to 2.0 and the EndTime parameter to 5.0.
    shared_ptr<float> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The ID of the episode to be edited.
    // 
    // >  You can obtain the ID from the response parameter ShowId of the [AddShowIntoShowList](https://help.aliyun.com/document_detail/2848051.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> showId_ {};
    // The start time of the editing task. Unit: seconds.
    // 
    // > 
    // 
    // *   The valid values range from 0 to the value indicated by the total length of the episode. By default, the editing task starts from the beginning of the episode. Default value: 0.0.
    // 
    // *   If you want to edit a VOD file from the 2nd second to the 5th second, set the StartTime parameter to 2.0 and the EndTime parameter to 5.0.
    shared_ptr<float> startTime_ {};
    // The storage information of the episode. The following fields are included:
    // 
    // *   **StorageLocation**: the storage location of ApsaraVideo VOD.
    // *   **FileName**: the custom file name.
    // 
    // >  Editing outputs must be stored in the VOD bucket within the same account that is used to access both ApsaraVideo VOD and ApsaraVideo Live. For more information about how to obtain the storage location, see [Manage VOD resources](https://help.aliyun.com/document_detail/86097.html).
    shared_ptr<string> storageInfo_ {};
    // The user information.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
