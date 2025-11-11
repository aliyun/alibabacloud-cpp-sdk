// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGBACKGROUNDMUSICCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSMARTCLIPTASKREQUESTEDITINGCONFIGBACKGROUNDMUSICCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig(const SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig(SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig &&) = default ;
    SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig() = default ;
    SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig& operator=(const SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig &) = default ;
    SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig& operator=(SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->style_ == nullptr
        && return this->volume_ == nullptr; };
    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline double volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0.0) };
    inline SubmitSmartClipTaskRequestEditingConfigBackgroundMusicConfig& setVolume(double volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<string> style_ = nullptr;
    std::shared_ptr<double> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
