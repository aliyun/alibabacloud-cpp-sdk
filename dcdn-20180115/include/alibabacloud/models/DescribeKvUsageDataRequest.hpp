// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKVUSAGEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeKvUsageDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKvUsageDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccessType, accessType_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ResponseType, responseType_);
      DARABONBA_PTR_TO_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKvUsageDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessType, accessType_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ResponseType, responseType_);
      DARABONBA_PTR_FROM_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeKvUsageDataRequest() = default ;
    DescribeKvUsageDataRequest(const DescribeKvUsageDataRequest &) = default ;
    DescribeKvUsageDataRequest(DescribeKvUsageDataRequest &&) = default ;
    DescribeKvUsageDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKvUsageDataRequest() = default ;
    DescribeKvUsageDataRequest& operator=(const DescribeKvUsageDataRequest &) = default ;
    DescribeKvUsageDataRequest& operator=(DescribeKvUsageDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessType_ == nullptr
        && this->endTime_ == nullptr && this->field_ == nullptr && this->namespaceId_ == nullptr && this->responseType_ == nullptr && this->splitBy_ == nullptr
        && this->startTime_ == nullptr; };
    // accessType Field Functions 
    bool hasAccessType() const { return this->accessType_ != nullptr;};
    void deleteAccessType() { this->accessType_ = nullptr;};
    inline string getAccessType() const { DARABONBA_PTR_GET_DEFAULT(accessType_, "") };
    inline DescribeKvUsageDataRequest& setAccessType(string accessType) { DARABONBA_PTR_SET_VALUE(accessType_, accessType) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeKvUsageDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeKvUsageDataRequest& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DescribeKvUsageDataRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // responseType Field Functions 
    bool hasResponseType() const { return this->responseType_ != nullptr;};
    void deleteResponseType() { this->responseType_ = nullptr;};
    inline string getResponseType() const { DARABONBA_PTR_GET_DEFAULT(responseType_, "") };
    inline DescribeKvUsageDataRequest& setResponseType(string responseType) { DARABONBA_PTR_SET_VALUE(responseType_, responseType) };


    // splitBy Field Functions 
    bool hasSplitBy() const { return this->splitBy_ != nullptr;};
    void deleteSplitBy() { this->splitBy_ = nullptr;};
    inline string getSplitBy() const { DARABONBA_PTR_GET_DEFAULT(splitBy_, "") };
    inline DescribeKvUsageDataRequest& setSplitBy(string splitBy) { DARABONBA_PTR_SET_VALUE(splitBy_, splitBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeKvUsageDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The request method. If the parameter is empty, data about all methods is returned. Valid values:
    // 
    // *   **get**
    // *   **put**
    // *   **list**
    // *   **delete**
    shared_ptr<string> accessType_ {};
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // The type of the request data. Set the value to **acc**.
    // 
    // This parameter is required.
    shared_ptr<string> field_ {};
    // The namespace ID. If the parameter is empty, data about all namespaces is returned.
    // 
    // You can specify a maximum number of 30 namespace IDs and separate them with commas (,).
    shared_ptr<string> namespaceId_ {};
    // The type of the response data. Valid values:
    // 
    // *   **detail**: detailed data
    // *   **total**: summary data
    // 
    // Default value: **detail**.
    shared_ptr<string> responseType_ {};
    // The key that is used to group data. Valid values: **type** and **namespace**.
    // 
    // *   **type**: Data is grouped by time. The data in the last 5 minutes is returned.
    // *   **namespace**: Data is grouped by namespace and is not padded with zeros.
    // *   Default value: **type**.
    // 
    // If **ResponseType** is set to **total**, data to return is not grouped by **namespace** but by **type**.
    shared_ptr<string> splitBy_ {};
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // The minimum data granularity is 1 hour. If you do not specify this parameter, the data in the last seven days is returned.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
