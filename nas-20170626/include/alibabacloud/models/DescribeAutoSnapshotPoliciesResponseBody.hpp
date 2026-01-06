// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOSNAPSHOTPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeAutoSnapshotPoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoSnapshotPoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoSnapshotPoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicies, autoSnapshotPolicies_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeAutoSnapshotPoliciesResponseBody() = default ;
    DescribeAutoSnapshotPoliciesResponseBody(const DescribeAutoSnapshotPoliciesResponseBody &) = default ;
    DescribeAutoSnapshotPoliciesResponseBody(DescribeAutoSnapshotPoliciesResponseBody &&) = default ;
    DescribeAutoSnapshotPoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoSnapshotPoliciesResponseBody() = default ;
    DescribeAutoSnapshotPoliciesResponseBody& operator=(const DescribeAutoSnapshotPoliciesResponseBody &) = default ;
    DescribeAutoSnapshotPoliciesResponseBody& operator=(DescribeAutoSnapshotPoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AutoSnapshotPolicies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AutoSnapshotPolicies& obj) { 
        DARABONBA_PTR_TO_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
      };
      friend void from_json(const Darabonba::Json& j, AutoSnapshotPolicies& obj) { 
        DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicy, autoSnapshotPolicy_);
      };
      AutoSnapshotPolicies() = default ;
      AutoSnapshotPolicies(const AutoSnapshotPolicies &) = default ;
      AutoSnapshotPolicies(AutoSnapshotPolicies &&) = default ;
      AutoSnapshotPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AutoSnapshotPolicies() = default ;
      AutoSnapshotPolicies& operator=(const AutoSnapshotPolicies &) = default ;
      AutoSnapshotPolicies& operator=(AutoSnapshotPolicies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AutoSnapshotPolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AutoSnapshotPolicy& obj) { 
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_TO_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FileSystemNums, fileSystemNums_);
          DARABONBA_PTR_TO_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RepeatWeekdays, repeatWeekdays_);
          DARABONBA_PTR_TO_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TimePoints, timePoints_);
        };
        friend void from_json(const Darabonba::Json& j, AutoSnapshotPolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyId, autoSnapshotPolicyId_);
          DARABONBA_PTR_FROM_JSON(AutoSnapshotPolicyName, autoSnapshotPolicyName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FileSystemNums, fileSystemNums_);
          DARABONBA_PTR_FROM_JSON(FileSystemType, fileSystemType_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RepeatWeekdays, repeatWeekdays_);
          DARABONBA_PTR_FROM_JSON(RetentionDays, retentionDays_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TimePoints, timePoints_);
        };
        AutoSnapshotPolicy() = default ;
        AutoSnapshotPolicy(const AutoSnapshotPolicy &) = default ;
        AutoSnapshotPolicy(AutoSnapshotPolicy &&) = default ;
        AutoSnapshotPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AutoSnapshotPolicy() = default ;
        AutoSnapshotPolicy& operator=(const AutoSnapshotPolicy &) = default ;
        AutoSnapshotPolicy& operator=(AutoSnapshotPolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->autoSnapshotPolicyId_ == nullptr
        && this->autoSnapshotPolicyName_ == nullptr && this->createTime_ == nullptr && this->fileSystemNums_ == nullptr && this->fileSystemType_ == nullptr && this->regionId_ == nullptr
        && this->repeatWeekdays_ == nullptr && this->retentionDays_ == nullptr && this->status_ == nullptr && this->timePoints_ == nullptr; };
        // autoSnapshotPolicyId Field Functions 
        bool hasAutoSnapshotPolicyId() const { return this->autoSnapshotPolicyId_ != nullptr;};
        void deleteAutoSnapshotPolicyId() { this->autoSnapshotPolicyId_ = nullptr;};
        inline string getAutoSnapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyId_, "") };
        inline AutoSnapshotPolicy& setAutoSnapshotPolicyId(string autoSnapshotPolicyId) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyId_, autoSnapshotPolicyId) };


        // autoSnapshotPolicyName Field Functions 
        bool hasAutoSnapshotPolicyName() const { return this->autoSnapshotPolicyName_ != nullptr;};
        void deleteAutoSnapshotPolicyName() { this->autoSnapshotPolicyName_ = nullptr;};
        inline string getAutoSnapshotPolicyName() const { DARABONBA_PTR_GET_DEFAULT(autoSnapshotPolicyName_, "") };
        inline AutoSnapshotPolicy& setAutoSnapshotPolicyName(string autoSnapshotPolicyName) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicyName_, autoSnapshotPolicyName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline AutoSnapshotPolicy& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // fileSystemNums Field Functions 
        bool hasFileSystemNums() const { return this->fileSystemNums_ != nullptr;};
        void deleteFileSystemNums() { this->fileSystemNums_ = nullptr;};
        inline int32_t getFileSystemNums() const { DARABONBA_PTR_GET_DEFAULT(fileSystemNums_, 0) };
        inline AutoSnapshotPolicy& setFileSystemNums(int32_t fileSystemNums) { DARABONBA_PTR_SET_VALUE(fileSystemNums_, fileSystemNums) };


        // fileSystemType Field Functions 
        bool hasFileSystemType() const { return this->fileSystemType_ != nullptr;};
        void deleteFileSystemType() { this->fileSystemType_ = nullptr;};
        inline string getFileSystemType() const { DARABONBA_PTR_GET_DEFAULT(fileSystemType_, "") };
        inline AutoSnapshotPolicy& setFileSystemType(string fileSystemType) { DARABONBA_PTR_SET_VALUE(fileSystemType_, fileSystemType) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AutoSnapshotPolicy& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // repeatWeekdays Field Functions 
        bool hasRepeatWeekdays() const { return this->repeatWeekdays_ != nullptr;};
        void deleteRepeatWeekdays() { this->repeatWeekdays_ = nullptr;};
        inline string getRepeatWeekdays() const { DARABONBA_PTR_GET_DEFAULT(repeatWeekdays_, "") };
        inline AutoSnapshotPolicy& setRepeatWeekdays(string repeatWeekdays) { DARABONBA_PTR_SET_VALUE(repeatWeekdays_, repeatWeekdays) };


        // retentionDays Field Functions 
        bool hasRetentionDays() const { return this->retentionDays_ != nullptr;};
        void deleteRetentionDays() { this->retentionDays_ = nullptr;};
        inline int32_t getRetentionDays() const { DARABONBA_PTR_GET_DEFAULT(retentionDays_, 0) };
        inline AutoSnapshotPolicy& setRetentionDays(int32_t retentionDays) { DARABONBA_PTR_SET_VALUE(retentionDays_, retentionDays) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AutoSnapshotPolicy& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // timePoints Field Functions 
        bool hasTimePoints() const { return this->timePoints_ != nullptr;};
        void deleteTimePoints() { this->timePoints_ = nullptr;};
        inline string getTimePoints() const { DARABONBA_PTR_GET_DEFAULT(timePoints_, "") };
        inline AutoSnapshotPolicy& setTimePoints(string timePoints) { DARABONBA_PTR_SET_VALUE(timePoints_, timePoints) };


      protected:
        // The ID of the automatic snapshot policy.
        shared_ptr<string> autoSnapshotPolicyId_ {};
        // The name of the automatic snapshot policy.
        shared_ptr<string> autoSnapshotPolicyName_ {};
        // The time when the automatic snapshot policy was created.
        // 
        // The time follows the [ISO8601](https://www.iso.org/iso-8601-date-and-time-format.html) standard in the `yyyy-MM-ddTHH:mm:ssZ` format. The time is displayed in UTC.
        shared_ptr<string> createTime_ {};
        // The number of file systems to which the automatic snapshot policy applies.
        shared_ptr<int32_t> fileSystemNums_ {};
        // The type of the file system.
        shared_ptr<string> fileSystemType_ {};
        // The region ID of the automatic snapshot policy.
        shared_ptr<string> regionId_ {};
        // The days of a week on which auto snapshots are created.
        // 
        // Auto snapshots are created on a weekly basis.
        // 
        // Valid values: 1 to 7. The values from 1 to 7 indicate 7 days in a week from Monday to Sunday.
        shared_ptr<string> repeatWeekdays_ {};
        // The retention period of auto snapshots.
        // 
        // Unit: days.
        // 
        // Valid values:
        // 
        // *   \\-1: Auto snapshots are permanently retained. After the number of auto snapshots exceeds the upper limit, the earliest auto snapshot is automatically deleted.
        // *   1 to 65536: Auto snapshots are retained for the specified days. After the retention period of auto snapshots expires, the auto snapshots are automatically deleted.
        shared_ptr<int32_t> retentionDays_ {};
        // The status of the automatic snapshot policy.
        // 
        // Valid values:
        // 
        // *   Creating: The automatic snapshot policy is being created.
        // *   Available: The automatic snapshot policy is available.
        shared_ptr<string> status_ {};
        // The points in time at which auto snapshots are created.
        // 
        // Unit: hours.
        // 
        // Valid values: `0 to 23`. The values from 0 to 23 indicate a total of 24 hours from `00:00 to 23:00`. For example, 1 indicates 01:00. A maximum of 24 points in time can be returned. Multiple points in time are separated with commas (,).
        shared_ptr<string> timePoints_ {};
      };

      virtual bool empty() const override { return this->autoSnapshotPolicy_ == nullptr; };
      // autoSnapshotPolicy Field Functions 
      bool hasAutoSnapshotPolicy() const { return this->autoSnapshotPolicy_ != nullptr;};
      void deleteAutoSnapshotPolicy() { this->autoSnapshotPolicy_ = nullptr;};
      inline const vector<AutoSnapshotPolicies::AutoSnapshotPolicy> & getAutoSnapshotPolicy() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicy_, vector<AutoSnapshotPolicies::AutoSnapshotPolicy>) };
      inline vector<AutoSnapshotPolicies::AutoSnapshotPolicy> getAutoSnapshotPolicy() { DARABONBA_PTR_GET(autoSnapshotPolicy_, vector<AutoSnapshotPolicies::AutoSnapshotPolicy>) };
      inline AutoSnapshotPolicies& setAutoSnapshotPolicy(const vector<AutoSnapshotPolicies::AutoSnapshotPolicy> & autoSnapshotPolicy) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };
      inline AutoSnapshotPolicies& setAutoSnapshotPolicy(vector<AutoSnapshotPolicies::AutoSnapshotPolicy> && autoSnapshotPolicy) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicy_, autoSnapshotPolicy) };


    protected:
      shared_ptr<vector<AutoSnapshotPolicies::AutoSnapshotPolicy>> autoSnapshotPolicy_ {};
    };

    virtual bool empty() const override { return this->autoSnapshotPolicies_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // autoSnapshotPolicies Field Functions 
    bool hasAutoSnapshotPolicies() const { return this->autoSnapshotPolicies_ != nullptr;};
    void deleteAutoSnapshotPolicies() { this->autoSnapshotPolicies_ = nullptr;};
    inline const DescribeAutoSnapshotPoliciesResponseBody::AutoSnapshotPolicies & getAutoSnapshotPolicies() const { DARABONBA_PTR_GET_CONST(autoSnapshotPolicies_, DescribeAutoSnapshotPoliciesResponseBody::AutoSnapshotPolicies) };
    inline DescribeAutoSnapshotPoliciesResponseBody::AutoSnapshotPolicies getAutoSnapshotPolicies() { DARABONBA_PTR_GET(autoSnapshotPolicies_, DescribeAutoSnapshotPoliciesResponseBody::AutoSnapshotPolicies) };
    inline DescribeAutoSnapshotPoliciesResponseBody& setAutoSnapshotPolicies(const DescribeAutoSnapshotPoliciesResponseBody::AutoSnapshotPolicies & autoSnapshotPolicies) { DARABONBA_PTR_SET_VALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };
    inline DescribeAutoSnapshotPoliciesResponseBody& setAutoSnapshotPolicies(DescribeAutoSnapshotPoliciesResponseBody::AutoSnapshotPolicies && autoSnapshotPolicies) { DARABONBA_PTR_SET_RVALUE(autoSnapshotPolicies_, autoSnapshotPolicies) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAutoSnapshotPoliciesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAutoSnapshotPoliciesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoSnapshotPoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeAutoSnapshotPoliciesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried automatic snapshot policies.
    shared_ptr<DescribeAutoSnapshotPoliciesResponseBody::AutoSnapshotPolicies> autoSnapshotPolicies_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of automatic snapshot policies.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
