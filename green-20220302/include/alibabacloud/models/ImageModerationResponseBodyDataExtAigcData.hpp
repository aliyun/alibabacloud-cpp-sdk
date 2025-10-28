// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTAIGCDATA_HPP_
#define ALIBABACLOUD_MODELS_IMAGEMODERATIONRESPONSEBODYDATAEXTAIGCDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageModerationResponseBodyDataExtAigcDataAIGC.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class ImageModerationResponseBodyDataExtAigcData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageModerationResponseBodyDataExtAigcData& obj) { 
      DARABONBA_PTR_TO_JSON(AIGC, AIGC_);
    };
    friend void from_json(const Darabonba::Json& j, ImageModerationResponseBodyDataExtAigcData& obj) { 
      DARABONBA_PTR_FROM_JSON(AIGC, AIGC_);
    };
    ImageModerationResponseBodyDataExtAigcData() = default ;
    ImageModerationResponseBodyDataExtAigcData(const ImageModerationResponseBodyDataExtAigcData &) = default ;
    ImageModerationResponseBodyDataExtAigcData(ImageModerationResponseBodyDataExtAigcData &&) = default ;
    ImageModerationResponseBodyDataExtAigcData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageModerationResponseBodyDataExtAigcData() = default ;
    ImageModerationResponseBodyDataExtAigcData& operator=(const ImageModerationResponseBodyDataExtAigcData &) = default ;
    ImageModerationResponseBodyDataExtAigcData& operator=(ImageModerationResponseBodyDataExtAigcData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->AIGC_ == nullptr; };
    // AIGC Field Functions 
    bool hasAIGC() const { return this->AIGC_ != nullptr;};
    void deleteAIGC() { this->AIGC_ = nullptr;};
    inline const Models::ImageModerationResponseBodyDataExtAigcDataAIGC & AIGC() const { DARABONBA_PTR_GET_CONST(AIGC_, Models::ImageModerationResponseBodyDataExtAigcDataAIGC) };
    inline Models::ImageModerationResponseBodyDataExtAigcDataAIGC AIGC() { DARABONBA_PTR_GET(AIGC_, Models::ImageModerationResponseBodyDataExtAigcDataAIGC) };
    inline ImageModerationResponseBodyDataExtAigcData& setAIGC(const Models::ImageModerationResponseBodyDataExtAigcDataAIGC & AIGC) { DARABONBA_PTR_SET_VALUE(AIGC_, AIGC) };
    inline ImageModerationResponseBodyDataExtAigcData& setAIGC(Models::ImageModerationResponseBodyDataExtAigcDataAIGC && AIGC) { DARABONBA_PTR_SET_RVALUE(AIGC_, AIGC) };


  protected:
    std::shared_ptr<Models::ImageModerationResponseBodyDataExtAigcDataAIGC> AIGC_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
