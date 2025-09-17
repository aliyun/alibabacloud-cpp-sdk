// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESELLERINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESELLERINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MarketplaceIntl20221230
{
namespace Models
{
  class DescribeSellerInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSellerInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSellerInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceStatus, instanceStatus_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DescribeSellerInstancesRequest() = default ;
    DescribeSellerInstancesRequest(const DescribeSellerInstancesRequest &) = default ;
    DescribeSellerInstancesRequest(DescribeSellerInstancesRequest &&) = default ;
    DescribeSellerInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSellerInstancesRequest() = default ;
    DescribeSellerInstancesRequest& operator=(const DescribeSellerInstancesRequest &) = default ;
    DescribeSellerInstancesRequest& operator=(DescribeSellerInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->instanceStatus_ != nullptr && this->pageIndex_ != nullptr && this->pageSize_ != nullptr && this->userId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline DescribeSellerInstancesRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceStatus Field Functions 
    bool hasInstanceStatus() const { return this->instanceStatus_ != nullptr;};
    void deleteInstanceStatus() { this->instanceStatus_ = nullptr;};
    inline string instanceStatus() const { DARABONBA_PTR_GET_DEFAULT(instanceStatus_, "") };
    inline DescribeSellerInstancesRequest& setInstanceStatus(string instanceStatus) { DARABONBA_PTR_SET_VALUE(instanceStatus_, instanceStatus) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline DescribeSellerInstancesRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline DescribeSellerInstancesRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeSellerInstancesRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    std::shared_ptr<string> instanceStatus_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MarketplaceIntl20221230
#endif
