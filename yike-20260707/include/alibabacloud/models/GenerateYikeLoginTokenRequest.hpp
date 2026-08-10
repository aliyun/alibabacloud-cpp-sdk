// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEYIKELOGINTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEYIKELOGINTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
namespace Models
{
  class GenerateYikeLoginTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateYikeLoginTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoCreateProduction, autoCreateProduction_);
      DARABONBA_PTR_TO_JSON(Expires, expires_);
      DARABONBA_PTR_TO_JSON(NickName, nickName_);
      DARABONBA_PTR_TO_JSON(ProductionAuth, productionAuth_);
      DARABONBA_PTR_TO_JSON(SubUserCredit, subUserCredit_);
      DARABONBA_PTR_TO_JSON(Tenant, tenant_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateYikeLoginTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoCreateProduction, autoCreateProduction_);
      DARABONBA_PTR_FROM_JSON(Expires, expires_);
      DARABONBA_PTR_FROM_JSON(NickName, nickName_);
      DARABONBA_PTR_FROM_JSON(ProductionAuth, productionAuth_);
      DARABONBA_PTR_FROM_JSON(SubUserCredit, subUserCredit_);
      DARABONBA_PTR_FROM_JSON(Tenant, tenant_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GenerateYikeLoginTokenRequest() = default ;
    GenerateYikeLoginTokenRequest(const GenerateYikeLoginTokenRequest &) = default ;
    GenerateYikeLoginTokenRequest(GenerateYikeLoginTokenRequest &&) = default ;
    GenerateYikeLoginTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateYikeLoginTokenRequest() = default ;
    GenerateYikeLoginTokenRequest& operator=(const GenerateYikeLoginTokenRequest &) = default ;
    GenerateYikeLoginTokenRequest& operator=(GenerateYikeLoginTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoCreateProduction_ == nullptr
        && this->expires_ == nullptr && this->nickName_ == nullptr && this->productionAuth_ == nullptr && this->subUserCredit_ == nullptr && this->tenant_ == nullptr
        && this->userName_ == nullptr && this->workspaceId_ == nullptr; };
    // autoCreateProduction Field Functions 
    bool hasAutoCreateProduction() const { return this->autoCreateProduction_ != nullptr;};
    void deleteAutoCreateProduction() { this->autoCreateProduction_ = nullptr;};
    inline string getAutoCreateProduction() const { DARABONBA_PTR_GET_DEFAULT(autoCreateProduction_, "") };
    inline GenerateYikeLoginTokenRequest& setAutoCreateProduction(string autoCreateProduction) { DARABONBA_PTR_SET_VALUE(autoCreateProduction_, autoCreateProduction) };


    // expires Field Functions 
    bool hasExpires() const { return this->expires_ != nullptr;};
    void deleteExpires() { this->expires_ = nullptr;};
    inline string getExpires() const { DARABONBA_PTR_GET_DEFAULT(expires_, "") };
    inline GenerateYikeLoginTokenRequest& setExpires(string expires) { DARABONBA_PTR_SET_VALUE(expires_, expires) };


    // nickName Field Functions 
    bool hasNickName() const { return this->nickName_ != nullptr;};
    void deleteNickName() { this->nickName_ = nullptr;};
    inline string getNickName() const { DARABONBA_PTR_GET_DEFAULT(nickName_, "") };
    inline GenerateYikeLoginTokenRequest& setNickName(string nickName) { DARABONBA_PTR_SET_VALUE(nickName_, nickName) };


    // productionAuth Field Functions 
    bool hasProductionAuth() const { return this->productionAuth_ != nullptr;};
    void deleteProductionAuth() { this->productionAuth_ = nullptr;};
    inline string getProductionAuth() const { DARABONBA_PTR_GET_DEFAULT(productionAuth_, "") };
    inline GenerateYikeLoginTokenRequest& setProductionAuth(string productionAuth) { DARABONBA_PTR_SET_VALUE(productionAuth_, productionAuth) };


    // subUserCredit Field Functions 
    bool hasSubUserCredit() const { return this->subUserCredit_ != nullptr;};
    void deleteSubUserCredit() { this->subUserCredit_ = nullptr;};
    inline string getSubUserCredit() const { DARABONBA_PTR_GET_DEFAULT(subUserCredit_, "") };
    inline GenerateYikeLoginTokenRequest& setSubUserCredit(string subUserCredit) { DARABONBA_PTR_SET_VALUE(subUserCredit_, subUserCredit) };


    // tenant Field Functions 
    bool hasTenant() const { return this->tenant_ != nullptr;};
    void deleteTenant() { this->tenant_ = nullptr;};
    inline string getTenant() const { DARABONBA_PTR_GET_DEFAULT(tenant_, "") };
    inline GenerateYikeLoginTokenRequest& setTenant(string tenant) { DARABONBA_PTR_SET_VALUE(tenant_, tenant) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GenerateYikeLoginTokenRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GenerateYikeLoginTokenRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Specifies whether automatic creation of a project is enabled. Default value: false.
    shared_ptr<string> autoCreateProduction_ {};
    // The token expiration time, in seconds. Default value: 30 days.
    shared_ptr<string> expires_ {};
    // The nickname.
    // 
    // - Format check: The maximum length is 50 characters.
    // - Special format validation: Chinese characters, English characters, digits, _ \\ / () ] [
    shared_ptr<string> nickName_ {};
    // The role of the user in the project.
    shared_ptr<string> productionAuth_ {};
    // The default credits granted to the user.
    shared_ptr<string> subUserCredit_ {};
    // The tenant identifier.
    shared_ptr<string> tenant_ {};
    // The username.
    shared_ptr<string> userName_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
