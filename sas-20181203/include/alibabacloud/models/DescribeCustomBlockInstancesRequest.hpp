// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMBLOCKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCustomBlockInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomBlockInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_TO_JSON(Bound, bound_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomBlockInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockIp, blockIp_);
      DARABONBA_PTR_FROM_JSON(Bound, bound_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeCustomBlockInstancesRequest() = default ;
    DescribeCustomBlockInstancesRequest(const DescribeCustomBlockInstancesRequest &) = default ;
    DescribeCustomBlockInstancesRequest(DescribeCustomBlockInstancesRequest &&) = default ;
    DescribeCustomBlockInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomBlockInstancesRequest() = default ;
    DescribeCustomBlockInstancesRequest& operator=(const DescribeCustomBlockInstancesRequest &) = default ;
    DescribeCustomBlockInstancesRequest& operator=(DescribeCustomBlockInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockIp_ == nullptr
        && this->bound_ == nullptr && this->currentPage_ == nullptr && this->pageSize_ == nullptr && this->resourceOwnerId_ == nullptr && this->status_ == nullptr; };
    // blockIp Field Functions 
    bool hasBlockIp() const { return this->blockIp_ != nullptr;};
    void deleteBlockIp() { this->blockIp_ = nullptr;};
    inline string getBlockIp() const { DARABONBA_PTR_GET_DEFAULT(blockIp_, "") };
    inline DescribeCustomBlockInstancesRequest& setBlockIp(string blockIp) { DARABONBA_PTR_SET_VALUE(blockIp_, blockIp) };


    // bound Field Functions 
    bool hasBound() const { return this->bound_ != nullptr;};
    void deleteBound() { this->bound_ = nullptr;};
    inline string getBound() const { DARABONBA_PTR_GET_DEFAULT(bound_, "") };
    inline DescribeCustomBlockInstancesRequest& setBound(string bound) { DARABONBA_PTR_SET_VALUE(bound_, bound) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeCustomBlockInstancesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCustomBlockInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeCustomBlockInstancesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCustomBlockInstancesRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The IP address that you want to specify in the rule.
    // 
    // >  You can call the [DescribeCustomBlockRecords](~~DescribeCustomBlockRecords~~) operation to obtain the IP address.
    shared_ptr<string> blockIp_ {};
    // The traffic direction that you want to specify in the custom rule. Valid values:
    // 
    // *   **in**: inbound
    // *   **out**: outbound
    shared_ptr<string> bound_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The number of entries per page. Default value: **20**.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether the rule is enabled for the server.
    // 
    // *   **2**: enabling failed
    // *   **1**: enabled
    // *   **0**: disabled
    shared_ptr<int32_t> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
