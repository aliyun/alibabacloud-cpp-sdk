// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SKILLADDMETAPROFILINGJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SKILLADDMETAPROFILINGJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class SkillAddMetaProfilingJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SkillAddMetaProfilingJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(componentId, componentId_);
      DARABONBA_PTR_TO_JSON(jobDesc, jobDesc_);
      DARABONBA_PTR_TO_JSON(jobId, jobId_);
      DARABONBA_PTR_TO_JSON(jobName, jobName_);
      DARABONBA_PTR_TO_JSON(metaIds, metaIds_);
      DARABONBA_PTR_TO_JSON(pluginId, pluginId_);
      DARABONBA_PTR_TO_JSON(profilingFlag, profilingFlag_);
      DARABONBA_PTR_TO_JSON(profilingPermission, profilingPermission_);
      DARABONBA_PTR_TO_JSON(profilingRule, profilingRule_);
      DARABONBA_PTR_TO_JSON(profilingSchemaList, profilingSchemaList_);
      DARABONBA_PTR_TO_JSON(profilingType, profilingType_);
    };
    friend void from_json(const Darabonba::Json& j, SkillAddMetaProfilingJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(componentId, componentId_);
      DARABONBA_PTR_FROM_JSON(jobDesc, jobDesc_);
      DARABONBA_PTR_FROM_JSON(jobId, jobId_);
      DARABONBA_PTR_FROM_JSON(jobName, jobName_);
      DARABONBA_PTR_FROM_JSON(metaIds, metaIds_);
      DARABONBA_PTR_FROM_JSON(pluginId, pluginId_);
      DARABONBA_PTR_FROM_JSON(profilingFlag, profilingFlag_);
      DARABONBA_PTR_FROM_JSON(profilingPermission, profilingPermission_);
      DARABONBA_PTR_FROM_JSON(profilingRule, profilingRule_);
      DARABONBA_PTR_FROM_JSON(profilingSchemaList, profilingSchemaList_);
      DARABONBA_PTR_FROM_JSON(profilingType, profilingType_);
    };
    SkillAddMetaProfilingJobRequest() = default ;
    SkillAddMetaProfilingJobRequest(const SkillAddMetaProfilingJobRequest &) = default ;
    SkillAddMetaProfilingJobRequest(SkillAddMetaProfilingJobRequest &&) = default ;
    SkillAddMetaProfilingJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SkillAddMetaProfilingJobRequest() = default ;
    SkillAddMetaProfilingJobRequest& operator=(const SkillAddMetaProfilingJobRequest &) = default ;
    SkillAddMetaProfilingJobRequest& operator=(SkillAddMetaProfilingJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentId_ == nullptr
        && this->jobDesc_ == nullptr && this->jobId_ == nullptr && this->jobName_ == nullptr && this->metaIds_ == nullptr && this->pluginId_ == nullptr
        && this->profilingFlag_ == nullptr && this->profilingPermission_ == nullptr && this->profilingRule_ == nullptr && this->profilingSchemaList_ == nullptr && this->profilingType_ == nullptr; };
    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline int64_t getComponentId() const { DARABONBA_PTR_GET_DEFAULT(componentId_, 0L) };
    inline SkillAddMetaProfilingJobRequest& setComponentId(int64_t componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };


    // jobDesc Field Functions 
    bool hasJobDesc() const { return this->jobDesc_ != nullptr;};
    void deleteJobDesc() { this->jobDesc_ = nullptr;};
    inline string getJobDesc() const { DARABONBA_PTR_GET_DEFAULT(jobDesc_, "") };
    inline SkillAddMetaProfilingJobRequest& setJobDesc(string jobDesc) { DARABONBA_PTR_SET_VALUE(jobDesc_, jobDesc) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline SkillAddMetaProfilingJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline SkillAddMetaProfilingJobRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // metaIds Field Functions 
    bool hasMetaIds() const { return this->metaIds_ != nullptr;};
    void deleteMetaIds() { this->metaIds_ = nullptr;};
    inline const vector<string> & getMetaIds() const { DARABONBA_PTR_GET_CONST(metaIds_, vector<string>) };
    inline vector<string> getMetaIds() { DARABONBA_PTR_GET(metaIds_, vector<string>) };
    inline SkillAddMetaProfilingJobRequest& setMetaIds(const vector<string> & metaIds) { DARABONBA_PTR_SET_VALUE(metaIds_, metaIds) };
    inline SkillAddMetaProfilingJobRequest& setMetaIds(vector<string> && metaIds) { DARABONBA_PTR_SET_RVALUE(metaIds_, metaIds) };


    // pluginId Field Functions 
    bool hasPluginId() const { return this->pluginId_ != nullptr;};
    void deletePluginId() { this->pluginId_ = nullptr;};
    inline string getPluginId() const { DARABONBA_PTR_GET_DEFAULT(pluginId_, "") };
    inline SkillAddMetaProfilingJobRequest& setPluginId(string pluginId) { DARABONBA_PTR_SET_VALUE(pluginId_, pluginId) };


    // profilingFlag Field Functions 
    bool hasProfilingFlag() const { return this->profilingFlag_ != nullptr;};
    void deleteProfilingFlag() { this->profilingFlag_ = nullptr;};
    inline int32_t getProfilingFlag() const { DARABONBA_PTR_GET_DEFAULT(profilingFlag_, 0) };
    inline SkillAddMetaProfilingJobRequest& setProfilingFlag(int32_t profilingFlag) { DARABONBA_PTR_SET_VALUE(profilingFlag_, profilingFlag) };


    // profilingPermission Field Functions 
    bool hasProfilingPermission() const { return this->profilingPermission_ != nullptr;};
    void deleteProfilingPermission() { this->profilingPermission_ = nullptr;};
    inline int32_t getProfilingPermission() const { DARABONBA_PTR_GET_DEFAULT(profilingPermission_, 0) };
    inline SkillAddMetaProfilingJobRequest& setProfilingPermission(int32_t profilingPermission) { DARABONBA_PTR_SET_VALUE(profilingPermission_, profilingPermission) };


    // profilingRule Field Functions 
    bool hasProfilingRule() const { return this->profilingRule_ != nullptr;};
    void deleteProfilingRule() { this->profilingRule_ = nullptr;};
    inline string getProfilingRule() const { DARABONBA_PTR_GET_DEFAULT(profilingRule_, "") };
    inline SkillAddMetaProfilingJobRequest& setProfilingRule(string profilingRule) { DARABONBA_PTR_SET_VALUE(profilingRule_, profilingRule) };


    // profilingSchemaList Field Functions 
    bool hasProfilingSchemaList() const { return this->profilingSchemaList_ != nullptr;};
    void deleteProfilingSchemaList() { this->profilingSchemaList_ = nullptr;};
    inline const vector<string> & getProfilingSchemaList() const { DARABONBA_PTR_GET_CONST(profilingSchemaList_, vector<string>) };
    inline vector<string> getProfilingSchemaList() { DARABONBA_PTR_GET(profilingSchemaList_, vector<string>) };
    inline SkillAddMetaProfilingJobRequest& setProfilingSchemaList(const vector<string> & profilingSchemaList) { DARABONBA_PTR_SET_VALUE(profilingSchemaList_, profilingSchemaList) };
    inline SkillAddMetaProfilingJobRequest& setProfilingSchemaList(vector<string> && profilingSchemaList) { DARABONBA_PTR_SET_RVALUE(profilingSchemaList_, profilingSchemaList) };


    // profilingType Field Functions 
    bool hasProfilingType() const { return this->profilingType_ != nullptr;};
    void deleteProfilingType() { this->profilingType_ = nullptr;};
    inline int32_t getProfilingType() const { DARABONBA_PTR_GET_DEFAULT(profilingType_, 0) };
    inline SkillAddMetaProfilingJobRequest& setProfilingType(int32_t profilingType) { DARABONBA_PTR_SET_VALUE(profilingType_, profilingType) };


  protected:
    // The component ID, which is the primary key identifier of the data source component.
    shared_ptr<int64_t> componentId_ {};
    // The description of the profiling task.
    shared_ptr<string> jobDesc_ {};
    // The profiling task ID.
    shared_ptr<int64_t> jobId_ {};
    // The name of the profiling task.
    shared_ptr<string> jobName_ {};
    // The list of metadata object IDs to be profiled or operated on.
    shared_ptr<vector<string>> metaIds_ {};
    // The profiling plugin ID, which specifies the plugin used to perform the profiling.
    shared_ptr<string> pluginId_ {};
    // Specifies whether to enable data profiling.
    shared_ptr<int32_t> profilingFlag_ {};
    // The profiling permission configuration identifier.
    shared_ptr<int32_t> profilingPermission_ {};
    // The profiling rule configuration content.
    shared_ptr<string> profilingRule_ {};
    // The list of schemas to be profiled.
    shared_ptr<vector<string>> profilingSchemaList_ {};
    // The profiling type identifier.
    shared_ptr<int32_t> profilingType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
