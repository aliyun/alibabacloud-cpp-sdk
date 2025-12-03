// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateUserKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(expireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(keyScope, keyScope_);
      DARABONBA_PTR_TO_JSON(publicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(expireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(keyScope, keyScope_);
      DARABONBA_PTR_FROM_JSON(publicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
    };
    CreateUserKeyRequest() = default ;
    CreateUserKeyRequest(const CreateUserKeyRequest &) = default ;
    CreateUserKeyRequest(CreateUserKeyRequest &&) = default ;
    CreateUserKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserKeyRequest() = default ;
    CreateUserKeyRequest& operator=(const CreateUserKeyRequest &) = default ;
    CreateUserKeyRequest& operator=(CreateUserKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->expireTime_ == nullptr && return this->keyScope_ == nullptr && return this->publicKey_ == nullptr && return this->title_ == nullptr && return this->organizationId_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateUserKeyRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline CreateUserKeyRequest& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // keyScope Field Functions 
    bool hasKeyScope() const { return this->keyScope_ != nullptr;};
    void deleteKeyScope() { this->keyScope_ = nullptr;};
    inline string keyScope() const { DARABONBA_PTR_GET_DEFAULT(keyScope_, "") };
    inline CreateUserKeyRequest& setKeyScope(string keyScope) { DARABONBA_PTR_SET_VALUE(keyScope_, keyScope) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline CreateUserKeyRequest& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline CreateUserKeyRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateUserKeyRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> keyScope_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> publicKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> title_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
