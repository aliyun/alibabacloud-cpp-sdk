// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELISTPAGERESPONSEBODYDATACONTENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetServiceListPageResponseBodyDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceListPageResponseBodyDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(EdasAppId, edasAppId_);
      DARABONBA_PTR_TO_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_TO_JSON(RegisterType, registerType_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceListPageResponseBodyDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(EdasAppId, edasAppId_);
      DARABONBA_PTR_FROM_JSON(EdasAppName, edasAppName_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(InstanceNum, instanceNum_);
      DARABONBA_PTR_FROM_JSON(RegisterType, registerType_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    GetServiceListPageResponseBodyDataContent() = default ;
    GetServiceListPageResponseBodyDataContent(const GetServiceListPageResponseBodyDataContent &) = default ;
    GetServiceListPageResponseBodyDataContent(GetServiceListPageResponseBodyDataContent &&) = default ;
    GetServiceListPageResponseBodyDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceListPageResponseBodyDataContent() = default ;
    GetServiceListPageResponseBodyDataContent& operator=(const GetServiceListPageResponseBodyDataContent &) = default ;
    GetServiceListPageResponseBodyDataContent& operator=(GetServiceListPageResponseBodyDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edasAppId_ == nullptr
        && return this->edasAppName_ == nullptr && return this->group_ == nullptr && return this->instanceNum_ == nullptr && return this->registerType_ == nullptr && return this->serviceId_ == nullptr
        && return this->serviceName_ == nullptr && return this->version_ == nullptr; };
    // edasAppId Field Functions 
    bool hasEdasAppId() const { return this->edasAppId_ != nullptr;};
    void deleteEdasAppId() { this->edasAppId_ = nullptr;};
    inline string edasAppId() const { DARABONBA_PTR_GET_DEFAULT(edasAppId_, "") };
    inline GetServiceListPageResponseBodyDataContent& setEdasAppId(string edasAppId) { DARABONBA_PTR_SET_VALUE(edasAppId_, edasAppId) };


    // edasAppName Field Functions 
    bool hasEdasAppName() const { return this->edasAppName_ != nullptr;};
    void deleteEdasAppName() { this->edasAppName_ = nullptr;};
    inline string edasAppName() const { DARABONBA_PTR_GET_DEFAULT(edasAppName_, "") };
    inline GetServiceListPageResponseBodyDataContent& setEdasAppName(string edasAppName) { DARABONBA_PTR_SET_VALUE(edasAppName_, edasAppName) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline GetServiceListPageResponseBodyDataContent& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // instanceNum Field Functions 
    bool hasInstanceNum() const { return this->instanceNum_ != nullptr;};
    void deleteInstanceNum() { this->instanceNum_ = nullptr;};
    inline int32_t instanceNum() const { DARABONBA_PTR_GET_DEFAULT(instanceNum_, 0) };
    inline GetServiceListPageResponseBodyDataContent& setInstanceNum(int32_t instanceNum) { DARABONBA_PTR_SET_VALUE(instanceNum_, instanceNum) };


    // registerType Field Functions 
    bool hasRegisterType() const { return this->registerType_ != nullptr;};
    void deleteRegisterType() { this->registerType_ = nullptr;};
    inline string registerType() const { DARABONBA_PTR_GET_DEFAULT(registerType_, "") };
    inline GetServiceListPageResponseBodyDataContent& setRegisterType(string registerType) { DARABONBA_PTR_SET_VALUE(registerType_, registerType) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string serviceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceListPageResponseBodyDataContent& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline GetServiceListPageResponseBodyDataContent& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetServiceListPageResponseBodyDataContent& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> edasAppId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> edasAppName_ = nullptr;
    // The service group.
    std::shared_ptr<string> group_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> instanceNum_ = nullptr;
    // The type of the service registry.
    std::shared_ptr<string> registerType_ = nullptr;
    // The ID of the service.
    std::shared_ptr<string> serviceId_ = nullptr;
    // The name of the service.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The version number.
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
