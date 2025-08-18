// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUESTRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATERECORDSREQUESTRECORDLIST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchCreateRecordsRequestRecordListAuthConf.hpp>
#include <alibabacloud/models/BatchCreateRecordsRequestRecordListData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class BatchCreateRecordsRequestRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateRecordsRequestRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(AuthConf, authConf_);
      DARABONBA_PTR_TO_JSON(BizName, bizName_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Proxied, proxied_);
      DARABONBA_PTR_TO_JSON(RecordName, recordName_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateRecordsRequestRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthConf, authConf_);
      DARABONBA_PTR_FROM_JSON(BizName, bizName_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Proxied, proxied_);
      DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    BatchCreateRecordsRequestRecordList() = default ;
    BatchCreateRecordsRequestRecordList(const BatchCreateRecordsRequestRecordList &) = default ;
    BatchCreateRecordsRequestRecordList(BatchCreateRecordsRequestRecordList &&) = default ;
    BatchCreateRecordsRequestRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateRecordsRequestRecordList() = default ;
    BatchCreateRecordsRequestRecordList& operator=(const BatchCreateRecordsRequestRecordList &) = default ;
    BatchCreateRecordsRequestRecordList& operator=(BatchCreateRecordsRequestRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authConf_ != nullptr
        && this->bizName_ != nullptr && this->data_ != nullptr && this->proxied_ != nullptr && this->recordName_ != nullptr && this->sourceType_ != nullptr
        && this->ttl_ != nullptr && this->type_ != nullptr; };
    // authConf Field Functions 
    bool hasAuthConf() const { return this->authConf_ != nullptr;};
    void deleteAuthConf() { this->authConf_ = nullptr;};
    inline const Models::BatchCreateRecordsRequestRecordListAuthConf & authConf() const { DARABONBA_PTR_GET_CONST(authConf_, Models::BatchCreateRecordsRequestRecordListAuthConf) };
    inline Models::BatchCreateRecordsRequestRecordListAuthConf authConf() { DARABONBA_PTR_GET(authConf_, Models::BatchCreateRecordsRequestRecordListAuthConf) };
    inline BatchCreateRecordsRequestRecordList& setAuthConf(const Models::BatchCreateRecordsRequestRecordListAuthConf & authConf) { DARABONBA_PTR_SET_VALUE(authConf_, authConf) };
    inline BatchCreateRecordsRequestRecordList& setAuthConf(Models::BatchCreateRecordsRequestRecordListAuthConf && authConf) { DARABONBA_PTR_SET_RVALUE(authConf_, authConf) };


    // bizName Field Functions 
    bool hasBizName() const { return this->bizName_ != nullptr;};
    void deleteBizName() { this->bizName_ = nullptr;};
    inline string bizName() const { DARABONBA_PTR_GET_DEFAULT(bizName_, "") };
    inline BatchCreateRecordsRequestRecordList& setBizName(string bizName) { DARABONBA_PTR_SET_VALUE(bizName_, bizName) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::BatchCreateRecordsRequestRecordListData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::BatchCreateRecordsRequestRecordListData) };
    inline Models::BatchCreateRecordsRequestRecordListData data() { DARABONBA_PTR_GET(data_, Models::BatchCreateRecordsRequestRecordListData) };
    inline BatchCreateRecordsRequestRecordList& setData(const Models::BatchCreateRecordsRequestRecordListData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline BatchCreateRecordsRequestRecordList& setData(Models::BatchCreateRecordsRequestRecordListData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // proxied Field Functions 
    bool hasProxied() const { return this->proxied_ != nullptr;};
    void deleteProxied() { this->proxied_ = nullptr;};
    inline bool proxied() const { DARABONBA_PTR_GET_DEFAULT(proxied_, false) };
    inline BatchCreateRecordsRequestRecordList& setProxied(bool proxied) { DARABONBA_PTR_SET_VALUE(proxied_, proxied) };


    // recordName Field Functions 
    bool hasRecordName() const { return this->recordName_ != nullptr;};
    void deleteRecordName() { this->recordName_ = nullptr;};
    inline string recordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
    inline BatchCreateRecordsRequestRecordList& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline BatchCreateRecordsRequestRecordList& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline BatchCreateRecordsRequestRecordList& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline BatchCreateRecordsRequestRecordList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<Models::BatchCreateRecordsRequestRecordListAuthConf> authConf_ = nullptr;
    // The business scenario of the record for acceleration. Valid values:
    // 
    // *   **image_video**
    // *   **api**
    // *   **web**
    std::shared_ptr<string> bizName_ = nullptr;
    // The DNS information of the record. Enter fields based on the record type.
    // 
    // This parameter is required.
    std::shared_ptr<Models::BatchCreateRecordsRequestRecordListData> data_ = nullptr;
    // Specifies whether to proxy the record. Only CNAME and A/AAAA records can be proxied. Valid values:
    // 
    // *   **true**
    // *   **false**
    // 
    // This parameter is required.
    std::shared_ptr<bool> proxied_ = nullptr;
    // The record name.
    // 
    // This parameter is required.
    std::shared_ptr<string> recordName_ = nullptr;
    // The origin type for the CNAME record. This parameter is required when you add a CNAME record. Valid values:
    // 
    // *   **OSS**: OSS bucket.
    // *   **S3**: S3 bucket.
    // *   **LB**: load balancer.
    // *   **OP**: origin pool.
    // *   **Domain**: domain name.
    // 
    // If you do not pass this parameter or if you leave its value empty, Domain is used by default.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The TTL of the record. Unit: seconds. If the value is 1, the TTL of the record is determined by the system.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> ttl_ = nullptr;
    // The DNS type of the record.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
