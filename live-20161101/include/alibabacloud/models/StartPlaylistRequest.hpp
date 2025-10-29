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
        && return this->ownerId_ == nullptr && return this->programId_ == nullptr && return this->regionId_ == nullptr && return this->resumeMode_ == nullptr && return this->startItemId_ == nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline StartPlaylistRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StartPlaylistRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // programId Field Functions 
    bool hasProgramId() const { return this->programId_ != nullptr;};
    void deleteProgramId() { this->programId_ = nullptr;};
    inline string programId() const { DARABONBA_PTR_GET_DEFAULT(programId_, "") };
    inline StartPlaylistRequest& setProgramId(string programId) { DARABONBA_PTR_SET_VALUE(programId_, programId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartPlaylistRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resumeMode Field Functions 
    bool hasResumeMode() const { return this->resumeMode_ != nullptr;};
    void deleteResumeMode() { this->resumeMode_ = nullptr;};
    inline string resumeMode() const { DARABONBA_PTR_GET_DEFAULT(resumeMode_, "") };
    inline StartPlaylistRequest& setResumeMode(string resumeMode) { DARABONBA_PTR_SET_VALUE(resumeMode_, resumeMode) };


    // startItemId Field Functions 
    bool hasStartItemId() const { return this->startItemId_ != nullptr;};
    void deleteStartItemId() { this->startItemId_ = nullptr;};
    inline string startItemId() const { DARABONBA_PTR_GET_DEFAULT(startItemId_, "") };
    inline StartPlaylistRequest& setStartItemId(string startItemId) { DARABONBA_PTR_SET_VALUE(startItemId_, startItemId) };


  protected:
    // The offset of the position where the system starts the playback. This parameter takes effect only if the input source is a video file. Unit: milliseconds.
    // 
    // A value greater than 0 indicates an offset from the first frame.
    std::shared_ptr<int32_t> offset_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the episode list. If the episode list was created by calling the [AddPlaylistItems](https://help.aliyun.com/document_detail/2848078.html) operation, check the value of the response parameter ProgramId to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> programId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The method to resume the playback of the episode list. Valid values:
    // 
    // *   **Restart**: resumes the playback from the beginning.
    // *   **Continue**: resumes the playback from the position where the previous playback stops. The **StartItemId** parameter is required only if you set **ResumeMode** to **Custom**.
    // *   **Custom**: resumes the playback from a custom position.
    std::shared_ptr<string> resumeMode_ = nullptr;
    // The ID of the first episode to play. This episode is the first to play in carousel playback.
    // 
    // >  This parameter is required only if you set ResumeMode to Custom.
    std::shared_ptr<string> startItemId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
