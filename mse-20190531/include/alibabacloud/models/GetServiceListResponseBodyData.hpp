// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceListResponseBodyDataMethods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetServiceListResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DubboApplicationName, dubboApplicationName_);
      DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Methods, methods_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(SpringApplicationName, springApplicationName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DubboApplicationName, dubboApplicationName_);
      DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Methods, methods_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(SpringApplicationName, springApplicationName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetServiceListResponseBodyData() = default ;
    GetServiceListResponseBodyData(const GetServiceListResponseBodyData &) = default ;
    GetServiceListResponseBodyData(GetServiceListResponseBodyData &&) = default ;
    GetServiceListResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListResponseBodyData() = default ;
    GetServiceListResponseBodyData& operator=(const GetServiceListResponseBodyData &) = default ;
    GetServiceListResponseBodyData& operator=(GetServiceListResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dubboApplicationName_ != nullptr
        && this->edasAppName_ != nullptr && this->group_ != nullptr && this->metadata_ != nullptr && this->methods_ != nullptr && this->registryType_ != nullptr
        && this->serviceName_ != nullptr && this->serviceType_ != nullptr && this->springApplicationName_ != nullptr && this->version_ != nullptr; };
    // dubboApplicationName Field Functions 
    bool hasDubboApplicationName() const { return this->dubboApplicationName_ != nullptr;};
    void deleteDubboApplicationName() { this->dubboApplicationName_ = nullptr;};
    inline string dubboApplicationName() const { DARABONBA_PTR_GET_DEFAULT(dubboApplicationName_, "") };
    inline GetServiceListResponseBodyData& setDubboApplicationName(string dubboApplicationName) { DARABONBA_PTR_SET_VALUE(dubboApplicationName_, dubboApplicationName) };


    // edasAppName Field Functions 
    bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
    void deleteEdasAppName() { this->edasAppName_ = nullptr;};
    inline string edasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
    inline GetServiceListResponseBodyData& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetServiceListResponseBodyData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & metadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & metadata() { DARABONBA_GET(metadata_) };
    inline GetServiceListResponseBodyData& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline GetServiceListResponseBodyData& setMetadata(Darabonba::Json & metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<Models::GetServiceListResponseBodyDataMethods> & methods() const { DARABONBA_PTR_GET_CONST(methods_, vector<Models::GetServiceListResponseBodyDataMethods>) };
    inline vector<Models::GetServiceListResponseBodyDataMethods> methods() { DARABONBA_PTR_GET(methods_, vector<Models::GetServiceListResponseBodyDataMethods>) };
    inline GetServiceListResponseBodyData& setMethods(const vector<Models::GetServiceListResponseBodyDataMethods> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline GetServiceListResponseBodyData& setMethods(vector<Models::GetServiceListResponseBodyDataMethods> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline GetServiceListResponseBodyData& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceListResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceListResponseBodyData& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // springApplicationName Field Functions 
    bool hasSpringApplicationName() const { return this->springApplicationName_ != nullptr;};
    void deleteSpringApplicationName() { this->springApplicationName_ = nullptr;};
    inline string springApplicationName() const { DARABONBA_PTR_GET_DEFAULT(springApplicationName_, "") };
    inline GetServiceListResponseBodyData& setSpringApplicationName(string springApplicationName) { DARABONBA_PTR_SET_VALUE(springApplicationName_, springApplicationName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceListResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the Dubbo application.
    std::shared_ptr<string> dubboApplicationName_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> edasAppName_ = nullptr;
    // The group.
    std::shared_ptr<string> group_ = nullptr;
    // The metadata.
    Darabonba::Json metadata_ = nullptr;
    // The methods.
    std::shared_ptr<vector<Models::GetServiceListResponseBodyDataMethods>> methods_ = nullptr;
    // The type of the service registry.
    std::shared_ptr<string> registryType_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The name of the Spring application.
    std::shared_ptr<string> springApplicationName_ = nullptr;
    // The version information.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
