// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBackupResponseBodyBackup.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetBackupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Backup, backup_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Backup, backup_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBackupResponseBody() = default ;
    GetBackupResponseBody(const GetBackupResponseBody &) = default ;
    GetBackupResponseBody(GetBackupResponseBody &&) = default ;
    GetBackupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupResponseBody() = default ;
    GetBackupResponseBody& operator=(const GetBackupResponseBody &) = default ;
    GetBackupResponseBody& operator=(GetBackupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backup_ == nullptr
        && return this->requestId_ == nullptr; };
    // backup Field Functions 
    bool hasBackup() const { return this->backup_ != nullptr;};
    void deleteBackup() { this->backup_ = nullptr;};
    inline const GetBackupResponseBodyBackup & backup() const { DARABONBA_PTR_GET_CONST(backup_, GetBackupResponseBodyBackup) };
    inline GetBackupResponseBodyBackup backup() { DARABONBA_PTR_GET(backup_, GetBackupResponseBodyBackup) };
    inline GetBackupResponseBody& setBackup(const GetBackupResponseBodyBackup & backup) { DARABONBA_PTR_SET_VALUE(backup_, backup) };
    inline GetBackupResponseBody& setBackup(GetBackupResponseBodyBackup && backup) { DARABONBA_PTR_SET_RVALUE(backup_, backup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the backup.
    std::shared_ptr<GetBackupResponseBodyBackup> backup_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
