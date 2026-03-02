// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPLOADFILESIGNATURERESULT_HPP_
#define ALIBABACLOUD_MODELS_UPLOADFILESIGNATURERESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class UploadFileSignatureResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UploadFileSignatureResult& obj) { 
      DARABONBA_PTR_TO_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(keyId, keyId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(thumbUrl, thumbUrl_);
    };
    friend void from_json(const Darabonba::Json& j, UploadFileSignatureResult& obj) { 
      DARABONBA_PTR_FROM_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(fileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(keyId, keyId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(thumbUrl, thumbUrl_);
    };
    UploadFileSignatureResult() = default ;
    UploadFileSignatureResult(const UploadFileSignatureResult &) = default ;
    UploadFileSignatureResult(UploadFileSignatureResult &&) = default ;
    UploadFileSignatureResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UploadFileSignatureResult() = default ;
    UploadFileSignatureResult& operator=(const UploadFileSignatureResult &) = default ;
    UploadFileSignatureResult& operator=(UploadFileSignatureResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredTime_ == nullptr
        && this->fileUrl_ == nullptr && this->host_ == nullptr && this->keyId_ == nullptr && this->path_ == nullptr && this->policy_ == nullptr
        && this->signature_ == nullptr && this->thumbUrl_ == nullptr; };
    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline int64_t getExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, 0L) };
    inline UploadFileSignatureResult& setExpiredTime(int64_t expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string getFileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline UploadFileSignatureResult& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline UploadFileSignatureResult& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline UploadFileSignatureResult& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline UploadFileSignatureResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline UploadFileSignatureResult& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string getSignature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline UploadFileSignatureResult& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // thumbUrl Field Functions 
    bool hasThumbUrl() const { return this->thumbUrl_ != nullptr;};
    void deleteThumbUrl() { this->thumbUrl_ = nullptr;};
    inline string getThumbUrl() const { DARABONBA_PTR_GET_DEFAULT(thumbUrl_, "") };
    inline UploadFileSignatureResult& setThumbUrl(string thumbUrl) { DARABONBA_PTR_SET_VALUE(thumbUrl_, thumbUrl) };


  protected:
    shared_ptr<int64_t> expiredTime_ {};
    shared_ptr<string> fileUrl_ {};
    shared_ptr<string> host_ {};
    shared_ptr<string> keyId_ {};
    shared_ptr<string> path_ {};
    shared_ptr<string> policy_ {};
    shared_ptr<string> signature_ {};
    shared_ptr<string> thumbUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
