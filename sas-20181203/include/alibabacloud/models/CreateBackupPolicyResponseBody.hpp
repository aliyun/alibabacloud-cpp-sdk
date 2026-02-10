// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateBackupPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupPolicy, backupPolicy_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupPolicy, backupPolicy_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBackupPolicyResponseBody() = default ;
    CreateBackupPolicyResponseBody(const CreateBackupPolicyResponseBody &) = default ;
    CreateBackupPolicyResponseBody(CreateBackupPolicyResponseBody &&) = default ;
    CreateBackupPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupPolicyResponseBody() = default ;
    CreateBackupPolicyResponseBody& operator=(const CreateBackupPolicyResponseBody &) = default ;
    CreateBackupPolicyResponseBody& operator=(CreateBackupPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BackupPolicy : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BackupPolicy& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, BackupPolicy& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      BackupPolicy() = default ;
      BackupPolicy(const BackupPolicy &) = default ;
      BackupPolicy(BackupPolicy &&) = default ;
      BackupPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BackupPolicy() = default ;
      BackupPolicy& operator=(const BackupPolicy &) = default ;
      BackupPolicy& operator=(BackupPolicy &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->status_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline BackupPolicy& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline BackupPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The ID of the anti-ransomware policy.
      shared_ptr<string> id_ {};
      // The status of the anti-ransomware policy. Valid values:
      // 
      // *   **enabled**
      // *   **disabled**
      // 
      // >  After you create an anti-ransomware policy, the policy is enabled by default.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->backupPolicy_ == nullptr
        && this->requestId_ == nullptr; };
    // backupPolicy Field Functions 
    bool hasBackupPolicy() const { return this->backupPolicy_ != nullptr;};
    void deleteBackupPolicy() { this->backupPolicy_ = nullptr;};
    inline const CreateBackupPolicyResponseBody::BackupPolicy & getBackupPolicy() const { DARABONBA_PTR_GET_CONST(backupPolicy_, CreateBackupPolicyResponseBody::BackupPolicy) };
    inline CreateBackupPolicyResponseBody::BackupPolicy getBackupPolicy() { DARABONBA_PTR_GET(backupPolicy_, CreateBackupPolicyResponseBody::BackupPolicy) };
    inline CreateBackupPolicyResponseBody& setBackupPolicy(const CreateBackupPolicyResponseBody::BackupPolicy & backupPolicy) { DARABONBA_PTR_SET_VALUE(backupPolicy_, backupPolicy) };
    inline CreateBackupPolicyResponseBody& setBackupPolicy(CreateBackupPolicyResponseBody::BackupPolicy && backupPolicy) { DARABONBA_PTR_SET_RVALUE(backupPolicy_, backupPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the anti-ransomware policy.
    shared_ptr<CreateBackupPolicyResponseBody::BackupPolicy> backupPolicy_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
