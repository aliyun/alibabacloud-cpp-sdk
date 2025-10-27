// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBACKUPSTORAGECOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBACKUPSTORAGECOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBackupStorageCountResponseBodyBackupStorageCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetBackupStorageCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBackupStorageCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackupStorageCount, backupStorageCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBackupStorageCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackupStorageCount, backupStorageCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBackupStorageCountResponseBody() = default ;
    GetBackupStorageCountResponseBody(const GetBackupStorageCountResponseBody &) = default ;
    GetBackupStorageCountResponseBody(GetBackupStorageCountResponseBody &&) = default ;
    GetBackupStorageCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBackupStorageCountResponseBody() = default ;
    GetBackupStorageCountResponseBody& operator=(const GetBackupStorageCountResponseBody &) = default ;
    GetBackupStorageCountResponseBody& operator=(GetBackupStorageCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backupStorageCount_ == nullptr
        && return this->requestId_ == nullptr; };
    // backupStorageCount Field Functions 
    bool hasBackupStorageCount() const { return this->backupStorageCount_ != nullptr;};
    void deleteBackupStorageCount() { this->backupStorageCount_ = nullptr;};
    inline const GetBackupStorageCountResponseBodyBackupStorageCount & backupStorageCount() const { DARABONBA_PTR_GET_CONST(backupStorageCount_, GetBackupStorageCountResponseBodyBackupStorageCount) };
    inline GetBackupStorageCountResponseBodyBackupStorageCount backupStorageCount() { DARABONBA_PTR_GET(backupStorageCount_, GetBackupStorageCountResponseBodyBackupStorageCount) };
    inline GetBackupStorageCountResponseBody& setBackupStorageCount(const GetBackupStorageCountResponseBodyBackupStorageCount & backupStorageCount) { DARABONBA_PTR_SET_VALUE(backupStorageCount_, backupStorageCount) };
    inline GetBackupStorageCountResponseBody& setBackupStorageCount(GetBackupStorageCountResponseBodyBackupStorageCount && backupStorageCount) { DARABONBA_PTR_SET_RVALUE(backupStorageCount_, backupStorageCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBackupStorageCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details about the anti-ransomware capacity.
    std::shared_ptr<GetBackupStorageCountResponseBodyBackupStorageCount> backupStorageCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
