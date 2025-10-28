// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTTEXTINIMAGEOCRRESULT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEBATCHMODERATIONRESPONSEBODYDATARESULTSEXTTEXTINIMAGEOCRRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult() = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult(const ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult(ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult &&) = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult() = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult& operator=(const ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult &) = default ;
    ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult& operator=(ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->location_ == nullptr
        && return this->text_ == nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation) };
    inline Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation location() { DARABONBA_PTR_GET(location_, Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult& setLocation(const Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult& setLocation(Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    // Text line coordinate information.
    std::shared_ptr<Models::ImageBatchModerationResponseBodyDataResultsExtTextInImageOcrResultLocation> location_ = nullptr;
    // Text information.
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
