// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(DealUserId, dealUserId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubTypeCode, subTypeCode_);
      DARABONBA_PTR_TO_JSON(TargetProductCode, targetProductCode_);
      DARABONBA_PTR_TO_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(WarnLevel, warnLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(DealUserId, dealUserId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubTypeCode, subTypeCode_);
      DARABONBA_PTR_FROM_JSON(TargetProductCode, targetProductCode_);
      DARABONBA_PTR_FROM_JSON(TypeCode, typeCode_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(WarnLevel, warnLevel_);
    };
    DescribeEventsRequest() = default ;
    DescribeEventsRequest(const DescribeEventsRequest &) = default ;
    DescribeEventsRequest(DescribeEventsRequest &&) = default ;
    DescribeEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsRequest() = default ;
    DescribeEventsRequest& operator=(const DescribeEventsRequest &) = default ;
    DescribeEventsRequest& operator=(DescribeEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->dealUserId_ == nullptr && return this->endTime_ == nullptr && return this->id_ == nullptr && return this->instanceName_ == nullptr && return this->lang_ == nullptr
        && return this->pageSize_ == nullptr && return this->productCode_ == nullptr && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->subTypeCode_ == nullptr
        && return this->targetProductCode_ == nullptr && return this->typeCode_ == nullptr && return this->userId_ == nullptr && return this->userName_ == nullptr && return this->warnLevel_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeEventsRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // dealUserId Field Functions 
    bool hasDealUserId() const { return this->dealUserId_ != nullptr;};
    void deleteDealUserId() { this->dealUserId_ = nullptr;};
    inline string dealUserId() const { DARABONBA_PTR_GET_DEFAULT(dealUserId_, "") };
    inline DescribeEventsRequest& setDealUserId(string dealUserId) { DARABONBA_PTR_SET_VALUE(dealUserId_, dealUserId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeEventsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeEventsRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeEventsRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeEventsRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEventsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline DescribeEventsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeEventsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEventsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subTypeCode Field Functions 
    bool hasSubTypeCode() const { return this->subTypeCode_ != nullptr;};
    void deleteSubTypeCode() { this->subTypeCode_ = nullptr;};
    inline string subTypeCode() const { DARABONBA_PTR_GET_DEFAULT(subTypeCode_, "") };
    inline DescribeEventsRequest& setSubTypeCode(string subTypeCode) { DARABONBA_PTR_SET_VALUE(subTypeCode_, subTypeCode) };


    // targetProductCode Field Functions 
    bool hasTargetProductCode() const { return this->targetProductCode_ != nullptr;};
    void deleteTargetProductCode() { this->targetProductCode_ = nullptr;};
    inline string targetProductCode() const { DARABONBA_PTR_GET_DEFAULT(targetProductCode_, "") };
    inline DescribeEventsRequest& setTargetProductCode(string targetProductCode) { DARABONBA_PTR_SET_VALUE(targetProductCode_, targetProductCode) };


    // typeCode Field Functions 
    bool hasTypeCode() const { return this->typeCode_ != nullptr;};
    void deleteTypeCode() { this->typeCode_ = nullptr;};
    inline string typeCode() const { DARABONBA_PTR_GET_DEFAULT(typeCode_, "") };
    inline DescribeEventsRequest& setTypeCode(string typeCode) { DARABONBA_PTR_SET_VALUE(typeCode_, typeCode) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline DescribeEventsRequest& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline DescribeEventsRequest& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // warnLevel Field Functions 
    bool hasWarnLevel() const { return this->warnLevel_ != nullptr;};
    void deleteWarnLevel() { this->warnLevel_ = nullptr;};
    inline int32_t warnLevel() const { DARABONBA_PTR_GET_DEFAULT(warnLevel_, 0) };
    inline DescribeEventsRequest& setWarnLevel(int32_t warnLevel) { DARABONBA_PTR_SET_VALUE(warnLevel_, warnLevel) };


  protected:
    // The page number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The ID of the account that handles the anomalous event.
    std::shared_ptr<string> dealUserId_ = nullptr;
    // The end of the time range during which the anomalous events are detected. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<string> endTime_ = nullptr;
    // The unique ID of the anomalous event.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the data asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The language of the content within the request and response. Default value: **zh_cn**. Valid values:
    // 
    // *   **zh_cn**: Chinese
    // *   **en_us**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the service to which the table belongs. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**.
    std::shared_ptr<string> productCode_ = nullptr;
    // The beginning of the time range during which the anomalous events are detected. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<string> startTime_ = nullptr;
    // The handling status of the anomalous event. Valid values:
    // 
    // *   0: unhandled
    // *   1: confirmed
    // *   2: marked as false positive
    std::shared_ptr<string> status_ = nullptr;
    // The name of the anomalous event subtype.
    // 
    // > You can call the **DescribeEventTypes** operation to query the name of the anomalous event subtype.
    std::shared_ptr<string> subTypeCode_ = nullptr;
    // The name of the destination service in an anomalous data flow. Valid values include **MaxCompute, OSS, ADS, OTS, and RDS**
    std::shared_ptr<string> targetProductCode_ = nullptr;
    // The name of the anomalous event type. Valid values:
    // 
    // *   01: anomalous permission usage
    // *   02: anomalous data flow
    // *   03: anomalous data operation
    std::shared_ptr<string> typeCode_ = nullptr;
    // The ID of the account that triggered the anomalous event.
    std::shared_ptr<int64_t> userId_ = nullptr;
    // The username of the RAM user.
    std::shared_ptr<string> userName_ = nullptr;
    // The risk level of the alert that is triggered. Valid values:
    // 
    // *   **1**: low
    // *   **2**: medium
    // *   **3**: high
    std::shared_ptr<int32_t> warnLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
