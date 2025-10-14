// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#define ALIBABACLOUD_MODELS_MIGRATIONJOB_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MigrationJobPlan.hpp>
#include <vector>
#include <alibabacloud/models/MigrationJobSource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class MigrationJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MigrationJob& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(Plan, plan_);
      DARABONBA_PTR_TO_JSON(RuleNames, ruleNames_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, MigrationJob& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(Plan, plan_);
      DARABONBA_PTR_FROM_JSON(RuleNames, ruleNames_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    MigrationJob() = default ;
    MigrationJob(const MigrationJob &) = default ;
    MigrationJob(MigrationJob &&) = default ;
    MigrationJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MigrationJob() = default ;
    MigrationJob& operator=(const MigrationJob &) = default ;
    MigrationJob& operator=(MigrationJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->detail_ == nullptr && return this->jobStatus_ == nullptr && return this->plan_ == nullptr && return this->ruleNames_ == nullptr && return this->source_ == nullptr
        && return this->updateTime_ == nullptr && return this->uuid_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MigrationJob& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline string detail() const { DARABONBA_PTR_GET_DEFAULT(detail_, "") };
    inline MigrationJob& setDetail(string detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline MigrationJob& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline const MigrationJobPlan & plan() const { DARABONBA_PTR_GET_CONST(plan_, MigrationJobPlan) };
    inline MigrationJobPlan plan() { DARABONBA_PTR_GET(plan_, MigrationJobPlan) };
    inline MigrationJob& setPlan(const MigrationJobPlan & plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };
    inline MigrationJob& setPlan(MigrationJobPlan && plan) { DARABONBA_PTR_SET_RVALUE(plan_, plan) };


    // ruleNames Field Functions 
    bool hasRuleNames() const { return this->ruleNames_ != nullptr;};
    void deleteRuleNames() { this->ruleNames_ = nullptr;};
    inline const vector<string> & ruleNames() const { DARABONBA_PTR_GET_CONST(ruleNames_, vector<string>) };
    inline vector<string> ruleNames() { DARABONBA_PTR_GET(ruleNames_, vector<string>) };
    inline MigrationJob& setRuleNames(const vector<string> & ruleNames) { DARABONBA_PTR_SET_VALUE(ruleNames_, ruleNames) };
    inline MigrationJob& setRuleNames(vector<string> && ruleNames) { DARABONBA_PTR_SET_RVALUE(ruleNames_, ruleNames) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline const vector<MigrationJobSource> & source() const { DARABONBA_PTR_GET_CONST(source_, vector<MigrationJobSource>) };
    inline vector<MigrationJobSource> source() { DARABONBA_PTR_GET(source_, vector<MigrationJobSource>) };
    inline MigrationJob& setSource(const vector<MigrationJobSource> & source) { DARABONBA_PTR_SET_VALUE(source_, source) };
    inline MigrationJob& setSource(vector<MigrationJobSource> && source) { DARABONBA_PTR_SET_RVALUE(source_, source) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline MigrationJob& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline MigrationJob& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> detail_ = nullptr;
    std::shared_ptr<string> jobStatus_ = nullptr;
    std::shared_ptr<MigrationJobPlan> plan_ = nullptr;
    std::shared_ptr<vector<string>> ruleNames_ = nullptr;
    std::shared_ptr<vector<MigrationJobSource>> source_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
