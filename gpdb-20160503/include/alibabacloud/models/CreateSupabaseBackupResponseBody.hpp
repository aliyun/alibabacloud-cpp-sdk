// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESUPABASEBACKUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESUPABASEBACKUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class CreateSupabaseBackupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSupabaseBackupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSupabaseBackupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupJobId, backupJobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateSupabaseBackupResponseBody() = default ;
    CreateSupabaseBackupResponseBody(const CreateSupabaseBackupResponseBody &) = default ;
    CreateSupabaseBackupResponseBody(CreateSupabaseBackupResponseBody &&) = default ;
    CreateSupabaseBackupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSupabaseBackupResponseBody() = default ;
    CreateSupabaseBackupResponseBody& operator=(const CreateSupabaseBackupResponseBody &) = default ;
    CreateSupabaseBackupResponseBody& operator=(CreateSupabaseBackupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupJobId_ == nullptr
        && this->requestId_ == nullptr; };
    // backupJobId Field Functions 
    bool hasBackupJobId() const { return this->backupJobId_ != nullptr;};
    void deleteBackupJobId() { this->backupJobId_ = nullptr;};
    inline int64_t getBackupJobId() const { DARABONBA_PTR_GET_DEFAULT(backupJobId_, 0L) };
    inline CreateSupabaseBackupResponseBody& setBackupJobId(int64_t backupJobId) { DARABONBA_PTR_SET_VALUE(backupJobId_, backupJobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateSupabaseBackupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the backup job. You can call ListSupabaseBackupJobs to query the status and progress of the corresponding job.
    shared_ptr<int64_t> backupJobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
