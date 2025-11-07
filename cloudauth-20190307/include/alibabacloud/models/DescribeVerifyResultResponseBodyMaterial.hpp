// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODYMATERIAL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYRESULTRESPONSEBODYMATERIAL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVerifyResultResponseBodyMaterialIdCardInfo.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class DescribeVerifyResultResponseBodyMaterial : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyResultResponseBodyMaterial& obj) { 
      DARABONBA_PTR_TO_JSON(FaceGlobalUrl, faceGlobalUrl_);
      DARABONBA_PTR_TO_JSON(FaceImageUrl, faceImageUrl_);
      DARABONBA_PTR_TO_JSON(FaceMask, faceMask_);
      DARABONBA_PTR_TO_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_TO_JSON(IdCardInfo, idCardInfo_);
      DARABONBA_PTR_TO_JSON(IdCardName, idCardName_);
      DARABONBA_PTR_TO_JSON(IdCardNumber, idCardNumber_);
      DARABONBA_PTR_TO_JSON(VideoUrls, videoUrls_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyResultResponseBodyMaterial& obj) { 
      DARABONBA_PTR_FROM_JSON(FaceGlobalUrl, faceGlobalUrl_);
      DARABONBA_PTR_FROM_JSON(FaceImageUrl, faceImageUrl_);
      DARABONBA_PTR_FROM_JSON(FaceMask, faceMask_);
      DARABONBA_PTR_FROM_JSON(FaceQuality, faceQuality_);
      DARABONBA_PTR_FROM_JSON(IdCardInfo, idCardInfo_);
      DARABONBA_PTR_FROM_JSON(IdCardName, idCardName_);
      DARABONBA_PTR_FROM_JSON(IdCardNumber, idCardNumber_);
      DARABONBA_PTR_FROM_JSON(VideoUrls, videoUrls_);
    };
    DescribeVerifyResultResponseBodyMaterial() = default ;
    DescribeVerifyResultResponseBodyMaterial(const DescribeVerifyResultResponseBodyMaterial &) = default ;
    DescribeVerifyResultResponseBodyMaterial(DescribeVerifyResultResponseBodyMaterial &&) = default ;
    DescribeVerifyResultResponseBodyMaterial(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyResultResponseBodyMaterial() = default ;
    DescribeVerifyResultResponseBodyMaterial& operator=(const DescribeVerifyResultResponseBodyMaterial &) = default ;
    DescribeVerifyResultResponseBodyMaterial& operator=(DescribeVerifyResultResponseBodyMaterial &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->faceGlobalUrl_ == nullptr
        && return this->faceImageUrl_ == nullptr && return this->faceMask_ == nullptr && return this->faceQuality_ == nullptr && return this->idCardInfo_ == nullptr && return this->idCardName_ == nullptr
        && return this->idCardNumber_ == nullptr && return this->videoUrls_ == nullptr; };
    // faceGlobalUrl Field Functions 
    bool hasFaceGlobalUrl() const { return this->faceGlobalUrl_ != nullptr;};
    void deleteFaceGlobalUrl() { this->faceGlobalUrl_ = nullptr;};
    inline string faceGlobalUrl() const { DARABONBA_PTR_GET_DEFAULT(faceGlobalUrl_, "") };
    inline DescribeVerifyResultResponseBodyMaterial& setFaceGlobalUrl(string faceGlobalUrl) { DARABONBA_PTR_SET_VALUE(faceGlobalUrl_, faceGlobalUrl) };


    // faceImageUrl Field Functions 
    bool hasFaceImageUrl() const { return this->faceImageUrl_ != nullptr;};
    void deleteFaceImageUrl() { this->faceImageUrl_ = nullptr;};
    inline string faceImageUrl() const { DARABONBA_PTR_GET_DEFAULT(faceImageUrl_, "") };
    inline DescribeVerifyResultResponseBodyMaterial& setFaceImageUrl(string faceImageUrl) { DARABONBA_PTR_SET_VALUE(faceImageUrl_, faceImageUrl) };


    // faceMask Field Functions 
    bool hasFaceMask() const { return this->faceMask_ != nullptr;};
    void deleteFaceMask() { this->faceMask_ = nullptr;};
    inline bool faceMask() const { DARABONBA_PTR_GET_DEFAULT(faceMask_, false) };
    inline DescribeVerifyResultResponseBodyMaterial& setFaceMask(bool faceMask) { DARABONBA_PTR_SET_VALUE(faceMask_, faceMask) };


    // faceQuality Field Functions 
    bool hasFaceQuality() const { return this->faceQuality_ != nullptr;};
    void deleteFaceQuality() { this->faceQuality_ = nullptr;};
    inline string faceQuality() const { DARABONBA_PTR_GET_DEFAULT(faceQuality_, "") };
    inline DescribeVerifyResultResponseBodyMaterial& setFaceQuality(string faceQuality) { DARABONBA_PTR_SET_VALUE(faceQuality_, faceQuality) };


    // idCardInfo Field Functions 
    bool hasIdCardInfo() const { return this->idCardInfo_ != nullptr;};
    void deleteIdCardInfo() { this->idCardInfo_ = nullptr;};
    inline const Models::DescribeVerifyResultResponseBodyMaterialIdCardInfo & idCardInfo() const { DARABONBA_PTR_GET_CONST(idCardInfo_, Models::DescribeVerifyResultResponseBodyMaterialIdCardInfo) };
    inline Models::DescribeVerifyResultResponseBodyMaterialIdCardInfo idCardInfo() { DARABONBA_PTR_GET(idCardInfo_, Models::DescribeVerifyResultResponseBodyMaterialIdCardInfo) };
    inline DescribeVerifyResultResponseBodyMaterial& setIdCardInfo(const Models::DescribeVerifyResultResponseBodyMaterialIdCardInfo & idCardInfo) { DARABONBA_PTR_SET_VALUE(idCardInfo_, idCardInfo) };
    inline DescribeVerifyResultResponseBodyMaterial& setIdCardInfo(Models::DescribeVerifyResultResponseBodyMaterialIdCardInfo && idCardInfo) { DARABONBA_PTR_SET_RVALUE(idCardInfo_, idCardInfo) };


    // idCardName Field Functions 
    bool hasIdCardName() const { return this->idCardName_ != nullptr;};
    void deleteIdCardName() { this->idCardName_ = nullptr;};
    inline string idCardName() const { DARABONBA_PTR_GET_DEFAULT(idCardName_, "") };
    inline DescribeVerifyResultResponseBodyMaterial& setIdCardName(string idCardName) { DARABONBA_PTR_SET_VALUE(idCardName_, idCardName) };


    // idCardNumber Field Functions 
    bool hasIdCardNumber() const { return this->idCardNumber_ != nullptr;};
    void deleteIdCardNumber() { this->idCardNumber_ = nullptr;};
    inline string idCardNumber() const { DARABONBA_PTR_GET_DEFAULT(idCardNumber_, "") };
    inline DescribeVerifyResultResponseBodyMaterial& setIdCardNumber(string idCardNumber) { DARABONBA_PTR_SET_VALUE(idCardNumber_, idCardNumber) };


    // videoUrls Field Functions 
    bool hasVideoUrls() const { return this->videoUrls_ != nullptr;};
    void deleteVideoUrls() { this->videoUrls_ = nullptr;};
    inline const vector<string> & videoUrls() const { DARABONBA_PTR_GET_CONST(videoUrls_, vector<string>) };
    inline vector<string> videoUrls() { DARABONBA_PTR_GET(videoUrls_, vector<string>) };
    inline DescribeVerifyResultResponseBodyMaterial& setVideoUrls(const vector<string> & videoUrls) { DARABONBA_PTR_SET_VALUE(videoUrls_, videoUrls) };
    inline DescribeVerifyResultResponseBodyMaterial& setVideoUrls(vector<string> && videoUrls) { DARABONBA_PTR_SET_RVALUE(videoUrls_, videoUrls) };


  protected:
    // The global camera image captured by the real-person authentication SDK.
    // 
    // > This parameter will only take effect after configuration. If you need to use this parameter, please submit a [ticket](https://selfservice.console.aliyun.com/ticket/category/cloudauth/today) to contact us.
    std::shared_ptr<string> faceGlobalUrl_ = nullptr;
    // The HTTP or HTTPS link to the frontal face image. The link is valid for 5 minutes, and it is recommended to store it elsewhere to avoid any impact on usage.
    // > If the HTTP or HTTPS link to the frontal face image expires, you can call [DescribeVerifyResult](https://help.aliyun.com/document_detail/154606.html) again to get the link.
    std::shared_ptr<string> faceImageUrl_ = nullptr;
    // Whether the face is wearing a mask. Values:
    // - **true**: Wearing a mask
    // - **false**: Not wearing a mask
    std::shared_ptr<bool> faceMask_ = nullptr;
    // The quality of the frontal face image. Values:
    // - **UNQUALIFIED**: Poor quality
    // - **LOW**: Low
    // - **NORMAL**: Normal
    // - **HIGH**: High
    std::shared_ptr<string> faceQuality_ = nullptr;
    // OCR results of the ID card information.
    // > If there is no front and back information of the ID card during the authentication process, the real-person authentication service will not return the OCR results of the ID card. Even if there is front and back information of the ID card during the authentication process, the real-person authentication service does not guarantee to return all the information on the ID card. Due to issues with ID card photography, the OCR may fail to recognize some information, resulting in incomplete OCR information. It is recommended that your business does not strongly rely on the ID card OCR information.
    std::shared_ptr<Models::DescribeVerifyResultResponseBodyMaterialIdCardInfo> idCardInfo_ = nullptr;
    // Name.
    std::shared_ptr<string> idCardName_ = nullptr;
    // ID number.
    std::shared_ptr<string> idCardNumber_ = nullptr;
    // The URL addresses of the recorded videos returned by the historical RPH5BioOnly solution.
    std::shared_ptr<vector<string>> videoUrls_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
