// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAQUALITYSCANRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class RuntimeResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuntimeResource& obj) { 
        DARABONBA_PTR_TO_JSON(Cu, cu_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Image, image_);
      };
      friend void from_json(const Darabonba::Json& j, RuntimeResource& obj) { 
        DARABONBA_PTR_FROM_JSON(Cu, cu_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Image, image_);
      };
      RuntimeResource() = default ;
      RuntimeResource(const RuntimeResource &) = default ;
      RuntimeResource(RuntimeResource &&) = default ;
      RuntimeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuntimeResource() = default ;
      RuntimeResource& operator=(const RuntimeResource &) = default ;
      RuntimeResource& operator=(RuntimeResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cu_ == nullptr
        && this->id_ == nullptr && this->image_ == nullptr; };
      // cu Field Functions 
      bool hasCu() const { return this->cu_ != nullptr;};
      void deleteCu() { this->cu_ = nullptr;};
      inline float getCu() const { DARABONBA_PTR_GET_DEFAULT(cu_, 0.0) };
      inline RuntimeResource& setCu(float cu) { DARABONBA_PTR_SET_VALUE(cu_, cu) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline RuntimeResource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // image Field Functions 
      bool hasImage() const { return this->image_ != nullptr;};
      void deleteImage() { this->image_ = nullptr;};
      inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
      inline RuntimeResource& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    protected:
      // The Compute Resources (CUs) reserved for running the data quality monitor in the resource group.
      shared_ptr<float> cu_ {};
      // The resource group ID.
      shared_ptr<string> id_ {};
      // The image settings used when running the data quality monitor in the resource group.
      shared_ptr<string> image_ {};
    };

    class Parameters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Parameters() = default ;
      Parameters(const Parameters &) = default ;
      Parameters(Parameters &&) = default ;
      Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Parameters() = default ;
      Parameters& operator=(const Parameters &) = default ;
      Parameters& operator=(Parameters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The parameter name.
      shared_ptr<string> name_ {};
      // The parameter value. You can use a scheduling time expression.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dataQualityScanId_ == nullptr
        && this->parameters_ == nullptr && this->projectId_ == nullptr && this->runtimeResource_ == nullptr; };
    // dataQualityScanId Field Functions 
    bool hasDataQualityScanId() const { return this->dataQualityScanId_ != nullptr;};
    void deleteDataQualityScanId() { this->dataQualityScanId_ = nullptr;};
    inline int64_t getDataQualityScanId() const { DARABONBA_PTR_GET_DEFAULT(dataQualityScanId_, 0L) };
    inline CreateDataQualityScanRunRequest& setDataQualityScanId(int64_t dataQualityScanId) { DARABONBA_PTR_SET_VALUE(dataQualityScanId_, dataQualityScanId) };


    // parameters Field Functions 
    bool hasParameters() const { return this->parameters_ != nullptr;};
    void deleteParameters() { this->parameters_ = nullptr;};
    inline const vector<CreateDataQualityScanRunRequest::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<CreateDataQualityScanRunRequest::Parameters>) };
    inline vector<CreateDataQualityScanRunRequest::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<CreateDataQualityScanRunRequest::Parameters>) };
    inline CreateDataQualityScanRunRequest& setParameters(const vector<CreateDataQualityScanRunRequest::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
    inline CreateDataQualityScanRunRequest& setParameters(vector<CreateDataQualityScanRunRequest::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDataQualityScanRunRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // runtimeResource Field Functions 
    bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
    void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
    inline const CreateDataQualityScanRunRequest::RuntimeResource & getRuntimeResource() const { DARABONBA_PTR_GET_CONST(runtimeResource_, CreateDataQualityScanRunRequest::RuntimeResource) };
    inline CreateDataQualityScanRunRequest::RuntimeResource getRuntimeResource() { DARABONBA_PTR_GET(runtimeResource_, CreateDataQualityScanRunRequest::RuntimeResource) };
    inline CreateDataQualityScanRunRequest& setRuntimeResource(const CreateDataQualityScanRunRequest::RuntimeResource & runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };
    inline CreateDataQualityScanRunRequest& setRuntimeResource(CreateDataQualityScanRunRequest::RuntimeResource && runtimeResource) { DARABONBA_PTR_SET_RVALUE(runtimeResource_, runtimeResource) };


  protected:
    // The ID of the data quality monitor.
    shared_ptr<int64_t> dataQualityScanId_ {};
    // The parameter settings used during the actual run. The `triggerTime` parameter is required.
    shared_ptr<vector<CreateDataQualityScanRunRequest::Parameters>> parameters_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The scheduling resource group used when running the data quality monitor. This resource group uses the same data structure as in the scheduling API.
    shared_ptr<CreateDataQualityScanRunRequest::RuntimeResource> runtimeResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
