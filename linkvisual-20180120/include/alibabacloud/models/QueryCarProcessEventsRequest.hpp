// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCARPROCESSEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCARPROCESSEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkvisual20180120
{
namespace Models
{
  class QueryCarProcessEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCarProcessEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionType, actionType_);
      DARABONBA_PTR_TO_JSON(AreaIndex, areaIndex_);
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PlateNo, plateNo_);
      DARABONBA_PTR_TO_JSON(SubDeviceName, subDeviceName_);
      DARABONBA_PTR_TO_JSON(SubIotId, subIotId_);
      DARABONBA_PTR_TO_JSON(SubProductKey, subProductKey_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCarProcessEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionType, actionType_);
      DARABONBA_PTR_FROM_JSON(AreaIndex, areaIndex_);
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IotInstanceId, iotInstanceId_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PlateNo, plateNo_);
      DARABONBA_PTR_FROM_JSON(SubDeviceName, subDeviceName_);
      DARABONBA_PTR_FROM_JSON(SubIotId, subIotId_);
      DARABONBA_PTR_FROM_JSON(SubProductKey, subProductKey_);
    };
    QueryCarProcessEventsRequest() = default ;
    QueryCarProcessEventsRequest(const QueryCarProcessEventsRequest &) = default ;
    QueryCarProcessEventsRequest(QueryCarProcessEventsRequest &&) = default ;
    QueryCarProcessEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCarProcessEventsRequest() = default ;
    QueryCarProcessEventsRequest& operator=(const QueryCarProcessEventsRequest &) = default ;
    QueryCarProcessEventsRequest& operator=(QueryCarProcessEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionType_ == nullptr
        && this->areaIndex_ == nullptr && this->beginTime_ == nullptr && this->currentPage_ == nullptr && this->endTime_ == nullptr && this->iotInstanceId_ == nullptr
        && this->pageSize_ == nullptr && this->plateNo_ == nullptr && this->subDeviceName_ == nullptr && this->subIotId_ == nullptr && this->subProductKey_ == nullptr; };
    // actionType Field Functions 
    bool hasActionType() const { return this->actionType_ != nullptr;};
    void deleteActionType() { this->actionType_ = nullptr;};
    inline int32_t getActionType() const { DARABONBA_PTR_GET_DEFAULT(actionType_, 0) };
    inline QueryCarProcessEventsRequest& setActionType(int32_t actionType) { DARABONBA_PTR_SET_VALUE(actionType_, actionType) };


    // areaIndex Field Functions 
    bool hasAreaIndex() const { return this->areaIndex_ != nullptr;};
    void deleteAreaIndex() { this->areaIndex_ = nullptr;};
    inline int32_t getAreaIndex() const { DARABONBA_PTR_GET_DEFAULT(areaIndex_, 0) };
    inline QueryCarProcessEventsRequest& setAreaIndex(int32_t areaIndex) { DARABONBA_PTR_SET_VALUE(areaIndex_, areaIndex) };


    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
    inline QueryCarProcessEventsRequest& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QueryCarProcessEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline QueryCarProcessEventsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // iotInstanceId Field Functions 
    bool hasIotInstanceId() const { return this->iotInstanceId_ != nullptr;};
    void deleteIotInstanceId() { this->iotInstanceId_ = nullptr;};
    inline string getIotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(iotInstanceId_, "") };
    inline QueryCarProcessEventsRequest& setIotInstanceId(string iotInstanceId) { DARABONBA_PTR_SET_VALUE(iotInstanceId_, iotInstanceId) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QueryCarProcessEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // plateNo Field Functions 
    bool hasPlateNo() const { return this->plateNo_ != nullptr;};
    void deletePlateNo() { this->plateNo_ = nullptr;};
    inline string getPlateNo() const { DARABONBA_PTR_GET_DEFAULT(plateNo_, "") };
    inline QueryCarProcessEventsRequest& setPlateNo(string plateNo) { DARABONBA_PTR_SET_VALUE(plateNo_, plateNo) };


    // subDeviceName Field Functions 
    bool hasSubDeviceName() const { return this->subDeviceName_ != nullptr;};
    void deleteSubDeviceName() { this->subDeviceName_ = nullptr;};
    inline string getSubDeviceName() const { DARABONBA_PTR_GET_DEFAULT(subDeviceName_, "") };
    inline QueryCarProcessEventsRequest& setSubDeviceName(string subDeviceName) { DARABONBA_PTR_SET_VALUE(subDeviceName_, subDeviceName) };


    // subIotId Field Functions 
    bool hasSubIotId() const { return this->subIotId_ != nullptr;};
    void deleteSubIotId() { this->subIotId_ = nullptr;};
    inline string getSubIotId() const { DARABONBA_PTR_GET_DEFAULT(subIotId_, "") };
    inline QueryCarProcessEventsRequest& setSubIotId(string subIotId) { DARABONBA_PTR_SET_VALUE(subIotId_, subIotId) };


    // subProductKey Field Functions 
    bool hasSubProductKey() const { return this->subProductKey_ != nullptr;};
    void deleteSubProductKey() { this->subProductKey_ = nullptr;};
    inline string getSubProductKey() const { DARABONBA_PTR_GET_DEFAULT(subProductKey_, "") };
    inline QueryCarProcessEventsRequest& setSubProductKey(string subProductKey) { DARABONBA_PTR_SET_VALUE(subProductKey_, subProductKey) };


  protected:
    // The action type of the vehicle. Valid values:
    // 
    // - **1**: Enter.
    // - **2**: Stay.
    // - **3**: Leave.
    shared_ptr<int32_t> actionType_ {};
    // The detection box of the IPC device. You can call the [InvokeThingService](https://help.aliyun.com/document_detail/69584.html) operation to query the number of detection boxes. Set **identifier** to **QueryAlgoTaskDetails**.
    shared_ptr<int32_t> areaIndex_ {};
    // The start time of the query range. The time is a 13-digit timestamp in milliseconds.
    shared_ptr<int64_t> beginTime_ {};
    // The page number of the returned page. Pages start from 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // The end time of the query range. The time is a 13-digit timestamp in milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID. You can view the **ID** of the current instance on the **Instance Overview** page in the IoT Platform console.
    // 
    // >Notice: 
    // - If the instance has an ID, you must specify this ID. Otherwise, the call fails.
    // - If the instance does not have an ID<props="intl"><ph> or the **Instance Overview** page is not displayed</ph>, you do not need to specify this parameter.
    // 
    // 
    // 
    // For more information about instances, see [Instance overview](https://help.aliyun.com/document_detail/356505.html).
    shared_ptr<string> iotInstanceId_ {};
    // The number of entries to return on each page. Valid values: 1 to 20. Default value: 10.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The license plate number. The value can be up to 15 characters in length.
    shared_ptr<string> plateNo_ {};
    // The name of the IPC device.
    // You can view the **DeviceName** on the **Devices** page in the IoT Platform console.
    // >Notice:  If you specify this parameter, you must also specify **ProductKey**.
    shared_ptr<string> subDeviceName_ {};
    // The ID of the IP camera (IPC) device. The ID is issued by IoT Platform and uniquely identifies the device. You can call the [QueryDeviceDetail](https://help.aliyun.com/document_detail/69594.html) operation of IoT Platform to query the ID.
    // 
    // >Notice:  If you specify this parameter, you do not need to specify **ProductKey** or **DeviceName**. The **IotId** uniquely identifies the device and corresponds to the combination of **ProductKey** and **DeviceName**. If you specify both **IotId** and the combination of **ProductKey** and **DeviceName**, **IotId** takes precedence.
    shared_ptr<string> subIotId_ {};
    // The ProductKey of the product to which the IPC device belongs.
    // You can view the ProductKey on the **Products** page in the IoT Platform console or call the [QueryProductList](https://help.aliyun.com/document_detail/69271.html) operation to query the information about all products under the current account.
    // >Notice:  If you specify this parameter, you must also specify **DeviceName**.
    shared_ptr<string> subProductKey_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkvisual20180120
#endif
