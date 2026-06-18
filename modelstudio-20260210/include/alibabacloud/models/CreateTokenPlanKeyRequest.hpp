// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETOKENPLANKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETOKENPLANKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class CreateTokenPlanKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTokenPlanKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTokenPlanKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(CallerUacAccountId, callerUacAccountId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateTokenPlanKeyRequest() = default ;
    CreateTokenPlanKeyRequest(const CreateTokenPlanKeyRequest &) = default ;
    CreateTokenPlanKeyRequest(CreateTokenPlanKeyRequest &&) = default ;
    CreateTokenPlanKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTokenPlanKeyRequest() = default ;
    CreateTokenPlanKeyRequest& operator=(const CreateTokenPlanKeyRequest &) = default ;
    CreateTokenPlanKeyRequest& operator=(CreateTokenPlanKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->callerUacAccountId_ == nullptr && this->description_ == nullptr && this->namespaceId_ == nullptr && this->workspaceId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateTokenPlanKeyRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // callerUacAccountId Field Functions 
    bool hasCallerUacAccountId() const { return this->callerUacAccountId_ != nullptr;};
    void deleteCallerUacAccountId() { this->callerUacAccountId_ = nullptr;};
    inline string getCallerUacAccountId() const { DARABONBA_PTR_GET_DEFAULT(callerUacAccountId_, "") };
    inline CreateTokenPlanKeyRequest& setCallerUacAccountId(string callerUacAccountId) { DARABONBA_PTR_SET_VALUE(callerUacAccountId_, callerUacAccountId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateTokenPlanKeyRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateTokenPlanKeyRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateTokenPlanKeyRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The account ID.
    // 
    // This parameter is required.
    shared_ptr<string> accountId_ {};
    // The account ID of the caller that identifies the initiator of this call.
    shared_ptr<string> callerUacAccountId_ {};
    // The description of the key.
    shared_ptr<string> description_ {};
    // The product namespace ID. For the TokenPlan product, this field is fixed to namespace-1.
    shared_ptr<string> namespaceId_ {};
    // The workspace ID.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
