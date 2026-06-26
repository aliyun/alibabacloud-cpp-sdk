// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERPOOLSYNCJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERPOOLSYNCJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class GetUserPoolSyncJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserPoolSyncJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserPoolSyncJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SynchronizationJobId, synchronizationJobId_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    GetUserPoolSyncJobRequest() = default ;
    GetUserPoolSyncJobRequest(const GetUserPoolSyncJobRequest &) = default ;
    GetUserPoolSyncJobRequest(GetUserPoolSyncJobRequest &&) = default ;
    GetUserPoolSyncJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserPoolSyncJobRequest() = default ;
    GetUserPoolSyncJobRequest& operator=(const GetUserPoolSyncJobRequest &) = default ;
    GetUserPoolSyncJobRequest& operator=(GetUserPoolSyncJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->synchronizationJobId_ == nullptr
        && this->userPoolName_ == nullptr; };
    // synchronizationJobId Field Functions 
    bool hasSynchronizationJobId() const { return this->synchronizationJobId_ != nullptr;};
    void deleteSynchronizationJobId() { this->synchronizationJobId_ = nullptr;};
    inline string getSynchronizationJobId() const { DARABONBA_PTR_GET_DEFAULT(synchronizationJobId_, "") };
    inline GetUserPoolSyncJobRequest& setSynchronizationJobId(string synchronizationJobId) { DARABONBA_PTR_SET_VALUE(synchronizationJobId_, synchronizationJobId) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline GetUserPoolSyncJobRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> synchronizationJobId_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
