// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFO_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes.hpp>
#include <alibabacloud/models/DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& obj) { 
      DARABONBA_PTR_TO_JSON(FaceAttributes, faceAttributes_);
      DARABONBA_PTR_TO_JSON(FaceRect, faceRect_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceAttributes, faceAttributes_);
      DARABONBA_PTR_FROM_JSON(FaceRect, faceRect_);
    };
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo &&) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& operator=(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& operator=(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceAttributes_ == nullptr
        && return this->faceRect_ == nullptr; };
    // faceAttributes Field Functions 
    bool hasFaceAttributes() const { return this->faceAttributes_ != nullptr;};
    void deleteFaceAttributes() { this->faceAttributes_ = nullptr;};
    inline const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes & faceAttributes() const { DARABONBA_PTR_GET_CONST(faceAttributes_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes) };
    inline Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes faceAttributes() { DARABONBA_PTR_GET(faceAttributes_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& setFaceAttributes(const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes & faceAttributes) { DARABONBA_PTR_SET_VALUE(faceAttributes_, faceAttributes) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& setFaceAttributes(Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes && faceAttributes) { DARABONBA_PTR_SET_RVALUE(faceAttributes_, faceAttributes) };


    // faceRect Field Functions 
    bool hasFaceRect() const { return this->faceRect_ != nullptr;};
    void deleteFaceRect() { this->faceRect_ = nullptr;};
    inline const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect & faceRect() const { DARABONBA_PTR_GET_CONST(faceRect_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect) };
    inline Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect faceRect() { DARABONBA_PTR_GET(faceRect_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& setFaceRect(const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect & faceRect) { DARABONBA_PTR_SET_VALUE(faceRect_, faceRect) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfo& setFaceRect(Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect && faceRect) { DARABONBA_PTR_SET_RVALUE(faceRect_, faceRect) };


  protected:
    // Face attributes.
    std::shared_ptr<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes> faceAttributes_ = nullptr;
    // Position of the face in the original image.
    std::shared_ptr<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceRect> faceRect_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
