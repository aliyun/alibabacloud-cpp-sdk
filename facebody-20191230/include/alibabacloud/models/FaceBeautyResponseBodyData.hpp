// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEBEAUTYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_FACEBEAUTYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class FaceBeautyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceBeautyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
    };
    friend void from_json(const Darabonba::Json& j, FaceBeautyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
    };
    FaceBeautyResponseBodyData() = default ;
    FaceBeautyResponseBodyData(const FaceBeautyResponseBodyData &) = default ;
    FaceBeautyResponseBodyData(FaceBeautyResponseBodyData &&) = default ;
    FaceBeautyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceBeautyResponseBodyData() = default ;
    FaceBeautyResponseBodyData& operator=(const FaceBeautyResponseBodyData &) = default ;
    FaceBeautyResponseBodyData& operator=(FaceBeautyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline FaceBeautyResponseBodyData& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


  protected:
    std::shared_ptr<string> imageURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
