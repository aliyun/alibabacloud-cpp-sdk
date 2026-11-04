// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECORDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECORDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryRecordRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecordRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IotId, iotId_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(NeedSnapshot, needSnapshot_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(StreamType, streamType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecordRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IotId, iotId_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(NeedSnapshot, needSnapshot_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(StreamType, streamType_);
    };
    QueryRecordRequest() = default ;
    QueryRecordRequest(const QueryRecordRequest &) = default ;
    QueryRecordRequest(QueryRecordRequest &&) = default ;
    QueryRecordRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecordRequest() = default ;
    QueryRecordRequest& operator=(const QueryRecordRequest &) = default ;
    QueryRecordRequest& operator=(QueryRecordRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->currentPage_ == nullptr && this->deviceName_ == nullptr && this->endTime_ == nullptr && this->iotId_ == nullptr && this->iotInstanceId_ == nullptr
        && this->needSnapshot_ == nullptr && this->pageSize_ == nullptr && this->productKey_ == nullptr && this->recordType_ == nullptr && this->streamType_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int32_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0) };
    inline QueryRecordRequest& setBeginTime(int32_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryRecordRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // deviceName Field Functions 
    bool hasDeviceName() const { return this->deviceName_ != nullptr;};
    void deleteDeviceName() { this->deviceName_ = nullptr;};
    inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
    inline QueryRecordRequest& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int32_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0) };
    inline QueryRecordRequest& setEndTime(int32_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // iotId Field Functions 
    bool hasIotId() const { return this->iotId_ != nullptr;};
    void deleteIotId() { this->iotId_ = nullptr;};
    inline string getIotId() const { DARABONBA_PTR_GET_DEFAULT(iotId_, "") };
    inline QueryRecordRequest& setIotId(string iotId) { DARABONBA_PTR_SET_VALUE(iotId_, iotId) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryRecordRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // needSnapshot Field Functions 
    bool hasNeedSnapshot() const { return this->needSnapshot_ != nullptr;};
    void deleteNeedSnapshot() { this->needSnapshot_ = nullptr;};
    inline bool getNeedSnapshot() const { DARABONBA_PTR_GET_DEFAULT(needSnapshot_, false) };
    inline QueryRecordRequest& setNeedSnapshot(bool needSnapshot) { DARABONBA_PTR_SET_VALUE(needSnapshot_, needSnapshot) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryRecordRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productKey Field Functions 
    bool hasProductKey() const { return this->productKey_ != nullptr;};
    void deleteProductKey() { this->productKey_ = nullptr;};
    inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
    inline QueryRecordRequest& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline int32_t getRecordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, 0) };
    inline QueryRecordRequest& setRecordType(int32_t recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // streamType Field Functions 
    bool hasStreamType() const { return this->streamType_ != nullptr;};
    void deleteStreamType() { this->streamType_ = nullptr;};
    inline int32_t getStreamType() const { DARABONBA_PTR_GET_DEFAULT(streamType_, 0) };
    inline QueryRecordRequest& setStreamType(int32_t streamType) { DARABONBA_PTR_SET_VALUE(streamType_, streamType) };


  protected:
    // The start time of the query range. The time is a 10-digit timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> beginTime_ {};
    // The number of the page to return. Default value: 1.
    shared_ptr<int32_t> currentPage_ {};
    // The DeviceName of the IP camera. You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> deviceName_ {};
    // The end time of the query range. The time is a 10-digit timestamp in seconds.
    // 
    // This parameter is required.
    shared_ptr<int32_t> endTime_ {};
    // The ID of the IP camera. The ID is issued by IoT Platform and is the unique identifier of the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** is the unique identifier of the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> iotId_ {};
    // The instance ID. You can view the ID of the current instance on the **Overview** tab in the IoT Platform console.
    // 
    // >Notice: 
    // - If your instance has an ID, you must specify the **ID**. Otherwise, the call fails.
    // - If your instance does not have an ID, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // Specifies whether to return thumbnails. Valid values:
    // 
    // - **true**: yes.
    // - **false** (default): no.
    shared_ptr<bool> needSnapshot_ {};
    // The number of entries to return on each page. Default value: 10. Maximum value: 50.
    shared_ptr<int32_t> pageSize_ {};
    // The ProductKey of the product to which the IP camera belongs. You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information of all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> productKey_ {};
    // The recording type. Valid values:
    // 
    // - **0**: continuous recording.
    // - **1**: intelligent alert event recording.
    // - **2** (default): manual recording.
    // 
    // If this parameter is left empty, all recording types are returned.
    shared_ptr<int32_t> recordType_ {};
    // The stream type. Valid values:
    // - **0** (default): main stream.
    // - **1**: sub stream.
    shared_ptr<int32_t> streamType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
