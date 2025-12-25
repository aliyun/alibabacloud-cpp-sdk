// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUPLOADPOLICYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEUPLOADPOLICYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tdsr20200101
{
namespace Models
{
  class CreateUploadPolicyResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUploadPolicyResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AccessId, accessId_);
      DARABONBA_PTR_TO_JSON(Callback, callback_);
      DARABONBA_PTR_TO_JSON(Dir, dir_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUploadPolicyResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessId, accessId_);
      DARABONBA_PTR_FROM_JSON(Callback, callback_);
      DARABONBA_PTR_FROM_JSON(Dir, dir_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    CreateUploadPolicyResponseBodyData() = default ;
    CreateUploadPolicyResponseBodyData(const CreateUploadPolicyResponseBodyData &) = default ;
    CreateUploadPolicyResponseBodyData(CreateUploadPolicyResponseBodyData &&) = default ;
    CreateUploadPolicyResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUploadPolicyResponseBodyData() = default ;
    CreateUploadPolicyResponseBodyData& operator=(const CreateUploadPolicyResponseBodyData &) = default ;
    CreateUploadPolicyResponseBodyData& operator=(CreateUploadPolicyResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessId_ == nullptr
        && return this->callback_ == nullptr && return this->dir_ == nullptr && return this->expire_ == nullptr && return this->host_ == nullptr && return this->policy_ == nullptr
        && return this->signature_ == nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline CreateUploadPolicyResponseBodyData& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // callback Field Functions 
    bool hasCallback() const { return this->callback_ != nullptr;};
    void deleteCallback() { this->callback_ = nullptr;};
    inline string callback() const { DARABONBA_PTR_GET_DEFAULT(callback_, "") };
    inline CreateUploadPolicyResponseBodyData& setCallback(string callback) { DARABONBA_PTR_SET_VALUE(callback_, callback) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline CreateUploadPolicyResponseBodyData& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline CreateUploadPolicyResponseBodyData& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline CreateUploadPolicyResponseBodyData& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline CreateUploadPolicyResponseBodyData& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline CreateUploadPolicyResponseBodyData& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    // accessId
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<string> callback_ = nullptr;
    std::shared_ptr<string> dir_ = nullptr;
    std::shared_ptr<string> expire_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tdsr20200101
#endif
