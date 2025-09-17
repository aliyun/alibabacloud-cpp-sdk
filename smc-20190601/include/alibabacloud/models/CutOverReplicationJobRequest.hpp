// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CUTOVERREPLICATIONJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CUTOVERREPLICATIONJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smc20190601
{
namespace Models
{
  class CutOverReplicationJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CutOverReplicationJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(SyncData, syncData_);
    };
    friend void from_json(const Darabonba::Json& j, CutOverReplicationJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(SyncData, syncData_);
    };
    CutOverReplicationJobRequest() = default ;
    CutOverReplicationJobRequest(const CutOverReplicationJobRequest &) = default ;
    CutOverReplicationJobRequest(CutOverReplicationJobRequest &&) = default ;
    CutOverReplicationJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CutOverReplicationJobRequest() = default ;
    CutOverReplicationJobRequest& operator=(const CutOverReplicationJobRequest &) = default ;
    CutOverReplicationJobRequest& operator=(CutOverReplicationJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->ownerId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->syncData_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline CutOverReplicationJobRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CutOverReplicationJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CutOverReplicationJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // syncData Field Functions 
    bool hasSyncData() const { return this->syncData_ != nullptr;};
    void deleteSyncData() { this->syncData_ = nullptr;};
    inline bool syncData() const { DARABONBA_PTR_GET_DEFAULT(syncData_, false) };
    inline CutOverReplicationJobRequest& setSyncData(bool syncData) { DARABONBA_PTR_SET_VALUE(syncData_, syncData) };


  protected:
    // The ID of the incremental migration job.
    // 
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    // Specifies whether to migrate full data for the last time. Valid Values:
    // 
    // *   true: migrates full data for the last time.
    // *   false: does not migrate full data for the last time.
    // 
    // Default value: false.
    std::shared_ptr<bool> syncData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smc20190601
#endif
