// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODYRECORDRESULTLISTFAILED_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSRESPONSEBODYRECORDRESULTLISTFAILED_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchCreateRecordsResponseBodyRecordResultListFailedData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsResponseBodyRecordResultListFailed : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsResponseBodyRecordResultListFailed& obj) { 
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(RecordType, recordType_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsResponseBodyRecordResultListFailed& obj) { 
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(RecordType, recordType_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
    };
    BatchCreateRecordsResponseBodyRecordResultListFailed() = default ;
    BatchCreateRecordsResponseBodyRecordResultListFailed(const BatchCreateRecordsResponseBodyRecordResultListFailed &) = default ;
    BatchCreateRecordsResponseBodyRecordResultListFailed(BatchCreateRecordsResponseBodyRecordResultListFailed &&) = default ;
    BatchCreateRecordsResponseBodyRecordResultListFailed(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsResponseBodyRecordResultListFailed() = default ;
    BatchCreateRecordsResponseBodyRecordResultListFailed& operator=(const BatchCreateRecordsResponseBodyRecordResultListFailed &) = default ;
    BatchCreateRecordsResponseBodyRecordResultListFailed& operator=(BatchCreateRecordsResponseBodyRecordResultListFailed &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizName_ == nullptr
        && return this->data_ == nullptr && return this->description_ == nullptr && return this->proxied_ == nullptr && return this->recordId_ == nullptr && return this->recordName_ == nullptr
        && return this->recordType_ == nullptr && return this->sourceType_ == nullptr && return this->ttl_ == nullptr; };
    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::BatchCreateRecordsResponseBodyRecordResultListFailedData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::BatchCreateRecordsResponseBodyRecordResultListFailedData) };
    inline Models::BatchCreateRecordsResponseBodyRecordResultListFailedData data() { DARABONBA_PTR_GET(data_, Models::BatchCreateRecordsResponseBodyRecordResultListFailedData) };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setData(const Models::BatchCreateRecordsResponseBodyRecordResultListFailedData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setData(Models::BatchCreateRecordsResponseBodyRecordResultListFailedData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool proxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline int64_t recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, 0L) };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setRecordId(int64_t recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // recordType Field Functions 
    bool hasRecordType() const { return this->recordType_ != nullptr;};
    void deleteRecordType() { this->recordType_ = nullptr;};
    inline string recordType() const { DARABONBA_PTR_GET_DEFAULT(recordType_, "") };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setRecordType(string recordType) { DARABONBA_PTR_SET_VALUE(recordType_, recordType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline BatchCreateRecordsResponseBodyRecordResultListFailed& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


  protected:
    // The business scenario of the record for acceleration. Valid values:
    // 
    // *   **image_video**
    // *   **api**
    // *   **web**
    std::shared_ptr<string> bizName_ = nullptr;
    // The DNS information about the record, which contains various types of record values and their related attributes.
    std::shared_ptr<Models::BatchCreateRecordsResponseBodyRecordResultListFailedData> data_ = nullptr;
    // The result description.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the record is proxied. Only CNAME and A/AAAA records can be proxied. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> proxied_ = nullptr;
    // The record ID.
    std::shared_ptr<int64_t> recordId_ = nullptr;
    // The record name.
    std::shared_ptr<string> recordName_ = nullptr;
    // The DNS type of the record, such as **A/AAAA, CNAME, and TXT**.
    std::shared_ptr<string> recordType_ = nullptr;
    // The origin type of the CNAME record. This field is left empty for other types of records. The type of the origin server. Valid values:
    // 
    // *   **OSS**: OSS bucket.
    // *   **S3**: S3 bucket.
    // *   **LB**: load balancer.
    // *   **OP**: origin pool.
    // *   **Domain**: domain name.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
    std::shared_ptr<int32_t> ttl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
