// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSBACKGROUND_HPP_
#define ALIBABACLOUD_MODELS_LISTRTCMPUTASKDETAILRESPONSEBODYMPUTASKSTRANSCODEPARAMSBACKGROUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground& obj) { 
      DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
    };
    friend void from_json(const Darabonba::Json& j, ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
    };
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground &&) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground() = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground& operator=(const ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground &) = default ;
    ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground& operator=(ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->renderMode_ == nullptr
        && return this->URL_ == nullptr; };
    // renderMode Field Functions 
    bool hasRenderMode() const { return this->renderMode_ != nullptr;};
    void deleteRenderMode() { this->renderMode_ = nullptr;};
    inline string renderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground& setRenderMode(string renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline string URL() const { DARABONBA_PTR_GET_DEFAULT(URL_, "") };
    inline ListRtcMPUTaskDetailResponseBodyMPUTasksTranscodeParamsBackground& setURL(string URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };


  protected:
    // The display mode. Valid values:
    // 
    // *   0: proportionally scales the video or background image to fit the pane. Black bars are added to fill the extra space.
    // *   1 (default): crops the video or background image to fit the pane.
    std::shared_ptr<string> renderMode_ = nullptr;
    // The URL of the global background image.
    std::shared_ptr<string> URL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
