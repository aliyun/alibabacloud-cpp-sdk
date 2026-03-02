// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARY_HPP_
#define ALIBABACLOUD_MODELS_LIBRARY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class Library : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Library& obj) { 
      DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(assetType, assetType_);
      DARABONBA_PTR_TO_JSON(company, company_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(dependCount, dependCount_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(isWatched, isWatched_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(providerName, providerName_);
      DARABONBA_PTR_TO_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(reviewId, reviewId_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(stepStatus, stepStatus_);
      DARABONBA_PTR_TO_JSON(watchCount, watchCount_);
    };
    friend void from_json(const Darabonba::Json& j, Library& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(assetType, assetType_);
      DARABONBA_PTR_FROM_JSON(company, company_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(dependCount, dependCount_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(isWatched, isWatched_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(providerName, providerName_);
      DARABONBA_PTR_FROM_JSON(repoUrl, repoUrl_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(reviewId, reviewId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(stepStatus, stepStatus_);
      DARABONBA_PTR_FROM_JSON(watchCount, watchCount_);
    };
    Library() = default ;
    Library(const Library &) = default ;
    Library(Library &&) = default ;
    Library(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Library() = default ;
    Library& operator=(const Library &) = default ;
    Library& operator=(Library &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->assetType_ == nullptr && this->company_ == nullptr && this->companyId_ == nullptr && this->dependCount_ == nullptr && this->description_ == nullptr
        && this->groupId_ == nullptr && this->id_ == nullptr && this->industry_ == nullptr && this->isWatched_ == nullptr && this->name_ == nullptr
        && this->provider_ == nullptr && this->providerName_ == nullptr && this->repoUrl_ == nullptr && this->requestId_ == nullptr && this->reviewId_ == nullptr
        && this->status_ == nullptr && this->stepStatus_ == nullptr && this->watchCount_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline Library& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline Library& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline Library& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline Library& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // dependCount Field Functions 
    bool hasDependCount() const { return this->dependCount_ != nullptr;};
    void deleteDependCount() { this->dependCount_ = nullptr;};
    inline int32_t getDependCount() const { DARABONBA_PTR_GET_DEFAULT(dependCount_, 0) };
    inline Library& setDependCount(int32_t dependCount) { DARABONBA_PTR_SET_VALUE(dependCount_, dependCount) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Library& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline Library& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline Library& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline Library& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // isWatched Field Functions 
    bool hasIsWatched() const { return this->isWatched_ != nullptr;};
    void deleteIsWatched() { this->isWatched_ = nullptr;};
    inline bool getIsWatched() const { DARABONBA_PTR_GET_DEFAULT(isWatched_, false) };
    inline Library& setIsWatched(bool isWatched) { DARABONBA_PTR_SET_VALUE(isWatched_, isWatched) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Library& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline Library& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // providerName Field Functions 
    bool hasProviderName() const { return this->providerName_ != nullptr;};
    void deleteProviderName() { this->providerName_ = nullptr;};
    inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
    inline Library& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    // repoUrl Field Functions 
    bool hasRepoUrl() const { return this->repoUrl_ != nullptr;};
    void deleteRepoUrl() { this->repoUrl_ = nullptr;};
    inline string getRepoUrl() const { DARABONBA_PTR_GET_DEFAULT(repoUrl_, "") };
    inline Library& setRepoUrl(string repoUrl) { DARABONBA_PTR_SET_VALUE(repoUrl_, repoUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Library& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // reviewId Field Functions 
    bool hasReviewId() const { return this->reviewId_ != nullptr;};
    void deleteReviewId() { this->reviewId_ = nullptr;};
    inline int64_t getReviewId() const { DARABONBA_PTR_GET_DEFAULT(reviewId_, 0L) };
    inline Library& setReviewId(int64_t reviewId) { DARABONBA_PTR_SET_VALUE(reviewId_, reviewId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline Library& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // stepStatus Field Functions 
    bool hasStepStatus() const { return this->stepStatus_ != nullptr;};
    void deleteStepStatus() { this->stepStatus_ = nullptr;};
    inline string getStepStatus() const { DARABONBA_PTR_GET_DEFAULT(stepStatus_, "") };
    inline Library& setStepStatus(string stepStatus) { DARABONBA_PTR_SET_VALUE(stepStatus_, stepStatus) };


    // watchCount Field Functions 
    bool hasWatchCount() const { return this->watchCount_ != nullptr;};
    void deleteWatchCount() { this->watchCount_ = nullptr;};
    inline int32_t getWatchCount() const { DARABONBA_PTR_GET_DEFAULT(watchCount_, 0) };
    inline Library& setWatchCount(int32_t watchCount) { DARABONBA_PTR_SET_VALUE(watchCount_, watchCount) };


  protected:
    shared_ptr<string> artifactId_ {};
    shared_ptr<string> assetType_ {};
    shared_ptr<string> company_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int32_t> dependCount_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<bool> isWatched_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> provider_ {};
    shared_ptr<string> providerName_ {};
    shared_ptr<string> repoUrl_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> reviewId_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> stepStatus_ {};
    shared_ptr<int32_t> watchCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
