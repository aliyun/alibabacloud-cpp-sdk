// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEDETAILRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEDETAILRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetServiceDetailResponseBodyDataMethods.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceDetailResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DubboApplicationName, dubboApplicationName_);
      DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Methods, methods_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_TO_JSON(SpringApplicationName, springApplicationName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceDetailResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DubboApplicationName, dubboApplicationName_);
      DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Methods, methods_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
      DARABONBA_PTR_FROM_JSON(SpringApplicationName, springApplicationName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetServiceDetailResponseBodyData() = default ;
    GetServiceDetailResponseBodyData(const GetServiceDetailResponseBodyData &) = default ;
    GetServiceDetailResponseBodyData(GetServiceDetailResponseBodyData &&) = default ;
    GetServiceDetailResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceDetailResponseBodyData() = default ;
    GetServiceDetailResponseBodyData& operator=(const GetServiceDetailResponseBodyData &) = default ;
    GetServiceDetailResponseBodyData& operator=(GetServiceDetailResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dubboApplicationName_ == nullptr
        && return this->edasAppName_ == nullptr && return this->group_ == nullptr && return this->metadata_ == nullptr && return this->methods_ == nullptr && return this->registryType_ == nullptr
        && return this->serviceName_ == nullptr && return this->serviceType_ == nullptr && return this->springApplicationName_ == nullptr && return this->version_ == nullptr; };
    // dubboApplicationName Field Functions 
    bool hasDubboApplicationName() const { return this->dubboApplicationName_ != nullptr;};
    void deleteDubboApplicationName() { this->dubboApplicationName_ = nullptr;};
    inline string dubboApplicationName() const { DARABONBA_PTR_GET_DEFAULT(dubboApplicationName_, "") };
    inline GetServiceDetailResponseBodyData& setDubboApplicationName(string dubboApplicationName) { DARABONBA_PTR_SET_VALUE(dubboApplicationName_, dubboApplicationName) };


    // edasAppName Field Functions 
    bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
    void deleteEdasAppName() { this->edasAppName_ = nullptr;};
    inline string edasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
    inline GetServiceDetailResponseBodyData& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetServiceDetailResponseBodyData& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string metadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline GetServiceDetailResponseBodyData& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // methods Field Functions 
    bool hasMethods() const { return this->methods_ != nullptr;};
    void deleteMethods() { this->methods_ = nullptr;};
    inline const vector<Models::GetServiceDetailResponseBodyDataMethods> & methods() const { DARABONBA_PTR_GET_CONST(methods_, vector<Models::GetServiceDetailResponseBodyDataMethods>) };
    inline vector<Models::GetServiceDetailResponseBodyDataMethods> methods() { DARABONBA_PTR_GET(methods_, vector<Models::GetServiceDetailResponseBodyDataMethods>) };
    inline GetServiceDetailResponseBodyData& setMethods(const vector<Models::GetServiceDetailResponseBodyDataMethods> & methods) { DARABONBA_PTR_SET_VALUE(methods_, methods) };
    inline GetServiceDetailResponseBodyData& setMethods(vector<Models::GetServiceDetailResponseBodyDataMethods> && methods) { DARABONBA_PTR_SET_RVALUE(methods_, methods) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline GetServiceDetailResponseBodyData& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceDetailResponseBodyData& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string serviceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline GetServiceDetailResponseBodyData& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


    // springApplicationName Field Functions 
    bool hasSpringApplicationName() const { return this->springApplicationName_ != nullptr;};
    void deleteSpringApplicationName() { this->springApplicationName_ = nullptr;};
    inline string springApplicationName() const { DARABONBA_PTR_GET_DEFAULT(springApplicationName_, "") };
    inline GetServiceDetailResponseBodyData& setSpringApplicationName(string springApplicationName) { DARABONBA_PTR_SET_VALUE(springApplicationName_, springApplicationName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceDetailResponseBodyData& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The name of the Dubbo application.
    std::shared_ptr<string> dubboApplicationName_ = nullptr;
    // The name of the Enterprise Distributed Application Service (EDAS) application.
    std::shared_ptr<string> edasAppName_ = nullptr;
    // The group.
    std::shared_ptr<string> group_ = nullptr;
    // The metadata.
    std::shared_ptr<string> metadata_ = nullptr;
    // The methods.
    std::shared_ptr<vector<Models::GetServiceDetailResponseBodyDataMethods>> methods_ = nullptr;
    // The type of the service registry.
    std::shared_ptr<string> registryType_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The type of the service.
    std::shared_ptr<string> serviceType_ = nullptr;
    // The name of the Spring application.
    std::shared_ptr<string> springApplicationName_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
