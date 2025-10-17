// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTREALTIMESUBTITLETRANSLATION_HPP_
#define ALIBABACLOUD_MODELS_STARTCLOUDNOTEREQUESTREALTIMESUBTITLETRANSLATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartCloudNoteRequestRealtimeSubtitleTranslation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCloudNoteRequestRealtimeSubtitleTranslation& obj) { 
      DARABONBA_PTR_TO_JSON(TranslateLevel, translateLevel_);
    };
    friend void from_json(const Darabonba::Json& j, StartCloudNoteRequestRealtimeSubtitleTranslation& obj) { 
      DARABONBA_PTR_FROM_JSON(TranslateLevel, translateLevel_);
    };
    StartCloudNoteRequestRealtimeSubtitleTranslation() = default ;
    StartCloudNoteRequestRealtimeSubtitleTranslation(const StartCloudNoteRequestRealtimeSubtitleTranslation &) = default ;
    StartCloudNoteRequestRealtimeSubtitleTranslation(StartCloudNoteRequestRealtimeSubtitleTranslation &&) = default ;
    StartCloudNoteRequestRealtimeSubtitleTranslation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCloudNoteRequestRealtimeSubtitleTranslation() = default ;
    StartCloudNoteRequestRealtimeSubtitleTranslation& operator=(const StartCloudNoteRequestRealtimeSubtitleTranslation &) = default ;
    StartCloudNoteRequestRealtimeSubtitleTranslation& operator=(StartCloudNoteRequestRealtimeSubtitleTranslation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->translateLevel_ == nullptr; };
    // translateLevel Field Functions 
    bool hasTranslateLevel() const { return this->translateLevel_ != nullptr;};
    void deleteTranslateLevel() { this->translateLevel_ = nullptr;};
    inline int32_t translateLevel() const { DARABONBA_PTR_GET_DEFAULT(translateLevel_, 0) };
    inline StartCloudNoteRequestRealtimeSubtitleTranslation& setTranslateLevel(int32_t translateLevel) { DARABONBA_PTR_SET_VALUE(translateLevel_, translateLevel) };


  protected:
    std::shared_ptr<int32_t> translateLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
