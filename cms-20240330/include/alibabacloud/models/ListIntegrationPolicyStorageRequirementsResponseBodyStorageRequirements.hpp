// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTINTEGRATIONPOLICYSTORAGEREQUIREMENTSRESPONSEBODYSTORAGEREQUIREMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata.hpp>
#include <alibabacloud/models/ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec.hpp>
#include <alibabacloud/models/ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& obj) { 
      DARABONBA_PTR_TO_JSON(addonReleaseNames, addonReleaseNames_);
      DARABONBA_PTR_TO_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_TO_JSON(kind, kind_);
      DARABONBA_PTR_TO_JSON(metadata, metadata_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& obj) { 
      DARABONBA_PTR_FROM_JSON(addonReleaseNames, addonReleaseNames_);
      DARABONBA_PTR_FROM_JSON(apiVersion, apiVersion_);
      DARABONBA_PTR_FROM_JSON(kind, kind_);
      DARABONBA_PTR_FROM_JSON(metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements &&) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements() = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& operator=(const ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements &) = default ;
    ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& operator=(ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addonReleaseNames_ == nullptr
        && return this->apiVersion_ == nullptr && return this->kind_ == nullptr && return this->metadata_ == nullptr && return this->spec_ == nullptr && return this->status_ == nullptr; };
    // addonReleaseNames Field Functions 
    bool hasAddonReleaseNames() const { return this->addonReleaseNames_ != nullptr;};
    void deleteAddonReleaseNames() { this->addonReleaseNames_ = nullptr;};
    inline const vector<string> & addonReleaseNames() const { DARABONBA_PTR_GET_CONST(addonReleaseNames_, vector<string>) };
    inline vector<string> addonReleaseNames() { DARABONBA_PTR_GET(addonReleaseNames_, vector<string>) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setAddonReleaseNames(const vector<string> & addonReleaseNames) { DARABONBA_PTR_SET_VALUE(addonReleaseNames_, addonReleaseNames) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setAddonReleaseNames(vector<string> && addonReleaseNames) { DARABONBA_PTR_SET_RVALUE(addonReleaseNames_, addonReleaseNames) };


    // apiVersion Field Functions 
    bool hasApiVersion() const { return this->apiVersion_ != nullptr;};
    void deleteApiVersion() { this->apiVersion_ = nullptr;};
    inline string apiVersion() const { DARABONBA_PTR_GET_DEFAULT(apiVersion_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setApiVersion(string apiVersion) { DARABONBA_PTR_SET_VALUE(apiVersion_, apiVersion) };


    // kind Field Functions 
    bool hasKind() const { return this->kind_ != nullptr;};
    void deleteKind() { this->kind_ = nullptr;};
    inline string kind() const { DARABONBA_PTR_GET_DEFAULT(kind_, "") };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setKind(string kind) { DARABONBA_PTR_SET_VALUE(kind_, kind) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline const Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata & metadata() const { DARABONBA_PTR_GET_CONST(metadata_, Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata) };
    inline Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata metadata() { DARABONBA_PTR_GET(metadata_, Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setMetadata(const Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata & metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setMetadata(Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata && metadata) { DARABONBA_PTR_SET_RVALUE(metadata_, metadata) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec) };
    inline Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec spec() { DARABONBA_PTR_GET(spec_, Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setSpec(const Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setSpec(Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus & status() const { DARABONBA_PTR_GET_CONST(status_, Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus) };
    inline Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus status() { DARABONBA_PTR_GET(status_, Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setStatus(const Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirements& setStatus(Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


  protected:
    // Collection of AddonReleases.
    std::shared_ptr<vector<string>> addonReleaseNames_ = nullptr;
    // API Version
    std::shared_ptr<string> apiVersion_ = nullptr;
    // Resource kind
    std::shared_ptr<string> kind_ = nullptr;
    // Metadata
    std::shared_ptr<Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsMetadata> metadata_ = nullptr;
    // Resource spec
    std::shared_ptr<Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsSpec> spec_ = nullptr;
    // Storage requirement status
    std::shared_ptr<Models::ListIntegrationPolicyStorageRequirementsResponseBodyStorageRequirementsStatus> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
