// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ID3METAVERIFYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ID3METAVERIFYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class Id3MetaVerifyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Id3MetaVerifyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Crop, crop_);
      DARABONBA_PTR_TO_JSON(FaceFile, faceFile_);
      DARABONBA_PTR_TO_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_TO_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_TO_JSON(ParamType, paramType_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, Id3MetaVerifyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Crop, crop_);
      DARABONBA_PTR_FROM_JSON(FaceFile, faceFile_);
      DARABONBA_PTR_FROM_JSON(FaceUrl, faceUrl_);
      DARABONBA_PTR_FROM_JSON(IdentifyNum, identifyNum_);
      DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    Id3MetaVerifyRequest() = default ;
    Id3MetaVerifyRequest(const Id3MetaVerifyRequest &) = default ;
    Id3MetaVerifyRequest(Id3MetaVerifyRequest &&) = default ;
    Id3MetaVerifyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Id3MetaVerifyRequest() = default ;
    Id3MetaVerifyRequest& operator=(const Id3MetaVerifyRequest &) = default ;
    Id3MetaVerifyRequest& operator=(Id3MetaVerifyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->crop_ != nullptr
        && this->faceFile_ != nullptr && this->faceUrl_ != nullptr && this->identifyNum_ != nullptr && this->paramType_ != nullptr && this->userName_ != nullptr; };
    // crop Field Functions 
    bool hasCrop() const { return this->crop_ != nullptr;};
    void deleteCrop() { this->crop_ = nullptr;};
    inline string crop() const { DARABONBA_PTR_GET_DEFAULT(crop_, "") };
    inline Id3MetaVerifyRequest& setCrop(string crop) { DARABONBA_PTR_SET_VALUE(crop_, crop) };


    // faceFile Field Functions 
    bool hasFaceFile() const { return this->faceFile_ != nullptr;};
    void deleteFaceFile() { this->faceFile_ = nullptr;};
    inline string faceFile() const { DARABONBA_PTR_GET_DEFAULT(faceFile_, "") };
    inline Id3MetaVerifyRequest& setFaceFile(string faceFile) { DARABONBA_PTR_SET_VALUE(faceFile_, faceFile) };


    // faceUrl Field Functions 
    bool hasFaceUrl() const { return this->faceUrl_ != nullptr;};
    void deleteFaceUrl() { this->faceUrl_ = nullptr;};
    inline string faceUrl() const { DARABONBA_PTR_GET_DEFAULT(faceUrl_, "") };
    inline Id3MetaVerifyRequest& setFaceUrl(string faceUrl) { DARABONBA_PTR_SET_VALUE(faceUrl_, faceUrl) };


    // identifyNum Field Functions 
    bool hasIdentifyNum() const { return this->identifyNum_ != nullptr;};
    void deleteIdentifyNum() { this->identifyNum_ = nullptr;};
    inline string identifyNum() const { DARABONBA_PTR_GET_DEFAULT(identifyNum_, "") };
    inline Id3MetaVerifyRequest& setIdentifyNum(string identifyNum) { DARABONBA_PTR_SET_VALUE(identifyNum_, identifyNum) };


    // paramType Field Functions 
    bool hasParamType() const { return this->paramType_ != nullptr;};
    void deleteParamType() { this->paramType_ = nullptr;};
    inline string paramType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
    inline Id3MetaVerifyRequest& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline Id3MetaVerifyRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    // Whether to allow cropping of the face image, default is not allowed.
    // - T: Allow cropping.
    // - F: Do not allow cropping.
    // 
    // **Note**
    // 
    // If the image you request is not collected from a standard liveness detection SDK, it is recommended to allow cropping of the face image. After enabling this feature, the system will first crop and correct the requested image, then initiate the service request.
    std::shared_ptr<string> crop_ = nullptr;
    // Portrait side of the ID card image input stream.
    // Choose one between `CertUrl` and `CertFile`.
    std::shared_ptr<string> faceFile_ = nullptr;
    // Portrait side of the ID card image.
    // Accessible HTTP or HTTPS link on the public network.
    // Choose one between `CertUrl` and `CertFile`.
    std::shared_ptr<string> faceUrl_ = nullptr;
    // ID number:
    // - When `paramType` is `normal`: enter the plaintext ID number.
    // - When `paramType` is `md5`:
    // The first 6 digits (plaintext) + date of birth (ciphertext) + last 4 digits (plaintext).
    std::shared_ptr<string> identifyNum_ = nullptr;
    // Encryption method:
    // - normal: plaintext without encryption
    // - md5: MD5 encryption
    // 
    // **Important**
    // 
    // - All encrypted parameters should be in the form of a 32-character lowercase MD5 string.
    // - The ciphertext generated by different MD5 tools may vary. If the interface works before encryption but not after, try changing the MD5 tool.
    std::shared_ptr<string> paramType_ = nullptr;
    // Name:
    // - When `paramType` is `normal`: enter the plaintext name.
    // - When `paramType` is `md5`: the first character of the name (ciphertext) + the rest of the name (plaintext).
    std::shared_ptr<string> userName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
