// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBruteForceRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBruteForceRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBruteForceRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBruteForceRecordsRequest() = default ;
    DescribeBruteForceRecordsRequest(const DescribeBruteForceRecordsRequest &) = default ;
    DescribeBruteForceRecordsRequest(DescribeBruteForceRecordsRequest &&) = default ;
    DescribeBruteForceRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBruteForceRecordsRequest() = default ;
    DescribeBruteForceRecordsRequest& operator=(const DescribeBruteForceRecordsRequest &) = default ;
    DescribeBruteForceRecordsRequest& operator=(DescribeBruteForceRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIp_ == nullptr
        && this->currentPage_ == nullptr && this->instanceId_ == nullptr && this->pageSize_ == nullptr && this->remark_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->status_ == nullptr; };
    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline DescribeBruteForceRecordsRequest& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeBruteForceRecordsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeBruteForceRecordsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBruteForceRecordsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeBruteForceRecordsRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeBruteForceRecordsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeBruteForceRecordsRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IP address that is blocked.
    shared_ptr<string> blockIp_ {};
    // The number of the page to return.
    shared_ptr<int32_t> currentPage_ {};
    // The ID of the server.
    shared_ptr<string> instanceId_ {};
    // The number of entries to return on each page. Default value: 20. If you leave this parameter empty, 20 entries are returned on each page. We recommend that you do not leave this parameter empty.
    shared_ptr<int32_t> pageSize_ {};
    // The name or IP address of the server to query.
    shared_ptr<string> remark_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The status of the defense rule. Valid values:
    // 
    // *   **0**: invalid
    // *   **1**: enabled
    // *   **2**: failed
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
