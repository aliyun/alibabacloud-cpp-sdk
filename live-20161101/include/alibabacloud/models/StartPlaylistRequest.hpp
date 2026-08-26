// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTPLAYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTPLAYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartPlaylistRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartPlaylistRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProgramId, programId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResumeMode, resumeMode_);
      DARABONBA_PTR_TO_JSON(StartItemId, startItemId_);
    };
    friend void from_json(const Darabonba::Json& j, StartPlaylistRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProgramId, programId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResumeMode, resumeMode_);
      DARABONBA_PTR_FROM_JSON(StartItemId, startItemId_);
    };
    StartPlaylistRequest() = default ;
    StartPlaylistRequest(const StartPlaylistRequest &) = default ;
    StartPlaylistRequest(StartPlaylistRequest &&) = default ;
    StartPlaylistRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartPlaylistRequest() = default ;
    StartPlaylistRequest& operator=(const StartPlaylistRequest &) = default ;
    StartPlaylistRequest& operator=(StartPlaylistRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->offset_ == nullptr
        && this->ownerId_ == nullptr && this->programId_ == nullptr && this->regionId_ == nullptr && this->resumeMode_ == nullptr && this->startItemId_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline StartPlaylistRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartPlaylistRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string getProgramId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline StartPlaylistRequest& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartPlaylistRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resumeMode Field Functions 
    bool hasResumeMode() const { return this->resumeMode_ != nullptr;};
    void deleteResumeMode() { this->resumeMode_ = nullptr;};
    inline string getResumeMode() const { DARABONBA_PTR_GET_DEFAULT(resumeMode_, "") };
    inline StartPlaylistRequest& setResumeMode(string resumeMode) { DARABONBA_PTR_SET_VALUE(resumeMode_, resumeMode) };


    // startItemId Field Functions 
    bool hasStartItemId() const { return this->startItemId_ != nullptr;};
    void deleteStartItemId() { this->startItemId_ = nullptr;};
    inline string getStartItemId() const { DARABONBA_PTR_GET_DEFAULT(startItemId_, "") };
    inline StartPlaylistRequest& setStartItemId(string startItemId) { DARABONBA_PTR_SET_VALUE(startItemId_, startItemId) };


  protected:
    // The start offset for the video file. This parameter is valid only for video files. Unit: milliseconds.
    // 
    // A value greater than 0 specifies the start time relative to the first frame.
    shared_ptr<int32_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the playlist. If you add items to the playlist by calling the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation, use the value of the ProgramId parameter that is returned.
    // 
    // This parameter is required.
    shared_ptr<string> programId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The restart mode. Valid values:
    // 
    // - **Restart**: Starts from the beginning.
    // 
    // - **Continue**: Resumes playback from where it was stopped. The **StartItemId** parameter is required only when you set the **ResumeMode** parameter to **Custom**.
    // 
    // - **Custom**: Custom start point.
    shared_ptr<string> resumeMode_ {};
    // The ID of the item to play first. When the carousel starts, this item is played.
    // 
    // >Notice: 
    // 
    // This parameter is required only when you set **ResumeMode** to **Custom**.
    shared_ptr<string> startItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
