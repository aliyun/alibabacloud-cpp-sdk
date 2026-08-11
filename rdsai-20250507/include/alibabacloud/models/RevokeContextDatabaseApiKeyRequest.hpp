// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVOKECONTEXTDATABASEAPIKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REVOKECONTEXTDATABASEAPIKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class RevokeContextDatabaseApiKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RevokeContextDatabaseApiKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(MemberId, memberId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RevokeContextDatabaseApiKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(MemberId, memberId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RevokeContextDatabaseApiKeyRequest() = default ;
    RevokeContextDatabaseApiKeyRequest(const RevokeContextDatabaseApiKeyRequest &) = default ;
    RevokeContextDatabaseApiKeyRequest(RevokeContextDatabaseApiKeyRequest &&) = default ;
    RevokeContextDatabaseApiKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RevokeContextDatabaseApiKeyRequest() = default ;
    RevokeContextDatabaseApiKeyRequest& operator=(const RevokeContextDatabaseApiKeyRequest &) = default ;
    RevokeContextDatabaseApiKeyRequest& operator=(RevokeContextDatabaseApiKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyId_ == nullptr
        && this->memberId_ == nullptr && this->workspaceId_ == nullptr; };
    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline int64_t getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, 0L) };
    inline RevokeContextDatabaseApiKeyRequest& setKeyId(int64_t keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // memberId Field Functions 
    bool hasMemberId() const { return this->memberId_ != nullptr;};
    void deleteMemberId() { this->memberId_ = nullptr;};
    inline string getMemberId() const { DARABONBA_PTR_GET_DEFAULT(memberId_, "") };
    inline RevokeContextDatabaseApiKeyRequest& setMemberId(string memberId) { DARABONBA_PTR_SET_VALUE(memberId_, memberId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RevokeContextDatabaseApiKeyRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> keyId_ {};
    // This parameter is required.
    shared_ptr<string> memberId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
