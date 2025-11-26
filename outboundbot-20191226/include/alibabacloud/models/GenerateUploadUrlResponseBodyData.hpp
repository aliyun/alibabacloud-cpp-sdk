// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEUPLOADURLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GENERATEUPLOADURLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GenerateUploadUrlResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateUploadUrlResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateUploadUrlResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GenerateUploadUrlResponseBodyData() = default ;
    GenerateUploadUrlResponseBodyData(const GenerateUploadUrlResponseBodyData &) = default ;
    GenerateUploadUrlResponseBodyData(GenerateUploadUrlResponseBodyData &&) = default ;
    GenerateUploadUrlResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateUploadUrlResponseBodyData() = default ;
    GenerateUploadUrlResponseBodyData& operator=(const GenerateUploadUrlResponseBodyData &) = default ;
    GenerateUploadUrlResponseBodyData& operator=(GenerateUploadUrlResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->expire_ == nullptr && return this->folder_ == nullptr && return this->host_ == nullptr && return this->message_ == nullptr && return this->policy_ == nullptr
        && return this->signature_ == nullptr && return this->success_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GenerateUploadUrlResponseBodyData& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int32_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0) };
    inline GenerateUploadUrlResponseBodyData& setExpire(int32_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline string folder() const { DARABONBA_PTR_GET_DEFAULT(folder_, "") };
    inline GenerateUploadUrlResponseBodyData& setFolder(string folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GenerateUploadUrlResponseBodyData& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GenerateUploadUrlResponseBodyData& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GenerateUploadUrlResponseBodyData& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GenerateUploadUrlResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GenerateUploadUrlResponseBodyData& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<int32_t> expire_ = nullptr;
    std::shared_ptr<string> folder_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
