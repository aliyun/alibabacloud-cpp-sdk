// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONRESULTSRESPONSEBODYSTACKGROUPOPERATIONRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONRESULTSRESPONSEBODYSTACKGROUPOPERATIONRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupOperationResultsResponseBodyStackGroupOperationResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(RdFolderId, rdFolderId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StatusReason, statusReason_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(RdFolderId, rdFolderId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StatusReason, statusReason_);
    };
    ListStackGroupOperationResultsResponseBodyStackGroupOperationResults() = default ;
    ListStackGroupOperationResultsResponseBodyStackGroupOperationResults(const ListStackGroupOperationResultsResponseBodyStackGroupOperationResults &) = default ;
    ListStackGroupOperationResultsResponseBodyStackGroupOperationResults(ListStackGroupOperationResultsResponseBodyStackGroupOperationResults &&) = default ;
    ListStackGroupOperationResultsResponseBodyStackGroupOperationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupOperationResultsResponseBodyStackGroupOperationResults() = default ;
    ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& operator=(const ListStackGroupOperationResultsResponseBodyStackGroupOperationResults &) = default ;
    ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& operator=(ListStackGroupOperationResultsResponseBodyStackGroupOperationResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountId_ != nullptr
        && this->rdFolderId_ != nullptr && this->regionId_ != nullptr && this->status_ != nullptr && this->statusReason_ != nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // rdFolderId Field Functions 
    bool hasRdFolderId() const { return this->rdFolderId_ != nullptr;};
    void deleteRdFolderId() { this->rdFolderId_ = nullptr;};
    inline string rdFolderId() const { DARABONBA_PTR_GET_DEFAULT(rdFolderId_, "") };
    inline ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& setRdFolderId(string rdFolderId) { DARABONBA_PTR_SET_VALUE(rdFolderId_, rdFolderId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // statusReason Field Functions 
    bool hasStatusReason() const { return this->statusReason_ != nullptr;};
    void deleteStatusReason() { this->statusReason_ = nullptr;};
    inline string statusReason() const { DARABONBA_PTR_GET_DEFAULT(statusReason_, "") };
    inline ListStackGroupOperationResultsResponseBodyStackGroupOperationResults& setStatusReason(string statusReason) { DARABONBA_PTR_SET_VALUE(statusReason_, statusReason) };


  protected:
    // The ID of the account to which the stack instance belongs.
    // 
    // *   If the stack group has self-managed permissions, the stack instance belongs to an Alibaba Cloud account.
    // *   If the stack group has service-managed permissions, the stack instance belongs to a member account in the resource directory.
    // 
    // >  For more information about the account, see [Overview](https://help.aliyun.com/document_detail/154578.html).
    std::shared_ptr<string> accountId_ = nullptr;
    // The folder ID of the resource directory.
    // 
    // >  This parameter is returned only when the stack group is granted service-managed permissions.
    std::shared_ptr<string> rdFolderId_ = nullptr;
    // The region ID of the stack instance.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the operation.
    // 
    // Valid values:
    // 
    // *   RUNNING: The operation is being performed.
    // *   SUCCEEDED: The operation succeeded.
    // *   FAILED: The operation failed.
    // *   STOPPING: The operation is being stopped.
    // *   STOPPED: The operation is stopped.
    std::shared_ptr<string> status_ = nullptr;
    // The reason why the operation is in a specific state.
    // 
    // >  This parameter is returned only when stack instances are in the OUTDATED state.
    std::shared_ptr<string> statusReason_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
