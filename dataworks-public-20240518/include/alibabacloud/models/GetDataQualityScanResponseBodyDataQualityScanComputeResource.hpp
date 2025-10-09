// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCANCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRESPONSEBODYDATAQUALITYSCANCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanResponseBodyDataQualityScanComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanResponseBodyDataQualityScanComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanResponseBodyDataQualityScanComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    GetDataQualityScanResponseBodyDataQualityScanComputeResource() = default ;
    GetDataQualityScanResponseBodyDataQualityScanComputeResource(const GetDataQualityScanResponseBodyDataQualityScanComputeResource &) = default ;
    GetDataQualityScanResponseBodyDataQualityScanComputeResource(GetDataQualityScanResponseBodyDataQualityScanComputeResource &&) = default ;
    GetDataQualityScanResponseBodyDataQualityScanComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanResponseBodyDataQualityScanComputeResource() = default ;
    GetDataQualityScanResponseBodyDataQualityScanComputeResource& operator=(const GetDataQualityScanResponseBodyDataQualityScanComputeResource &) = default ;
    GetDataQualityScanResponseBodyDataQualityScanComputeResource& operator=(GetDataQualityScanResponseBodyDataQualityScanComputeResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->envType_ != nullptr
        && this->name_ != nullptr && this->runtime_ != nullptr; };
    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string envType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScanComputeResource& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataQualityScanResponseBodyDataQualityScanComputeResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime) };
    inline Models::GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime) };
    inline GetDataQualityScanResponseBodyDataQualityScanComputeResource& setRuntime(const Models::GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline GetDataQualityScanResponseBodyDataQualityScanComputeResource& setRuntime(Models::GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // The workspace environment to which the compute engine belongs.
    // 
    // Valid values:
    // 
    // *   Prod: production environment .
    // *   Dev: development environment.
    std::shared_ptr<string> envType_ = nullptr;
    // The name of the compute engine, which is a unique identifier.
    std::shared_ptr<string> name_ = nullptr;
    // More settings for data quality monitor at runtime.
    std::shared_ptr<Models::GetDataQualityScanResponseBodyDataQualityScanComputeResourceRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
