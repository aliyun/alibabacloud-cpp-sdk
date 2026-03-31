// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEYIKEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEYIKEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateYikeUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateYikeUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Nickname, nickname_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ProductionIds, productionIds_);
      DARABONBA_PTR_TO_JSON(UserNamePrefix, userNamePrefix_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateYikeUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Nickname, nickname_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ProductionIds, productionIds_);
      DARABONBA_PTR_FROM_JSON(UserNamePrefix, userNamePrefix_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateYikeUserRequest() = default ;
    CreateYikeUserRequest(const CreateYikeUserRequest &) = default ;
    CreateYikeUserRequest(CreateYikeUserRequest &&) = default ;
    CreateYikeUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateYikeUserRequest() = default ;
    CreateYikeUserRequest& operator=(const CreateYikeUserRequest &) = default ;
    CreateYikeUserRequest& operator=(CreateYikeUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nickname_ == nullptr
        && this->password_ == nullptr && this->productionIds_ == nullptr && this->userNamePrefix_ == nullptr && this->workspaceId_ == nullptr; };
    // nickname Field Functions 
    bool hasNickname() const { return this->nickname_ != nullptr;};
    void deleteNickname() { this->nickname_ = nullptr;};
    inline string getNickname() const { DARABONBA_PTR_GET_DEFAULT(nickname_, "") };
    inline CreateYikeUserRequest& setNickname(string nickname) { DARABONBA_PTR_SET_VALUE(nickname_, nickname) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline CreateYikeUserRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // productionIds Field Functions 
    bool hasProductionIds() const { return this->productionIds_ != nullptr;};
    void deleteProductionIds() { this->productionIds_ = nullptr;};
    inline string getProductionIds() const { DARABONBA_PTR_GET_DEFAULT(productionIds_, "") };
    inline CreateYikeUserRequest& setProductionIds(string productionIds) { DARABONBA_PTR_SET_VALUE(productionIds_, productionIds) };


    // userNamePrefix Field Functions 
    bool hasUserNamePrefix() const { return this->userNamePrefix_ != nullptr;};
    void deleteUserNamePrefix() { this->userNamePrefix_ = nullptr;};
    inline string getUserNamePrefix() const { DARABONBA_PTR_GET_DEFAULT(userNamePrefix_, "") };
    inline CreateYikeUserRequest& setUserNamePrefix(string userNamePrefix) { DARABONBA_PTR_SET_VALUE(userNamePrefix_, userNamePrefix) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateYikeUserRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> nickname_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<string> productionIds_ {};
    // This parameter is required.
    shared_ptr<string> userNamePrefix_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
