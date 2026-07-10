// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      // faceFileObject_ is stream
      DARABONBA_PTR_TO_JSON(FacePicture, facePicture_);
      DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      // faceFileObject_ is stream
      DARABONBA_PTR_FROM_JSON(FacePicture, facePicture_);
      DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Id3MetaVerifyAdvanceRequest() = default ;
    Id3MetaVerifyAdvanceRequest(const Id3MetaVerifyAdvanceRequest &) = default ;
    Id3MetaVerifyAdvanceRequest(Id3MetaVerifyAdvanceRequest &&) = default ;
    Id3MetaVerifyAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyAdvanceRequest() = default ;
    Id3MetaVerifyAdvanceRequest& operator=(const Id3MetaVerifyAdvanceRequest &) = default ;
    Id3MetaVerifyAdvanceRequest& operator=(Id3MetaVerifyAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->crop_ == nullptr
        && this->faceFileObject_ == nullptr && this->facePicture_ == nullptr && this->faceUrl_ == nullptr && this->identifyNum_ == nullptr && this->paramType_ == nullptr
        && this->userName_ == nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string getCrop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline Id3MetaVerifyAdvanceRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // faceFileObject Field Functions 
    bool hasFaceFileObject() const { return this->faceFileObject_ != nullptr;};
    void deleteFaceFileObject() { this->faceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFaceFileObject() const { DARABONBA_GET(faceFileObject_) };
    inline Id3MetaVerifyAdvanceRequest& setFaceFileObject(shared_ptr<Darabonba::IStream> faceFileObject) { DARABONBA_SET_VALUE(faceFileObject_, faceFileObject) };


    // facePicture Field Functions 
    bool hasFacePicture() const { return this->facePicture_ != nullptr;};
    void deleteFacePicture() { this->facePicture_ = nullptr;};
    inline string getFacePicture() const { DARABONBA_PTR_GET_DEFAULT(facePicture_, "") };
    inline Id3MetaVerifyAdvanceRequest& setFacePicture(string facePicture) { DARABONBA_PTR_SET_VALUE(facePicture_, facePicture) };


    // faceUrl Field Functions 
    bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
    void deleteFaceUrl() { this->faceUrl_ = nullptr;};
    inline string getFaceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
    inline Id3MetaVerifyAdvanceRequest& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string getIdentifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Id3MetaVerifyAdvanceRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Id3MetaVerifyAdvanceRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Id3MetaVerifyAdvanceRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Specifies whether to allow cropping of the facial photo. By default, cropping is not allowed. Valid values:
    // - T: Cropping is allowed.
    // - F: Cropping is not allowed.
    // 
    // **Note**
    // 
    // If the requested image is not captured by a standard liveness detection SDK, allow cropping of the facial photo. After this feature is enabled, the requested image is first cropped and corrected for the face before the request is sent to the service.
    shared_ptr<string> crop_ {};
    // The input stream of the ID card portrait side photo. Specify either CertUrl or CertFile.
    shared_ptr<Darabonba::IStream> faceFileObject_ {};
    shared_ptr<string> facePicture_ {};
    // The photo of the ID card portrait side. Specify a publicly accessible HTTP or HTTPS URL. Specify either CertUrl or CertFile.
    shared_ptr<string> faceUrl_ {};
    // The ID card number:
    // - If paramType is set to normal: enter the ID card number in plaintext.
    // - If paramType is set to md5: the first 6 digits of the ID card number (plaintext) + date of birth (ciphertext) + the last 4 digits of the ID card number (plaintext).
    shared_ptr<string> identifyNum_ {};
    // The encryption method. Valid values:
    // - normal: plaintext without encryption
    // - md5: MD5 encryption
    // 
    // **Important**
    // 
    // - All encrypted parameter values use 32-character lowercase MD5 strings.
    // - Different MD5 tools may produce different ciphertext. If the API call succeeds with plaintext but fails after encryption, try a different MD5 tool.
    shared_ptr<string> paramType_ {};
    // The name:
    // - If paramType is set to normal: enter the name in plaintext.
    // - If paramType is set to md5: the first character of the name (ciphertext) + the remaining characters of the name (plaintext).
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
