// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKUBERNETESVERSIONMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeKubernetesVersionMetadataResponseBodyImages.hpp>
#include <alibabacloud/models/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeKubernetesVersionMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKubernetesVersionMetadataResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeKubernetesVersionMetadataResponseBody& obj) { 
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
    DescribeKubernetesVersionMetadataResponseBody() = default ;
    DescribeKubernetesVersionMetadataResponseBody(const DescribeKubernetesVersionMetadataResponseBody &) = default ;
    DescribeKubernetesVersionMetadataResponseBody(DescribeKubernetesVersionMetadataResponseBody &&) = default ;
    DescribeKubernetesVersionMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKubernetesVersionMetadataResponseBody() = default ;
    DescribeKubernetesVersionMetadataResponseBody& operator=(const DescribeKubernetesVersionMetadataResponseBody &) = default ;
    DescribeKubernetesVersionMetadataResponseBody& operator=(DescribeKubernetesVersionMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->capabilities_ != nullptr
        && this->images_ != nullptr && this->metaData_ != nullptr && this->runtimes_ != nullptr && this->version_ != nullptr && this->releaseDate_ != nullptr
        && this->expirationDate_ != nullptr && this->creatable_ != nullptr && this->upgradableVersions_ != nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline     const Darabonba::Json & capabilities() const { DARABONBA_GET(capabilities_) };
    Darabonba::Json & capabilities() { DARABONBA_GET(capabilities_) };
    inline DescribeKubernetesVersionMetadataResponseBody& setCapabilities(const Darabonba::Json & capabilities) { DARABONBA_SET_VALUE(capabilities_, capabilities) };
    inline DescribeKubernetesVersionMetadataResponseBody& setCapabilities(Darabonba::Json & capabilities) { DARABONBA_SET_RVALUE(capabilities_, capabilities) };


    // images Field Functions 
    bool hasImages() const { return this->images_ != nullptr;};
    void deleteImages() { this->images_ = nullptr;};
    inline const vector<Models::DescribeKubernetesVersionMetadataResponseBodyImages> & images() const { DARABONBA_PTR_GET_CONST(images_, vector<Models::DescribeKubernetesVersionMetadataResponseBodyImages>) };
    inline vector<Models::DescribeKubernetesVersionMetadataResponseBodyImages> images() { DARABONBA_PTR_GET(images_, vector<Models::DescribeKubernetesVersionMetadataResponseBodyImages>) };
    inline DescribeKubernetesVersionMetadataResponseBody& setImages(const vector<Models::DescribeKubernetesVersionMetadataResponseBodyImages> & images) { DARABONBA_PTR_SET_VALUE(images_, images) };
    inline DescribeKubernetesVersionMetadataResponseBody& setImages(vector<Models::DescribeKubernetesVersionMetadataResponseBodyImages> && images) { DARABONBA_PTR_SET_RVALUE(images_, images) };


    // metaData Field Functions 
    bool hasMetaData() const { return this->metaData_ != nullptr;};
    void deleteMetaData() { this->metaData_ = nullptr;};
    inline     const Darabonba::Json & metaData() const { DARABONBA_GET(metaData_) };
    Darabonba::Json & metaData() { DARABONBA_GET(metaData_) };
    inline DescribeKubernetesVersionMetadataResponseBody& setMetaData(const Darabonba::Json & metaData) { DARABONBA_SET_VALUE(metaData_, metaData) };
    inline DescribeKubernetesVersionMetadataResponseBody& setMetaData(Darabonba::Json & metaData) { DARABONBA_SET_RVALUE(metaData_, metaData) };


    // runtimes Field Functions 
    bool hasRuntimes() const { return this->runtimes_ != nullptr;};
    void deleteRuntimes() { this->runtimes_ = nullptr;};
    inline const vector<Models::Runtime> & runtimes() const { DARABONBA_PTR_GET_CONST(runtimes_, vector<Models::Runtime>) };
    inline vector<Models::Runtime> runtimes() { DARABONBA_PTR_GET(runtimes_, vector<Models::Runtime>) };
    inline DescribeKubernetesVersionMetadataResponseBody& setRuntimes(const vector<Models::Runtime> & runtimes) { DARABONBA_PTR_SET_VALUE(runtimes_, runtimes) };
    inline DescribeKubernetesVersionMetadataResponseBody& setRuntimes(vector<Models::Runtime> && runtimes) { DARABONBA_PTR_SET_RVALUE(runtimes_, runtimes) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline DescribeKubernetesVersionMetadataResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // releaseDate Field Functions 
    bool hasReleaseDate() const { return this->releaseDate_ != nullptr;};
    void deleteReleaseDate() { this->releaseDate_ = nullptr;};
    inline string releaseDate() const { DARABONBA_PTR_GET_DEFAULT(releaseDate_, "") };
    inline DescribeKubernetesVersionMetadataResponseBody& setReleaseDate(string releaseDate) { DARABONBA_PTR_SET_VALUE(releaseDate_, releaseDate) };


    // expirationDate Field Functions 
    bool hasExpirationDate() const { return this->expirationDate_ != nullptr;};
    void deleteExpirationDate() { this->expirationDate_ = nullptr;};
    inline string expirationDate() const { DARABONBA_PTR_GET_DEFAULT(expirationDate_, "") };
    inline DescribeKubernetesVersionMetadataResponseBody& setExpirationDate(string expirationDate) { DARABONBA_PTR_SET_VALUE(expirationDate_, expirationDate) };


    // creatable Field Functions 
    bool hasCreatable() const { return this->creatable_ != nullptr;};
    void deleteCreatable() { this->creatable_ = nullptr;};
    inline bool creatable() const { DARABONBA_PTR_GET_DEFAULT(creatable_, false) };
    inline DescribeKubernetesVersionMetadataResponseBody& setCreatable(bool creatable) { DARABONBA_PTR_SET_VALUE(creatable_, creatable) };


    // upgradableVersions Field Functions 
    bool hasUpgradableVersions() const { return this->upgradableVersions_ != nullptr;};
    void deleteUpgradableVersions() { this->upgradableVersions_ = nullptr;};
    inline const vector<string> & upgradableVersions() const { DARABONBA_PTR_GET_CONST(upgradableVersions_, vector<string>) };
    inline vector<string> upgradableVersions() { DARABONBA_PTR_GET(upgradableVersions_, vector<string>) };
    inline DescribeKubernetesVersionMetadataResponseBody& setUpgradableVersions(const vector<string> & upgradableVersions) { DARABONBA_PTR_SET_VALUE(upgradableVersions_, upgradableVersions) };
    inline DescribeKubernetesVersionMetadataResponseBody& setUpgradableVersions(vector<string> && upgradableVersions) { DARABONBA_PTR_SET_RVALUE(upgradableVersions_, upgradableVersions) };


  protected:
    // Features of the queried Kubernetes version.
    Darabonba::Json capabilities_ = nullptr;
    // The OS images that are returned.
    std::shared_ptr<vector<Models::DescribeKubernetesVersionMetadataResponseBodyImages>> images_ = nullptr;
    // The metadata of the Kubernetes version.
    Darabonba::Json metaData_ = nullptr;
    // The container runtime configurations.
    std::shared_ptr<vector<Models::Runtime>> runtimes_ = nullptr;
    // The Kubernetes version supported by ACK. For more information, see [Release notes for Kubernetes versions](https://help.aliyun.com/document_detail/185269.html).
    std::shared_ptr<string> version_ = nullptr;
    // The release date of the Kubernetes version.
    std::shared_ptr<string> releaseDate_ = nullptr;
    // The expiration date of the Kubernetes version.
    std::shared_ptr<string> expirationDate_ = nullptr;
    // Indicates whether you can create clusters that run the Kubernetes version.
    std::shared_ptr<bool> creatable_ = nullptr;
    // The list of available Kubernetes versions for updates.
    std::shared_ptr<vector<string>> upgradableVersions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
