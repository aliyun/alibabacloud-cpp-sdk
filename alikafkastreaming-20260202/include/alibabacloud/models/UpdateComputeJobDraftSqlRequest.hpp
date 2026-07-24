// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEJOBDRAFTSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEJOBDRAFTSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaStreaming20260202
{
namespace Models
{
  class UpdateComputeJobDraftSqlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeJobDraftSqlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DraftSql, draftSql_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeJobDraftSqlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DraftSql, draftSql_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateComputeJobDraftSqlRequest() = default ;
    UpdateComputeJobDraftSqlRequest(const UpdateComputeJobDraftSqlRequest &) = default ;
    UpdateComputeJobDraftSqlRequest(UpdateComputeJobDraftSqlRequest &&) = default ;
    UpdateComputeJobDraftSqlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeJobDraftSqlRequest() = default ;
    UpdateComputeJobDraftSqlRequest& operator=(const UpdateComputeJobDraftSqlRequest &) = default ;
    UpdateComputeJobDraftSqlRequest& operator=(UpdateComputeJobDraftSqlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->draftSql_ == nullptr && this->instanceId_ == nullptr && this->jobName_ == nullptr && this->regionId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateComputeJobDraftSqlRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // draftSql Field Functions 
    bool hasDraftSql() const { return this->draftSql_ != nullptr;};
    void deleteDraftSql() { this->draftSql_ = nullptr;};
    inline string getDraftSql() const { DARABONBA_PTR_GET_DEFAULT(draftSql_, "") };
    inline UpdateComputeJobDraftSqlRequest& setDraftSql(string draftSql) { DARABONBA_PTR_SET_VALUE(draftSql_, draftSql) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateComputeJobDraftSqlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline UpdateComputeJobDraftSqlRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateComputeJobDraftSqlRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> clientToken_ {};
    // This parameter is required.
    shared_ptr<string> draftSql_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> jobName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AlikafkaStreaming20260202
#endif
