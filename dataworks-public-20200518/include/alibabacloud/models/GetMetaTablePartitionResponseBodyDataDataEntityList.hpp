// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONRESPONSEBODYDATADATAENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETATABLEPARTITIONRESPONSEBODYDATADATAENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaTablePartitionResponseBodyDataDataEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaTablePartitionResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSize, dataSize_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(PartitionGuid, partitionGuid_);
      DARABONBA_PTR_TO_JSON(PartitionLocation, partitionLocation_);
      DARABONBA_PTR_TO_JSON(PartitionName, partitionName_);
      DARABONBA_PTR_TO_JSON(PartitionPath, partitionPath_);
      DARABONBA_PTR_TO_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_TO_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaTablePartitionResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSize, dataSize_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(PartitionGuid, partitionGuid_);
      DARABONBA_PTR_FROM_JSON(PartitionLocation, partitionLocation_);
      DARABONBA_PTR_FROM_JSON(PartitionName, partitionName_);
      DARABONBA_PTR_FROM_JSON(PartitionPath, partitionPath_);
      DARABONBA_PTR_FROM_JSON(PartitionType, partitionType_);
      DARABONBA_PTR_FROM_JSON(RecordCount, recordCount_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
    };
    GetMetaTablePartitionResponseBodyDataDataEntityList() = default ;
    GetMetaTablePartitionResponseBodyDataDataEntityList(const GetMetaTablePartitionResponseBodyDataDataEntityList &) = default ;
    GetMetaTablePartitionResponseBodyDataDataEntityList(GetMetaTablePartitionResponseBodyDataDataEntityList &&) = default ;
    GetMetaTablePartitionResponseBodyDataDataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaTablePartitionResponseBodyDataDataEntityList() = default ;
    GetMetaTablePartitionResponseBodyDataDataEntityList& operator=(const GetMetaTablePartitionResponseBodyDataDataEntityList &) = default ;
    GetMetaTablePartitionResponseBodyDataDataEntityList& operator=(GetMetaTablePartitionResponseBodyDataDataEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comment_ != nullptr
        && this->createTime_ != nullptr && this->dataSize_ != nullptr && this->modifiedTime_ != nullptr && this->partitionGuid_ != nullptr && this->partitionLocation_ != nullptr
        && this->partitionName_ != nullptr && this->partitionPath_ != nullptr && this->partitionType_ != nullptr && this->recordCount_ != nullptr && this->tableGuid_ != nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSize Field Functions 
    bool hasDataSize() const { return this->dataSize_ != nullptr;};
    void deleteDataSize() { this->dataSize_ = nullptr;};
    inline int64_t dataSize() const { DARABONBA_PTR_GET_DEFAULT(dataSize_, 0L) };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setDataSize(int64_t dataSize) { DARABONBA_PTR_SET_VALUE(dataSize_, dataSize) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // partitionGuid Field Functions 
    bool hasPartitionGuid() const { return this->partitionGuid_ != nullptr;};
    void deletePartitionGuid() { this->partitionGuid_ = nullptr;};
    inline string partitionGuid() const { DARABONBA_PTR_GET_DEFAULT(partitionGuid_, "") };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setPartitionGuid(string partitionGuid) { DARABONBA_PTR_SET_VALUE(partitionGuid_, partitionGuid) };


    // partitionLocation Field Functions 
    bool hasPartitionLocation() const { return this->partitionLocation_ != nullptr;};
    void deletePartitionLocation() { this->partitionLocation_ = nullptr;};
    inline string partitionLocation() const { DARABONBA_PTR_GET_DEFAULT(partitionLocation_, "") };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setPartitionLocation(string partitionLocation) { DARABONBA_PTR_SET_VALUE(partitionLocation_, partitionLocation) };


    // partitionName Field Functions 
    bool hasPartitionName() const { return this->partitionName_ != nullptr;};
    void deletePartitionName() { this->partitionName_ = nullptr;};
    inline string partitionName() const { DARABONBA_PTR_GET_DEFAULT(partitionName_, "") };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setPartitionName(string partitionName) { DARABONBA_PTR_SET_VALUE(partitionName_, partitionName) };


    // partitionPath Field Functions 
    bool hasPartitionPath() const { return this->partitionPath_ != nullptr;};
    void deletePartitionPath() { this->partitionPath_ = nullptr;};
    inline string partitionPath() const { DARABONBA_PTR_GET_DEFAULT(partitionPath_, "") };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setPartitionPath(string partitionPath) { DARABONBA_PTR_SET_VALUE(partitionPath_, partitionPath) };


    // partitionType Field Functions 
    bool hasPartitionType() const { return this->partitionType_ != nullptr;};
    void deletePartitionType() { this->partitionType_ = nullptr;};
    inline string partitionType() const { DARABONBA_PTR_GET_DEFAULT(partitionType_, "") };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setPartitionType(string partitionType) { DARABONBA_PTR_SET_VALUE(partitionType_, partitionType) };


    // recordCount Field Functions 
    bool hasRecordCount() const { return this->recordCount_ != nullptr;};
    void deleteRecordCount() { this->recordCount_ = nullptr;};
    inline int64_t recordCount() const { DARABONBA_PTR_GET_DEFAULT(recordCount_, 0L) };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setRecordCount(int64_t recordCount) { DARABONBA_PTR_SET_VALUE(recordCount_, recordCount) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string tableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline GetMetaTablePartitionResponseBodyDataDataEntityList& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


  protected:
    // The comment.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the partition was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The size of the partition. Unit: bytes.
    std::shared_ptr<int64_t> dataSize_ = nullptr;
    // The time when the partition was modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The GUID of the partition.
    std::shared_ptr<string> partitionGuid_ = nullptr;
    // The location of the Hive partition.
    std::shared_ptr<string> partitionLocation_ = nullptr;
    // The name of the partition.
    std::shared_ptr<string> partitionName_ = nullptr;
    // The path of the partition.
    std::shared_ptr<string> partitionPath_ = nullptr;
    // The type of the partition.
    std::shared_ptr<string> partitionType_ = nullptr;
    // The number of entries in the partition.
    std::shared_ptr<int64_t> recordCount_ = nullptr;
    // The unique identifier of the metatable.
    std::shared_ptr<string> tableGuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
