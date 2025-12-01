// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODYITEMSDBSRECOVERRANGE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESTORERANGEINFORESPONSEBODYITEMSDBSRECOVERRANGE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
      DARABONBA_PTR_TO_JSON(EndTimestampForRestore, endTimestampForRestore_);
      DARABONBA_PTR_TO_JSON(FullBackupList, fullBackupList_);
      DARABONBA_PTR_TO_JSON(RangeType, rangeType_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_TO_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimestampForRestore, beginTimestampForRestore_);
      DARABONBA_PTR_FROM_JSON(EndTimestampForRestore, endTimestampForRestore_);
      DARABONBA_PTR_FROM_JSON(FullBackupList, fullBackupList_);
      DARABONBA_PTR_FROM_JSON(RangeType, rangeType_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceID, sourceEndpointInstanceID_);
      DARABONBA_PTR_FROM_JSON(SourceEndpointInstanceType, sourceEndpointInstanceType_);
    };
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange() = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange(const DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange &) = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange(DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange &&) = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange() = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& operator=(const DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange &) = default ;
    DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& operator=(DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTimestampForRestore_ == nullptr
        && return this->endTimestampForRestore_ == nullptr && return this->fullBackupList_ == nullptr && return this->rangeType_ == nullptr && return this->sourceEndpointInstanceID_ == nullptr && return this->sourceEndpointInstanceType_ == nullptr; };
    // beginTimestampForRestore Field Functions 
    bool hasBeginTimestampForRestore() const { return this->beginTimestampForRestore_ != nullptr;};
    void deleteBeginTimestampForRestore() { this->beginTimestampForRestore_ = nullptr;};
    inline int64_t beginTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(beginTimestampForRestore_, 0L) };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& setBeginTimestampForRestore(int64_t beginTimestampForRestore) { DARABONBA_PTR_SET_VALUE(beginTimestampForRestore_, beginTimestampForRestore) };


    // endTimestampForRestore Field Functions 
    bool hasEndTimestampForRestore() const { return this->endTimestampForRestore_ != nullptr;};
    void deleteEndTimestampForRestore() { this->endTimestampForRestore_ = nullptr;};
    inline int64_t endTimestampForRestore() const { DARABONBA_PTR_GET_DEFAULT(endTimestampForRestore_, 0L) };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& setEndTimestampForRestore(int64_t endTimestampForRestore) { DARABONBA_PTR_SET_VALUE(endTimestampForRestore_, endTimestampForRestore) };


    // fullBackupList Field Functions 
    bool hasFullBackupList() const { return this->fullBackupList_ != nullptr;};
    void deleteFullBackupList() { this->fullBackupList_ = nullptr;};
    inline const Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList & fullBackupList() const { DARABONBA_PTR_GET_CONST(fullBackupList_, Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList) };
    inline Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList fullBackupList() { DARABONBA_PTR_GET(fullBackupList_, Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList) };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& setFullBackupList(const Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList & fullBackupList) { DARABONBA_PTR_SET_VALUE(fullBackupList_, fullBackupList) };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& setFullBackupList(Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList && fullBackupList) { DARABONBA_PTR_SET_RVALUE(fullBackupList_, fullBackupList) };


    // rangeType Field Functions 
    bool hasRangeType() const { return this->rangeType_ != nullptr;};
    void deleteRangeType() { this->rangeType_ = nullptr;};
    inline string rangeType() const { DARABONBA_PTR_GET_DEFAULT(rangeType_, "") };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& setRangeType(string rangeType) { DARABONBA_PTR_SET_VALUE(rangeType_, rangeType) };


    // sourceEndpointInstanceID Field Functions 
    bool hasSourceEndpointInstanceID() const { return this->sourceEndpointInstanceID_ != nullptr;};
    void deleteSourceEndpointInstanceID() { this->sourceEndpointInstanceID_ = nullptr;};
    inline string sourceEndpointInstanceID() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceID_, "") };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& setSourceEndpointInstanceID(string sourceEndpointInstanceID) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceID_, sourceEndpointInstanceID) };


    // sourceEndpointInstanceType Field Functions 
    bool hasSourceEndpointInstanceType() const { return this->sourceEndpointInstanceType_ != nullptr;};
    void deleteSourceEndpointInstanceType() { this->sourceEndpointInstanceType_ = nullptr;};
    inline string sourceEndpointInstanceType() const { DARABONBA_PTR_GET_DEFAULT(sourceEndpointInstanceType_, "") };
    inline DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRange& setSourceEndpointInstanceType(string sourceEndpointInstanceType) { DARABONBA_PTR_SET_VALUE(sourceEndpointInstanceType_, sourceEndpointInstanceType) };


  protected:
    // The beginning of the time range to which you can restore data.
    std::shared_ptr<int64_t> beginTimestampForRestore_ = nullptr;
    // The end of the time range to which you can restore data.
    std::shared_ptr<int64_t> endTimestampForRestore_ = nullptr;
    // If the value of the RangeType parameter is point, this parameter is returned. The value of this parameter describes information about all backup points in the time range.
    std::shared_ptr<Models::DescribeRestoreRangeInfoResponseBodyItemsDBSRecoverRangeFullBackupList> fullBackupList_ = nullptr;
    // The type of the time range to which you can restore data.
    // 
    // *   **point**: The time range contains discrete points in time at which full backups were performed.
    // *   **range**: The time range is a period of time for which continuous backup is performed. You can specify a random point in time in the time range to restore data.
    std::shared_ptr<string> rangeType_ = nullptr;
    // The ID of the database instance.
    std::shared_ptr<string> sourceEndpointInstanceID_ = nullptr;
    // The location of the database.
    std::shared_ptr<string> sourceEndpointInstanceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
