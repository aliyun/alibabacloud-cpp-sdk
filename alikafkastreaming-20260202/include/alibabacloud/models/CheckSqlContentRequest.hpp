// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSQLCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKSQLCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class CheckSqlContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckSqlContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SqlContent, sqlContent_);
    };
    friend void from_json(const Darabonba::Json& j, CheckSqlContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SqlContent, sqlContent_);
    };
    CheckSqlContentRequest() = default ;
    CheckSqlContentRequest(const CheckSqlContentRequest &) = default ;
    CheckSqlContentRequest(CheckSqlContentRequest &&) = default ;
    CheckSqlContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckSqlContentRequest() = default ;
    CheckSqlContentRequest& operator=(const CheckSqlContentRequest &) = default ;
    CheckSqlContentRequest& operator=(CheckSqlContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->jobName_ == nullptr && this->regionId_ == nullptr && this->sqlContent_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CheckSqlContentRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline CheckSqlContentRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckSqlContentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sqlContent Field Functions 
    bool hasSqlContent() const { return this->sqlContent_ != nullptr;};
    void deleteSqlContent() { this->sqlContent_ = nullptr;};
    inline string getSqlContent() const { DARABONBA_PTR_GET_DEFAULT(sqlContent_, "") };
    inline CheckSqlContentRequest& setSqlContent(string sqlContent) { DARABONBA_PTR_SET_VALUE(sqlContent_, sqlContent) };


  protected:
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> sqlContent_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
