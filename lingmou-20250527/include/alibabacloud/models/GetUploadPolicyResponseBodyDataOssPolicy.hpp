// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADPOLICYRESPONSEBODYDATAOSSPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADPOLICYRESPONSEBODYDATAOSSPOLICY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LingMou20250527
{
namespace Models
{
  class GetUploadPolicyResponseBodyDataOssPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadPolicyResponseBodyDataOssPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(accessId, accessId_);
      DARABONBA_PTR_TO_JSON(dir, dir_);
      DARABONBA_PTR_TO_JSON(expire, expire_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadPolicyResponseBodyDataOssPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(accessId, accessId_);
      DARABONBA_PTR_FROM_JSON(dir, dir_);
      DARABONBA_PTR_FROM_JSON(expire, expire_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
    };
    GetUploadPolicyResponseBodyDataOssPolicy() = default ;
    GetUploadPolicyResponseBodyDataOssPolicy(const GetUploadPolicyResponseBodyDataOssPolicy &) = default ;
    GetUploadPolicyResponseBodyDataOssPolicy(GetUploadPolicyResponseBodyDataOssPolicy &&) = default ;
    GetUploadPolicyResponseBodyDataOssPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadPolicyResponseBodyDataOssPolicy() = default ;
    GetUploadPolicyResponseBodyDataOssPolicy& operator=(const GetUploadPolicyResponseBodyDataOssPolicy &) = default ;
    GetUploadPolicyResponseBodyDataOssPolicy& operator=(GetUploadPolicyResponseBodyDataOssPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->dir_ == nullptr && return this->expire_ == nullptr && return this->host_ == nullptr && return this->policy_ == nullptr && return this->signature_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline GetUploadPolicyResponseBodyDataOssPolicy& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline GetUploadPolicyResponseBodyDataOssPolicy& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline GetUploadPolicyResponseBodyDataOssPolicy& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetUploadPolicyResponseBodyDataOssPolicy& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetUploadPolicyResponseBodyDataOssPolicy& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetUploadPolicyResponseBodyDataOssPolicy& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // accessId。
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<string> dir_ = nullptr;
    std::shared_ptr<string> expire_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LingMou20250527
#endif
