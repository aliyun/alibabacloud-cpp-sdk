// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateBackupPolicyResponseBodyBackupPolicy.hpp>
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
    virtual bool empty() const override { this->backupPolicy_ != nullptr
        && this->requestId_ != nullptr; };
    // backupPolicy Field Functions 
    bool hasBackupPolicy() const { return this->backupPolicy_ != nullptr;};
    void deleteBackupPolicy() { this->backupPolicy_ = nullptr;};
    inline const CreateBackupPolicyResponseBodyBackupPolicy & backupPolicy() const { DARABONBA_PTR_GET_CONST(backupPolicy_, CreateBackupPolicyResponseBodyBackupPolicy) };
    inline CreateBackupPolicyResponseBodyBackupPolicy backupPolicy() { DARABONBA_PTR_GET(backupPolicy_, CreateBackupPolicyResponseBodyBackupPolicy) };
    inline CreateBackupPolicyResponseBody& setBackupPolicy(const CreateBackupPolicyResponseBodyBackupPolicy & backupPolicy) { DARABONBA_PTR_SET_VALUE(backupPolicy_, backupPolicy) };
    inline CreateBackupPolicyResponseBody& setBackupPolicy(CreateBackupPolicyResponseBodyBackupPolicy && backupPolicy) { DARABONBA_PTR_SET_RVALUE(backupPolicy_, backupPolicy) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBackupPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the anti-ransomware policy.
    std::shared_ptr<CreateBackupPolicyResponseBodyBackupPolicy> backupPolicy_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
