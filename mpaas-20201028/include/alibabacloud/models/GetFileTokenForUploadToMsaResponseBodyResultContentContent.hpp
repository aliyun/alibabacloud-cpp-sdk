// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFILETOKENFORUPLOADTOMSARESPONSEBODYRESULTCONTENTCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETFILETOKENFORUPLOADTOMSARESPONSEBODYRESULTCONTENTCONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class GetFileTokenForUploadToMsaResponseBodyResultContentContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFileTokenForUploadToMsaResponseBodyResultContentContent& obj) { 
      DARABONBA_PTR_TO_JSON(Accessid, accessid_);
      DARABONBA_PTR_TO_JSON(Dir, dir_);
      DARABONBA_PTR_TO_JSON(Expire, expire_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(Policy, policy_);
      DARABONBA_PTR_TO_JSON(Signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, GetFileTokenForUploadToMsaResponseBodyResultContentContent& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessid, accessid_);
      DARABONBA_PTR_FROM_JSON(Dir, dir_);
      DARABONBA_PTR_FROM_JSON(Expire, expire_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(Policy, policy_);
      DARABONBA_PTR_FROM_JSON(Signature, signature_);
    };
    GetFileTokenForUploadToMsaResponseBodyResultContentContent() = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContentContent(const GetFileTokenForUploadToMsaResponseBodyResultContentContent &) = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContentContent(GetFileTokenForUploadToMsaResponseBodyResultContentContent &&) = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContentContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFileTokenForUploadToMsaResponseBodyResultContentContent() = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContentContent& operator=(const GetFileTokenForUploadToMsaResponseBodyResultContentContent &) = default ;
    GetFileTokenForUploadToMsaResponseBodyResultContentContent& operator=(GetFileTokenForUploadToMsaResponseBodyResultContentContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessid_ != nullptr
        && this->dir_ != nullptr && this->expire_ != nullptr && this->host_ != nullptr && this->policy_ != nullptr && this->signature_ != nullptr; };
    // accessid Field Functions 
    bool hasAccessid() const { return this->accessid_ != nullptr;};
    void deleteAccessid() { this->accessid_ = nullptr;};
    inline string accessid() const { DARABONBA_PTR_GET_DEFAULT(accessid_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContentContent& setAccessid(string accessid) { DARABONBA_PTR_SET_VALUE(accessid_, accessid) };


    // dir Field Functions 
    bool hasDir() const { return this->dir_ != nullptr;};
    void deleteDir() { this->dir_ = nullptr;};
    inline string dir() const { DARABONBA_PTR_GET_DEFAULT(dir_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContentContent& setDir(string dir) { DARABONBA_PTR_SET_VALUE(dir_, dir) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline string expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContentContent& setExpire(string expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContentContent& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContentContent& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline GetFileTokenForUploadToMsaResponseBodyResultContentContent& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    std::shared_ptr<string> accessid_ = nullptr;
    std::shared_ptr<string> dir_ = nullptr;
    std::shared_ptr<string> expire_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
