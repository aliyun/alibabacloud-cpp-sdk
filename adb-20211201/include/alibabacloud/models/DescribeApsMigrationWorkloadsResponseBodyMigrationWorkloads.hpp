// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSRESPONSEBODYMIGRATIONWORKLOADS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPSMIGRATIONWORKLOADSRESPONSEBODYMIGRATIONWORKLOADS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& obj) { 
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
    DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads() = default ;
    DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads(const DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads &) = default ;
    DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads(DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads &&) = default ;
    DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads() = default ;
    DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& operator=(const DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads &) = default ;
    DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& operator=(DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acuCount_ == nullptr
        && return this->createTime_ == nullptr && return this->failedMsg_ == nullptr && return this->id_ == nullptr && return this->maxRT_ == nullptr && return this->modifyTime_ == nullptr
        && return this->name_ == nullptr && return this->ossLocation_ == nullptr && return this->state_ == nullptr && return this->targetType_ == nullptr && return this->workloadSubType_ == nullptr; };
    // acuCount Field Functions 
    bool hasAcuCount() const { return this->acuCount_ != nullptr;};
    void deleteAcuCount() { this->acuCount_ = nullptr;};
    inline int32_t acuCount() const { DARABONBA_PTR_GET_DEFAULT(acuCount_, 0) };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setAcuCount(int32_t acuCount) { DARABONBA_PTR_SET_VALUE(acuCount_, acuCount) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // failedMsg Field Functions 
    bool hasFailedMsg() const { return this->failedMsg_ != nullptr;};
    void deleteFailedMsg() { this->failedMsg_ = nullptr;};
    inline string failedMsg() const { DARABONBA_PTR_GET_DEFAULT(failedMsg_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setFailedMsg(string failedMsg) { DARABONBA_PTR_SET_VALUE(failedMsg_, failedMsg) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxRT Field Functions 
    bool hasMaxRT() const { return this->maxRT_ != nullptr;};
    void deleteMaxRT() { this->maxRT_ = nullptr;};
    inline string maxRT() const { DARABONBA_PTR_GET_DEFAULT(maxRT_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setMaxRT(string maxRT) { DARABONBA_PTR_SET_VALUE(maxRT_, maxRT) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ossLocation Field Functions 
    bool hasOssLocation() const { return this->ossLocation_ != nullptr;};
    void deleteOssLocation() { this->ossLocation_ = nullptr;};
    inline string ossLocation() const { DARABONBA_PTR_GET_DEFAULT(ossLocation_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setOssLocation(string ossLocation) { DARABONBA_PTR_SET_VALUE(ossLocation_, ossLocation) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // workloadSubType Field Functions 
    bool hasWorkloadSubType() const { return this->workloadSubType_ != nullptr;};
    void deleteWorkloadSubType() { this->workloadSubType_ = nullptr;};
    inline string workloadSubType() const { DARABONBA_PTR_GET_DEFAULT(workloadSubType_, "") };
    inline DescribeApsMigrationWorkloadsResponseBodyMigrationWorkloads& setWorkloadSubType(string workloadSubType) { DARABONBA_PTR_SET_VALUE(workloadSubType_, workloadSubType) };


  protected:
    // The number of AnalyticDB compute units (ACUs).
    std::shared_ptr<int32_t> acuCount_ = nullptr;
    // The time when the job was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The error message.
    std::shared_ptr<string> failedMsg_ = nullptr;
    // The job ID.
    std::shared_ptr<string> id_ = nullptr;
    // The maximum response time.
    std::shared_ptr<string> maxRT_ = nullptr;
    // The time when the migration job was modified.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The name of the workload.
    std::shared_ptr<string> name_ = nullptr;
    // The OSS URL.
    std::shared_ptr<string> ossLocation_ = nullptr;
    // The status.
    std::shared_ptr<string> state_ = nullptr;
    // The destination type.
    std::shared_ptr<string> targetType_ = nullptr;
    // The sub-type of the workload.
    std::shared_ptr<string> workloadSubType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
