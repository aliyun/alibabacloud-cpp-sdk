// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsMigrationWorkloadsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsMigrationWorkloadsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MigrationWorkloads, migrationWorkloads_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApsMigrationWorkloadsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MigrationWorkloads, migrationWorkloads_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeApsMigrationWorkloadsResponseBody() = default ;
    DescribeApsMigrationWorkloadsResponseBody(const DescribeApsMigrationWorkloadsResponseBody &) = default ;
    DescribeApsMigrationWorkloadsResponseBody(DescribeApsMigrationWorkloadsResponseBody &&) = default ;
    DescribeApsMigrationWorkloadsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsMigrationWorkloadsResponseBody() = default ;
    DescribeApsMigrationWorkloadsResponseBody& operator=(const DescribeApsMigrationWorkloadsResponseBody &) = default ;
    DescribeApsMigrationWorkloadsResponseBody& operator=(DescribeApsMigrationWorkloadsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MigrationWorkloads : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MigrationWorkloads& obj) { 
        DARABONBA_PTR_TO_JSON(AcuCount, acuCount_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(FailedMsg, failedMsg_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(MaxRT, maxRT_);
        DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(OssLocation, ossLocation_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TargetType, targetType_);
        DARABONBA_PTR_TO_JSON(WorkloadSubType, workloadSubType_);
      };
      friend void from_json(const Darabonba::Json& j, MigrationWorkloads& obj) { 
        DARABONBA_PTR_FROM_JSON(AcuCount, acuCount_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(FailedMsg, failedMsg_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(MaxRT, maxRT_);
        DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(OssLocation, ossLocation_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
        DARABONBA_PTR_FROM_JSON(WorkloadSubType, workloadSubType_);
      };
      MigrationWorkloads() = default ;
      MigrationWorkloads(const MigrationWorkloads &) = default ;
      MigrationWorkloads(MigrationWorkloads &&) = default ;
      MigrationWorkloads(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MigrationWorkloads() = default ;
      MigrationWorkloads& operator=(const MigrationWorkloads &) = default ;
      MigrationWorkloads& operator=(MigrationWorkloads &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->acuCount_ == nullptr
        && this->createTime_ == nullptr && this->failedMsg_ == nullptr && this->id_ == nullptr && this->maxRT_ == nullptr && this->modifyTime_ == nullptr
        && this->name_ == nullptr && this->ossLocation_ == nullptr && this->state_ == nullptr && this->targetType_ == nullptr && this->workloadSubType_ == nullptr; };
      // acuCount Field Functions 
      bool hasAcuCount() const { return this->acuCount_ != nullptr;};
      void deleteAcuCount() { this->acuCount_ = nullptr;};
      inline int32_t getAcuCount() const { DARABONBA_PTR_GET_DEFAULT(acuCount_, 0) };
      inline MigrationWorkloads& setAcuCount(int32_t acuCount) { DARABONBA_PTR_SET_VALUE(acuCount_, acuCount) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline MigrationWorkloads& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // failedMsg Field Functions 
      bool hasFailedMsg() const { return this->failedMsg_ != nullptr;};
      void deleteFailedMsg() { this->failedMsg_ = nullptr;};
      inline string getFailedMsg() const { DARABONBA_PTR_GET_DEFAULT(failedMsg_, "") };
      inline MigrationWorkloads& setFailedMsg(string failedMsg) { DARABONBA_PTR_SET_VALUE(failedMsg_, failedMsg) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline MigrationWorkloads& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // maxRT Field Functions 
      bool hasMaxRT() const { return this->maxRT_ != nullptr;};
      void deleteMaxRT() { this->maxRT_ = nullptr;};
      inline string getMaxRT() const { DARABONBA_PTR_GET_DEFAULT(maxRT_, "") };
      inline MigrationWorkloads& setMaxRT(string maxRT) { DARABONBA_PTR_SET_VALUE(maxRT_, maxRT) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline MigrationWorkloads& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline MigrationWorkloads& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // ossLocation Field Functions 
      bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
      void deleteOssLocation() { this->ossLocation_ = nullptr;};
      inline string getOssLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
      inline MigrationWorkloads& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline MigrationWorkloads& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // targetType Field Functions 
      bool hasTargetType() const { return this->targetType_ != nullptr;};
      void deleteTargetType() { this->targetType_ = nullptr;};
      inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
      inline MigrationWorkloads& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


      // workloadSubType Field Functions 
      bool hasWorkloadSubType() const { return this->workloadSubType_ != nullptr;};
      void deleteWorkloadSubType() { this->workloadSubType_ = nullptr;};
      inline string getWorkloadSubType() const { DARABONBA_PTR_GET_DEFAULT(workloadSubType_, "") };
      inline MigrationWorkloads& setWorkloadSubType(string workloadSubType) { DARABONBA_PTR_SET_VALUE(workloadSubType_, workloadSubType) };


    protected:
      // The number of AnalyticDB compute units (ACUs).
      shared_ptr<int32_t> acuCount_ {};
      // The time when the job was created.
      shared_ptr<string> createTime_ {};
      // The error message.
      shared_ptr<string> failedMsg_ {};
      // The job ID.
      shared_ptr<string> id_ {};
      // The maximum response time.
      shared_ptr<string> maxRT_ {};
      // The time when the migration job was modified.
      shared_ptr<string> modifyTime_ {};
      // The name of the workload.
      shared_ptr<string> name_ {};
      // The OSS URL.
      shared_ptr<string> ossLocation_ {};
      // The status.
      shared_ptr<string> state_ {};
      // The destination type.
      shared_ptr<string> targetType_ {};
      // The sub-type of the workload.
      shared_ptr<string> workloadSubType_ {};
    };

    virtual bool empty() const override { return this->migrationWorkloads_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // migrationWorkloads Field Functions 
    bool hasMigrationWorkloads() const { return this->migrationWorkloads_ != nullptr;};
    void deleteMigrationWorkloads() { this->migrationWorkloads_ = nullptr;};
    inline const vector<DescribeApsMigrationWorkloadsResponseBody::MigrationWorkloads> & getMigrationWorkloads() const { DARABONBA_PTR_GET_CONST(migrationWorkloads_, vector<DescribeApsMigrationWorkloadsResponseBody::MigrationWorkloads>) };
    inline vector<DescribeApsMigrationWorkloadsResponseBody::MigrationWorkloads> getMigrationWorkloads() { DARABONBA_PTR_GET(migrationWorkloads_, vector<DescribeApsMigrationWorkloadsResponseBody::MigrationWorkloads>) };
    inline DescribeApsMigrationWorkloadsResponseBody& setMigrationWorkloads(const vector<DescribeApsMigrationWorkloadsResponseBody::MigrationWorkloads> & migrationWorkloads) { DARABONBA_PTR_SET_VALUE(migrationWorkloads_, migrationWorkloads) };
    inline DescribeApsMigrationWorkloadsResponseBody& setMigrationWorkloads(vector<DescribeApsMigrationWorkloadsResponseBody::MigrationWorkloads> && migrationWorkloads) { DARABONBA_PTR_SET_RVALUE(migrationWorkloads_, migrationWorkloads) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeApsMigrationWorkloadsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeApsMigrationWorkloadsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApsMigrationWorkloadsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeApsMigrationWorkloadsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The queried migration workloads.
    shared_ptr<vector<DescribeApsMigrationWorkloadsResponseBody::MigrationWorkloads>> migrationWorkloads_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
