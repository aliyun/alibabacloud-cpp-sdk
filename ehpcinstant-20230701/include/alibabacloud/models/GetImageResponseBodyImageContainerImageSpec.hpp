// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGECONTAINERIMAGESPEC_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODYIMAGECONTAINERIMAGESPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetImageResponseBodyImageContainerImageSpecRegistryCredential.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageResponseBodyImageContainerImageSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBodyImageContainerImageSpec& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(IsACREnterprise, isACREnterprise_);
      DARABONBA_PTR_TO_JSON(IsACRRegistry, isACRRegistry_);
      DARABONBA_PTR_TO_JSON(OsTag, osTag_);
      DARABONBA_PTR_TO_JSON(Platform, platform_);
      DARABONBA_PTR_TO_JSON(RegistryCredential, registryCredential_);
      DARABONBA_PTR_TO_JSON(RegistryCriId, registryCriId_);
      DARABONBA_PTR_TO_JSON(RegistryUrl, registryUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBodyImageContainerImageSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(IsACREnterprise, isACREnterprise_);
      DARABONBA_PTR_FROM_JSON(IsACRRegistry, isACRRegistry_);
      DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
      DARABONBA_PTR_FROM_JSON(Platform, platform_);
      DARABONBA_PTR_FROM_JSON(RegistryCredential, registryCredential_);
      DARABONBA_PTR_FROM_JSON(RegistryCriId, registryCriId_);
      DARABONBA_PTR_FROM_JSON(RegistryUrl, registryUrl_);
    };
    GetImageResponseBodyImageContainerImageSpec() = default ;
    GetImageResponseBodyImageContainerImageSpec(const GetImageResponseBodyImageContainerImageSpec &) = default ;
    GetImageResponseBodyImageContainerImageSpec(GetImageResponseBodyImageContainerImageSpec &&) = default ;
    GetImageResponseBodyImageContainerImageSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBodyImageContainerImageSpec() = default ;
    GetImageResponseBodyImageContainerImageSpec& operator=(const GetImageResponseBodyImageContainerImageSpec &) = default ;
    GetImageResponseBodyImageContainerImageSpec& operator=(GetImageResponseBodyImageContainerImageSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && return this->isACREnterprise_ == nullptr && return this->isACRRegistry_ == nullptr && return this->osTag_ == nullptr && return this->platform_ == nullptr && return this->registryCredential_ == nullptr
        && return this->registryCriId_ == nullptr && return this->registryUrl_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline string architecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
    inline GetImageResponseBodyImageContainerImageSpec& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


    // isACREnterprise Field Functions 
    bool hasIsACREnterprise() const { return this->isACREnterprise_ != nullptr;};
    void deleteIsACREnterprise() { this->isACREnterprise_ = nullptr;};
    inline bool isACREnterprise() const { DARABONBA_PTR_GET_DEFAULT(isACREnterprise_, false) };
    inline GetImageResponseBodyImageContainerImageSpec& setIsACREnterprise(bool isACREnterprise) { DARABONBA_PTR_SET_VALUE(isACREnterprise_, isACREnterprise) };


    // isACRRegistry Field Functions 
    bool hasIsACRRegistry() const { return this->isACRRegistry_ != nullptr;};
    void deleteIsACRRegistry() { this->isACRRegistry_ = nullptr;};
    inline bool isACRRegistry() const { DARABONBA_PTR_GET_DEFAULT(isACRRegistry_, false) };
    inline GetImageResponseBodyImageContainerImageSpec& setIsACRRegistry(bool isACRRegistry) { DARABONBA_PTR_SET_VALUE(isACRRegistry_, isACRRegistry) };


    // osTag Field Functions 
    bool hasOsTag() const { return this->osTag_ != nullptr;};
    void deleteOsTag() { this->osTag_ = nullptr;};
    inline string osTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
    inline GetImageResponseBodyImageContainerImageSpec& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string platform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline GetImageResponseBodyImageContainerImageSpec& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // registryCredential Field Functions 
    bool hasRegistryCredential() const { return this->registryCredential_ != nullptr;};
    void deleteRegistryCredential() { this->registryCredential_ = nullptr;};
    inline const Models::GetImageResponseBodyImageContainerImageSpecRegistryCredential & registryCredential() const { DARABONBA_PTR_GET_CONST(registryCredential_, Models::GetImageResponseBodyImageContainerImageSpecRegistryCredential) };
    inline Models::GetImageResponseBodyImageContainerImageSpecRegistryCredential registryCredential() { DARABONBA_PTR_GET(registryCredential_, Models::GetImageResponseBodyImageContainerImageSpecRegistryCredential) };
    inline GetImageResponseBodyImageContainerImageSpec& setRegistryCredential(const Models::GetImageResponseBodyImageContainerImageSpecRegistryCredential & registryCredential) { DARABONBA_PTR_SET_VALUE(registryCredential_, registryCredential) };
    inline GetImageResponseBodyImageContainerImageSpec& setRegistryCredential(Models::GetImageResponseBodyImageContainerImageSpecRegistryCredential && registryCredential) { DARABONBA_PTR_SET_RVALUE(registryCredential_, registryCredential) };


    // registryCriId Field Functions 
    bool hasRegistryCriId() const { return this->registryCriId_ != nullptr;};
    void deleteRegistryCriId() { this->registryCriId_ = nullptr;};
    inline string registryCriId() const { DARABONBA_PTR_GET_DEFAULT(registryCriId_, "") };
    inline GetImageResponseBodyImageContainerImageSpec& setRegistryCriId(string registryCriId) { DARABONBA_PTR_SET_VALUE(registryCriId_, registryCriId) };


    // registryUrl Field Functions 
    bool hasRegistryUrl() const { return this->registryUrl_ != nullptr;};
    void deleteRegistryUrl() { this->registryUrl_ = nullptr;};
    inline string registryUrl() const { DARABONBA_PTR_GET_DEFAULT(registryUrl_, "") };
    inline GetImageResponseBodyImageContainerImageSpec& setRegistryUrl(string registryUrl) { DARABONBA_PTR_SET_VALUE(registryUrl_, registryUrl) };


  protected:
    std::shared_ptr<string> architecture_ = nullptr;
    // Whether the instance is an Alibaba Cloud image repository Enterprise Edition.
    // 
    // *   True
    // *   False
    std::shared_ptr<bool> isACREnterprise_ = nullptr;
    // Whether it is an Alibaba Cloud image repository.
    // 
    // *   True
    // *   False
    std::shared_ptr<bool> isACRRegistry_ = nullptr;
    std::shared_ptr<string> osTag_ = nullptr;
    std::shared_ptr<string> platform_ = nullptr;
    // The authentication of the private image repository.
    std::shared_ptr<Models::GetImageResponseBodyImageContainerImageSpecRegistryCredential> registryCredential_ = nullptr;
    // The ID of the Container Registry Enterprise Edition image repository.
    std::shared_ptr<string> registryCriId_ = nullptr;
    // The endpoint of the container image.
    std::shared_ptr<string> registryUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
