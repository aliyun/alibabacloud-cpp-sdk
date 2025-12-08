// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BLURFACERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_BLURFACERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class BlurFaceResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BlurFaceResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(MaskURL, maskURL_);
    };
    friend void from_json(const Darabonba::Json& j, BlurFaceResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(MaskURL, maskURL_);
    };
    BlurFaceResponseBodyData() = default ;
    BlurFaceResponseBodyData(const BlurFaceResponseBodyData &) = default ;
    BlurFaceResponseBodyData(BlurFaceResponseBodyData &&) = default ;
    BlurFaceResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BlurFaceResponseBodyData() = default ;
    BlurFaceResponseBodyData& operator=(const BlurFaceResponseBodyData &) = default ;
    BlurFaceResponseBodyData& operator=(BlurFaceResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->maskURL_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline BlurFaceResponseBodyData& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // maskURL Field Functions 
    bool hasMaskURL() const { return this->maskURL_ != nullptr;};
    void deleteMaskURL() { this->maskURL_ = nullptr;};
    inline string maskURL() const { DARABONBA_PTR_GET_DEFAULT(maskURL_, "") };
    inline BlurFaceResponseBodyData& setMaskURL(string maskURL) { DARABONBA_PTR_SET_VALUE(maskURL_, maskURL) };


  protected:
    std::shared_ptr<string> imageURL_ = nullptr;
    std::shared_ptr<string> maskURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
