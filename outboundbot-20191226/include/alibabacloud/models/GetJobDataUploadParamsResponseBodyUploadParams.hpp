// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBDATAUPLOADPARAMSRESPONSEBODYUPLOADPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBDATAUPLOADPARAMSRESPONSEBODYUPLOADPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetJobDataUploadParamsResponseBodyUploadParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobDataUploadParamsResponseBodyUploadParams& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Folder, folder_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobDataUploadParamsResponseBodyUploadParams& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Folder, folder_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    GetJobDataUploadParamsResponseBodyUploadParams() = default ;
    GetJobDataUploadParamsResponseBodyUploadParams(const GetJobDataUploadParamsResponseBodyUploadParams &) = default ;
    GetJobDataUploadParamsResponseBodyUploadParams(GetJobDataUploadParamsResponseBodyUploadParams &&) = default ;
    GetJobDataUploadParamsResponseBodyUploadParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobDataUploadParamsResponseBodyUploadParams() = default ;
    GetJobDataUploadParamsResponseBodyUploadParams& operator=(const GetJobDataUploadParamsResponseBodyUploadParams &) = default ;
    GetJobDataUploadParamsResponseBodyUploadParams& operator=(GetJobDataUploadParamsResponseBodyUploadParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->expire_ == nullptr && return this->folder_ == nullptr && return this->host_ == nullptr && return this->policy_ == nullptr && return this->signature_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GetJobDataUploadParamsResponseBodyUploadParams& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int32_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0) };
    inline GetJobDataUploadParamsResponseBodyUploadParams& setExpire(int32_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // folder Field Functions 
    bool hasFolder() const { return this->folder_ != nullptr;};
    void deleteFolder() { this->folder_ = nullptr;};
    inline string folder() const { DARABONBA_PTR_GET_DEFAULT(folder_, "") };
    inline GetJobDataUploadParamsResponseBodyUploadParams& setFolder(string folder) { DARABONBA_PTR_SET_VALUE(folder_, folder) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetJobDataUploadParamsResponseBodyUploadParams& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetJobDataUploadParamsResponseBodyUploadParams& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetJobDataUploadParamsResponseBodyUploadParams& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<int32_t> expire_ = nullptr;
    std::shared_ptr<string> folder_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
