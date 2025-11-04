// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVETRANSCODETEMPLATESRESPONSEBODYTEMPLATECONTENTLISTTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVETRANSCODETEMPLATESRESPONSEBODYTEMPLATECONTENTLISTTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams.hpp>
#include <alibabacloud/models/ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_TO_JSON(VideoParams, videoParams_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_FROM_JSON(VideoParams, videoParams_);
    };
    ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig() = default ;
    ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig(const ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig &) = default ;
    ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig(ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig &&) = default ;
    ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig() = default ;
    ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& operator=(const ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig &) = default ;
    ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& operator=(ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioParams_ == nullptr
        && return this->videoParams_ == nullptr; };
    // audioParams Field Functions 
    bool hasAudioParams() const { return this->audioParams_ != nullptr;};
    void deleteAudioParams() { this->audioParams_ = nullptr;};
    inline const Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams & audioParams() const { DARABONBA_PTR_GET_CONST(audioParams_, Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams) };
    inline Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams audioParams() { DARABONBA_PTR_GET(audioParams_, Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams) };
    inline ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& setAudioParams(const Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams & audioParams) { DARABONBA_PTR_SET_VALUE(audioParams_, audioParams) };
    inline ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& setAudioParams(Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams && audioParams) { DARABONBA_PTR_SET_RVALUE(audioParams_, audioParams) };


    // videoParams Field Functions 
    bool hasVideoParams() const { return this->videoParams_ != nullptr;};
    void deleteVideoParams() { this->videoParams_ = nullptr;};
    inline const Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams & videoParams() const { DARABONBA_PTR_GET_CONST(videoParams_, Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams) };
    inline Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams videoParams() { DARABONBA_PTR_GET(videoParams_, Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams) };
    inline ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& setVideoParams(const Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams & videoParams) { DARABONBA_PTR_SET_VALUE(videoParams_, videoParams) };
    inline ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfig& setVideoParams(Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams && videoParams) { DARABONBA_PTR_SET_RVALUE(videoParams_, videoParams) };


  protected:
    // The audio parameters.
    std::shared_ptr<Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigAudioParams> audioParams_ = nullptr;
    // The video parameters.
    std::shared_ptr<Models::ListLiveTranscodeTemplatesResponseBodyTemplateContentListTemplateConfigVideoParams> videoParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
