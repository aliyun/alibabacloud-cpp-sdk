// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRECURSIONRECORDSRESPONSEBODYRECORDSRECORD_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRECURSIONRECORDSRESPONSEBODYRECORDSRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchRecursionRecordsResponseBodyRecordsRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchRecursionRecordsResponseBodyRecordsRecord& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(CreatorSubType, creatorSubType_);
      DARABONBA_PTR_TO_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RecordId, recordId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_TO_JSON(Rr, rr_);
      DARABONBA_PTR_TO_JSON(Ttl, ttl_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchRecursionRecordsResponseBodyRecordsRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(CreatorSubType, creatorSubType_);
      DARABONBA_PTR_FROM_JSON(CreatorType, creatorType_);
      DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RecordId, recordId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RequestSource, requestSource_);
      DARABONBA_PTR_FROM_JSON(Rr, rr_);
      DARABONBA_PTR_FROM_JSON(Ttl, ttl_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    SearchRecursionRecordsResponseBodyRecordsRecord() = default ;
    SearchRecursionRecordsResponseBodyRecordsRecord(const SearchRecursionRecordsResponseBodyRecordsRecord &) = default ;
    SearchRecursionRecordsResponseBodyRecordsRecord(SearchRecursionRecordsResponseBodyRecordsRecord &&) = default ;
    SearchRecursionRecordsResponseBodyRecordsRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchRecursionRecordsResponseBodyRecordsRecord() = default ;
    SearchRecursionRecordsResponseBodyRecordsRecord& operator=(const SearchRecursionRecordsResponseBodyRecordsRecord &) = default ;
    SearchRecursionRecordsResponseBodyRecordsRecord& operator=(SearchRecursionRecordsResponseBodyRecordsRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->createTimestamp_ != nullptr && this->creator_ != nullptr && this->creatorSubType_ != nullptr && this->creatorType_ != nullptr && this->enableStatus_ != nullptr
        && this->priority_ != nullptr && this->recordId_ != nullptr && this->remark_ != nullptr && this->requestSource_ != nullptr && this->rr_ != nullptr
        && this->ttl_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr && this->updateTimestamp_ != nullptr && this->value_ != nullptr
        && this->weight_ != nullptr && this->zoneId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline int64_t creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, 0L) };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setCreator(int64_t creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // creatorSubType Field Functions 
    bool hasCreatorSubType() const { return this->creatorSubType_ != nullptr;};
    void deleteCreatorSubType() { this->creatorSubType_ = nullptr;};
    inline string creatorSubType() const { DARABONBA_PTR_GET_DEFAULT(creatorSubType_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setCreatorSubType(string creatorSubType) { DARABONBA_PTR_SET_VALUE(creatorSubType_, creatorSubType) };


    // creatorType Field Functions 
    bool hasCreatorType() const { return this->creatorType_ != nullptr;};
    void deleteCreatorType() { this->creatorType_ = nullptr;};
    inline string creatorType() const { DARABONBA_PTR_GET_DEFAULT(creatorType_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setCreatorType(string creatorType) { DARABONBA_PTR_SET_VALUE(creatorType_, creatorType) };


    // enableStatus Field Functions 
    bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
    void deleteEnableStatus() { this->enableStatus_ = nullptr;};
    inline string enableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setEnableStatus(string enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // recordId Field Functions 
    bool hasRecordId() const { return this->recordId_ != nullptr;};
    void deleteRecordId() { this->recordId_ = nullptr;};
    inline string recordId() const { DARABONBA_PTR_GET_DEFAULT(recordId_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setRecordId(string recordId) { DARABONBA_PTR_SET_VALUE(recordId_, recordId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // requestSource Field Functions 
    bool hasRequestSource() const { return this->requestSource_ != nullptr;};
    void deleteRequestSource() { this->requestSource_ = nullptr;};
    inline string requestSource() const { DARABONBA_PTR_GET_DEFAULT(requestSource_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setRequestSource(string requestSource) { DARABONBA_PTR_SET_VALUE(requestSource_, requestSource) };


    // rr Field Functions 
    bool hasRr() const { return this->rr_ != nullptr;};
    void deleteRr() { this->rr_ = nullptr;};
    inline string rr() const { DARABONBA_PTR_GET_DEFAULT(rr_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setRr(string rr) { DARABONBA_PTR_SET_VALUE(rr_, rr) };


    // ttl Field Functions 
    bool hasTtl() const { return this->ttl_ != nullptr;};
    void deleteTtl() { this->ttl_ = nullptr;};
    inline int32_t ttl() const { DARABONBA_PTR_GET_DEFAULT(ttl_, 0) };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setTtl(int32_t ttl) { DARABONBA_PTR_SET_VALUE(ttl_, ttl) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline SearchRecursionRecordsResponseBodyRecordsRecord& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<int64_t> creator_ = nullptr;
    std::shared_ptr<string> creatorSubType_ = nullptr;
    std::shared_ptr<string> creatorType_ = nullptr;
    std::shared_ptr<string> enableStatus_ = nullptr;
    std::shared_ptr<int32_t> priority_ = nullptr;
    // record ID
    std::shared_ptr<string> recordId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
    std::shared_ptr<string> requestSource_ = nullptr;
    std::shared_ptr<string> rr_ = nullptr;
    std::shared_ptr<int32_t> ttl_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
    std::shared_ptr<string> weight_ = nullptr;
    // zone ID
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
