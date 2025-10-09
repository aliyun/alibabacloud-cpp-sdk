// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCANCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_GETDATAQUALITYSCANRUNRESPONSEBODYDATAQUALITYSCANRUNSCANCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource(const GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource(GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource &&) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource() = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& operator=(const GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource &) = default ;
    GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& operator=(GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource &&) = default ;
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
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime) };
    inline Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& setRuntime(const Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResource& setRuntime(Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // The workspace environment to which the compute engine belongs.
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The name of the computing resource, which corresponds to the Name attribute in the ComputeResource data structure of the computing resource API.
    std::shared_ptr<string> name_ = nullptr;
    // The additional runtime settings of the data quality monitor.
    std::shared_ptr<Models::GetDataQualityScanRunResponseBodyDataQualityScanRunScanComputeResourceRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
