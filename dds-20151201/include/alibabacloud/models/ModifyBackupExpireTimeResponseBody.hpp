// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPEXPIRETIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPEXPIRETIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class ModifyBackupExpireTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupExpireTime, backupExpireTime_);
      DARABONBA_PTR_TO_JSON(BackupId, backupId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupExpireTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupExpireTime, backupExpireTime_);
      DARABONBA_PTR_FROM_JSON(BackupId, backupId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ModifyBackupExpireTimeResponseBody() = default ;
    ModifyBackupExpireTimeResponseBody(const ModifyBackupExpireTimeResponseBody &) = default ;
    ModifyBackupExpireTimeResponseBody(ModifyBackupExpireTimeResponseBody &&) = default ;
    ModifyBackupExpireTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupExpireTimeResponseBody() = default ;
    ModifyBackupExpireTimeResponseBody& operator=(const ModifyBackupExpireTimeResponseBody &) = default ;
    ModifyBackupExpireTimeResponseBody& operator=(ModifyBackupExpireTimeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupExpireTime_ == nullptr
        && this->backupId_ == nullptr && this->requestId_ == nullptr; };
    // backupExpireTime Field Functions 
    bool hasBackupExpireTime() const { return this->backupExpireTime_ != nullptr;};
    void deleteBackupExpireTime() { this->backupExpireTime_ = nullptr;};
    inline string getBackupExpireTime() const { DARABONBA_PTR_GET_DEFAULT(backupExpireTime_, "") };
    inline ModifyBackupExpireTimeResponseBody& setBackupExpireTime(string backupExpireTime) { DARABONBA_PTR_SET_VALUE(backupExpireTime_, backupExpireTime) };


    // backupId Field Functions 
    bool hasBackupId() const { return this->backupId_ != nullptr;};
    void deleteBackupId() { this->backupId_ = nullptr;};
    inline string getBackupId() const { DARABONBA_PTR_GET_DEFAULT(backupId_, "") };
    inline ModifyBackupExpireTimeResponseBody& setBackupId(string backupId) { DARABONBA_PTR_SET_VALUE(backupId_, backupId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyBackupExpireTimeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> backupExpireTime_ {};
    shared_ptr<string> backupId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
