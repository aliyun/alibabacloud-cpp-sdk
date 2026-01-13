// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETIMAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetImageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetImageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetImageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    GetImageResponseBody() = default ;
    GetImageResponseBody(const GetImageResponseBody &) = default ;
    GetImageResponseBody(GetImageResponseBody &&) = default ;
    GetImageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetImageResponseBody() = default ;
    GetImageResponseBody& operator=(const GetImageResponseBody &) = default ;
    GetImageResponseBody& operator=(GetImageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Image : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Image& obj) { 
        DARABONBA_PTR_TO_JSON(AdditionalRegionsInfo, additionalRegionsInfo_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(ContainerImageSpec, containerImageSpec_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DocumentInfo, documentInfo_);
        DARABONBA_PTR_TO_JSON(ImageType, imageType_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Size, size_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(VMImageSpec, VMImageSpec_);
        DARABONBA_PTR_TO_JSON(Version, version_);
      };
      friend void from_json(const Darabonba::Json& j, Image& obj) { 
        DARABONBA_PTR_FROM_JSON(AdditionalRegionsInfo, additionalRegionsInfo_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(ContainerImageSpec, containerImageSpec_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DocumentInfo, documentInfo_);
        DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Size, size_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(VMImageSpec, VMImageSpec_);
        DARABONBA_PTR_FROM_JSON(Version, version_);
      };
      Image() = default ;
      Image(const Image &) = default ;
      Image(Image &&) = default ;
      Image(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Image() = default ;
      Image& operator=(const Image &) = default ;
      Image& operator=(Image &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VMImageSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VMImageSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Architecture, architecture_);
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(OsTag, osTag_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
        };
        friend void from_json(const Darabonba::Json& j, VMImageSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
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
        virtual bool empty() const override { return this->architecture_ == nullptr
        && this->imageId_ == nullptr && this->osTag_ == nullptr && this->platform_ == nullptr; };
        // architecture Field Functions 
        bool hasArchitecture() const { return this->architecture_ != nullptr;};
        void deleteArchitecture() { this->architecture_ = nullptr;};
        inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
        inline VMImageSpec& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline VMImageSpec& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // osTag Field Functions 
        bool hasOsTag() const { return this->osTag_ != nullptr;};
        void deleteOsTag() { this->osTag_ = nullptr;};
        inline string getOsTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
        inline VMImageSpec& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline VMImageSpec& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      protected:
        // The type of the architecture.
        shared_ptr<string> architecture_ {};
        // The image ID.
        shared_ptr<string> imageId_ {};
        // The ID of the specific OS version.
        shared_ptr<string> osTag_ {};
        // The type of the platform.
        shared_ptr<string> platform_ {};
      };

      class DocumentInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DocumentInfo& obj) { 
          DARABONBA_PTR_TO_JSON(Document, document_);
          DARABONBA_PTR_TO_JSON(DocumentId, documentId_);
          DARABONBA_PTR_TO_JSON(EncodingMode, encodingMode_);
        };
        friend void from_json(const Darabonba::Json& j, DocumentInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(Document, document_);
          DARABONBA_PTR_FROM_JSON(DocumentId, documentId_);
          DARABONBA_PTR_FROM_JSON(EncodingMode, encodingMode_);
        };
        DocumentInfo() = default ;
        DocumentInfo(const DocumentInfo &) = default ;
        DocumentInfo(DocumentInfo &&) = default ;
        DocumentInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DocumentInfo() = default ;
        DocumentInfo& operator=(const DocumentInfo &) = default ;
        DocumentInfo& operator=(DocumentInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->document_ == nullptr
        && this->documentId_ == nullptr && this->encodingMode_ == nullptr; };
        // document Field Functions 
        bool hasDocument() const { return this->document_ != nullptr;};
        void deleteDocument() { this->document_ = nullptr;};
        inline string getDocument() const { DARABONBA_PTR_GET_DEFAULT(document_, "") };
        inline DocumentInfo& setDocument(string document) { DARABONBA_PTR_SET_VALUE(document_, document) };


        // documentId Field Functions 
        bool hasDocumentId() const { return this->documentId_ != nullptr;};
        void deleteDocumentId() { this->documentId_ = nullptr;};
        inline string getDocumentId() const { DARABONBA_PTR_GET_DEFAULT(documentId_, "") };
        inline DocumentInfo& setDocumentId(string documentId) { DARABONBA_PTR_SET_VALUE(documentId_, documentId) };


        // encodingMode Field Functions 
        bool hasEncodingMode() const { return this->encodingMode_ != nullptr;};
        void deleteEncodingMode() { this->encodingMode_ = nullptr;};
        inline string getEncodingMode() const { DARABONBA_PTR_GET_DEFAULT(encodingMode_, "") };
        inline DocumentInfo& setEncodingMode(string encodingMode) { DARABONBA_PTR_SET_VALUE(encodingMode_, encodingMode) };


      protected:
        shared_ptr<string> document_ {};
        shared_ptr<string> documentId_ {};
        shared_ptr<string> encodingMode_ {};
      };

      class ContainerImageSpec : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContainerImageSpec& obj) { 
          DARABONBA_PTR_TO_JSON(Architecture, architecture_);
          DARABONBA_PTR_TO_JSON(IsACREnterprise, isACREnterprise_);
          DARABONBA_PTR_TO_JSON(IsACRRegistry, isACRRegistry_);
          DARABONBA_PTR_TO_JSON(OsTag, osTag_);
          DARABONBA_PTR_TO_JSON(Platform, platform_);
          DARABONBA_PTR_TO_JSON(RegistryCredential, registryCredential_);
          DARABONBA_PTR_TO_JSON(RegistryCriId, registryCriId_);
          DARABONBA_PTR_TO_JSON(RegistryUrl, registryUrl_);
        };
        friend void from_json(const Darabonba::Json& j, ContainerImageSpec& obj) { 
          DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
          DARABONBA_PTR_FROM_JSON(IsACREnterprise, isACREnterprise_);
          DARABONBA_PTR_FROM_JSON(IsACRRegistry, isACRRegistry_);
          DARABONBA_PTR_FROM_JSON(OsTag, osTag_);
          DARABONBA_PTR_FROM_JSON(Platform, platform_);
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

        virtual bool empty() const override { return this->architecture_ == nullptr
        && this->isACREnterprise_ == nullptr && this->isACRRegistry_ == nullptr && this->osTag_ == nullptr && this->platform_ == nullptr && this->registryCredential_ == nullptr
        && this->registryCriId_ == nullptr && this->registryUrl_ == nullptr; };
        // architecture Field Functions 
        bool hasArchitecture() const { return this->architecture_ != nullptr;};
        void deleteArchitecture() { this->architecture_ = nullptr;};
        inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
        inline ContainerImageSpec& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


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


        // osTag Field Functions 
        bool hasOsTag() const { return this->osTag_ != nullptr;};
        void deleteOsTag() { this->osTag_ = nullptr;};
        inline string getOsTag() const { DARABONBA_PTR_GET_DEFAULT(osTag_, "") };
        inline ContainerImageSpec& setOsTag(string osTag) { DARABONBA_PTR_SET_VALUE(osTag_, osTag) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline ContainerImageSpec& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


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
        shared_ptr<string> architecture_ {};
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
        shared_ptr<string> osTag_ {};
        shared_ptr<string> platform_ {};
        // The authentication of the private image repository.
        shared_ptr<ContainerImageSpec::RegistryCredential> registryCredential_ {};
        // The ID of the Container Registry Enterprise Edition image repository.
        shared_ptr<string> registryCriId_ {};
        // The endpoint of the container image.
        shared_ptr<string> registryUrl_ {};
      };

      class AdditionalRegionsInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AdditionalRegionsInfo& obj) { 
          DARABONBA_PTR_TO_JSON(ImageId, imageId_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, AdditionalRegionsInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        AdditionalRegionsInfo() = default ;
        AdditionalRegionsInfo(const AdditionalRegionsInfo &) = default ;
        AdditionalRegionsInfo(AdditionalRegionsInfo &&) = default ;
        AdditionalRegionsInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AdditionalRegionsInfo() = default ;
        AdditionalRegionsInfo& operator=(const AdditionalRegionsInfo &) = default ;
        AdditionalRegionsInfo& operator=(AdditionalRegionsInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->regionId_ == nullptr && this->status_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline AdditionalRegionsInfo& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline AdditionalRegionsInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline AdditionalRegionsInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> imageId_ {};
        shared_ptr<string> regionId_ {};
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->additionalRegionsInfo_ == nullptr
        && this->appId_ == nullptr && this->containerImageSpec_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->documentInfo_ == nullptr
        && this->imageType_ == nullptr && this->name_ == nullptr && this->size_ == nullptr && this->status_ == nullptr && this->VMImageSpec_ == nullptr
        && this->version_ == nullptr; };
      // additionalRegionsInfo Field Functions 
      bool hasAdditionalRegionsInfo() const { return this->additionalRegionsInfo_ != nullptr;};
      void deleteAdditionalRegionsInfo() { this->additionalRegionsInfo_ = nullptr;};
      inline const vector<Image::AdditionalRegionsInfo> & getAdditionalRegionsInfo() const { DARABONBA_PTR_GET_CONST(additionalRegionsInfo_, vector<Image::AdditionalRegionsInfo>) };
      inline vector<Image::AdditionalRegionsInfo> getAdditionalRegionsInfo() { DARABONBA_PTR_GET(additionalRegionsInfo_, vector<Image::AdditionalRegionsInfo>) };
      inline Image& setAdditionalRegionsInfo(const vector<Image::AdditionalRegionsInfo> & additionalRegionsInfo) { DARABONBA_PTR_SET_VALUE(additionalRegionsInfo_, additionalRegionsInfo) };
      inline Image& setAdditionalRegionsInfo(vector<Image::AdditionalRegionsInfo> && additionalRegionsInfo) { DARABONBA_PTR_SET_RVALUE(additionalRegionsInfo_, additionalRegionsInfo) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Image& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // containerImageSpec Field Functions 
      bool hasContainerImageSpec() const { return this->containerImageSpec_ != nullptr;};
      void deleteContainerImageSpec() { this->containerImageSpec_ = nullptr;};
      inline const Image::ContainerImageSpec & getContainerImageSpec() const { DARABONBA_PTR_GET_CONST(containerImageSpec_, Image::ContainerImageSpec) };
      inline Image::ContainerImageSpec getContainerImageSpec() { DARABONBA_PTR_GET(containerImageSpec_, Image::ContainerImageSpec) };
      inline Image& setContainerImageSpec(const Image::ContainerImageSpec & containerImageSpec) { DARABONBA_PTR_SET_VALUE(containerImageSpec_, containerImageSpec) };
      inline Image& setContainerImageSpec(Image::ContainerImageSpec && containerImageSpec) { DARABONBA_PTR_SET_RVALUE(containerImageSpec_, containerImageSpec) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Image& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Image& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // documentInfo Field Functions 
      bool hasDocumentInfo() const { return this->documentInfo_ != nullptr;};
      void deleteDocumentInfo() { this->documentInfo_ = nullptr;};
      inline const Image::DocumentInfo & getDocumentInfo() const { DARABONBA_PTR_GET_CONST(documentInfo_, Image::DocumentInfo) };
      inline Image::DocumentInfo getDocumentInfo() { DARABONBA_PTR_GET(documentInfo_, Image::DocumentInfo) };
      inline Image& setDocumentInfo(const Image::DocumentInfo & documentInfo) { DARABONBA_PTR_SET_VALUE(documentInfo_, documentInfo) };
      inline Image& setDocumentInfo(Image::DocumentInfo && documentInfo) { DARABONBA_PTR_SET_RVALUE(documentInfo_, documentInfo) };


      // imageType Field Functions 
      bool hasImageType() const { return this->imageType_ != nullptr;};
      void deleteImageType() { this->imageType_ = nullptr;};
      inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
      inline Image& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Image& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // size Field Functions 
      bool hasSize() const { return this->size_ != nullptr;};
      void deleteSize() { this->size_ = nullptr;};
      inline string getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
      inline Image& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Image& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // VMImageSpec Field Functions 
      bool hasVMImageSpec() const { return this->VMImageSpec_ != nullptr;};
      void deleteVMImageSpec() { this->VMImageSpec_ = nullptr;};
      inline const Image::VMImageSpec & getVMImageSpec() const { DARABONBA_PTR_GET_CONST(VMImageSpec_, Image::VMImageSpec) };
      inline Image::VMImageSpec getVMImageSpec() { DARABONBA_PTR_GET(VMImageSpec_, Image::VMImageSpec) };
      inline Image& setVMImageSpec(const Image::VMImageSpec & vMImageSpec) { DARABONBA_PTR_SET_VALUE(VMImageSpec_, vMImageSpec) };
      inline Image& setVMImageSpec(Image::VMImageSpec && vMImageSpec) { DARABONBA_PTR_SET_RVALUE(VMImageSpec_, vMImageSpec) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Image& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    protected:
      shared_ptr<vector<Image::AdditionalRegionsInfo>> additionalRegionsInfo_ {};
      shared_ptr<string> appId_ {};
      // The configuration details of the container image.
      shared_ptr<Image::ContainerImageSpec> containerImageSpec_ {};
      // The time when the image was created.
      shared_ptr<string> createTime_ {};
      // The description of the image.
      shared_ptr<string> description_ {};
      shared_ptr<Image::DocumentInfo> documentInfo_ {};
      // The type of the image.
      // 
      // This parameter is required.
      shared_ptr<string> imageType_ {};
      // The name of the image.
      shared_ptr<string> name_ {};
      // The size of the image. Unit: GiB.
      shared_ptr<string> size_ {};
      shared_ptr<string> status_ {};
      // The configuration details of the virtual machine image.
      shared_ptr<Image::VMImageSpec> VMImageSpec_ {};
      // The version.
      shared_ptr<string> version_ {};
    };

    virtual bool empty() const override { return this->image_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const GetImageResponseBody::Image & getImage() const { DARABONBA_PTR_GET_CONST(image_, GetImageResponseBody::Image) };
    inline GetImageResponseBody::Image getImage() { DARABONBA_PTR_GET(image_, GetImageResponseBody::Image) };
    inline GetImageResponseBody& setImage(const GetImageResponseBody::Image & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline GetImageResponseBody& setImage(GetImageResponseBody::Image && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetImageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetImageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetImageResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the image.
    shared_ptr<GetImageResponseBody::Image> image_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The task is successful.
    // *   false: The error occurred.
    shared_ptr<bool> success_ {};
    // The total amount of data in this request.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
