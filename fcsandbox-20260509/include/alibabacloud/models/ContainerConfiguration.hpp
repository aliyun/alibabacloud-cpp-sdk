// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONTAINERCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_CONTAINERCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class ContainerConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ContainerConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_TO_JSON(image, image_);
      DARABONBA_PTR_TO_JSON(registryCredential, registryCredential_);
    };
    friend void from_json(const Darabonba::Json& j, ContainerConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(acrInstanceId, acrInstanceId_);
      DARABONBA_PTR_FROM_JSON(image, image_);
      DARABONBA_PTR_FROM_JSON(registryCredential, registryCredential_);
    };
    ContainerConfiguration() = default ;
    ContainerConfiguration(const ContainerConfiguration &) = default ;
    ContainerConfiguration(ContainerConfiguration &&) = default ;
    ContainerConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ContainerConfiguration() = default ;
    ContainerConfiguration& operator=(const ContainerConfiguration &) = default ;
    ContainerConfiguration& operator=(ContainerConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RegistryCredential : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RegistryCredential& obj) { 
        DARABONBA_PTR_TO_JSON(password, password_);
        DARABONBA_PTR_TO_JSON(username, username_);
      };
      friend void from_json(const Darabonba::Json& j, RegistryCredential& obj) { 
        DARABONBA_PTR_FROM_JSON(password, password_);
        DARABONBA_PTR_FROM_JSON(username, username_);
      };
      RegistryCredential() = default ;
      RegistryCredential(const RegistryCredential &) = default ;
      RegistryCredential(RegistryCredential &&) = default ;
      RegistryCredential(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RegistryCredential() = default ;
      RegistryCredential& operator=(const RegistryCredential &) = default ;
      RegistryCredential& operator=(RegistryCredential &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->password_ == nullptr
        && this->username_ == nullptr; };
      // password Field Functions 
      bool hasPassword() const { return this->password_ != nullptr;};
      void deletePassword() { this->password_ = nullptr;};
      inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
      inline RegistryCredential& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


      // username Field Functions 
      bool hasUsername() const { return this->username_ != nullptr;};
      void deleteUsername() { this->username_ = nullptr;};
      inline string getUsername() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
      inline RegistryCredential& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


    protected:
      shared_ptr<string> password_ {};
      shared_ptr<string> username_ {};
    };

    virtual bool empty() const override { return this->acrInstanceId_ == nullptr
        && this->image_ == nullptr && this->registryCredential_ == nullptr; };
    // acrInstanceId Field Functions 
    bool hasAcrInstanceId() const { return this->acrInstanceId_ != nullptr;};
    void deleteAcrInstanceId() { this->acrInstanceId_ = nullptr;};
    inline string getAcrInstanceId() const { DARABONBA_PTR_GET_DEFAULT(acrInstanceId_, "") };
    inline ContainerConfiguration& setAcrInstanceId(string acrInstanceId) { DARABONBA_PTR_SET_VALUE(acrInstanceId_, acrInstanceId) };


    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline string getImage() const { DARABONBA_PTR_GET_DEFAULT(image_, "") };
    inline ContainerConfiguration& setImage(string image) { DARABONBA_PTR_SET_VALUE(image_, image) };


    // registryCredential Field Functions 
    bool hasRegistryCredential() const { return this->registryCredential_ != nullptr;};
    void deleteRegistryCredential() { this->registryCredential_ = nullptr;};
    inline const ContainerConfiguration::RegistryCredential & getRegistryCredential() const { DARABONBA_PTR_GET_CONST(registryCredential_, ContainerConfiguration::RegistryCredential) };
    inline ContainerConfiguration::RegistryCredential getRegistryCredential() { DARABONBA_PTR_GET(registryCredential_, ContainerConfiguration::RegistryCredential) };
    inline ContainerConfiguration& setRegistryCredential(const ContainerConfiguration::RegistryCredential & registryCredential) { DARABONBA_PTR_SET_VALUE(registryCredential_, registryCredential) };
    inline ContainerConfiguration& setRegistryCredential(ContainerConfiguration::RegistryCredential && registryCredential) { DARABONBA_PTR_SET_RVALUE(registryCredential_, registryCredential) };


  protected:
    shared_ptr<string> acrInstanceId_ {};
    shared_ptr<string> image_ {};
    shared_ptr<ContainerConfiguration::RegistryCredential> registryCredential_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
