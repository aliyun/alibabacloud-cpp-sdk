// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPICTUREFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYPICTUREFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryPictureFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPictureFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PictureSource, pictureSource_);
      DARABONBA_PTR_TO_JSON(PictureType, pictureType_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPictureFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PictureSource, pictureSource_);
      DARABONBA_PTR_FROM_JSON(PictureType, pictureType_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
    };
    QueryPictureFilesRequest() = default ;
    QueryPictureFilesRequest(const QueryPictureFilesRequest &) = default ;
    QueryPictureFilesRequest(QueryPictureFilesRequest &&) = default ;
    QueryPictureFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPictureFilesRequest() = default ;
    QueryPictureFilesRequest& operator=(const QueryPictureFilesRequest &) = default ;
    QueryPictureFilesRequest& operator=(QueryPictureFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->currentPage_ == nullptr && this->deviceName_ == nullptr && this->endTime_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr
        && this->pageSize_ == nullptr && this->pictureSource_ == nullptr && this->pictureType_ == nullptr && this->productKey_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline QueryPictureFilesRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryPictureFilesRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryPictureFilesRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryPictureFilesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryPictureFilesRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryPictureFilesRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryPictureFilesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // pictureSource Field Functions 
    bool hasPictureSource() const { return this->pictureSource_ != nullptr;};
    void deletePictureSource() { this->pictureSource_ = nullptr;};
    inline int32_t getPictureSource() const { DARABONBA_PTR_GET_DEFAULT(pictureSource_, 0) };
    inline QueryPictureFilesRequest& setPictureSource(int32_t pictureSource) { DARABONBA_PTR_SET_VALUE(pictureSource_, pictureSource) };


    // pictureType Field Functions 
    bool hasPictureType() const { return this->pictureType_ != nullptr;};
    void deletePictureType() { this->pictureType_ = nullptr;};
    inline int32_t getPictureType() const { DARABONBA_PTR_GET_DEFAULT(pictureType_, 0) };
    inline QueryPictureFilesRequest& setPictureType(int32_t pictureType) { DARABONBA_PTR_SET_VALUE(pictureType_, pictureType) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryPictureFilesRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


  protected:
    // The start time of the retrieval range. The time is a 13-digit timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> beginTime_ {};
    // The page number of the returned page. Pages start from 1.
    shared_ptr<int32_t> currentPage_ {};
    // The DeviceName of the IP camera.
    // You can view the **DeviceName** on the **Devices** page of the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The end time of the retrieval range. The time is a 13-digit timestamp in milliseconds.
    // 
    // This parameter is required.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the IP camera. The ID is issued by IoT Platform and is the unique identifier of the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is the unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // Instance ID of the instance. You can view the **ID** of the current instance on the **Instance Overview** page of the IoT Platform console.
    // 
    // >Notice: 
    // - If the instance has an ID, you must specify instance ID. Otherwise, the call fails.
    // - If the instance does not have an <props="intl"><ph>**Instance Overview** page or </ph>ID, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // The number of entries to return on each page. Default value: 10. Maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The source of the image. Valid values:
    // 
    // - **0**: all events. This is the default value.
    // - **1**: snapshot captured during an alert event.
    // - **2**: manual snapshot.
    // - **3**: other sources.
    // - **4**: cloud snapshot.
    shared_ptr<int32_t> pictureSource_ {};
    // The type of the image. Valid values:
    // 
    // - **0**: thumbnail. 
    // - **1**: original image.
    // - **2**: all images. This is the default value.
    shared_ptr<int32_t> pictureType_ {};
    // The ProductKey of the product to which the IP camera belongs.
    // You can view the ProductKey on the **Products** page of the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
