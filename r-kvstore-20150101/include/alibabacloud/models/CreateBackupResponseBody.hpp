// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class CreateBackupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJobID, backupJobID_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJobID, backupJobID_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateBackupResponseBody() = default ;
    CreateBackupResponseBody(const CreateBackupResponseBody &) = default ;
    CreateBackupResponseBody(CreateBackupResponseBody &&) = default ;
    CreateBackupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackupResponseBody() = default ;
    CreateBackupResponseBody& operator=(const CreateBackupResponseBody &) = default ;
    CreateBackupResponseBody& operator=(CreateBackupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupJobID_ == nullptr
        && this->requestId_ == nullptr; };
    // backupJobID Field Functions 
    bool hasBackupJobID() const { return this->backupJobID_ != nullptr;};
    void deleteBackupJobID() { this->backupJobID_ = nullptr;};
    inline string getBackupJobID() const { DARABONBA_PTR_GET_DEFAULT(backupJobID_, "") };
    inline CreateBackupResponseBody& setBackupJobID(string backupJobID) { DARABONBA_PTR_SET_VALUE(backupJobID_, backupJobID) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateBackupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the backup task.
    shared_ptr<string> backupJobID_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
