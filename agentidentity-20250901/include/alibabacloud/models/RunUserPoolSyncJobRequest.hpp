// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNUSERPOOLSYNCJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNUSERPOOLSYNCJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class RunUserPoolSyncJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunUserPoolSyncJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(MaxSyncUsers, maxSyncUsers_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, RunUserPoolSyncJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(MaxSyncUsers, maxSyncUsers_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    RunUserPoolSyncJobRequest() = default ;
    RunUserPoolSyncJobRequest(const RunUserPoolSyncJobRequest &) = default ;
    RunUserPoolSyncJobRequest(RunUserPoolSyncJobRequest &&) = default ;
    RunUserPoolSyncJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunUserPoolSyncJobRequest() = default ;
    RunUserPoolSyncJobRequest& operator=(const RunUserPoolSyncJobRequest &) = default ;
    RunUserPoolSyncJobRequest& operator=(RunUserPoolSyncJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderType_ == nullptr
        && this->maxSyncUsers_ == nullptr && this->userPoolName_ == nullptr; };
    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline RunUserPoolSyncJobRequest& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


    // maxSyncUsers Field Functions 
    bool hasMaxSyncUsers() const { return this->maxSyncUsers_ != nullptr;};
    void deleteMaxSyncUsers() { this->maxSyncUsers_ = nullptr;};
    inline string getMaxSyncUsers() const { DARABONBA_PTR_GET_DEFAULT(maxSyncUsers_, "") };
    inline RunUserPoolSyncJobRequest& setMaxSyncUsers(string maxSyncUsers) { DARABONBA_PTR_SET_VALUE(maxSyncUsers_, maxSyncUsers) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline RunUserPoolSyncJobRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> identityProviderType_ {};
    shared_ptr<string> maxSyncUsers_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
