// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTSLOGODATA_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTSLOGODATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation.hpp>
#include <vector>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Logo, logo_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Logo, logo_);
    };
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData(const VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData(VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData &&) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& operator=(const VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& operator=(VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->location_ == nullptr
        && return this->logo_ == nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation) };
    inline Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation location() { DARABONBA_PTR_GET(location_, Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& setLocation(const Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& setLocation(Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // logo Field Functions 
    bool hasLogo() const { return this->logo_ != nullptr;};
    void deleteLogo() { this->logo_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo> & logo() const { DARABONBA_PTR_GET_CONST(logo_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo> logo() { DARABONBA_PTR_GET(logo_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo>) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& setLogo(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo> & logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData& setLogo(vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo> && logo) { DARABONBA_PTR_SET_RVALUE(logo_, logo) };


  protected:
    // The location of the logo.
    std::shared_ptr<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLocation> location_ = nullptr;
    // Logo information.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoDataLogo>> logo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
