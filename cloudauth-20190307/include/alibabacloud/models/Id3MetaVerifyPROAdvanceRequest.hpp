// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYPROADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYPROADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyPROAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyPROAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(EnableFallback, enableFallback_);
      // faceFileObject_ is stream
      DARABONBA_PTR_TO_JSON(FacePicture, facePicture_);
      DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(LivenessCheck, livenessCheck_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyPROAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(EnableFallback, enableFallback_);
      // faceFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(FacePicture, facePicture_);
      DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(LivenessCheck, livenessCheck_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Id3MetaVerifyPROAdvanceRequest() = default ;
    Id3MetaVerifyPROAdvanceRequest(const Id3MetaVerifyPROAdvanceRequest &) = default ;
    Id3MetaVerifyPROAdvanceRequest(Id3MetaVerifyPROAdvanceRequest &&) = default ;
    Id3MetaVerifyPROAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyPROAdvanceRequest() = default ;
    Id3MetaVerifyPROAdvanceRequest& operator=(const Id3MetaVerifyPROAdvanceRequest &) = default ;
    Id3MetaVerifyPROAdvanceRequest& operator=(Id3MetaVerifyPROAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crop_ == nullptr
        && this->enableFallback_ == nullptr && this->faceFileObject_ == nullptr && this->facePicture_ == nullptr && this->faceUrl_ == nullptr && this->identifyNum_ == nullptr
        && this->livenessCheck_ == nullptr && this->paramType_ == nullptr && this->userName_ == nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // enableFallback Field Functions 
    bool hasEnableFallback() const { return this->enableFallback_ != nullptr;};
    void deleteEnableFallback() { this->enableFallback_ = nullptr;};
    inline string getEnableFallback() const { DARABONBA_PTR_GET_DEFAULT(enableFallback_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setEnableFallback(string enableFallback) { DARABONBA_PTR_SET_VALUE(enableFallback_, enableFallback) };


    // faceFileObject Field Functions 
    bool hasFaceFileObject() const { return this->faceFileObject_ != nullptr;};
    void deleteFaceFileObject() { this->faceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFaceFileObject() const { DARABONBA_GET(faceFileObject_) };
    inline Id3MetaVerifyPROAdvanceRequest& setFaceFileObject(shared_ptr<Darabonba::IStream> faceFileObject) { DARABONBA_SET_VALUE(faceFileObject_, faceFileObject) };


    // facePicture Field Functions 
    bool hasFacePicture() const { return this->facePicture_ != nullptr;};
    void deleteFacePicture() { this->facePicture_ = nullptr;};
    inline string getFacePicture() const { DARABONBA_PTR_GET_DEFAULT(facePicture_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setFacePicture(string facePicture) { DARABONBA_PTR_SET_VALUE(facePicture_, facePicture) };


    // faceUrl Field Functions 
    bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
    void deleteFaceUrl() { this->faceUrl_ = nullptr;};
    inline string getFaceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // livenessCheck Field Functions 
    bool hasLivenessCheck() const { return this->livenessCheck_ != nullptr;};
    void deleteLivenessCheck() { this->livenessCheck_ = nullptr;};
    inline string getLivenessCheck() const { DARABONBA_PTR_GET_DEFAULT(livenessCheck_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setLivenessCheck(string livenessCheck) { DARABONBA_PTR_SET_VALUE(livenessCheck_, livenessCheck) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Id3MetaVerifyPROAdvanceRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Specifies whether to allow cropping of the facial photo. By default, cropping is not allowed. Valid values:
    // - **T**: Cropping is allowed.
    // - **F**: Cropping is not allowed.
    // > If the requested image is not captured by a standard liveness detection SDK, allow cropping of the facial photo.
    // After this feature is enabled, the requested image is first cropped and corrected for the face, and then the request is sent to the service.
    shared_ptr<string> crop_ {};
    // Specifies whether to allow fallback to a non-public security source. Valid values:
    // 
    // - **N** (default): Disabled.
    // - **Y**: Enabled.
    shared_ptr<string> enableFallback_ {};
    // The input stream of the facial photo.
    shared_ptr<Darabonba::IStream> faceFileObject_ {};
    // The Base64-encoded photo. If you use this method to submit the facial photo, check the photo size and do not submit an excessively large photo.
    shared_ptr<string> facePicture_ {};
    // The URL of the facial photo. The URL must be a publicly accessible HTTP or HTTPS link.
    shared_ptr<string> faceUrl_ {};
    // The ID card number.
    // 
    // - If **paramType** is set to normal: Enter the ID card number in plaintext.
    // 
    // - If **paramType** is set to sm2: Enter the encrypted ID card number.
    // 
    // 
    // > Due to authoritative source limitations, only second-generation resident ID card numbers are supported.
    shared_ptr<string> identifyNum_ {};
    // Specifies whether to enable liveness detection. Valid values:
    // 
    // - **N** (default): Liveness detection is disabled.
    // - **Y**: Liveness detection is enabled.
    shared_ptr<string> livenessCheck_ {};
    // The encryption method. Valid values:
    // 
    // - **normal**: Plaintext without encryption.
    // 
    // - **sm2**: SM2 encryption.
    shared_ptr<string> paramType_ {};
    // The name.
    // 
    // - If **paramType** is set to normal: Enter the name in plaintext.
    // 
    // - If **paramType** is set to sm2: Enter the encrypted name.
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
