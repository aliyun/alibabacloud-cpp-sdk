// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGEDASCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKENDINFORESPONSEBODYBACKENDINFOBACKENDMODELSBACKENDCONFIGEDASCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EdasAppId, edasAppId_);
      DARABONBA_PTR_TO_JSON(MicroserviceNamespace, microserviceNamespace_);
      DARABONBA_PTR_TO_JSON(MicroserviceNamespaceId, microserviceNamespaceId_);
      DARABONBA_PTR_TO_JSON(MicroserviceNamespaceName, microserviceNamespaceName_);
      DARABONBA_PTR_TO_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_TO_JSON(RegistryType, registryType_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EdasAppId, edasAppId_);
      DARABONBA_PTR_FROM_JSON(MicroserviceNamespace, microserviceNamespace_);
      DARABONBA_PTR_FROM_JSON(MicroserviceNamespaceId, microserviceNamespaceId_);
      DARABONBA_PTR_FROM_JSON(MicroserviceNamespaceName, microserviceNamespaceName_);
      DARABONBA_PTR_FROM_JSON(MseInstanceId, mseInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegistryType, registryType_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig &&) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig() = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& operator=(const DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig &) = default ;
    DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& operator=(DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->edasAppId_ == nullptr
        && return this->microserviceNamespace_ == nullptr && return this->microserviceNamespaceId_ == nullptr && return this->microserviceNamespaceName_ == nullptr && return this->mseInstanceId_ == nullptr && return this->registryType_ == nullptr
        && return this->serviceName_ == nullptr; };
    // edasAppId Field Functions 
    bool hasEdasAppId() const { return this->edasAppId_ != nullptr;};
    void deleteEdasAppId() { this->edasAppId_ = nullptr;};
    inline string edasAppId() const { DARABONBA_PTR_GET_DEFAULT(edasAppId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& setEdasAppId(string edasAppId) { DARABONBA_PTR_SET_VALUE(edasAppId_, edasAppId) };


    // microserviceNamespace Field Functions 
    bool hasMicroserviceNamespace() const { return this->microserviceNamespace_ != nullptr;};
    void deleteMicroserviceNamespace() { this->microserviceNamespace_ = nullptr;};
    inline string microserviceNamespace() const { DARABONBA_PTR_GET_DEFAULT(microserviceNamespace_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& setMicroserviceNamespace(string microserviceNamespace) { DARABONBA_PTR_SET_VALUE(microserviceNamespace_, microserviceNamespace) };


    // microserviceNamespaceId Field Functions 
    bool hasMicroserviceNamespaceId() const { return this->microserviceNamespaceId_ != nullptr;};
    void deleteMicroserviceNamespaceId() { this->microserviceNamespaceId_ = nullptr;};
    inline string microserviceNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(microserviceNamespaceId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& setMicroserviceNamespaceId(string microserviceNamespaceId) { DARABONBA_PTR_SET_VALUE(microserviceNamespaceId_, microserviceNamespaceId) };


    // microserviceNamespaceName Field Functions 
    bool hasMicroserviceNamespaceName() const { return this->microserviceNamespaceName_ != nullptr;};
    void deleteMicroserviceNamespaceName() { this->microserviceNamespaceName_ = nullptr;};
    inline string microserviceNamespaceName() const { DARABONBA_PTR_GET_DEFAULT(microserviceNamespaceName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& setMicroserviceNamespaceName(string microserviceNamespaceName) { DARABONBA_PTR_SET_VALUE(microserviceNamespaceName_, microserviceNamespaceName) };


    // mseInstanceId Field Functions 
    bool hasMseInstanceId() const { return this->mseInstanceId_ != nullptr;};
    void deleteMseInstanceId() { this->mseInstanceId_ = nullptr;};
    inline string mseInstanceId() const { DARABONBA_PTR_GET_DEFAULT(mseInstanceId_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& setMseInstanceId(string mseInstanceId) { DARABONBA_PTR_SET_VALUE(mseInstanceId_, mseInstanceId) };


    // registryType Field Functions 
    bool hasRegistryType() const { return this->registryType_ != nullptr;};
    void deleteRegistryType() { this->registryType_ = nullptr;};
    inline string registryType() const { DARABONBA_PTR_GET_DEFAULT(registryType_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& setRegistryType(string registryType) { DARABONBA_PTR_SET_VALUE(registryType_, registryType) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DescribeBackendInfoResponseBodyBackendInfoBackendModelsBackendConfigEdasConfig& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The EDAS application ID.
    std::shared_ptr<string> edasAppId_ = nullptr;
    // The ID of the microservices namespace in EDAS.
    std::shared_ptr<string> microserviceNamespace_ = nullptr;
    // The ID of the microservices namespace in EDAS.
    std::shared_ptr<string> microserviceNamespaceId_ = nullptr;
    // The name of the microservices namespace in EDAS.
    std::shared_ptr<string> microserviceNamespaceName_ = nullptr;
    // The MSE instance ID.
    std::shared_ptr<string> mseInstanceId_ = nullptr;
    // The registration type.
    std::shared_ptr<string> registryType_ = nullptr;
    // The service name.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
