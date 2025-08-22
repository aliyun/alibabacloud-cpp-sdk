// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OSSUPLOADCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_OSSUPLOADCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20201002
{
namespace Models
{
  class OssUploadCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OssUploadCredential& obj) { 
      DARABONBA_PTR_TO_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_TO_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_TO_JSON(FilePath, filePath_);
      DARABONBA_PTR_TO_JSON(OssPolicy, ossPolicy_);
      DARABONBA_PTR_TO_JSON(OssSignature, ossSignature_);
      DARABONBA_PTR_TO_JSON(StsToken, stsToken_);
    };
    friend void from_json(const Darabonba::Json& j, OssUploadCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessKeyId, accessKeyId_);
      DARABONBA_PTR_FROM_JSON(Endpoint, endpoint_);
      DARABONBA_PTR_FROM_JSON(FilePath, filePath_);
      DARABONBA_PTR_FROM_JSON(OssPolicy, ossPolicy_);
      DARABONBA_PTR_FROM_JSON(OssSignature, ossSignature_);
      DARABONBA_PTR_FROM_JSON(StsToken, stsToken_);
    };
    OssUploadCredential() = default ;
    OssUploadCredential(const OssUploadCredential &) = default ;
    OssUploadCredential(OssUploadCredential &&) = default ;
    OssUploadCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OssUploadCredential() = default ;
    OssUploadCredential& operator=(const OssUploadCredential &) = default ;
    OssUploadCredential& operator=(OssUploadCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessKeyId_ != nullptr
        && this->endpoint_ != nullptr && this->filePath_ != nullptr && this->ossPolicy_ != nullptr && this->ossSignature_ != nullptr && this->stsToken_ != nullptr; };
    // accessKeyId Field Functions 
    bool hasAccessKeyId() const { return this->accessKeyId_ != nullptr;};
    void deleteAccessKeyId() { this->accessKeyId_ = nullptr;};
    inline string accessKeyId() const { DARABONBA_PTR_GET_DEFAULT(accessKeyId_, "") };
    inline OssUploadCredential& setAccessKeyId(string accessKeyId) { DARABONBA_PTR_SET_VALUE(accessKeyId_, accessKeyId) };


    // endpoint Field Functions 
    bool hasEndpoint() const { return this->endpoint_ != nullptr;};
    void deleteEndpoint() { this->endpoint_ = nullptr;};
    inline string endpoint() const { DARABONBA_PTR_GET_DEFAULT(endpoint_, "") };
    inline OssUploadCredential& setEndpoint(string endpoint) { DARABONBA_PTR_SET_VALUE(endpoint_, endpoint) };


    // filePath Field Functions 
    bool hasFilePath() const { return this->filePath_ != nullptr;};
    void deleteFilePath() { this->filePath_ = nullptr;};
    inline string filePath() const { DARABONBA_PTR_GET_DEFAULT(filePath_, "") };
    inline OssUploadCredential& setFilePath(string filePath) { DARABONBA_PTR_SET_VALUE(filePath_, filePath) };


    // ossPolicy Field Functions 
    bool hasOssPolicy() const { return this->ossPolicy_ != nullptr;};
    void deleteOssPolicy() { this->ossPolicy_ = nullptr;};
    inline string ossPolicy() const { DARABONBA_PTR_GET_DEFAULT(ossPolicy_, "") };
    inline OssUploadCredential& setOssPolicy(string ossPolicy) { DARABONBA_PTR_SET_VALUE(ossPolicy_, ossPolicy) };


    // ossSignature Field Functions 
    bool hasOssSignature() const { return this->ossSignature_ != nullptr;};
    void deleteOssSignature() { this->ossSignature_ = nullptr;};
    inline string ossSignature() const { DARABONBA_PTR_GET_DEFAULT(ossSignature_, "") };
    inline OssUploadCredential& setOssSignature(string ossSignature) { DARABONBA_PTR_SET_VALUE(ossSignature_, ossSignature) };


    // stsToken Field Functions 
    bool hasStsToken() const { return this->stsToken_ != nullptr;};
    void deleteStsToken() { this->stsToken_ = nullptr;};
    inline string stsToken() const { DARABONBA_PTR_GET_DEFAULT(stsToken_, "") };
    inline OssUploadCredential& setStsToken(string stsToken) { DARABONBA_PTR_SET_VALUE(stsToken_, stsToken) };


  protected:
    std::shared_ptr<string> accessKeyId_ = nullptr;
    std::shared_ptr<string> endpoint_ = nullptr;
    std::shared_ptr<string> filePath_ = nullptr;
    std::shared_ptr<string> ossPolicy_ = nullptr;
    std::shared_ptr<string> ossSignature_ = nullptr;
    std::shared_ptr<string> stsToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20201002
#endif
