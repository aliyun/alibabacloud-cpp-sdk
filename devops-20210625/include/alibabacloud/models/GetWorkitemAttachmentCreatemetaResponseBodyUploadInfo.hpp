// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKITEMATTACHMENTCREATEMETARESPONSEBODYUPLOADINFO_HPP_
#define ALIBABACLOUD_MODELS_GETWORKITEMATTACHMENTCREATEMETARESPONSEBODYUPLOADINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& obj) { 
      DARABONBA_PTR_TO_JSON(accessid, accessid_);
      DARABONBA_PTR_TO_JSON(dir, dir_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(accessid, accessid_);
      DARABONBA_PTR_FROM_JSON(dir, dir_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
    };
    GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo() = default ;
    GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo(const GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo &) = default ;
    GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo(GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo &&) = default ;
    GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo() = default ;
    GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& operator=(const GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo &) = default ;
    GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& operator=(GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessid_ == nullptr
        && return this->dir_ == nullptr && return this->host_ == nullptr && return this->policy_ == nullptr && return this->signature_ == nullptr; };
    // accessid Field Functions 
    bool hasAccessid() const { return this->accessid_ != nullptr;};
    void deleteAccessid() { this->accessid_ = nullptr;};
    inline string accessid() const { DARABONBA_PTR_GET_DEFAULT(accessid_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& setAccessid(string accessid) { DARABONBA_PTR_SET_VALUE(accessid_, accessid) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetWorkitemAttachmentCreatemetaResponseBodyUploadInfo& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    std::shared_ptr<string> accessid_ = nullptr;
    std::shared_ptr<string> dir_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
