// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODYSEGMENTSTATUSINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEDIAGNOSISSUMMARYRESPONSEBODYSEGMENTSTATUSINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ExceptionNodeNum, exceptionNodeNum_);
      DARABONBA_PTR_TO_JSON(NormalNodeNum, normalNodeNum_);
      DARABONBA_PTR_TO_JSON(NotPreferredNodeNum, notPreferredNodeNum_);
      DARABONBA_PTR_TO_JSON(NotSyncingNodeNum, notSyncingNodeNum_);
      DARABONBA_PTR_TO_JSON(PreferredNodeNum, preferredNodeNum_);
      DARABONBA_PTR_TO_JSON(SyncedNodeNum, syncedNodeNum_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ExceptionNodeNum, exceptionNodeNum_);
      DARABONBA_PTR_FROM_JSON(NormalNodeNum, normalNodeNum_);
      DARABONBA_PTR_FROM_JSON(NotPreferredNodeNum, notPreferredNodeNum_);
      DARABONBA_PTR_FROM_JSON(NotSyncingNodeNum, notSyncingNodeNum_);
      DARABONBA_PTR_FROM_JSON(PreferredNodeNum, preferredNodeNum_);
      DARABONBA_PTR_FROM_JSON(SyncedNodeNum, syncedNodeNum_);
    };
    DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo(const DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo(DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo &&) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo() = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& operator=(const DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo &) = default ;
    DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& operator=(DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->exceptionNodeNum_ == nullptr
        && return this->normalNodeNum_ == nullptr && return this->notPreferredNodeNum_ == nullptr && return this->notSyncingNodeNum_ == nullptr && return this->preferredNodeNum_ == nullptr && return this->syncedNodeNum_ == nullptr; };
    // exceptionNodeNum Field Functions 
    bool hasExceptionNodeNum() const { return this->exceptionNodeNum_ != nullptr;};
    void deleteExceptionNodeNum() { this->exceptionNodeNum_ = nullptr;};
    inline int32_t exceptionNodeNum() const { DARABONBA_PTR_GET_DEFAULT(exceptionNodeNum_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& setExceptionNodeNum(int32_t exceptionNodeNum) { DARABONBA_PTR_SET_VALUE(exceptionNodeNum_, exceptionNodeNum) };


    // normalNodeNum Field Functions 
    bool hasNormalNodeNum() const { return this->normalNodeNum_ != nullptr;};
    void deleteNormalNodeNum() { this->normalNodeNum_ = nullptr;};
    inline int32_t normalNodeNum() const { DARABONBA_PTR_GET_DEFAULT(normalNodeNum_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& setNormalNodeNum(int32_t normalNodeNum) { DARABONBA_PTR_SET_VALUE(normalNodeNum_, normalNodeNum) };


    // notPreferredNodeNum Field Functions 
    bool hasNotPreferredNodeNum() const { return this->notPreferredNodeNum_ != nullptr;};
    void deleteNotPreferredNodeNum() { this->notPreferredNodeNum_ = nullptr;};
    inline int32_t notPreferredNodeNum() const { DARABONBA_PTR_GET_DEFAULT(notPreferredNodeNum_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& setNotPreferredNodeNum(int32_t notPreferredNodeNum) { DARABONBA_PTR_SET_VALUE(notPreferredNodeNum_, notPreferredNodeNum) };


    // notSyncingNodeNum Field Functions 
    bool hasNotSyncingNodeNum() const { return this->notSyncingNodeNum_ != nullptr;};
    void deleteNotSyncingNodeNum() { this->notSyncingNodeNum_ = nullptr;};
    inline int32_t notSyncingNodeNum() const { DARABONBA_PTR_GET_DEFAULT(notSyncingNodeNum_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& setNotSyncingNodeNum(int32_t notSyncingNodeNum) { DARABONBA_PTR_SET_VALUE(notSyncingNodeNum_, notSyncingNodeNum) };


    // preferredNodeNum Field Functions 
    bool hasPreferredNodeNum() const { return this->preferredNodeNum_ != nullptr;};
    void deletePreferredNodeNum() { this->preferredNodeNum_ = nullptr;};
    inline int32_t preferredNodeNum() const { DARABONBA_PTR_GET_DEFAULT(preferredNodeNum_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& setPreferredNodeNum(int32_t preferredNodeNum) { DARABONBA_PTR_SET_VALUE(preferredNodeNum_, preferredNodeNum) };


    // syncedNodeNum Field Functions 
    bool hasSyncedNodeNum() const { return this->syncedNodeNum_ != nullptr;};
    void deleteSyncedNodeNum() { this->syncedNodeNum_ = nullptr;};
    inline int32_t syncedNodeNum() const { DARABONBA_PTR_GET_DEFAULT(syncedNodeNum_, 0) };
    inline DescribeDBInstanceDiagnosisSummaryResponseBodySegmentStatusInfo& setSyncedNodeNum(int32_t syncedNodeNum) { DARABONBA_PTR_SET_VALUE(syncedNodeNum_, syncedNodeNum) };


  protected:
    // The number of abnormal nodes.
    std::shared_ptr<int32_t> exceptionNodeNum_ = nullptr;
    // The number of normal nodes.
    std::shared_ptr<int32_t> normalNodeNum_ = nullptr;
    // The number of nodes whose roles are reversed.
    std::shared_ptr<int32_t> notPreferredNodeNum_ = nullptr;
    // The number of unsynchronized nodes.
    std::shared_ptr<int32_t> notSyncingNodeNum_ = nullptr;
    // The number of nodes whose roles are normal.
    std::shared_ptr<int32_t> preferredNodeNum_ = nullptr;
    // The number of synchronized nodes.
    std::shared_ptr<int32_t> syncedNodeNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
