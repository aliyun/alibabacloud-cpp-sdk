// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSTREAMPUSHJOBLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSTREAMPUSHJOBLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryStreamPushJobListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryStreamPushJobListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryStreamPushJobListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    QueryStreamPushJobListRequest() = default ;
    QueryStreamPushJobListRequest(const QueryStreamPushJobListRequest &) = default ;
    QueryStreamPushJobListRequest(QueryStreamPushJobListRequest &&) = default ;
    QueryStreamPushJobListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryStreamPushJobListRequest() = default ;
    QueryStreamPushJobListRequest& operator=(const QueryStreamPushJobListRequest &) = default ;
    QueryStreamPushJobListRequest& operator=(QueryStreamPushJobListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->deviceName_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr && this->jobType_ == nullptr && this->pageSize_ == nullptr
        && this->productKey_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryStreamPushJobListRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryStreamPushJobListRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryStreamPushJobListRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryStreamPushJobListRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline int32_t getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, 0) };
    inline QueryStreamPushJobListRequest& setJobType(int32_t jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryStreamPushJobListRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryStreamPushJobListRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // Specifies the page number of the page to return. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The DeviceName of the device.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The ID of the device. The ID is the unique identifier that is issued by IoT Platform to the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
    // 
    // >Notice:  **IotId** is the unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // Instance ID of the instance. You can view instance ID of the current instance on the **Instance Overview** tab in the IoT Platform console.
    // 
    // This parameter is required.
    shared_ptr<string> iotInstanceId_ {};
    // The type of the stream push job. Valid values:
    // 
    // - **1** (default): continuous job.
    // - **2**: triggered job. The job ends after it is interrupted.
    shared_ptr<int32_t> jobType_ {};
    // Specifies the number of entries to return on each page. Maximum value: 100. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The **ProductKey** of the product to which the device belongs.
    // You can view the **ProductKey** on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information of all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
