// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOINSIGHTSLABELCONFIG_HPP_
#define ALIBABACLOUD_MODELS_VIDEOINSIGHTSLABELCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VideoInsightsHighlightLabelConfig.hpp>
#include <alibabacloud/models/VideoInsightsSystemLabelConfig.hpp>
#include <alibabacloud/models/VideoInsightsUserDefinedLabelConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class VideoInsightsLabelConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoInsightsLabelConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Highlight, highlight_);
      DARABONBA_PTR_TO_JSON(System, system_);
      DARABONBA_PTR_TO_JSON(UserDefined, userDefined_);
    };
    friend void from_json(const Darabonba::Json& j, VideoInsightsLabelConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Highlight, highlight_);
      DARABONBA_PTR_FROM_JSON(System, system_);
      DARABONBA_PTR_FROM_JSON(UserDefined, userDefined_);
    };
    VideoInsightsLabelConfig() = default ;
    VideoInsightsLabelConfig(const VideoInsightsLabelConfig &) = default ;
    VideoInsightsLabelConfig(VideoInsightsLabelConfig &&) = default ;
    VideoInsightsLabelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoInsightsLabelConfig() = default ;
    VideoInsightsLabelConfig& operator=(const VideoInsightsLabelConfig &) = default ;
    VideoInsightsLabelConfig& operator=(VideoInsightsLabelConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->highlight_ == nullptr
        && this->system_ == nullptr && this->userDefined_ == nullptr; };
    // highlight Field Functions 
    bool hasHighlight() const { return this->highlight_ != nullptr;};
    void deleteHighlight() { this->highlight_ = nullptr;};
    inline const VideoInsightsHighlightLabelConfig & getHighlight() const { DARABONBA_PTR_GET_CONST(highlight_, VideoInsightsHighlightLabelConfig) };
    inline VideoInsightsHighlightLabelConfig getHighlight() { DARABONBA_PTR_GET(highlight_, VideoInsightsHighlightLabelConfig) };
    inline VideoInsightsLabelConfig& setHighlight(const VideoInsightsHighlightLabelConfig & highlight) { DARABONBA_PTR_SET_VALUE(highlight_, highlight) };
    inline VideoInsightsLabelConfig& setHighlight(VideoInsightsHighlightLabelConfig && highlight) { DARABONBA_PTR_SET_RVALUE(highlight_, highlight) };


    // system Field Functions 
    bool hasSystem() const { return this->system_ != nullptr;};
    void deleteSystem() { this->system_ = nullptr;};
    inline const VideoInsightsSystemLabelConfig & getSystem() const { DARABONBA_PTR_GET_CONST(system_, VideoInsightsSystemLabelConfig) };
    inline VideoInsightsSystemLabelConfig getSystem() { DARABONBA_PTR_GET(system_, VideoInsightsSystemLabelConfig) };
    inline VideoInsightsLabelConfig& setSystem(const VideoInsightsSystemLabelConfig & system) { DARABONBA_PTR_SET_VALUE(system_, system) };
    inline VideoInsightsLabelConfig& setSystem(VideoInsightsSystemLabelConfig && system) { DARABONBA_PTR_SET_RVALUE(system_, system) };


    // userDefined Field Functions 
    bool hasUserDefined() const { return this->userDefined_ != nullptr;};
    void deleteUserDefined() { this->userDefined_ = nullptr;};
    inline const VideoInsightsUserDefinedLabelConfig & getUserDefined() const { DARABONBA_PTR_GET_CONST(userDefined_, VideoInsightsUserDefinedLabelConfig) };
    inline VideoInsightsUserDefinedLabelConfig getUserDefined() { DARABONBA_PTR_GET(userDefined_, VideoInsightsUserDefinedLabelConfig) };
    inline VideoInsightsLabelConfig& setUserDefined(const VideoInsightsUserDefinedLabelConfig & userDefined) { DARABONBA_PTR_SET_VALUE(userDefined_, userDefined) };
    inline VideoInsightsLabelConfig& setUserDefined(VideoInsightsUserDefinedLabelConfig && userDefined) { DARABONBA_PTR_SET_RVALUE(userDefined_, userDefined) };


  protected:
    // The highlight label configuration.
    shared_ptr<VideoInsightsHighlightLabelConfig> highlight_ {};
    // The system label configuration.
    shared_ptr<VideoInsightsSystemLabelConfig> system_ {};
    // The custom label configuration.
    shared_ptr<VideoInsightsUserDefinedLabelConfig> userDefined_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
