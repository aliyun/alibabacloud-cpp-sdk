// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECURSIONRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECURSIONRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeRecursionRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecursionRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecursionRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeRecursionRecordResponseBody() = default ;
    DescribeRecursionRecordResponseBody(const DescribeRecursionRecordResponseBody &) = default ;
    DescribeRecursionRecordResponseBody(DescribeRecursionRecordResponseBody &&) = default ;
    DescribeRecursionRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecursionRecordResponseBody() = default ;
    DescribeRecursionRecordResponseBody& operator=(const DescribeRecursionRecordResponseBody &) = default ;
    DescribeRecursionRecordResponseBody& operator=(DescribeRecursionRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createTimestamp_ == nullptr && this->priority_ == nullptr && this->recordId_ == nullptr && this->remark_ == nullptr && this->requestId_ == nullptr
        && this->rr_ == nullptr && this->ttl_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr && this->updateTimestamp_ == nullptr
        && this->value_ == nullptr && this->weight_ == nullptr && this->zoneId_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeRecursionRecordResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeRecursionRecordResponseBody& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline DescribeRecursionRecordResponseBody& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string getRecordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline DescribeRecursionRecordResponseBody& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeRecursionRecordResponseBody& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRecursionRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string getRr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline DescribeRecursionRecordResponseBody& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t getTtl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline DescribeRecursionRecordResponseBody& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeRecursionRecordResponseBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeRecursionRecordResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeRecursionRecordResponseBody& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeRecursionRecordResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeRecursionRecordResponseBody& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRecursionRecordResponseBody& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> createTimestamp_ {};
    shared_ptr<int32_t> priority_ {};
    // record ID
    shared_ptr<string> recordId_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> rr_ {};
    // ttl
    shared_ptr<int32_t> ttl_ {};
    shared_ptr<string> type_ {};
    shared_ptr<string> updateTime_ {};
    shared_ptr<int64_t> updateTimestamp_ {};
    shared_ptr<string> value_ {};
    shared_ptr<int32_t> weight_ {};
    // zone ID
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
