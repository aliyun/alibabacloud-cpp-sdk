// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCCREATECLIPSTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncCreateClipsTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncCreateClipsTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ColorWords, colorWordsShrink_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_TO_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_TO_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_TO_JSON(VoiceVolume, voiceVolume_);
      DARABONBA_PTR_TO_JSON(Width, width_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncCreateClipsTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ColorWords, colorWordsShrink_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(MusicUrl, musicUrl_);
      DARABONBA_PTR_FROM_JSON(MusicVolume, musicVolume_);
      DARABONBA_PTR_FROM_JSON(SubtitleFontSize, subtitleFontSize_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(VoiceStyle, voiceStyle_);
      DARABONBA_PTR_FROM_JSON(VoiceVolume, voiceVolume_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncCreateClipsTaskShrinkRequest() = default ;
    AsyncCreateClipsTaskShrinkRequest(const AsyncCreateClipsTaskShrinkRequest &) = default ;
    AsyncCreateClipsTaskShrinkRequest(AsyncCreateClipsTaskShrinkRequest &&) = default ;
    AsyncCreateClipsTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncCreateClipsTaskShrinkRequest() = default ;
    AsyncCreateClipsTaskShrinkRequest& operator=(const AsyncCreateClipsTaskShrinkRequest &) = default ;
    AsyncCreateClipsTaskShrinkRequest& operator=(AsyncCreateClipsTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->colorWordsShrink_ != nullptr
        && this->height_ != nullptr && this->musicUrl_ != nullptr && this->musicVolume_ != nullptr && this->subtitleFontSize_ != nullptr && this->taskId_ != nullptr
        && this->voiceStyle_ != nullptr && this->voiceVolume_ != nullptr && this->width_ != nullptr && this->workspaceId_ != nullptr; };
    // colorWordsShrink Field Functions 
    bool hasColorWordsShrink() const { return this->colorWordsShrink_ != nullptr;};
    void deleteColorWordsShrink() { this->colorWordsShrink_ = nullptr;};
    inline string colorWordsShrink() const { DARABONBA_PTR_GET_DEFAULT(colorWordsShrink_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setColorWordsShrink(string colorWordsShrink) { DARABONBA_PTR_SET_VALUE(colorWordsShrink_, colorWordsShrink) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // musicUrl Field Functions 
    bool hasMusicUrl() const { return this->musicUrl_ != nullptr;};
    void deleteMusicUrl() { this->musicUrl_ = nullptr;};
    inline string musicUrl() const { DARABONBA_PTR_GET_DEFAULT(musicUrl_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setMusicUrl(string musicUrl) { DARABONBA_PTR_SET_VALUE(musicUrl_, musicUrl) };


    // musicVolume Field Functions 
    bool hasMusicVolume() const { return this->musicVolume_ != nullptr;};
    void deleteMusicVolume() { this->musicVolume_ = nullptr;};
    inline int32_t musicVolume() const { DARABONBA_PTR_GET_DEFAULT(musicVolume_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setMusicVolume(int32_t musicVolume) { DARABONBA_PTR_SET_VALUE(musicVolume_, musicVolume) };


    // subtitleFontSize Field Functions 
    bool hasSubtitleFontSize() const { return this->subtitleFontSize_ != nullptr;};
    void deleteSubtitleFontSize() { this->subtitleFontSize_ = nullptr;};
    inline int32_t subtitleFontSize() const { DARABONBA_PTR_GET_DEFAULT(subtitleFontSize_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setSubtitleFontSize(int32_t subtitleFontSize) { DARABONBA_PTR_SET_VALUE(subtitleFontSize_, subtitleFontSize) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // voiceStyle Field Functions 
    bool hasVoiceStyle() const { return this->voiceStyle_ != nullptr;};
    void deleteVoiceStyle() { this->voiceStyle_ = nullptr;};
    inline string voiceStyle() const { DARABONBA_PTR_GET_DEFAULT(voiceStyle_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setVoiceStyle(string voiceStyle) { DARABONBA_PTR_SET_VALUE(voiceStyle_, voiceStyle) };


    // voiceVolume Field Functions 
    bool hasVoiceVolume() const { return this->voiceVolume_ != nullptr;};
    void deleteVoiceVolume() { this->voiceVolume_ = nullptr;};
    inline int32_t voiceVolume() const { DARABONBA_PTR_GET_DEFAULT(voiceVolume_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setVoiceVolume(int32_t voiceVolume) { DARABONBA_PTR_SET_VALUE(voiceVolume_, voiceVolume) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline AsyncCreateClipsTaskShrinkRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncCreateClipsTaskShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> colorWordsShrink_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<string> musicUrl_ = nullptr;
    std::shared_ptr<int32_t> musicVolume_ = nullptr;
    std::shared_ptr<int32_t> subtitleFontSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> voiceStyle_ = nullptr;
    std::shared_ptr<int32_t> voiceVolume_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
