// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEBEAUTYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACEBEAUTYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class FaceBeautyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceBeautyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_TO_JSON(Sharp, sharp_);
      DARABONBA_PTR_TO_JSON(Smooth, smooth_);
      DARABONBA_PTR_TO_JSON(White, white_);
    };
    friend void from_json(const Darabonba::Json& j, FaceBeautyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageURL, imageURL_);
      DARABONBA_PTR_FROM_JSON(Sharp, sharp_);
      DARABONBA_PTR_FROM_JSON(Smooth, smooth_);
      DARABONBA_PTR_FROM_JSON(White, white_);
    };
    FaceBeautyRequest() = default ;
    FaceBeautyRequest(const FaceBeautyRequest &) = default ;
    FaceBeautyRequest(FaceBeautyRequest &&) = default ;
    FaceBeautyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceBeautyRequest() = default ;
    FaceBeautyRequest& operator=(const FaceBeautyRequest &) = default ;
    FaceBeautyRequest& operator=(FaceBeautyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURL_ == nullptr
        && return this->sharp_ == nullptr && return this->smooth_ == nullptr && return this->white_ == nullptr; };
    // imageURL Field Functions 
    bool hasImageURL() const { return this->imageURL_ != nullptr;};
    void deleteImageURL() { this->imageURL_ = nullptr;};
    inline string imageURL() const { DARABONBA_PTR_GET_DEFAULT(imageURL_, "") };
    inline FaceBeautyRequest& setImageURL(string imageURL) { DARABONBA_PTR_SET_VALUE(imageURL_, imageURL) };


    // sharp Field Functions 
    bool hasSharp() const { return this->sharp_ != nullptr;};
    void deleteSharp() { this->sharp_ = nullptr;};
    inline float sharp() const { DARABONBA_PTR_GET_DEFAULT(sharp_, 0.0) };
    inline FaceBeautyRequest& setSharp(float sharp) { DARABONBA_PTR_SET_VALUE(sharp_, sharp) };


    // smooth Field Functions 
    bool hasSmooth() const { return this->smooth_ != nullptr;};
    void deleteSmooth() { this->smooth_ = nullptr;};
    inline float smooth() const { DARABONBA_PTR_GET_DEFAULT(smooth_, 0.0) };
    inline FaceBeautyRequest& setSmooth(float smooth) { DARABONBA_PTR_SET_VALUE(smooth_, smooth) };


    // white Field Functions 
    bool hasWhite() const { return this->white_ != nullptr;};
    void deleteWhite() { this->white_ = nullptr;};
    inline float white() const { DARABONBA_PTR_GET_DEFAULT(white_, 0.0) };
    inline FaceBeautyRequest& setWhite(float white) { DARABONBA_PTR_SET_VALUE(white_, white) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> imageURL_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> sharp_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> smooth_ = nullptr;
    // This parameter is required.
    std::shared_ptr<float> white_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
