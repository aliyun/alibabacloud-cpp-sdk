// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKCREDENTIAL_HPP_
#define ALIBABACLOUD_MODELS_TASKCREDENTIAL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class TaskCredential : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskCredential& obj) { 
      DARABONBA_PTR_TO_JSON(accessId, accessId_);
      DARABONBA_PTR_TO_JSON(accessUrl, accessUrl_);
      DARABONBA_PTR_TO_JSON(expire, expire_);
      DARABONBA_PTR_TO_JSON(host, host_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(policy, policy_);
      DARABONBA_PTR_TO_JSON(securityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
    };
    friend void from_json(const Darabonba::Json& j, TaskCredential& obj) { 
      DARABONBA_PTR_FROM_JSON(accessId, accessId_);
      DARABONBA_PTR_FROM_JSON(accessUrl, accessUrl_);
      DARABONBA_PTR_FROM_JSON(expire, expire_);
      DARABONBA_PTR_FROM_JSON(host, host_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(policy, policy_);
      DARABONBA_PTR_FROM_JSON(securityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
    };
    TaskCredential() = default ;
    TaskCredential(const TaskCredential &) = default ;
    TaskCredential(TaskCredential &&) = default ;
    TaskCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskCredential() = default ;
    TaskCredential& operator=(const TaskCredential &) = default ;
    TaskCredential& operator=(TaskCredential &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessId_ != nullptr
        && this->accessUrl_ != nullptr && this->expire_ != nullptr && this->host_ != nullptr && this->path_ != nullptr && this->policy_ != nullptr
        && this->securityToken_ != nullptr && this->signature_ != nullptr; };
    // accessId Field Functions 
    bool hasAccessId() const { return this->accessId_ != nullptr;};
    void deleteAccessId() { this->accessId_ = nullptr;};
    inline string accessId() const { DARABONBA_PTR_GET_DEFAULT(accessId_, "") };
    inline TaskCredential& setAccessId(string accessId) { DARABONBA_PTR_SET_VALUE(accessId_, accessId) };


    // accessUrl Field Functions 
    bool hasAccessUrl() const { return this->accessUrl_ != nullptr;};
    void deleteAccessUrl() { this->accessUrl_ = nullptr;};
    inline string accessUrl() const { DARABONBA_PTR_GET_DEFAULT(accessUrl_, "") };
    inline TaskCredential& setAccessUrl(string accessUrl) { DARABONBA_PTR_SET_VALUE(accessUrl_, accessUrl) };


    // expire Field Functions 
    bool hasExpire() const { return this->expire_ != nullptr;};
    void deleteExpire() { this->expire_ = nullptr;};
    inline int64_t expire() const { DARABONBA_PTR_GET_DEFAULT(expire_, 0L) };
    inline TaskCredential& setExpire(int64_t expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string host() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline TaskCredential& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline TaskCredential& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // policy Field Functions 
    bool hasPolicy() const { return this->policy_ != nullptr;};
    void deletePolicy() { this->policy_ = nullptr;};
    inline string policy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
    inline TaskCredential& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline TaskCredential& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline TaskCredential& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


  protected:
    std::shared_ptr<string> accessId_ = nullptr;
    std::shared_ptr<string> accessUrl_ = nullptr;
    std::shared_ptr<int64_t> expire_ = nullptr;
    std::shared_ptr<string> host_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> policy_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    std::shared_ptr<string> signature_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
