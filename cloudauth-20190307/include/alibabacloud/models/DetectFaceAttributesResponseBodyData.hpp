// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectFaceAttributesResponseBodyDataFaceInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_TO_JSON(ImgHeight, imgHeight_);
      DARABONBA_PTR_TO_JSON(ImgWidth, imgWidth_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceInfos, faceInfos_);
      DARABONBA_PTR_FROM_JSON(ImgHeight, imgHeight_);
      DARABONBA_PTR_FROM_JSON(ImgWidth, imgWidth_);
    };
    DetectFaceAttributesResponseBodyData() = default ;
    DetectFaceAttributesResponseBodyData(const DetectFaceAttributesResponseBodyData &) = default ;
    DetectFaceAttributesResponseBodyData(DetectFaceAttributesResponseBodyData &&) = default ;
    DetectFaceAttributesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesResponseBodyData() = default ;
    DetectFaceAttributesResponseBodyData& operator=(const DetectFaceAttributesResponseBodyData &) = default ;
    DetectFaceAttributesResponseBodyData& operator=(DetectFaceAttributesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->faceInfos_ != nullptr
        && this->imgHeight_ != nullptr && this->imgWidth_ != nullptr; };
    // faceInfos Field Functions 
    bool hasFaceInfos() const { return this->faceInfos_ != nullptr;};
    void deleteFaceInfos() { this->faceInfos_ = nullptr;};
    inline const Models::DetectFaceAttributesResponseBodyDataFaceInfos & faceInfos() const { DARABONBA_PTR_GET_CONST(faceInfos_, Models::DetectFaceAttributesResponseBodyDataFaceInfos) };
    inline Models::DetectFaceAttributesResponseBodyDataFaceInfos faceInfos() { DARABONBA_PTR_GET(faceInfos_, Models::DetectFaceAttributesResponseBodyDataFaceInfos) };
    inline DetectFaceAttributesResponseBodyData& setFaceInfos(const Models::DetectFaceAttributesResponseBodyDataFaceInfos & faceInfos) { DARABONBA_PTR_SET_VALUE(faceInfos_, faceInfos) };
    inline DetectFaceAttributesResponseBodyData& setFaceInfos(Models::DetectFaceAttributesResponseBodyDataFaceInfos && faceInfos) { DARABONBA_PTR_SET_RVALUE(faceInfos_, faceInfos) };


    // imgHeight Field Functions 
    bool hasImgHeight() const { return this->imgHeight_ != nullptr;};
    void deleteImgHeight() { this->imgHeight_ = nullptr;};
    inline int32_t imgHeight() const { DARABONBA_PTR_GET_DEFAULT(imgHeight_, 0) };
    inline DetectFaceAttributesResponseBodyData& setImgHeight(int32_t imgHeight) { DARABONBA_PTR_SET_VALUE(imgHeight_, imgHeight) };


    // imgWidth Field Functions 
    bool hasImgWidth() const { return this->imgWidth_ != nullptr;};
    void deleteImgWidth() { this->imgWidth_ = nullptr;};
    inline int32_t imgWidth() const { DARABONBA_PTR_GET_DEFAULT(imgWidth_, 0) };
    inline DetectFaceAttributesResponseBodyData& setImgWidth(int32_t imgWidth) { DARABONBA_PTR_SET_VALUE(imgWidth_, imgWidth) };


  protected:
    // Face detection results.
    std::shared_ptr<Models::DetectFaceAttributesResponseBodyDataFaceInfos> faceInfos_ = nullptr;
    // Original image height, in pixels.
    std::shared_ptr<int32_t> imgHeight_ = nullptr;
    // Original image width, in pixels.
    std::shared_ptr<int32_t> imgWidth_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
