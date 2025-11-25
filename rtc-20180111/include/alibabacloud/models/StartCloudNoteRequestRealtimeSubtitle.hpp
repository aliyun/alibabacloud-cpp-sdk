// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTREALTIMESUBTITLE_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTREALTIMESUBTITLE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartCloudNoteRequestRealtimeSubtitleTranslation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestRealtimeSubtitle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestRealtimeSubtitle& obj) { 
      DARABONBA_PTR_TO_JSON(AsrCallback, asrCallback_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Translation, translation_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestRealtimeSubtitle& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrCallback, asrCallback_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Translation, translation_);
    };
    StartCloudNoteRequestRealtimeSubtitle() = default ;
    StartCloudNoteRequestRealtimeSubtitle(const StartCloudNoteRequestRealtimeSubtitle &) = default ;
    StartCloudNoteRequestRealtimeSubtitle(StartCloudNoteRequestRealtimeSubtitle &&) = default ;
    StartCloudNoteRequestRealtimeSubtitle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestRealtimeSubtitle() = default ;
    StartCloudNoteRequestRealtimeSubtitle& operator=(const StartCloudNoteRequestRealtimeSubtitle &) = default ;
    StartCloudNoteRequestRealtimeSubtitle& operator=(StartCloudNoteRequestRealtimeSubtitle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->asrCallback_ == nullptr
        && return this->enabled_ == nullptr && return this->translation_ == nullptr; };
    // asrCallback Field Functions 
    bool hasAsrCallback() const { return this->asrCallback_ != nullptr;};
    void deleteAsrCallback() { this->asrCallback_ = nullptr;};
    inline bool asrCallback() const { DARABONBA_PTR_GET_DEFAULT(asrCallback_, false) };
    inline StartCloudNoteRequestRealtimeSubtitle& setAsrCallback(bool asrCallback) { DARABONBA_PTR_SET_VALUE(asrCallback_, asrCallback) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline StartCloudNoteRequestRealtimeSubtitle& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // translation Field Functions 
    bool hasTranslation() const { return this->translation_ != nullptr;};
    void deleteTranslation() { this->translation_ = nullptr;};
    inline const Models::StartCloudNoteRequestRealtimeSubtitleTranslation & translation() const { DARABONBA_PTR_GET_CONST(translation_, Models::StartCloudNoteRequestRealtimeSubtitleTranslation) };
    inline Models::StartCloudNoteRequestRealtimeSubtitleTranslation translation() { DARABONBA_PTR_GET(translation_, Models::StartCloudNoteRequestRealtimeSubtitleTranslation) };
    inline StartCloudNoteRequestRealtimeSubtitle& setTranslation(const Models::StartCloudNoteRequestRealtimeSubtitleTranslation & translation) { DARABONBA_PTR_SET_VALUE(translation_, translation) };
    inline StartCloudNoteRequestRealtimeSubtitle& setTranslation(Models::StartCloudNoteRequestRealtimeSubtitleTranslation && translation) { DARABONBA_PTR_SET_RVALUE(translation_, translation) };


  protected:
    std::shared_ptr<bool> asrCallback_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<Models::StartCloudNoteRequestRealtimeSubtitleTranslation> translation_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
