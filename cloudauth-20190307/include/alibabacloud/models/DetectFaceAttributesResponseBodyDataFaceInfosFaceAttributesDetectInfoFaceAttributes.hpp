// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFOFACEATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DETECTFACEATTRIBUTESRESPONSEBODYDATAFACEINFOSFACEATTRIBUTESDETECTINFOFACEATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose.hpp>
#include <alibabacloud/models/DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Blur, blur_);
      DARABONBA_PTR_TO_JSON(Facequal, facequal_);
      DARABONBA_PTR_TO_JSON(Facetype, facetype_);
      DARABONBA_PTR_TO_JSON(Glasses, glasses_);
      DARABONBA_PTR_TO_JSON(Headpose, headpose_);
      DARABONBA_PTR_TO_JSON(Integrity, integrity_);
      DARABONBA_PTR_TO_JSON(Respirator, respirator_);
      DARABONBA_PTR_TO_JSON(Smiling, smiling_);
    };
    friend void from_json(const Darabonba::Json& j, DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Blur, blur_);
      DARABONBA_PTR_FROM_JSON(Facequal, facequal_);
      DARABONBA_PTR_FROM_JSON(Facetype, facetype_);
      DARABONBA_PTR_FROM_JSON(Glasses, glasses_);
      DARABONBA_PTR_FROM_JSON(Headpose, headpose_);
      DARABONBA_PTR_FROM_JSON(Integrity, integrity_);
      DARABONBA_PTR_FROM_JSON(Respirator, respirator_);
      DARABONBA_PTR_FROM_JSON(Smiling, smiling_);
    };
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes &&) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes() = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& operator=(const DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes &) = default ;
    DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& operator=(DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blur_ == nullptr
        && return this->facequal_ == nullptr && return this->facetype_ == nullptr && return this->glasses_ == nullptr && return this->headpose_ == nullptr && return this->integrity_ == nullptr
        && return this->respirator_ == nullptr && return this->smiling_ == nullptr; };
    // blur Field Functions 
    bool hasBlur() const { return this->blur_ != nullptr;};
    void deleteBlur() { this->blur_ = nullptr;};
    inline float blur() const { DARABONBA_PTR_GET_DEFAULT(blur_, 0.0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setBlur(float blur) { DARABONBA_PTR_SET_VALUE(blur_, blur) };


    // facequal Field Functions 
    bool hasFacequal() const { return this->facequal_ != nullptr;};
    void deleteFacequal() { this->facequal_ = nullptr;};
    inline float facequal() const { DARABONBA_PTR_GET_DEFAULT(facequal_, 0.0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setFacequal(float facequal) { DARABONBA_PTR_SET_VALUE(facequal_, facequal) };


    // facetype Field Functions 
    bool hasFacetype() const { return this->facetype_ != nullptr;};
    void deleteFacetype() { this->facetype_ = nullptr;};
    inline string facetype() const { DARABONBA_PTR_GET_DEFAULT(facetype_, "") };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setFacetype(string facetype) { DARABONBA_PTR_SET_VALUE(facetype_, facetype) };


    // glasses Field Functions 
    bool hasGlasses() const { return this->glasses_ != nullptr;};
    void deleteGlasses() { this->glasses_ = nullptr;};
    inline string glasses() const { DARABONBA_PTR_GET_DEFAULT(glasses_, "") };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setGlasses(string glasses) { DARABONBA_PTR_SET_VALUE(glasses_, glasses) };


    // headpose Field Functions 
    bool hasHeadpose() const { return this->headpose_ != nullptr;};
    void deleteHeadpose() { this->headpose_ = nullptr;};
    inline const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose & headpose() const { DARABONBA_PTR_GET_CONST(headpose_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose) };
    inline Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose headpose() { DARABONBA_PTR_GET(headpose_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setHeadpose(const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose & headpose) { DARABONBA_PTR_SET_VALUE(headpose_, headpose) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setHeadpose(Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose && headpose) { DARABONBA_PTR_SET_RVALUE(headpose_, headpose) };


    // integrity Field Functions 
    bool hasIntegrity() const { return this->integrity_ != nullptr;};
    void deleteIntegrity() { this->integrity_ = nullptr;};
    inline int32_t integrity() const { DARABONBA_PTR_GET_DEFAULT(integrity_, 0) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setIntegrity(int32_t integrity) { DARABONBA_PTR_SET_VALUE(integrity_, integrity) };


    // respirator Field Functions 
    bool hasRespirator() const { return this->respirator_ != nullptr;};
    void deleteRespirator() { this->respirator_ = nullptr;};
    inline string respirator() const { DARABONBA_PTR_GET_DEFAULT(respirator_, "") };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setRespirator(string respirator) { DARABONBA_PTR_SET_VALUE(respirator_, respirator) };


    // smiling Field Functions 
    bool hasSmiling() const { return this->smiling_ != nullptr;};
    void deleteSmiling() { this->smiling_ = nullptr;};
    inline const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling & smiling() const { DARABONBA_PTR_GET_CONST(smiling_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling) };
    inline Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling smiling() { DARABONBA_PTR_GET(smiling_, Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setSmiling(const Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling & smiling) { DARABONBA_PTR_SET_VALUE(smiling_, smiling) };
    inline DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributes& setSmiling(Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling && smiling) { DARABONBA_PTR_SET_RVALUE(smiling_, smiling) };


  protected:
    // Face blur level, with higher values indicating more blurriness. Typically, a value ≥2.0 is considered quite blurry. It is recommended to adjust based on actual business data testing.
    std::shared_ptr<float> blur_ = nullptr;
    // A score ranging from 0 to 100. The higher the score, the better the quality. It is recommended to consider a score of 50 or above as acceptable quality.
    std::shared_ptr<float> facequal_ = nullptr;
    // Whether it is a human face. Values:
    // 
    // - **None**: Not a human face
    // - **Face**: Human face
    // - **Profile**: Profile (head turned left or right by more than 30°)
    // 
    // > If no face is detected, the `faceInfos` in the response will be empty; here, `None` means that a face was detected but is considered to be a cartoon, pet, etc.
    std::shared_ptr<string> facetype_ = nullptr;
    // Whether wearing glasses. Values:
    // 
    // - **None**: Not wearing glasses
    // - **Wear**: Wearing regular glasses
    // - **Sunglass**: Wearing sunglasses
    std::shared_ptr<string> glasses_ = nullptr;
    // Face pose.
    std::shared_ptr<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesHeadpose> headpose_ = nullptr;
    // A score ranging from 0 to 100. The higher the score, the more complete the face. It is recommended to consider a score of 70 or above as acceptable completeness.
    std::shared_ptr<int32_t> integrity_ = nullptr;
    // Whether wearing a mask. Values:
    // 
    // - Wear: Wearing a mask.
    // - None: Not wearing a mask.
    std::shared_ptr<string> respirator_ = nullptr;
    // Whether smiling.
    std::shared_ptr<Models::DetectFaceAttributesResponseBodyDataFaceInfosFaceAttributesDetectInfoFaceAttributesSmiling> smiling_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
