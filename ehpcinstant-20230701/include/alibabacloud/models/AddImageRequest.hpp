// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class AddImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerImageSpec, containerImageSpec_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VMImageSpec, VMImageSpec_);
    };
    friend void from_json(const Darabonba::Json& j, AddImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerImageSpec, containerImageSpec_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VMImageSpec, VMImageSpec_);
    };
    AddImageRequest() = default ;
    AddImageRequest(const AddImageRequest &) = default ;
    AddImageRequest(AddImageRequest &&) = default ;
    AddImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddImageRequest() = default ;
    AddImageRequest& operator=(const AddImageRequest &) = default ;
    AddImageRequest& operator=(AddImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class VMImageSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const VMImageSpec& obj) { 
        DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      };
      friend void from_json(const Darabonba::Json& j, VMImageSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      };
      VMImageSpec() = default ;
      VMImageSpec(const VMImageSpec &) = default ;
      VMImageSpec(VMImageSpec &&) = default ;
      VMImageSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~VMImageSpec() = default ;
      VMImageSpec& operator=(const VMImageSpec &) = default ;
      VMImageSpec& operator=(VMImageSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->imageId_ == nullptr; };
      // imageId Field Functions 
      bool hasImageId() const { return this->imageId_ != nullptr;};
      void deleteImageId() { this->imageId_ = nullptr;};
      inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
      inline VMImageSpec& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    protected:
      // The image ID.
      shared_ptr<string> imageId_ {};
    };

    class ContainerImageSpec : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ContainerImageSpec& obj) { 
        DARABONBA_PTR_TO_JSON(IsACREnterprise, isACREnterprise_);
        DARABONBA_PTR_TO_JSON(IsACRRegistry, isACRRegistry_);
        DARABONBA_PTR_TO_JSON(RegistryCredential, registryCredential_);
        DARABONBA_PTR_TO_JSON(RegistryCriId, registryCriId_);
        DARABONBA_PTR_TO_JSON(RegistryUrl, registryUrl_);
      };
      friend void from_json(const Darabonba::Json& j, ContainerImageSpec& obj) { 
        DARABONBA_PTR_FROM_JSON(IsACREnterprise, isACREnterprise_);
        DARABONBA_PTR_FROM_JSON(IsACRRegistry, isACRRegistry_);
        DARABONBA_PTR_FROM_JSON(RegistryCredential, registryCredential_);
        DARABONBA_PTR_FROM_JSON(RegistryCriId, registryCriId_);
        DARABONBA_PTR_FROM_JSON(RegistryUrl, registryUrl_);
      };
      ContainerImageSpec() = default ;
      ContainerImageSpec(const ContainerImageSpec &) = default ;
      ContainerImageSpec(ContainerImageSpec &&) = default ;
      ContainerImageSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ContainerImageSpec() = default ;
      ContainerImageSpec& operator=(const ContainerImageSpec &) = default ;
      ContainerImageSpec& operator=(ContainerImageSpec &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RegistryCredential : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RegistryCredential& obj) { 
          DARABONBA_PTR_TO_JSON(Password, password_);
          DARABONBA_PTR_TO_JSON(Server, server_);
          DARABONBA_PTR_TO_JSON(UserName, userName_);
        };
        friend void from_json(const Darabonba::Json& j, RegistryCredential& obj) { 
          DARABONBA_PTR_FROM_JSON(Password, password_);
          DARABONBA_PTR_FROM_JSON(Server, server_);
          DARABONBA_PTR_FROM_JSON(UserName, userName_);
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
        && this->server_ == nullptr && this->userName_ == nullptr; };
        // password Field Functions 
        bool hasPassword() const { return this->password_ != nullptr;};
        void deletePassword() { this->password_ = nullptr;};
        inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
        inline RegistryCredential& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


        // server Field Functions 
        bool hasServer() const { return this->server_ != nullptr;};
        void deleteServer() { this->server_ = nullptr;};
        inline string getServer() const { DARABONBA_PTR_GET_DEFAULT(server_, "") };
        inline RegistryCredential& setServer(string server) { DARABONBA_PTR_SET_VALUE(server_, server) };


        // userName Field Functions 
        bool hasUserName() const { return this->userName_ != nullptr;};
        void deleteUserName() { this->userName_ = nullptr;};
        inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
        inline RegistryCredential& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


      protected:
        // The password of the logon user.
        shared_ptr<string> password_ {};
        // The registered address of the image repository.
        shared_ptr<string> server_ {};
        // The username of the logon user.
        shared_ptr<string> userName_ {};
      };

      virtual bool empty() const override { return this->isACREnterprise_ == nullptr
        && this->isACRRegistry_ == nullptr && this->registryCredential_ == nullptr && this->registryCriId_ == nullptr && this->registryUrl_ == nullptr; };
      // isACREnterprise Field Functions 
      bool hasIsACREnterprise() const { return this->isACREnterprise_ != nullptr;};
      void deleteIsACREnterprise() { this->isACREnterprise_ = nullptr;};
      inline bool getIsACREnterprise() const { DARABONBA_PTR_GET_DEFAULT(isACREnterprise_, false) };
      inline ContainerImageSpec& setIsACREnterprise(bool isACREnterprise) { DARABONBA_PTR_SET_VALUE(isACREnterprise_, isACREnterprise) };


      // isACRRegistry Field Functions 
      bool hasIsACRRegistry() const { return this->isACRRegistry_ != nullptr;};
      void deleteIsACRRegistry() { this->isACRRegistry_ = nullptr;};
      inline bool getIsACRRegistry() const { DARABONBA_PTR_GET_DEFAULT(isACRRegistry_, false) };
      inline ContainerImageSpec& setIsACRRegistry(bool isACRRegistry) { DARABONBA_PTR_SET_VALUE(isACRRegistry_, isACRRegistry) };


      // registryCredential Field Functions 
      bool hasRegistryCredential() const { return this->registryCredential_ != nullptr;};
      void deleteRegistryCredential() { this->registryCredential_ = nullptr;};
      inline const ContainerImageSpec::RegistryCredential & getRegistryCredential() const { DARABONBA_PTR_GET_CONST(registryCredential_, ContainerImageSpec::RegistryCredential) };
      inline ContainerImageSpec::RegistryCredential getRegistryCredential() { DARABONBA_PTR_GET(registryCredential_, ContainerImageSpec::RegistryCredential) };
      inline ContainerImageSpec& setRegistryCredential(const ContainerImageSpec::RegistryCredential & registryCredential) { DARABONBA_PTR_SET_VALUE(registryCredential_, registryCredential) };
      inline ContainerImageSpec& setRegistryCredential(ContainerImageSpec::RegistryCredential && registryCredential) { DARABONBA_PTR_SET_RVALUE(registryCredential_, registryCredential) };


      // registryCriId Field Functions 
      bool hasRegistryCriId() const { return this->registryCriId_ != nullptr;};
      void deleteRegistryCriId() { this->registryCriId_ = nullptr;};
      inline string getRegistryCriId() const { DARABONBA_PTR_GET_DEFAULT(registryCriId_, "") };
      inline ContainerImageSpec& setRegistryCriId(string registryCriId) { DARABONBA_PTR_SET_VALUE(registryCriId_, registryCriId) };


      // registryUrl Field Functions 
      bool hasRegistryUrl() const { return this->registryUrl_ != nullptr;};
      void deleteRegistryUrl() { this->registryUrl_ = nullptr;};
      inline string getRegistryUrl() const { DARABONBA_PTR_GET_DEFAULT(registryUrl_, "") };
      inline ContainerImageSpec& setRegistryUrl(string registryUrl) { DARABONBA_PTR_SET_VALUE(registryUrl_, registryUrl) };


    protected:
      // Whether the instance is an Alibaba Cloud image repository Enterprise Edition.
      // 
      // *   True
      // *   False
      shared_ptr<bool> isACREnterprise_ {};
      // Whether it is an Alibaba Cloud image repository.
      // 
      // *   True
      // *   False
      shared_ptr<bool> isACRRegistry_ {};
      // The authentication of the private image repository.
      shared_ptr<ContainerImageSpec::RegistryCredential> registryCredential_ {};
      // The ID of the Container Registry Enterprise Edition image repository.
      shared_ptr<string> registryCriId_ {};
      // The endpoint of the container image.
      shared_ptr<string> registryUrl_ {};
    };

    virtual bool empty() const override { return this->containerImageSpec_ == nullptr
        && this->description_ == nullptr && this->imageType_ == nullptr && this->imageVersion_ == nullptr && this->name_ == nullptr && this->VMImageSpec_ == nullptr; };
    // containerImageSpec Field Functions 
    bool hasContainerImageSpec() const { return this->containerImageSpec_ != nullptr;};
    void deleteContainerImageSpec() { this->containerImageSpec_ = nullptr;};
    inline const AddImageRequest::ContainerImageSpec & getContainerImageSpec() const { DARABONBA_PTR_GET_CONST(containerImageSpec_, AddImageRequest::ContainerImageSpec) };
    inline AddImageRequest::ContainerImageSpec getContainerImageSpec() { DARABONBA_PTR_GET(containerImageSpec_, AddImageRequest::ContainerImageSpec) };
    inline AddImageRequest& setContainerImageSpec(const AddImageRequest::ContainerImageSpec & containerImageSpec) { DARABONBA_PTR_SET_VALUE(containerImageSpec_, containerImageSpec) };
    inline AddImageRequest& setContainerImageSpec(AddImageRequest::ContainerImageSpec && containerImageSpec) { DARABONBA_PTR_SET_RVALUE(containerImageSpec_, containerImageSpec) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddImageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline AddImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string getImageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline AddImageRequest& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddImageRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // VMImageSpec Field Functions 
    bool hasVMImageSpec() const { return this->VMImageSpec_ != nullptr;};
    void deleteVMImageSpec() { this->VMImageSpec_ = nullptr;};
    inline const AddImageRequest::VMImageSpec & getVMImageSpec() const { DARABONBA_PTR_GET_CONST(VMImageSpec_, AddImageRequest::VMImageSpec) };
    inline AddImageRequest::VMImageSpec getVMImageSpec() { DARABONBA_PTR_GET(VMImageSpec_, AddImageRequest::VMImageSpec) };
    inline AddImageRequest& setVMImageSpec(const AddImageRequest::VMImageSpec & vMImageSpec) { DARABONBA_PTR_SET_VALUE(VMImageSpec_, vMImageSpec) };
    inline AddImageRequest& setVMImageSpec(AddImageRequest::VMImageSpec && vMImageSpec) { DARABONBA_PTR_SET_RVALUE(VMImageSpec_, vMImageSpec) };


  protected:
    // The configurations of the container image.
    shared_ptr<AddImageRequest::ContainerImageSpec> containerImageSpec_ {};
    // The description of the image.
    shared_ptr<string> description_ {};
    // The type of the images. Valid values:
    // 
    // *   VM: virtual machine image.
    // *   Container: the container image.
    shared_ptr<string> imageType_ {};
    // The version of the image.
    shared_ptr<string> imageVersion_ {};
    // The name of the custom image.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The image configuration of the virtual machine.
    shared_ptr<AddImageRequest::VMImageSpec> VMImageSpec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
