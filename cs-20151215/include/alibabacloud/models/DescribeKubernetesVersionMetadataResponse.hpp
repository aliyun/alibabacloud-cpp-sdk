// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Runtime.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeKubernetesVersionMetadataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKubernetesVersionMetadataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(statusCode, statusCode_);
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKubernetesVersionMetadataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(statusCode, statusCode_);
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    DescribeKubernetesVersionMetadataResponse() = default ;
    DescribeKubernetesVersionMetadataResponse(const DescribeKubernetesVersionMetadataResponse &) = default ;
    DescribeKubernetesVersionMetadataResponse(DescribeKubernetesVersionMetadataResponse &&) = default ;
    DescribeKubernetesVersionMetadataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKubernetesVersionMetadataResponse() = default ;
    DescribeKubernetesVersionMetadataResponse& operator=(const DescribeKubernetesVersionMetadataResponse &) = default ;
    DescribeKubernetesVersionMetadataResponse& operator=(DescribeKubernetesVersionMetadataResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Body : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Body& obj) { 
        DARABONBA_ANY_TO_JSON(capabilities, capabilities_);
        DARABONBA_PTR_TO_JSON(images, images_);
        DARABONBA_ANY_TO_JSON(meta_data, metaData_);
        DARABONBA_PTR_TO_JSON(runtimes, runtimes_);
        DARABONBA_PTR_TO_JSON(version, version_);
        DARABONBA_PTR_TO_JSON(release_date, releaseDate_);
        DARABONBA_PTR_TO_JSON(expiration_date, expirationDate_);
        DARABONBA_PTR_TO_JSON(creatable, creatable_);
        DARABONBA_PTR_TO_JSON(upgradable_versions, upgradableVersions_);
      };
      friend void from_json(const Darabonba::Json& j, Body& obj) { 
        DARABONBA_ANY_FROM_JSON(capabilities, capabilities_);
        DARABONBA_PTR_FROM_JSON(images, images_);
        DARABONBA_ANY_FROM_JSON(meta_data, metaData_);
        DARABONBA_PTR_FROM_JSON(runtimes, runtimes_);
        DARABONBA_PTR_FROM_JSON(version, version_);
        DARABONBA_PTR_FROM_JSON(release_date, releaseDate_);
        DARABONBA_PTR_FROM_JSON(expiration_date, expirationDate_);
        DARABONBA_PTR_FROM_JSON(creatable, creatable_);
        DARABONBA_PTR_FROM_JSON(upgradable_versions, upgradableVersions_);
      };
      Body() = default ;
      Body(const Body &) = default ;
      Body(Body &&) = default ;
      Body(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Body() = default ;
      Body& operator=(const Body &) = default ;
      Body& operator=(Body &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Images : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Images& obj) { 
          DARABONBA_PTR_TO_JSON(image_id, imageId_);
          DARABONBA_PTR_TO_JSON(image_name, imageName_);
          DARABONBA_PTR_TO_JSON(platform, platform_);
          DARABONBA_PTR_TO_JSON(os_version, osVersion_);
          DARABONBA_PTR_TO_JSON(image_type, imageType_);
          DARABONBA_PTR_TO_JSON(os_type, osType_);
          DARABONBA_PTR_TO_JSON(image_category, imageCategory_);
          DARABONBA_PTR_TO_JSON(architecture, architecture_);
        };
        friend void from_json(const Darabonba::Json& j, Images& obj) { 
          DARABONBA_PTR_FROM_JSON(image_id, imageId_);
          DARABONBA_PTR_FROM_JSON(image_name, imageName_);
          DARABONBA_PTR_FROM_JSON(platform, platform_);
          DARABONBA_PTR_FROM_JSON(os_version, osVersion_);
          DARABONBA_PTR_FROM_JSON(image_type, imageType_);
          DARABONBA_PTR_FROM_JSON(os_type, osType_);
          DARABONBA_PTR_FROM_JSON(image_category, imageCategory_);
          DARABONBA_PTR_FROM_JSON(architecture, architecture_);
        };
        Images() = default ;
        Images(const Images &) = default ;
        Images(Images &&) = default ;
        Images(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Images() = default ;
        Images& operator=(const Images &) = default ;
        Images& operator=(Images &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->imageId_ == nullptr
        && this->imageName_ == nullptr && this->platform_ == nullptr && this->osVersion_ == nullptr && this->imageType_ == nullptr && this->osType_ == nullptr
        && this->imageCategory_ == nullptr && this->architecture_ == nullptr; };
        // imageId Field Functions 
        bool hasImageId() const { return this->imageId_ != nullptr;};
        void deleteImageId() { this->imageId_ = nullptr;};
        inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
        inline Images& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


        // imageName Field Functions 
        bool hasImageName() const { return this->imageName_ != nullptr;};
        void deleteImageName() { this->imageName_ = nullptr;};
        inline string getImageName() const { DARABONBA_PTR_GET_DEFAULT(imageName_, "") };
        inline Images& setImageName(string imageName) { DARABONBA_PTR_SET_VALUE(imageName_, imageName) };


        // platform Field Functions 
        bool hasPlatform() const { return this->platform_ != nullptr;};
        void deletePlatform() { this->platform_ = nullptr;};
        inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
        inline Images& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


        // osVersion Field Functions 
        bool hasOsVersion() const { return this->osVersion_ != nullptr;};
        void deleteOsVersion() { this->osVersion_ = nullptr;};
        inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
        inline Images& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


        // imageType Field Functions 
        bool hasImageType() const { return this->imageType_ != nullptr;};
        void deleteImageType() { this->imageType_ = nullptr;};
        inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
        inline Images& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


        // osType Field Functions 
        bool hasOsType() const { return this->osType_ != nullptr;};
        void deleteOsType() { this->osType_ = nullptr;};
        inline string getOsType() const { DARABONBA_PTR_GET_DEFAULT(osType_, "") };
        inline Images& setOsType(string osType) { DARABONBA_PTR_SET_VALUE(osType_, osType) };


        // imageCategory Field Functions 
        bool hasImageCategory() const { return this->imageCategory_ != nullptr;};
        void deleteImageCategory() { this->imageCategory_ = nullptr;};
        inline string getImageCategory() const { DARABONBA_PTR_GET_DEFAULT(imageCategory_, "") };
        inline Images& setImageCategory(string imageCategory) { DARABONBA_PTR_SET_VALUE(imageCategory_, imageCategory) };


        // architecture Field Functions 
        bool hasArchitecture() const { return this->architecture_ != nullptr;};
        void deleteArchitecture() { this->architecture_ = nullptr;};
        inline string getArchitecture() const { DARABONBA_PTR_GET_DEFAULT(architecture_, "") };
        inline Images& setArchitecture(string architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };


      protected:
        // The ID of the image.
        shared_ptr<string> imageId_ {};
        // The image name.
        shared_ptr<string> imageName_ {};
        // The OS platform. You can obtain the terminal ID by calling one of the following operations:
        // 
        // *   `AliyunLinux`
        // *   `CentOS`
        // *   `Windows`
        // *   `WindowsCore`
        shared_ptr<string> platform_ {};
        // The version of the image.
        shared_ptr<string> osVersion_ {};
        // The type of operating system distribution that you want to use. We recommend that you use this parameter to specify the node operating system. You can obtain the terminal ID by calling one of the following operations:
        // 
        // *   `CentOS`
        // *   `AliyunLinux`
        // *   `AliyunLinux Qboot`
        // *   `AliyunLinuxUEFI`
        // *   `AliyunLinux3`
        // *   `Windows`
        // *   `WindowsCore`
        // *   `AliyunLinux3Arm64`
        // *   `ContainerOS`
        shared_ptr<string> imageType_ {};
        // The type of OS. Examples:
        // 
        // *   `Windows`
        // *   `Linux`
        shared_ptr<string> osType_ {};
        // The type of image. Valid values:
        // 
        // *   `system`: public image
        // *   `self`: custom image
        // *   `others`: shared image from other Alibaba Cloud accounts
        // *   `marketplace`: image from the marketplace
        shared_ptr<string> imageCategory_ {};
        // The architecture of the image.
        shared_ptr<string> architecture_ {};
      };

      virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->images_ == nullptr && this->metaData_ == nullptr && this->runtimes_ == nullptr && this->version_ == nullptr && this->releaseDate_ == nullptr
        && this->expirationDate_ == nullptr && this->creatable_ == nullptr && this->upgradableVersions_ == nullptr; };
      // capabilities Field Functions 
      bool hasCapabilities() const { return this->capabilities_ != nullptr;};
      void deleteCapabilities() { this->capabilities_ = nullptr;};
      inline       const Darabonba::Json & getCapabilities() const { DARABONBA_GET(capabilities_) };
      Darabonba::Json & getCapabilities() { DARABONBA_GET(capabilities_) };
      inline Body& setCapabilities(const Darabonba::Json & capabilities) { DARABONBA_SET_VALUE(capabilities_, capabilities) };
      inline Body& setCapabilities(Darabonba::Json && capabilities) { DARABONBA_SET_RVALUE(capabilities_, capabilities) };


      // images Field Functions 
      bool hasImages() const { return this->images_ != nullptr;};
      void deleteImages() { this->images_ = nullptr;};
      inline const vector<Body::Images> & getImages() const { DARABONBA_PTR_GET_CONST(images_, vector<Body::Images>) };
      inline vector<Body::Images> getImages() { DARABONBA_PTR_GET(images_, vector<Body::Images>) };
      inline Body& setImages(const vector<Body::Images> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
      inline Body& setImages(vector<Body::Images> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


      // metaData Field Functions 
      bool hasMetaData() const { return this->metaData_ != nullptr;};
      void deleteMetaData() { this->metaData_ = nullptr;};
      inline       const Darabonba::Json & getMetaData() const { DARABONBA_GET(metaData_) };
      Darabonba::Json & getMetaData() { DARABONBA_GET(metaData_) };
      inline Body& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
      inline Body& setMetaData(Darabonba::Json && metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


      // runtimes Field Functions 
      bool hasRuntimes() const { return this->runtimes_ != nullptr;};
      void deleteRuntimes() { this->runtimes_ = nullptr;};
      inline const vector<Runtime> & getRuntimes() const { DARABONBA_PTR_GET_CONST(runtimes_, vector<Runtime>) };
      inline vector<Runtime> getRuntimes() { DARABONBA_PTR_GET(runtimes_, vector<Runtime>) };
      inline Body& setRuntimes(const vector<Runtime> & runtimes) { DARABONBA_PTR_SET_VALUE(runtimes_, runtimes) };
      inline Body& setRuntimes(vector<Runtime> && runtimes) { DARABONBA_PTR_SET_RVALUE(runtimes_, runtimes) };


      // version Field Functions 
      bool hasVersion() const { return this->version_ != nullptr;};
      void deleteVersion() { this->version_ = nullptr;};
      inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
      inline Body& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      // releaseDate Field Functions 
      bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
      void deleteReleaseDate() { this->releaseDate_ = nullptr;};
      inline string getReleaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
      inline Body& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


      // expirationDate Field Functions 
      bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
      void deleteExpirationDate() { this->expirationDate_ = nullptr;};
      inline string getExpirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
      inline Body& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


      // creatable Field Functions 
      bool hasCreatable() const { return this->creatable_ != nullptr;};
      void deleteCreatable() { this->creatable_ = nullptr;};
      inline bool getCreatable() const { DARABONBA_PTR_GET_DEFAULT(creatable_, false) };
      inline Body& setCreatable(bool creatable) { DARABONBA_PTR_SET_VALUE(creatable_, creatable) };


      // upgradableVersions Field Functions 
      bool hasUpgradableVersions() const { return this->upgradableVersions_ != nullptr;};
      void deleteUpgradableVersions() { this->upgradableVersions_ = nullptr;};
      inline const vector<string> & getUpgradableVersions() const { DARABONBA_PTR_GET_CONST(upgradableVersions_, vector<string>) };
      inline vector<string> getUpgradableVersions() { DARABONBA_PTR_GET(upgradableVersions_, vector<string>) };
      inline Body& setUpgradableVersions(const vector<string> & upgradableVersions) { DARABONBA_PTR_SET_VALUE(upgradableVersions_, upgradableVersions) };
      inline Body& setUpgradableVersions(vector<string> && upgradableVersions) { DARABONBA_PTR_SET_RVALUE(upgradableVersions_, upgradableVersions) };


    protected:
      // Features of the queried Kubernetes version.
      Darabonba::Json capabilities_ {};
      // The OS images that are returned.
      shared_ptr<vector<Body::Images>> images_ {};
      // The metadata of the Kubernetes version.
      Darabonba::Json metaData_ {};
      // The container runtime configurations.
      shared_ptr<vector<Runtime>> runtimes_ {};
      // The Kubernetes version supported by ACK. For more information, see [Release notes for Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
      shared_ptr<string> version_ {};
      // The release date of the Kubernetes version.
      shared_ptr<string> releaseDate_ {};
      // The expiration date of the Kubernetes version.
      shared_ptr<string> expirationDate_ {};
      // Indicates whether you can create clusters that run the Kubernetes version.
      shared_ptr<bool> creatable_ {};
      // The list of available Kubernetes versions for updates.
      shared_ptr<vector<string>> upgradableVersions_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->statusCode_ == nullptr && this->body_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline DescribeKubernetesVersionMetadataResponse& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline DescribeKubernetesVersionMetadataResponse& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline DescribeKubernetesVersionMetadataResponse& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const vector<DescribeKubernetesVersionMetadataResponse::Body> & getBody() const { DARABONBA_PTR_GET_CONST(body_, vector<DescribeKubernetesVersionMetadataResponse::Body>) };
    inline vector<DescribeKubernetesVersionMetadataResponse::Body> getBody() { DARABONBA_PTR_GET(body_, vector<DescribeKubernetesVersionMetadataResponse::Body>) };
    inline DescribeKubernetesVersionMetadataResponse& setBody(const vector<DescribeKubernetesVersionMetadataResponse::Body> & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline DescribeKubernetesVersionMetadataResponse& setBody(vector<DescribeKubernetesVersionMetadataResponse::Body> && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<int32_t> statusCode_ {};
    shared_ptr<vector<DescribeKubernetesVersionMetadataResponse::Body>> body_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
