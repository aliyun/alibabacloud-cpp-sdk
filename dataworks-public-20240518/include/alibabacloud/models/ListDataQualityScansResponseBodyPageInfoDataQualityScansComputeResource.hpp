// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANSCOMPUTERESOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANSRESPONSEBODYPAGEINFODATAQUALITYSCANSCOMPUTERESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& obj) { 
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Runtime, runtime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Runtime, runtime_);
    };
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource(const ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource(ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource &&) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource() = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& operator=(const ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource &) = default ;
    ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& operator=(ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource &&) = default ;
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
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runtime Field Functions 
    bool hasRuntime() const { return this->runtime_ != nullptr;};
    void deleteRuntime() { this->runtime_ = nullptr;};
    inline const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime & runtime() const { DARABONBA_PTR_GET_CONST(runtime_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime) };
    inline Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime runtime() { DARABONBA_PTR_GET(runtime_, Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& setRuntime(const Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime & runtime) { DARABONBA_PTR_SET_VALUE(runtime_, runtime) };
    inline ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResource& setRuntime(Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime && runtime) { DARABONBA_PTR_SET_RVALUE(runtime_, runtime) };


  protected:
    // Workspace environment of the compute engine. Valid values:
    // 
    // *   Prod
    // *   Dev
    std::shared_ptr<string> envType_ = nullptr;
    // The name of the computing engine. Uniquely identifies the engine.
    std::shared_ptr<string> name_ = nullptr;
    // Additional runtime settings for the data quality monitor.
    std::shared_ptr<Models::ListDataQualityScansResponseBodyPageInfoDataQualityScansComputeResourceRuntime> runtime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
