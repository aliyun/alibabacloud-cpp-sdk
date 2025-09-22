// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTOCRRESULT_HPP_
#define ALIBABACLOUD_MODELS_IMAGEQUEUEMODERATIONRESPONSEBODYDATAEXTOCRRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageQueueModerationResponseBodyDataExtOcrResultLocation.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageQueueModerationResponseBodyDataExtOcrResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageQueueModerationResponseBodyDataExtOcrResult& obj) { 
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, ImageQueueModerationResponseBodyDataExtOcrResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    ImageQueueModerationResponseBodyDataExtOcrResult() = default ;
    ImageQueueModerationResponseBodyDataExtOcrResult(const ImageQueueModerationResponseBodyDataExtOcrResult &) = default ;
    ImageQueueModerationResponseBodyDataExtOcrResult(ImageQueueModerationResponseBodyDataExtOcrResult &&) = default ;
    ImageQueueModerationResponseBodyDataExtOcrResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageQueueModerationResponseBodyDataExtOcrResult() = default ;
    ImageQueueModerationResponseBodyDataExtOcrResult& operator=(const ImageQueueModerationResponseBodyDataExtOcrResult &) = default ;
    ImageQueueModerationResponseBodyDataExtOcrResult& operator=(ImageQueueModerationResponseBodyDataExtOcrResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->location_ != nullptr
        && this->text_ != nullptr; };
    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const Models::ImageQueueModerationResponseBodyDataExtOcrResultLocation & location() const { DARABONBA_PTR_GET_CONST(location_, Models::ImageQueueModerationResponseBodyDataExtOcrResultLocation) };
    inline Models::ImageQueueModerationResponseBodyDataExtOcrResultLocation location() { DARABONBA_PTR_GET(location_, Models::ImageQueueModerationResponseBodyDataExtOcrResultLocation) };
    inline ImageQueueModerationResponseBodyDataExtOcrResult& setLocation(const Models::ImageQueueModerationResponseBodyDataExtOcrResultLocation & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline ImageQueueModerationResponseBodyDataExtOcrResult& setLocation(Models::ImageQueueModerationResponseBodyDataExtOcrResultLocation && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline ImageQueueModerationResponseBodyDataExtOcrResult& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<Models::ImageQueueModerationResponseBodyDataExtOcrResultLocation> location_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
