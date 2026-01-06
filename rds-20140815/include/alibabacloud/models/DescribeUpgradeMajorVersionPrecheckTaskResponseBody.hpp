// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONPRECHECKTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUPGRADEMAJORVERSIONPRECHECKTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeUpgradeMajorVersionPrecheckTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUpgradeMajorVersionPrecheckTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalRecordCount, totalRecordCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUpgradeMajorVersionPrecheckTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageRecordCount, pageRecordCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalRecordCount, totalRecordCount_);
    };
    DescribeUpgradeMajorVersionPrecheckTaskResponseBody() = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBody(const DescribeUpgradeMajorVersionPrecheckTaskResponseBody &) = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBody(DescribeUpgradeMajorVersionPrecheckTaskResponseBody &&) = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUpgradeMajorVersionPrecheckTaskResponseBody() = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBody& operator=(const DescribeUpgradeMajorVersionPrecheckTaskResponseBody &) = default ;
    DescribeUpgradeMajorVersionPrecheckTaskResponseBody& operator=(DescribeUpgradeMajorVersionPrecheckTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_TO_JSON(RecommendDiskSize, recommendDiskSize_);
        DARABONBA_PTR_TO_JSON(RecommendLeastMemSize, recommendLeastMemSize_);
        DARABONBA_PTR_TO_JSON(RecommendMemSize, recommendMemSize_);
        DARABONBA_PTR_TO_JSON(Result, result_);
        DARABONBA_PTR_TO_JSON(SourceMajorVersion, sourceMajorVersion_);
        DARABONBA_PTR_TO_JSON(TargetMajorVersion, targetMajorVersion_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(UpgradeMode, upgradeMode_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckTime, checkTime_);
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(EffectiveTime, effectiveTime_);
        DARABONBA_PTR_FROM_JSON(RecommendDiskSize, recommendDiskSize_);
        DARABONBA_PTR_FROM_JSON(RecommendLeastMemSize, recommendLeastMemSize_);
        DARABONBA_PTR_FROM_JSON(RecommendMemSize, recommendMemSize_);
        DARABONBA_PTR_FROM_JSON(Result, result_);
        DARABONBA_PTR_FROM_JSON(SourceMajorVersion, sourceMajorVersion_);
        DARABONBA_PTR_FROM_JSON(TargetMajorVersion, targetMajorVersion_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(UpgradeMode, upgradeMode_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->checkTime_ == nullptr
        && this->detail_ == nullptr && this->effectiveTime_ == nullptr && this->recommendDiskSize_ == nullptr && this->recommendLeastMemSize_ == nullptr && this->recommendMemSize_ == nullptr
        && this->result_ == nullptr && this->sourceMajorVersion_ == nullptr && this->targetMajorVersion_ == nullptr && this->taskId_ == nullptr && this->upgradeMode_ == nullptr; };
      // checkTime Field Functions 
      bool hasCheckTime() const { return this->checkTime_ != nullptr;};
      void deleteCheckTime() { this->checkTime_ = nullptr;};
      inline string getCheckTime() const { DARABONBA_PTR_GET_DEFAULT(checkTime_, "") };
      inline Items& setCheckTime(string checkTime) { DARABONBA_PTR_SET_VALUE(checkTime_, checkTime) };


      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline string getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
      inline Items& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


      // effectiveTime Field Functions 
      bool hasEffectiveTime() const { return this->effectiveTime_ != nullptr;};
      void deleteEffectiveTime() { this->effectiveTime_ = nullptr;};
      inline string getEffectiveTime() const { DARABONBA_PTR_GET_DEFAULT(effectiveTime_, "") };
      inline Items& setEffectiveTime(string effectiveTime) { DARABONBA_PTR_SET_VALUE(effectiveTime_, effectiveTime) };


      // recommendDiskSize Field Functions 
      bool hasRecommendDiskSize() const { return this->recommendDiskSize_ != nullptr;};
      void deleteRecommendDiskSize() { this->recommendDiskSize_ = nullptr;};
      inline int32_t getRecommendDiskSize() const { DARABONBA_PTR_GET_DEFAULT(recommendDiskSize_, 0) };
      inline Items& setRecommendDiskSize(int32_t recommendDiskSize) { DARABONBA_PTR_SET_VALUE(recommendDiskSize_, recommendDiskSize) };


      // recommendLeastMemSize Field Functions 
      bool hasRecommendLeastMemSize() const { return this->recommendLeastMemSize_ != nullptr;};
      void deleteRecommendLeastMemSize() { this->recommendLeastMemSize_ = nullptr;};
      inline int32_t getRecommendLeastMemSize() const { DARABONBA_PTR_GET_DEFAULT(recommendLeastMemSize_, 0) };
      inline Items& setRecommendLeastMemSize(int32_t recommendLeastMemSize) { DARABONBA_PTR_SET_VALUE(recommendLeastMemSize_, recommendLeastMemSize) };


      // recommendMemSize Field Functions 
      bool hasRecommendMemSize() const { return this->recommendMemSize_ != nullptr;};
      void deleteRecommendMemSize() { this->recommendMemSize_ = nullptr;};
      inline int32_t getRecommendMemSize() const { DARABONBA_PTR_GET_DEFAULT(recommendMemSize_, 0) };
      inline Items& setRecommendMemSize(int32_t recommendMemSize) { DARABONBA_PTR_SET_VALUE(recommendMemSize_, recommendMemSize) };


      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
      inline Items& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


      // sourceMajorVersion Field Functions 
      bool hasSourceMajorVersion() const { return this->sourceMajorVersion_ != nullptr;};
      void deleteSourceMajorVersion() { this->sourceMajorVersion_ = nullptr;};
      inline string getSourceMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(sourceMajorVersion_, "") };
      inline Items& setSourceMajorVersion(string sourceMajorVersion) { DARABONBA_PTR_SET_VALUE(sourceMajorVersion_, sourceMajorVersion) };


      // targetMajorVersion Field Functions 
      bool hasTargetMajorVersion() const { return this->targetMajorVersion_ != nullptr;};
      void deleteTargetMajorVersion() { this->targetMajorVersion_ = nullptr;};
      inline string getTargetMajorVersion() const { DARABONBA_PTR_GET_DEFAULT(targetMajorVersion_, "") };
      inline Items& setTargetMajorVersion(string targetMajorVersion) { DARABONBA_PTR_SET_VALUE(targetMajorVersion_, targetMajorVersion) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline int32_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0) };
      inline Items& setTaskId(int32_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // upgradeMode Field Functions 
      bool hasUpgradeMode() const { return this->upgradeMode_ != nullptr;};
      void deleteUpgradeMode() { this->upgradeMode_ = nullptr;};
      inline string getUpgradeMode() const { DARABONBA_PTR_GET_DEFAULT(upgradeMode_, "") };
      inline Items& setUpgradeMode(string upgradeMode) { DARABONBA_PTR_SET_VALUE(upgradeMode_, upgradeMode) };


    protected:
      // The time at which the upgrade check was performed.
      // 
      // The value of this parameter is a timestamp that follows the UNIX time format. Unit: milliseconds.
      shared_ptr<string> checkTime_ {};
      // The content of the upgrade check report.
      shared_ptr<string> detail_ {};
      // The expiration time of the upgrade check report.
      // 
      // The value of this parameter is a timestamp that follows the UNIX time format. Unit: milliseconds.
      shared_ptr<string> effectiveTime_ {};
      // The minimum recommended disk capacity during the upgrade. Unit: GB.
      // 
      // >  This parameter is returned only for RDS for PostgreSQL instances.
      shared_ptr<int32_t> recommendDiskSize_ {};
      // The minimum recommended memory size during the upgrade. Unit: GB.
      // 
      // >  This parameter is returned only for RDS for PostgreSQL instances.
      shared_ptr<int32_t> recommendLeastMemSize_ {};
      // The recommended memory size during the upgrade. Unit: GB.
      // 
      // If the memory size of an RDS instance is greater than or equal to the recommended memory size, the RDS instance is immediately upgraded to reduce the read-only time of the instance.
      // 
      // >  This parameter is returned only for RDS for PostgreSQL instances.
      shared_ptr<int32_t> recommendMemSize_ {};
      // The result of the upgrade check.
      // 
      // Valid values:
      // 
      // *   Success
      // *   Fail
      // 
      // >  If the check result is **Fail**, you must check the value of the **Detail** parameter to obtain the information about the errors that occurred, resolve the errors, and then try again. For more information about how to resolve common errors, see [Introduction to the check report for a major engine version upgrade to an ApsaraDB RDS for PostgreSQL instance](https://help.aliyun.com/document_detail/218391.html).
      shared_ptr<string> result_ {};
      // The original major engine version of the instance.
      shared_ptr<string> sourceMajorVersion_ {};
      // The new major engine version of the instance.
      shared_ptr<string> targetMajorVersion_ {};
      // The ID of the upgrade check task.
      shared_ptr<int32_t> taskId_ {};
      shared_ptr<string> upgradeMode_ {};
    };

    virtual bool empty() const override { return this->items_ == nullptr
        && this->pageNumber_ == nullptr && this->pageRecordCount_ == nullptr && this->requestId_ == nullptr && this->totalRecordCount_ == nullptr; };
    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<DescribeUpgradeMajorVersionPrecheckTaskResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<DescribeUpgradeMajorVersionPrecheckTaskResponseBody::Items>) };
    inline vector<DescribeUpgradeMajorVersionPrecheckTaskResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<DescribeUpgradeMajorVersionPrecheckTaskResponseBody::Items>) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBody& setItems(const vector<DescribeUpgradeMajorVersionPrecheckTaskResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBody& setItems(vector<DescribeUpgradeMajorVersionPrecheckTaskResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageRecordCount Field Functions 
    bool hasPageRecordCount() const { return this->pageRecordCount_ != nullptr;};
    void deletePageRecordCount() { this->pageRecordCount_ = nullptr;};
    inline int32_t getPageRecordCount() const { DARABONBA_PTR_GET_DEFAULT(pageRecordCount_, 0) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBody& setPageRecordCount(int32_t pageRecordCount) { DARABONBA_PTR_SET_VALUE(pageRecordCount_, pageRecordCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalRecordCount Field Functions 
    bool hasTotalRecordCount() const { return this->totalRecordCount_ != nullptr;};
    void deleteTotalRecordCount() { this->totalRecordCount_ = nullptr;};
    inline int32_t getTotalRecordCount() const { DARABONBA_PTR_GET_DEFAULT(totalRecordCount_, 0) };
    inline DescribeUpgradeMajorVersionPrecheckTaskResponseBody& setTotalRecordCount(int32_t totalRecordCount) { DARABONBA_PTR_SET_VALUE(totalRecordCount_, totalRecordCount) };


  protected:
    // The information about the upgrade check reports.
    shared_ptr<vector<DescribeUpgradeMajorVersionPrecheckTaskResponseBody::Items>> items_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageRecordCount_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries in the upgrade check report.
    shared_ptr<int32_t> totalRecordCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
