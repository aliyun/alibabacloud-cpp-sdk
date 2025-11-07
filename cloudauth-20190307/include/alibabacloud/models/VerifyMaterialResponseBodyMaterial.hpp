// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODYMATERIAL_HPP_
#define ALIBABACLOUD_MODELS_VERIFYMATERIALRESPONSEBODYMATERIAL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/VerifyMaterialResponseBodyMaterialIdCardInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class VerifyMaterialResponseBodyMaterial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VerifyMaterialResponseBodyMaterial& obj) { 
      DARABONBA_PTR_TO_JSON(FaceGlobalUrl, faceGlobalUrl_);
      DARABONBA_PTR_TO_JSON(FaceImageUrl, faceImageUrl_);
      DARABONBA_PTR_TO_JSON(FaceMask, faceMask_);
      DARABONBA_PTR_TO_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_TO_JSON(IdCardInfo, idCardInfo_);
      DARABONBA_PTR_TO_JSON(IdCardName, idCardName_);
      DARABONBA_PTR_TO_JSON(IdCardNumber, idCardNumber_);
    };
    friend void from_json(const Darabonba::Json& j, VerifyMaterialResponseBodyMaterial& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceGlobalUrl, faceGlobalUrl_);
      DARABONBA_PTR_FROM_JSON(FaceImageUrl, faceImageUrl_);
      DARABONBA_PTR_FROM_JSON(FaceMask, faceMask_);
      DARABONBA_PTR_FROM_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_FROM_JSON(IdCardInfo, idCardInfo_);
      DARABONBA_PTR_FROM_JSON(IdCardName, idCardName_);
      DARABONBA_PTR_FROM_JSON(IdCardNumber, idCardNumber_);
    };
    VerifyMaterialResponseBodyMaterial() = default ;
    VerifyMaterialResponseBodyMaterial(const VerifyMaterialResponseBodyMaterial &) = default ;
    VerifyMaterialResponseBodyMaterial(VerifyMaterialResponseBodyMaterial &&) = default ;
    VerifyMaterialResponseBodyMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VerifyMaterialResponseBodyMaterial() = default ;
    VerifyMaterialResponseBodyMaterial& operator=(const VerifyMaterialResponseBodyMaterial &) = default ;
    VerifyMaterialResponseBodyMaterial& operator=(VerifyMaterialResponseBodyMaterial &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceGlobalUrl_ == nullptr
        && return this->faceImageUrl_ == nullptr && return this->faceMask_ == nullptr && return this->faceQuality_ == nullptr && return this->idCardInfo_ == nullptr && return this->idCardName_ == nullptr
        && return this->idCardNumber_ == nullptr; };
    // faceGlobalUrl Field Functions 
    bool hasFaceGlobalUrl() const { return this->faceGlobalUrl_ != nullptr;};
    void deleteFaceGlobalUrl() { this->faceGlobalUrl_ = nullptr;};
    inline string faceGlobalUrl() const { DARABONBA_PTR_GET_DEFAULT(faceGlobalUrl_, "") };
    inline VerifyMaterialResponseBodyMaterial& setFaceGlobalUrl(string faceGlobalUrl) { DARABONBA_PTR_SET_VALUE(faceGlobalUrl_, faceGlobalUrl) };


    // faceImageUrl Field Functions 
    bool hasFaceImageUrl() const { return this->faceImageUrl_ != nullptr;};
    void deleteFaceImageUrl() { this->faceImageUrl_ = nullptr;};
    inline string faceImageUrl() const { DARABONBA_PTR_GET_DEFAULT(faceImageUrl_, "") };
    inline VerifyMaterialResponseBodyMaterial& setFaceImageUrl(string faceImageUrl) { DARABONBA_PTR_SET_VALUE(faceImageUrl_, faceImageUrl) };


    // faceMask Field Functions 
    bool hasFaceMask() const { return this->faceMask_ != nullptr;};
    void deleteFaceMask() { this->faceMask_ = nullptr;};
    inline string faceMask() const { DARABONBA_PTR_GET_DEFAULT(faceMask_, "") };
    inline VerifyMaterialResponseBodyMaterial& setFaceMask(string faceMask) { DARABONBA_PTR_SET_VALUE(faceMask_, faceMask) };


    // faceQuality Field Functions 
    bool hasFaceQuality() const { return this->faceQuality_ != nullptr;};
    void deleteFaceQuality() { this->faceQuality_ = nullptr;};
    inline string faceQuality() const { DARABONBA_PTR_GET_DEFAULT(faceQuality_, "") };
    inline VerifyMaterialResponseBodyMaterial& setFaceQuality(string faceQuality) { DARABONBA_PTR_SET_VALUE(faceQuality_, faceQuality) };


    // idCardInfo Field Functions 
    bool hasIdCardInfo() const { return this->idCardInfo_ != nullptr;};
    void deleteIdCardInfo() { this->idCardInfo_ = nullptr;};
    inline const Models::VerifyMaterialResponseBodyMaterialIdCardInfo & idCardInfo() const { DARABONBA_PTR_GET_CONST(idCardInfo_, Models::VerifyMaterialResponseBodyMaterialIdCardInfo) };
    inline Models::VerifyMaterialResponseBodyMaterialIdCardInfo idCardInfo() { DARABONBA_PTR_GET(idCardInfo_, Models::VerifyMaterialResponseBodyMaterialIdCardInfo) };
    inline VerifyMaterialResponseBodyMaterial& setIdCardInfo(const Models::VerifyMaterialResponseBodyMaterialIdCardInfo & idCardInfo) { DARABONBA_PTR_SET_VALUE(idCardInfo_, idCardInfo) };
    inline VerifyMaterialResponseBodyMaterial& setIdCardInfo(Models::VerifyMaterialResponseBodyMaterialIdCardInfo && idCardInfo) { DARABONBA_PTR_SET_RVALUE(idCardInfo_, idCardInfo) };


    // idCardName Field Functions 
    bool hasIdCardName() const { return this->idCardName_ != nullptr;};
    void deleteIdCardName() { this->idCardName_ = nullptr;};
    inline string idCardName() const { DARABONBA_PTR_GET_DEFAULT(idCardName_, "") };
    inline VerifyMaterialResponseBodyMaterial& setIdCardName(string idCardName) { DARABONBA_PTR_SET_VALUE(idCardName_, idCardName) };


    // idCardNumber Field Functions 
    bool hasIdCardNumber() const { return this->idCardNumber_ != nullptr;};
    void deleteIdCardNumber() { this->idCardNumber_ = nullptr;};
    inline string idCardNumber() const { DARABONBA_PTR_GET_DEFAULT(idCardNumber_, "") };
    inline VerifyMaterialResponseBodyMaterial& setIdCardNumber(string idCardNumber) { DARABONBA_PTR_SET_VALUE(idCardNumber_, idCardNumber) };


  protected:
    // Global camera image captured by the real-person authentication SDK.
    // 
    // > This parameter will take effect after configuration. If you need to use this parameter, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
    std::shared_ptr<string> faceGlobalUrl_ = nullptr;
    // HTTP or HTTPS link to the frontal face image, corresponding to the request parameter **FaceImageUrl**. The link is valid for 5 minutes, and it is recommended to store it in your business to avoid affecting usage.
    std::shared_ptr<string> faceImageUrl_ = nullptr;
    // Whether the face is wearing a mask. Values:
    // - **true**: Wearing a mask
    // - **false**: Not wearing a mask
    std::shared_ptr<string> faceMask_ = nullptr;
    // The quality of the frontal face image. Possible values:
    // - **UNQUALIFIED**: Poor quality
    // - **LOW**: Low
    // - **NORMAL**: Average
    // - **HIGH**: High
    std::shared_ptr<string> faceQuality_ = nullptr;
    // OCR result of the ID card information.
    // 
    // > If there is no front or back of the ID card during the verification process, the OCR result of the ID card information will not be returned. Even if the front and back of the ID card are present during the verification process, it does not guarantee that all the information on the ID card will be returned. Due to issues such as poor ID card photography, the OCR may fail to recognize some information, leading to incomplete OCR results. It is recommended that the business side does not heavily rely on the ID card OCR information.
    std::shared_ptr<Models::VerifyMaterialResponseBodyMaterialIdCardInfo> idCardInfo_ = nullptr;
    // Name, corresponding to the request parameter **Name**.
    std::shared_ptr<string> idCardName_ = nullptr;
    // ID number, corresponding to the request parameter **IdCardNumber**.
    std::shared_ptr<string> idCardNumber_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
