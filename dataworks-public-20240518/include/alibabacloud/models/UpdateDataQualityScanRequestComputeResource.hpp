// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAQUALITYSCANREQUESTCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAQUALITYSCANREQUESTCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDataQualityScanRequestComputeResourceRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDataQualityScanRequestComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataQualityScanRequestComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataQualityScanRequestComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    UpdateDataQualityScanRequestComputeResource() = default ;
    UpdateDataQualityScanRequestComputeResource(const UpdateDataQualityScanRequestComputeResource &) = default ;
    UpdateDataQualityScanRequestComputeResource(UpdateDataQualityScanRequestComputeResource &&) = default ;
    UpdateDataQualityScanRequestComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataQualityScanRequestComputeResource() = default ;
    UpdateDataQualityScanRequestComputeResource& operator=(const UpdateDataQualityScanRequestComputeResource &) = default ;
    UpdateDataQualityScanRequestComputeResource& operator=(UpdateDataQualityScanRequestComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->envType_ == nullptr
        && return this->name_ == nullptr && return this->runtime_ == nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline UpdateDataQualityScanRequestComputeResource& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDataQualityScanRequestComputeResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::UpdateDataQualityScanRequestComputeResourceRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::UpdateDataQualityScanRequestComputeResourceRuntime) };
    inline Models::UpdateDataQualityScanRequestComputeResourceRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::UpdateDataQualityScanRequestComputeResourceRuntime) };
    inline UpdateDataQualityScanRequestComputeResource& setRuntime(const Models::UpdateDataQualityScanRequestComputeResourceRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline UpdateDataQualityScanRequestComputeResource& setRuntime(Models::UpdateDataQualityScanRequestComputeResourceRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // Workspace environment of the compute engine. Valid values:
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The name of the compute engine, which is a unique identifier.
    std::shared_ptr<string> name_ = nullptr;
    // Additional settings for the compute engine.
    std::shared_ptr<Models::UpdateDataQualityScanRequestComputeResourceRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
