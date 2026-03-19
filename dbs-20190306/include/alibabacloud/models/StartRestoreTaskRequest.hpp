// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRESTORETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTRESTORETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class StartRestoreTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRestoreTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RestoreTaskId, restoreTaskId_);
    };
    friend void from_json(const Darabonba::Json& j, StartRestoreTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RestoreTaskId, restoreTaskId_);
    };
    StartRestoreTaskRequest() = default ;
    StartRestoreTaskRequest(const StartRestoreTaskRequest &) = default ;
    StartRestoreTaskRequest(StartRestoreTaskRequest &&) = default ;
    StartRestoreTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRestoreTaskRequest() = default ;
    StartRestoreTaskRequest& operator=(const StartRestoreTaskRequest &) = default ;
    StartRestoreTaskRequest& operator=(StartRestoreTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->ownerId_ == nullptr && this->restoreTaskId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StartRestoreTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline StartRestoreTaskRequest& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // restoreTaskId Field Functions 
    bool hasRestoreTaskId() const { return this->restoreTaskId_ != nullptr;};
    void deleteRestoreTaskId() { this->restoreTaskId_ = nullptr;};
    inline string getRestoreTaskId() const { DARABONBA_PTR_GET_DEFAULT(restoreTaskId_, "") };
    inline StartRestoreTaskRequest& setRestoreTaskId(string restoreTaskId) { DARABONBA_PTR_SET_VALUE(restoreTaskId_, restoreTaskId) };


  protected:
    // A client token. It ensures the idempotence of the request and prevents the same request from being submitted multiple times.
    shared_ptr<string> clientToken_ {};
    shared_ptr<string> ownerId_ {};
    // The ID of the restore job.
    // 
    // This parameter is required.
    shared_ptr<string> restoreTaskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
