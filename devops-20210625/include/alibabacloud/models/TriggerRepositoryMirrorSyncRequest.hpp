// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRIGGERREPOSITORYMIRRORSYNCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRIGGERREPOSITORYMIRRORSYNCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class TriggerRepositoryMirrorSyncRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TriggerRepositoryMirrorSyncRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(account, account_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(token, token_);
    };
    friend void from_json(const Darabonba::Json& j, TriggerRepositoryMirrorSyncRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(account, account_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(token, token_);
    };
    TriggerRepositoryMirrorSyncRequest() = default ;
    TriggerRepositoryMirrorSyncRequest(const TriggerRepositoryMirrorSyncRequest &) = default ;
    TriggerRepositoryMirrorSyncRequest(TriggerRepositoryMirrorSyncRequest &&) = default ;
    TriggerRepositoryMirrorSyncRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TriggerRepositoryMirrorSyncRequest() = default ;
    TriggerRepositoryMirrorSyncRequest& operator=(const TriggerRepositoryMirrorSyncRequest &) = default ;
    TriggerRepositoryMirrorSyncRequest& operator=(TriggerRepositoryMirrorSyncRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->account_ == nullptr && return this->organizationId_ == nullptr && return this->token_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline TriggerRepositoryMirrorSyncRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // account Field Functions 
    bool hasAccount() const { return this->account_ != nullptr;};
    void deleteAccount() { this->account_ = nullptr;};
    inline string account() const { DARABONBA_PTR_GET_DEFAULT(account_, "") };
    inline TriggerRepositoryMirrorSyncRequest& setAccount(string account) { DARABONBA_PTR_SET_VALUE(account_, account) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline TriggerRepositoryMirrorSyncRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline TriggerRepositoryMirrorSyncRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> account_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
