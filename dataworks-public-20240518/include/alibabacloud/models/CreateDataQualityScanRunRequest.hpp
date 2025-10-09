// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateDataQualityScanRunRequestParameters.hpp>
#include <alibabacloud/models/CreateDataQualityScanRunRequestRuntimeResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDataQualityScanRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataQualityScanRunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataQualityScanId, dataQualityScanId_);
      DARABONBA_PTR_TO_JSON(Parameters, parameters_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataQualityScanRunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataQualityScanId, dataQualityScanId_);
      DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
    };
    CreateDataQualityScanRunRequest() = default ;
    CreateDataQualityScanRunRequest(const CreateDataQualityScanRunRequest &) = default ;
    CreateDataQualityScanRunRequest(CreateDataQualityScanRunRequest &&) = default ;
    CreateDataQualityScanRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataQualityScanRunRequest() = default ;
    CreateDataQualityScanRunRequest& operator=(const CreateDataQualityScanRunRequest &) = default ;
    CreateDataQualityScanRunRequest& operator=(CreateDataQualityScanRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataQualityScanId_ != nullptr
        && this->parameters_ != nullptr && this->projectId_ != nullptr && this->runtimeResource_ != nullptr; };
    // dataQualityScanId Field Functions 
    bool hasDataQualityScanId() const { return this->dataQualityScanId_ != nullptr;};
    void deleteDataQualityScanId() { this->dataQualityScanId_ = nullptr;};
    inline int64_t dataQualityScanId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityScanId_, 0L) };
    inline CreateDataQualityScanRunRequest& setDataQualityScanId(int64_t dataQualityScanId) { DARABONBA_PTR_SET_VALUE(dataQualityScanId_, dataQualityScanId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateDataQualityScanRunRequestParameters> & parameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateDataQualityScanRunRequestParameters>) };
    inline vector<CreateDataQualityScanRunRequestParameters> parameters() { DARABONBA_PTR_GET(parameters_, vector<CreateDataQualityScanRunRequestParameters>) };
    inline CreateDataQualityScanRunRequest& setParameters(const vector<CreateDataQualityScanRunRequestParameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateDataQualityScanRunRequest& setParameters(vector<CreateDataQualityScanRunRequestParameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityScanRunRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const CreateDataQualityScanRunRequestRuntimeResource & runtimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, CreateDataQualityScanRunRequestRuntimeResource) };
    inline CreateDataQualityScanRunRequestRuntimeResource runtimeResource() { DARABONBA_PTR_GET(runtimeResource_, CreateDataQualityScanRunRequestRuntimeResource) };
    inline CreateDataQualityScanRunRequest& setRuntimeResource(const CreateDataQualityScanRunRequestRuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline CreateDataQualityScanRunRequest& setRuntimeResource(CreateDataQualityScanRunRequestRuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


  protected:
    // The ID of the data quality monitor.
    std::shared_ptr<int64_t> dataQualityScanId_ = nullptr;
    // The parameter settings used during the actual run. The `triggerTime` parameter is required.
    std::shared_ptr<vector<CreateDataQualityScanRunRequestParameters>> parameters_ = nullptr;
    // The project ID.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The scheduling resource group used when running the data quality monitor. This resource group uses the same data structure as in the scheduling API.
    std::shared_ptr<CreateDataQualityScanRunRequestRuntimeResource> runtimeResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
