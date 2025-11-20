// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CANCELBACKUPJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CANCELBACKUPJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CancelBackupJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CancelBackupJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Edition, edition_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(VaultId, vaultId_);
    };
    friend void from_json(const Darabonba::Json& j, CancelBackupJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Edition, edition_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(VaultId, vaultId_);
    };
    CancelBackupJobRequest() = default ;
    CancelBackupJobRequest(const CancelBackupJobRequest &) = default ;
    CancelBackupJobRequest(CancelBackupJobRequest &&) = default ;
    CancelBackupJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CancelBackupJobRequest() = default ;
    CancelBackupJobRequest& operator=(const CancelBackupJobRequest &) = default ;
    CancelBackupJobRequest& operator=(CancelBackupJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edition_ == nullptr
        && return this->jobId_ == nullptr && return this->vaultId_ == nullptr; };
    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline CancelBackupJobRequest& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CancelBackupJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // vaultId Field Functions 
    bool hasVaultId() const { return this->vaultId_ != nullptr;};
    void deleteVaultId() { this->vaultId_ = nullptr;};
    inline string vaultId() const { DARABONBA_PTR_GET_DEFAULT(vaultId_, "") };
    inline CancelBackupJobRequest& setVaultId(string vaultId) { DARABONBA_PTR_SET_VALUE(vaultId_, vaultId) };


  protected:
    std::shared_ptr<string> edition_ = nullptr;
    // The ID of the backup job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // The ID of the backup vault.
    std::shared_ptr<string> vaultId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
