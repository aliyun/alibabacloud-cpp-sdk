// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYFORPARTNERRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADFILEPOLICYFORPARTNERRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class GenerateUploadFilePolicyForPartnerResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadFilePolicyForPartnerResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(EncodedPolicy, encodedPolicy_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(FileDir, fileDir_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadFilePolicyForPartnerResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(EncodedPolicy, encodedPolicy_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(FileDir, fileDir_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(OssUrl, ossUrl_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    GenerateUploadFilePolicyForPartnerResponseBodyModule() = default ;
    GenerateUploadFilePolicyForPartnerResponseBodyModule(const GenerateUploadFilePolicyForPartnerResponseBodyModule &) = default ;
    GenerateUploadFilePolicyForPartnerResponseBodyModule(GenerateUploadFilePolicyForPartnerResponseBodyModule &&) = default ;
    GenerateUploadFilePolicyForPartnerResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadFilePolicyForPartnerResponseBodyModule() = default ;
    GenerateUploadFilePolicyForPartnerResponseBodyModule& operator=(const GenerateUploadFilePolicyForPartnerResponseBodyModule &) = default ;
    GenerateUploadFilePolicyForPartnerResponseBodyModule& operator=(GenerateUploadFilePolicyForPartnerResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->encodedPolicy_ == nullptr && return this->expireTime_ == nullptr && return this->fileDir_ == nullptr && return this->host_ == nullptr && return this->ossUrl_ == nullptr
        && return this->signature_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GenerateUploadFilePolicyForPartnerResponseBodyModule& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // encodedPolicy Field Functions 
    bool hasEncodedPolicy() const { return this->encodedPolicy_ != nullptr;};
    void deleteEncodedPolicy() { this->encodedPolicy_ = nullptr;};
    inline string encodedPolicy() const { DARABONBA_PTR_GET_DEFAULT(encodedPolicy_, "") };
    inline GenerateUploadFilePolicyForPartnerResponseBodyModule& setEncodedPolicy(string encodedPolicy) { DARABONBA_PTR_SET_VALUE(encodedPolicy_, encodedPolicy) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline GenerateUploadFilePolicyForPartnerResponseBodyModule& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // fileDir Field Functions 
    bool hasFileDir() const { return this->fileDir_ != nullptr;};
    void deleteFileDir() { this->fileDir_ = nullptr;};
    inline string fileDir() const { DARABONBA_PTR_GET_DEFAULT(fileDir_, "") };
    inline GenerateUploadFilePolicyForPartnerResponseBodyModule& setFileDir(string fileDir) { DARABONBA_PTR_SET_VALUE(fileDir_, fileDir) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GenerateUploadFilePolicyForPartnerResponseBodyModule& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // ossUrl Field Functions 
    bool hasOssUrl() const { return this->ossUrl_ != nullptr;};
    void deleteOssUrl() { this->ossUrl_ = nullptr;};
    inline string ossUrl() const { DARABONBA_PTR_GET_DEFAULT(ossUrl_, "") };
    inline GenerateUploadFilePolicyForPartnerResponseBodyModule& setOssUrl(string ossUrl) { DARABONBA_PTR_SET_VALUE(ossUrl_, ossUrl) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GenerateUploadFilePolicyForPartnerResponseBodyModule& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<string> encodedPolicy_ = nullptr;
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    std::shared_ptr<string> fileDir_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> ossUrl_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
