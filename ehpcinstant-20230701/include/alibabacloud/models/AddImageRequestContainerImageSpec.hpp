// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEREQUESTCONTAINERIMAGESPEC_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEREQUESTCONTAINERIMAGESPEC_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddImageRequestContainerImageSpecRegistryCredential.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class AddImageRequestContainerImageSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageRequestContainerImageSpec& obj) { 
      DARABONBA_PTR_TO_JSON(IsACREnterprise, isACREnterprise_);
      DARABONBA_PTR_TO_JSON(IsACRRegistry, isACRRegistry_);
      DARABONBA_PTR_TO_JSON(RegistryCredential, registryCredential_);
      DARABONBA_PTR_TO_JSON(RegistryCriId, registryCriId_);
      DARABONBA_PTR_TO_JSON(RegistryUrl, registryUrl_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageRequestContainerImageSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(IsACREnterprise, isACREnterprise_);
      DARABONBA_PTR_FROM_JSON(IsACRRegistry, isACRRegistry_);
      DARABONBA_PTR_FROM_JSON(RegistryCredential, registryCredential_);
      DARABONBA_PTR_FROM_JSON(RegistryCriId, registryCriId_);
      DARABONBA_PTR_FROM_JSON(RegistryUrl, registryUrl_);
    };
    AddImageRequestContainerImageSpec() = default ;
    AddImageRequestContainerImageSpec(const AddImageRequestContainerImageSpec &) = default ;
    AddImageRequestContainerImageSpec(AddImageRequestContainerImageSpec &&) = default ;
    AddImageRequestContainerImageSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageRequestContainerImageSpec() = default ;
    AddImageRequestContainerImageSpec& operator=(const AddImageRequestContainerImageSpec &) = default ;
    AddImageRequestContainerImageSpec& operator=(AddImageRequestContainerImageSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->isACREnterprise_ != nullptr
        && this->isACRRegistry_ != nullptr && this->registryCredential_ != nullptr && this->registryCriId_ != nullptr && this->registryUrl_ != nullptr; };
    // isACREnterprise Field Functions 
    bool hasIsACREnterprise() const { return this->isACREnterprise_ != nullptr;};
    void deleteIsACREnterprise() { this->isACREnterprise_ = nullptr;};
    inline bool isACREnterprise() const { DARABONBA_PTR_GET_DEFAULT(isACREnterprise_, false) };
    inline AddImageRequestContainerImageSpec& setIsACREnterprise(bool isACREnterprise) { DARABONBA_PTR_SET_VALUE(isACREnterprise_, isACREnterprise) };


    // isACRRegistry Field Functions 
    bool hasIsACRRegistry() const { return this->isACRRegistry_ != nullptr;};
    void deleteIsACRRegistry() { this->isACRRegistry_ = nullptr;};
    inline bool isACRRegistry() const { DARABONBA_PTR_GET_DEFAULT(isACRRegistry_, false) };
    inline AddImageRequestContainerImageSpec& setIsACRRegistry(bool isACRRegistry) { DARABONBA_PTR_SET_VALUE(isACRRegistry_, isACRRegistry) };


    // registryCredential Field Functions 
    bool hasRegistryCredential() const { return this->registryCredential_ != nullptr;};
    void deleteRegistryCredential() { this->registryCredential_ = nullptr;};
    inline const Models::AddImageRequestContainerImageSpecRegistryCredential & registryCredential() const { DARABONBA_PTR_GET_CONST(registryCredential_, Models::AddImageRequestContainerImageSpecRegistryCredential) };
    inline Models::AddImageRequestContainerImageSpecRegistryCredential registryCredential() { DARABONBA_PTR_GET(registryCredential_, Models::AddImageRequestContainerImageSpecRegistryCredential) };
    inline AddImageRequestContainerImageSpec& setRegistryCredential(const Models::AddImageRequestContainerImageSpecRegistryCredential & registryCredential) { DARABONBA_PTR_SET_VALUE(registryCredential_, registryCredential) };
    inline AddImageRequestContainerImageSpec& setRegistryCredential(Models::AddImageRequestContainerImageSpecRegistryCredential && registryCredential) { DARABONBA_PTR_SET_RVALUE(registryCredential_, registryCredential) };


    // registryCriId Field Functions 
    bool hasRegistryCriId() const { return this->registryCriId_ != nullptr;};
    void deleteRegistryCriId() { this->registryCriId_ = nullptr;};
    inline string registryCriId() const { DARABONBA_PTR_GET_DEFAULT(registryCriId_, "") };
    inline AddImageRequestContainerImageSpec& setRegistryCriId(string registryCriId) { DARABONBA_PTR_SET_VALUE(registryCriId_, registryCriId) };


    // registryUrl Field Functions 
    bool hasRegistryUrl() const { return this->registryUrl_ != nullptr;};
    void deleteRegistryUrl() { this->registryUrl_ = nullptr;};
    inline string registryUrl() const { DARABONBA_PTR_GET_DEFAULT(registryUrl_, "") };
    inline AddImageRequestContainerImageSpec& setRegistryUrl(string registryUrl) { DARABONBA_PTR_SET_VALUE(registryUrl_, registryUrl) };


  protected:
    std::shared_ptr<bool> isACREnterprise_ = nullptr;
    std::shared_ptr<bool> isACRRegistry_ = nullptr;
    std::shared_ptr<Models::AddImageRequestContainerImageSpecRegistryCredential> registryCredential_ = nullptr;
    std::shared_ptr<string> registryCriId_ = nullptr;
    std::shared_ptr<string> registryUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
