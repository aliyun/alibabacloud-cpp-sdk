// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODYMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMETADATARESPONSEBODYMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMetadataResponseBodyMetaDataPlaygroundScene.hpp>
#include <alibabacloud/models/DescribeMetadataResponseBodyMetaDataProEdition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeMetadataResponseBodyMetaData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMetadataResponseBodyMetaData& obj) { 
      DARABONBA_PTR_TO_JSON(CompatibilityInfoList, compatibilityInfoList_);
      DARABONBA_PTR_TO_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_TO_JSON(PlaygroundScene, playgroundScene_);
      DARABONBA_PTR_TO_JSON(ProEdition, proEdition_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(VersionCrds, versionCrds_);
      DARABONBA_PTR_TO_JSON(VersionRegistry, versionRegistry_);
      DARABONBA_PTR_TO_JSON(Versions, versions_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMetadataResponseBodyMetaData& obj) { 
      DARABONBA_PTR_FROM_JSON(CompatibilityInfoList, compatibilityInfoList_);
      DARABONBA_PTR_FROM_JSON(CurrentVersion, currentVersion_);
      DARABONBA_PTR_FROM_JSON(PlaygroundScene, playgroundScene_);
      DARABONBA_PTR_FROM_JSON(ProEdition, proEdition_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(VersionCrds, versionCrds_);
      DARABONBA_PTR_FROM_JSON(VersionRegistry, versionRegistry_);
      DARABONBA_PTR_FROM_JSON(Versions, versions_);
    };
    DescribeMetadataResponseBodyMetaData() = default ;
    DescribeMetadataResponseBodyMetaData(const DescribeMetadataResponseBodyMetaData &) = default ;
    DescribeMetadataResponseBodyMetaData(DescribeMetadataResponseBodyMetaData &&) = default ;
    DescribeMetadataResponseBodyMetaData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMetadataResponseBodyMetaData() = default ;
    DescribeMetadataResponseBodyMetaData& operator=(const DescribeMetadataResponseBodyMetaData &) = default ;
    DescribeMetadataResponseBodyMetaData& operator=(DescribeMetadataResponseBodyMetaData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->compatibilityInfoList_ == nullptr
        && return this->currentVersion_ == nullptr && return this->playgroundScene_ == nullptr && return this->proEdition_ == nullptr && return this->regions_ == nullptr && return this->versionCrds_ == nullptr
        && return this->versionRegistry_ == nullptr && return this->versions_ == nullptr; };
    // compatibilityInfoList Field Functions 
    bool hasCompatibilityInfoList() const { return this->compatibilityInfoList_ != nullptr;};
    void deleteCompatibilityInfoList() { this->compatibilityInfoList_ = nullptr;};
    inline const vector<Darabonba::Json> & compatibilityInfoList() const { DARABONBA_PTR_GET_CONST(compatibilityInfoList_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> compatibilityInfoList() { DARABONBA_PTR_GET(compatibilityInfoList_, vector<Darabonba::Json>) };
    inline DescribeMetadataResponseBodyMetaData& setCompatibilityInfoList(const vector<Darabonba::Json> & compatibilityInfoList) { DARABONBA_PTR_SET_VALUE(compatibilityInfoList_, compatibilityInfoList) };
    inline DescribeMetadataResponseBodyMetaData& setCompatibilityInfoList(vector<Darabonba::Json> && compatibilityInfoList) { DARABONBA_PTR_SET_RVALUE(compatibilityInfoList_, compatibilityInfoList) };


    // currentVersion Field Functions 
    bool hasCurrentVersion() const { return this->currentVersion_ != nullptr;};
    void deleteCurrentVersion() { this->currentVersion_ = nullptr;};
    inline string currentVersion() const { DARABONBA_PTR_GET_DEFAULT(currentVersion_, "") };
    inline DescribeMetadataResponseBodyMetaData& setCurrentVersion(string currentVersion) { DARABONBA_PTR_SET_VALUE(currentVersion_, currentVersion) };


    // playgroundScene Field Functions 
    bool hasPlaygroundScene() const { return this->playgroundScene_ != nullptr;};
    void deletePlaygroundScene() { this->playgroundScene_ = nullptr;};
    inline const Models::DescribeMetadataResponseBodyMetaDataPlaygroundScene & playgroundScene() const { DARABONBA_PTR_GET_CONST(playgroundScene_, Models::DescribeMetadataResponseBodyMetaDataPlaygroundScene) };
    inline Models::DescribeMetadataResponseBodyMetaDataPlaygroundScene playgroundScene() { DARABONBA_PTR_GET(playgroundScene_, Models::DescribeMetadataResponseBodyMetaDataPlaygroundScene) };
    inline DescribeMetadataResponseBodyMetaData& setPlaygroundScene(const Models::DescribeMetadataResponseBodyMetaDataPlaygroundScene & playgroundScene) { DARABONBA_PTR_SET_VALUE(playgroundScene_, playgroundScene) };
    inline DescribeMetadataResponseBodyMetaData& setPlaygroundScene(Models::DescribeMetadataResponseBodyMetaDataPlaygroundScene && playgroundScene) { DARABONBA_PTR_SET_RVALUE(playgroundScene_, playgroundScene) };


    // proEdition Field Functions 
    bool hasProEdition() const { return this->proEdition_ != nullptr;};
    void deleteProEdition() { this->proEdition_ = nullptr;};
    inline const Models::DescribeMetadataResponseBodyMetaDataProEdition & proEdition() const { DARABONBA_PTR_GET_CONST(proEdition_, Models::DescribeMetadataResponseBodyMetaDataProEdition) };
    inline Models::DescribeMetadataResponseBodyMetaDataProEdition proEdition() { DARABONBA_PTR_GET(proEdition_, Models::DescribeMetadataResponseBodyMetaDataProEdition) };
    inline DescribeMetadataResponseBodyMetaData& setProEdition(const Models::DescribeMetadataResponseBodyMetaDataProEdition & proEdition) { DARABONBA_PTR_SET_VALUE(proEdition_, proEdition) };
    inline DescribeMetadataResponseBodyMetaData& setProEdition(Models::DescribeMetadataResponseBodyMetaDataProEdition && proEdition) { DARABONBA_PTR_SET_RVALUE(proEdition_, proEdition) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline const vector<string> & regions() const { DARABONBA_PTR_GET_CONST(regions_, vector<string>) };
    inline vector<string> regions() { DARABONBA_PTR_GET(regions_, vector<string>) };
    inline DescribeMetadataResponseBodyMetaData& setRegions(const vector<string> & regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };
    inline DescribeMetadataResponseBodyMetaData& setRegions(vector<string> && regions) { DARABONBA_PTR_SET_RVALUE(regions_, regions) };


    // versionCrds Field Functions 
    bool hasVersionCrds() const { return this->versionCrds_ != nullptr;};
    void deleteVersionCrds() { this->versionCrds_ = nullptr;};
    inline const vector<Darabonba::Json> & versionCrds() const { DARABONBA_PTR_GET_CONST(versionCrds_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> versionCrds() { DARABONBA_PTR_GET(versionCrds_, vector<Darabonba::Json>) };
    inline DescribeMetadataResponseBodyMetaData& setVersionCrds(const vector<Darabonba::Json> & versionCrds) { DARABONBA_PTR_SET_VALUE(versionCrds_, versionCrds) };
    inline DescribeMetadataResponseBodyMetaData& setVersionCrds(vector<Darabonba::Json> && versionCrds) { DARABONBA_PTR_SET_RVALUE(versionCrds_, versionCrds) };


    // versionRegistry Field Functions 
    bool hasVersionRegistry() const { return this->versionRegistry_ != nullptr;};
    void deleteVersionRegistry() { this->versionRegistry_ = nullptr;};
    inline const vector<Darabonba::Json> & versionRegistry() const { DARABONBA_PTR_GET_CONST(versionRegistry_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> versionRegistry() { DARABONBA_PTR_GET(versionRegistry_, vector<Darabonba::Json>) };
    inline DescribeMetadataResponseBodyMetaData& setVersionRegistry(const vector<Darabonba::Json> & versionRegistry) { DARABONBA_PTR_SET_VALUE(versionRegistry_, versionRegistry) };
    inline DescribeMetadataResponseBodyMetaData& setVersionRegistry(vector<Darabonba::Json> && versionRegistry) { DARABONBA_PTR_SET_RVALUE(versionRegistry_, versionRegistry) };


    // versions Field Functions 
    bool hasVersions() const { return this->versions_ != nullptr;};
    void deleteVersions() { this->versions_ = nullptr;};
    inline const vector<string> & versions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
    inline vector<string> versions() { DARABONBA_PTR_GET(versions_, vector<string>) };
    inline DescribeMetadataResponseBodyMetaData& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
    inline DescribeMetadataResponseBodyMetaData& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


  protected:
    // The Kubernetes versions compatible with ASM.
    std::shared_ptr<vector<Darabonba::Json>> compatibilityInfoList_ = nullptr;
    // The current version.
    std::shared_ptr<string> currentVersion_ = nullptr;
    // The data of the ASM Playground.
    std::shared_ptr<Models::DescribeMetadataResponseBodyMetaDataPlaygroundScene> playgroundScene_ = nullptr;
    // The version information about ASM of a commercial edition.
    std::shared_ptr<Models::DescribeMetadataResponseBodyMetaDataProEdition> proEdition_ = nullptr;
    // The regions where ASM instances can be created.
    std::shared_ptr<vector<string>> regions_ = nullptr;
    // The custom resource definitions (CRDs) of all ASM versions.
    std::shared_ptr<vector<Darabonba::Json>> versionCrds_ = nullptr;
    // The Istio versions corresponding to the ASM versions.
    std::shared_ptr<vector<Darabonba::Json>> versionRegistry_ = nullptr;
    // The list of ASM versions.
    std::shared_ptr<vector<string>> versions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
