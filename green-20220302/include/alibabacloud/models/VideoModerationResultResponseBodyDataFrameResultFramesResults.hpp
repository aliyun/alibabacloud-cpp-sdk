// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTS_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure.hpp>
#include <alibabacloud/models/VideoModerationResultResponseBodyDataFrameResultFramesResultsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataFrameResultFramesResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataFrameResultFramesResults& obj) { 
      DARABONBA_PTR_TO_JSON(CustomImage, customImage_);
      DARABONBA_PTR_TO_JSON(LogoData, logoData_);
      DARABONBA_PTR_TO_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Service, service_);
      DARABONBA_ANY_TO_JSON(TextInImage, textInImage_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataFrameResultFramesResults& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomImage, customImage_);
      DARABONBA_PTR_FROM_JSON(LogoData, logoData_);
      DARABONBA_PTR_FROM_JSON(PublicFigure, publicFigure_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Service, service_);
      DARABONBA_ANY_FROM_JSON(TextInImage, textInImage_);
    };
    VideoModerationResultResponseBodyDataFrameResultFramesResults() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResults(const VideoModerationResultResponseBodyDataFrameResultFramesResults &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResults(VideoModerationResultResponseBodyDataFrameResultFramesResults &&) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResults() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResults& operator=(const VideoModerationResultResponseBodyDataFrameResultFramesResults &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResults& operator=(VideoModerationResultResponseBodyDataFrameResultFramesResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customImage_ != nullptr
        && this->logoData_ != nullptr && this->publicFigure_ != nullptr && this->result_ != nullptr && this->service_ != nullptr && this->textInImage_ != nullptr; };
    // customImage Field Functions 
    bool hasCustomImage() const { return this->customImage_ != nullptr;};
    void deleteCustomImage() { this->customImage_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage> & customImage() const { DARABONBA_PTR_GET_CONST(customImage_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage> customImage() { DARABONBA_PTR_GET(customImage_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage>) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setCustomImage(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage> & customImage) { DARABONBA_PTR_SET_VALUE(customImage_, customImage) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setCustomImage(vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage> && customImage) { DARABONBA_PTR_SET_RVALUE(customImage_, customImage) };


    // logoData Field Functions 
    bool hasLogoData() const { return this->logoData_ != nullptr;};
    void deleteLogoData() { this->logoData_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData> & logoData() const { DARABONBA_PTR_GET_CONST(logoData_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData> logoData() { DARABONBA_PTR_GET(logoData_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData>) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setLogoData(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData> & logoData) { DARABONBA_PTR_SET_VALUE(logoData_, logoData) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setLogoData(vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData> && logoData) { DARABONBA_PTR_SET_RVALUE(logoData_, logoData) };


    // publicFigure Field Functions 
    bool hasPublicFigure() const { return this->publicFigure_ != nullptr;};
    void deletePublicFigure() { this->publicFigure_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure> & publicFigure() const { DARABONBA_PTR_GET_CONST(publicFigure_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure> publicFigure() { DARABONBA_PTR_GET(publicFigure_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure>) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setPublicFigure(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure> & publicFigure) { DARABONBA_PTR_SET_VALUE(publicFigure_, publicFigure) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setPublicFigure(vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure> && publicFigure) { DARABONBA_PTR_SET_RVALUE(publicFigure_, publicFigure) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsResult>) };
    inline vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsResult> result() { DARABONBA_PTR_GET(result_, vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsResult>) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setResult(const vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setResult(vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // service Field Functions 
    bool hasService() const { return this->service_ != nullptr;};
    void deleteService() { this->service_ = nullptr;};
    inline string service() const { DARABONBA_PTR_GET_DEFAULT(service_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setService(string service) { DARABONBA_PTR_SET_VALUE(service_, service) };


    // textInImage Field Functions 
    bool hasTextInImage() const { return this->textInImage_ != nullptr;};
    void deleteTextInImage() { this->textInImage_ = nullptr;};
    inline     const Darabonba::Json & textInImage() const { DARABONBA_GET(textInImage_) };
    Darabonba::Json & textInImage() { DARABONBA_GET(textInImage_) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setTextInImage(const Darabonba::Json & textInImage) { DARABONBA_SET_VALUE(textInImage_, textInImage) };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResults& setTextInImage(Darabonba::Json & textInImage) { DARABONBA_SET_RVALUE(textInImage_, textInImage) };


  protected:
    // If a custom image library is hit, information about the custom image library is returned.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage>> customImage_ = nullptr;
    // Returns logo information when the video contains a logo.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsLogoData>> logoData_ = nullptr;
    // If the video contains a specific figure, the code of the identified figure is returned.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsPublicFigure>> publicFigure_ = nullptr;
    // The results of frame moderation parameters such as the label parameter and the confidence parameter.
    std::shared_ptr<vector<Models::VideoModerationResultResponseBodyDataFrameResultFramesResultsResult>> result_ = nullptr;
    // The moderation service that is called.
    std::shared_ptr<string> service_ = nullptr;
    // The information about the text hit in the image is returned.
    Darabonba::Json textInImage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
