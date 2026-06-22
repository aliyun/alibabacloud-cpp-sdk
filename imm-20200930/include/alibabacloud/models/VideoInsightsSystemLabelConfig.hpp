// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOINSIGHTSSYSTEMLABELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VIDEOINSIGHTSSYSTEMLABELCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoInsightsSystemLabelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoInsightsSystemLabelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
    };
    friend void from_json(const Darabonba::Json& j, VideoInsightsSystemLabelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
    };
    VideoInsightsSystemLabelConfig() = default ;
    VideoInsightsSystemLabelConfig(const VideoInsightsSystemLabelConfig &) = default ;
    VideoInsightsSystemLabelConfig(VideoInsightsSystemLabelConfig &&) = default ;
    VideoInsightsSystemLabelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoInsightsSystemLabelConfig() = default ;
    VideoInsightsSystemLabelConfig& operator=(const VideoInsightsSystemLabelConfig &) = default ;
    VideoInsightsSystemLabelConfig& operator=(VideoInsightsSystemLabelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline VideoInsightsSystemLabelConfig& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


  protected:
    shared_ptr<bool> enable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
