// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FACEBEAUTYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FACEBEAUTYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
namespace Models
{
  class FaceBeautyAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FaceBeautyAdvanceRequest& obj) { 
      DARABONBA_TO_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_TO_JSON(Sharp, sharp_);
      DARABONBA_PTR_TO_JSON(Smooth, smooth_);
      DARABONBA_PTR_TO_JSON(White, white_);
    };
    friend void from_json(const Darabonba::Json& j, FaceBeautyAdvanceRequest& obj) { 
      DARABONBA_FROM_JSON(ImageURL, imageURLObject_);
      DARABONBA_PTR_FROM_JSON(Sharp, sharp_);
      DARABONBA_PTR_FROM_JSON(Smooth, smooth_);
      DARABONBA_PTR_FROM_JSON(White, white_);
    };
    FaceBeautyAdvanceRequest() = default ;
    FaceBeautyAdvanceRequest(const FaceBeautyAdvanceRequest &) = default ;
    FaceBeautyAdvanceRequest(FaceBeautyAdvanceRequest &&) = default ;
    FaceBeautyAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FaceBeautyAdvanceRequest() = default ;
    FaceBeautyAdvanceRequest& operator=(const FaceBeautyAdvanceRequest &) = default ;
    FaceBeautyAdvanceRequest& operator=(FaceBeautyAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageURLObject_ == nullptr
        && return this->sharp_ == nullptr && return this->smooth_ == nullptr && return this->white_ == nullptr; };
    // imageURLObject Field Functions 
    bool hasImageURLObject() const { return this->imageURLObject_ != nullptr;};
    void deleteImageURLObject() { this->imageURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> imageURLObject() const { DARABONBA_GET(imageURLObject_) };
    inline FaceBeautyAdvanceRequest& setImageURLObject(shared_ptr<Darabonba::IStream> imageURLObject) { DARABONBA_SET_VALUE(imageURLObject_, imageURLObject) };


    // sharp Field Functions 
    bool hasSharp() const { return this->sharp_ != nullptr;};
    void deleteSharp() { this->sharp_ = nullptr;};
    inline float sharp() const { DARABONBA_PTR_GET_DEFAULT(sharp_, 0.0) };
    inline FaceBeautyAdvanceRequest& setSharp(float sharp) { DARABONBA_PTR_SET_VALUE(sharp_, sharp) };


    // smooth Field Functions 
    bool hasSmooth() const { return this->smooth_ != nullptr;};
    void deleteSmooth() { this->smooth_ = nullptr;};
    inline float smooth() const { DARABONBA_PTR_GET_DEFAULT(smooth_, 0.0) };
    inline FaceBeautyAdvanceRequest& setSmooth(float smooth) { DARABONBA_PTR_SET_VALUE(smooth_, smooth) };


    // white Field Functions 
    bool hasWhite() const { return this->white_ != nullptr;};
    void deleteWhite() { this->white_ = nullptr;};
    inline float white() const { DARABONBA_PTR_GET_DEFAULT(white_, 0.0) };
    inline FaceBeautyAdvanceRequest& setWhite(float white) { DARABONBA_PTR_SET_VALUE(white_, white) };


  protected:
    // This parameter is required.
    shared_ptr<Darabonba::IStream> imageURLObject_ = nullptr;
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
