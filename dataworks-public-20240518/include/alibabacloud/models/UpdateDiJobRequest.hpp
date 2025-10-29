// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDIJobRequestJobSettings.hpp>
#include <alibabacloud/models/UpdateDIJobRequestResourceSettings.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDIJobRequestTableMappings.hpp>
#include <alibabacloud/models/UpdateDIJobRequestTransformationRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_TO_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_TO_JSON(TransformationRules, transformationRules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(JobSettings, jobSettings_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceSettings, resourceSettings_);
      DARABONBA_PTR_FROM_JSON(TableMappings, tableMappings_);
      DARABONBA_PTR_FROM_JSON(TransformationRules, transformationRules_);
    };
    UpdateDIJobRequest() = default ;
    UpdateDIJobRequest(const UpdateDIJobRequest &) = default ;
    UpdateDIJobRequest(UpdateDIJobRequest &&) = default ;
    UpdateDIJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIJobRequest() = default ;
    UpdateDIJobRequest& operator=(const UpdateDIJobRequest &) = default ;
    UpdateDIJobRequest& operator=(UpdateDIJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DIJobId_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->jobSettings_ == nullptr && return this->projectId_ == nullptr && return this->resourceSettings_ == nullptr
        && return this->tableMappings_ == nullptr && return this->transformationRules_ == nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline UpdateDIJobRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDIJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDIJobRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // jobSettings Field Functions 
    bool hasJobSettings() const { return this->jobSettings_ != nullptr;};
    void deleteJobSettings() { this->jobSettings_ = nullptr;};
    inline const UpdateDIJobRequestJobSettings & jobSettings() const { DARABONBA_PTR_GET_CONST(jobSettings_, UpdateDIJobRequestJobSettings) };
    inline UpdateDIJobRequestJobSettings jobSettings() { DARABONBA_PTR_GET(jobSettings_, UpdateDIJobRequestJobSettings) };
    inline UpdateDIJobRequest& setJobSettings(const UpdateDIJobRequestJobSettings & jobSettings) { DARABONBA_PTR_SET_VALUE(jobSettings_, jobSettings) };
    inline UpdateDIJobRequest& setJobSettings(UpdateDIJobRequestJobSettings && jobSettings) { DARABONBA_PTR_SET_RVALUE(jobSettings_, jobSettings) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateDIJobRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceSettings Field Functions 
    bool hasResourceSettings() const { return this->resourceSettings_ != nullptr;};
    void deleteResourceSettings() { this->resourceSettings_ = nullptr;};
    inline const UpdateDIJobRequestResourceSettings & resourceSettings() const { DARABONBA_PTR_GET_CONST(resourceSettings_, UpdateDIJobRequestResourceSettings) };
    inline UpdateDIJobRequestResourceSettings resourceSettings() { DARABONBA_PTR_GET(resourceSettings_, UpdateDIJobRequestResourceSettings) };
    inline UpdateDIJobRequest& setResourceSettings(const UpdateDIJobRequestResourceSettings & resourceSettings) { DARABONBA_PTR_SET_VALUE(resourceSettings_, resourceSettings) };
    inline UpdateDIJobRequest& setResourceSettings(UpdateDIJobRequestResourceSettings && resourceSettings) { DARABONBA_PTR_SET_RVALUE(resourceSettings_, resourceSettings) };


    // tableMappings Field Functions 
    bool hasTableMappings() const { return this->tableMappings_ != nullptr;};
    void deleteTableMappings() { this->tableMappings_ = nullptr;};
    inline const vector<UpdateDIJobRequestTableMappings> & tableMappings() const { DARABONBA_PTR_GET_CONST(tableMappings_, vector<UpdateDIJobRequestTableMappings>) };
    inline vector<UpdateDIJobRequestTableMappings> tableMappings() { DARABONBA_PTR_GET(tableMappings_, vector<UpdateDIJobRequestTableMappings>) };
    inline UpdateDIJobRequest& setTableMappings(const vector<UpdateDIJobRequestTableMappings> & tableMappings) { DARABONBA_PTR_SET_VALUE(tableMappings_, tableMappings) };
    inline UpdateDIJobRequest& setTableMappings(vector<UpdateDIJobRequestTableMappings> && tableMappings) { DARABONBA_PTR_SET_RVALUE(tableMappings_, tableMappings) };


    // transformationRules Field Functions 
    bool hasTransformationRules() const { return this->transformationRules_ != nullptr;};
    void deleteTransformationRules() { this->transformationRules_ = nullptr;};
    inline const vector<UpdateDIJobRequestTransformationRules> & transformationRules() const { DARABONBA_PTR_GET_CONST(transformationRules_, vector<UpdateDIJobRequestTransformationRules>) };
    inline vector<UpdateDIJobRequestTransformationRules> transformationRules() { DARABONBA_PTR_GET(transformationRules_, vector<UpdateDIJobRequestTransformationRules>) };
    inline UpdateDIJobRequest& setTransformationRules(const vector<UpdateDIJobRequestTransformationRules> & transformationRules) { DARABONBA_PTR_SET_VALUE(transformationRules_, transformationRules) };
    inline UpdateDIJobRequest& setTransformationRules(vector<UpdateDIJobRequestTransformationRules> && transformationRules) { DARABONBA_PTR_SET_RVALUE(transformationRules_, transformationRules) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<UpdateDIJobRequestJobSettings> jobSettings_ = nullptr;
    // The DataWorks workspace ID. You can call the [ListProjects](https://help.aliyun.com/document_detail/178393.html) operation to obtain the ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    std::shared_ptr<UpdateDIJobRequestResourceSettings> resourceSettings_ = nullptr;
    std::shared_ptr<vector<UpdateDIJobRequestTableMappings>> tableMappings_ = nullptr;
    std::shared_ptr<vector<UpdateDIJobRequestTransformationRules>> transformationRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
