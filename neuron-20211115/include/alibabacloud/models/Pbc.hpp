// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PBC_HPP_
#define ALIBABACLOUD_MODELS_PBC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class Pbc : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Pbc& obj) { 
      DARABONBA_PTR_TO_JSON(alias, alias_);
      DARABONBA_PTR_TO_JSON(assetType, assetType_);
      DARABONBA_PTR_TO_JSON(company, company_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(developerId, developerId_);
      DARABONBA_PTR_TO_JSON(developerName, developerName_);
      DARABONBA_PTR_TO_JSON(forkCount, forkCount_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(invorkCount, invorkCount_);
      DARABONBA_PTR_TO_JSON(isWatched, isWatched_);
      DARABONBA_PTR_TO_JSON(latestVersionId, latestVersionId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(watchCount, watchCount_);
    };
    friend void from_json(const Darabonba::Json& j, Pbc& obj) { 
      DARABONBA_PTR_FROM_JSON(alias, alias_);
      DARABONBA_PTR_FROM_JSON(assetType, assetType_);
      DARABONBA_PTR_FROM_JSON(company, company_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(developerId, developerId_);
      DARABONBA_PTR_FROM_JSON(developerName, developerName_);
      DARABONBA_PTR_FROM_JSON(forkCount, forkCount_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(invorkCount, invorkCount_);
      DARABONBA_PTR_FROM_JSON(isWatched, isWatched_);
      DARABONBA_PTR_FROM_JSON(latestVersionId, latestVersionId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(watchCount, watchCount_);
    };
    Pbc() = default ;
    Pbc(const Pbc &) = default ;
    Pbc(Pbc &&) = default ;
    Pbc(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Pbc() = default ;
    Pbc& operator=(const Pbc &) = default ;
    Pbc& operator=(Pbc &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->assetType_ == nullptr && this->company_ == nullptr && this->companyId_ == nullptr && this->description_ == nullptr && this->developerId_ == nullptr
        && this->developerName_ == nullptr && this->forkCount_ == nullptr && this->id_ == nullptr && this->industry_ == nullptr && this->invorkCount_ == nullptr
        && this->isWatched_ == nullptr && this->latestVersionId_ == nullptr && this->marketId_ == nullptr && this->name_ == nullptr && this->requestId_ == nullptr
        && this->type_ == nullptr && this->watchCount_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline Pbc& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // assetType Field Functions 
    bool hasAssetType() const { return this->assetType_ != nullptr;};
    void deleteAssetType() { this->assetType_ = nullptr;};
    inline string getAssetType() const { DARABONBA_PTR_GET_DEFAULT(assetType_, "") };
    inline Pbc& setAssetType(string assetType) { DARABONBA_PTR_SET_VALUE(assetType_, assetType) };


    // company Field Functions 
    bool hasCompany() const { return this->company_ != nullptr;};
    void deleteCompany() { this->company_ = nullptr;};
    inline string getCompany() const { DARABONBA_PTR_GET_DEFAULT(company_, "") };
    inline Pbc& setCompany(string company) { DARABONBA_PTR_SET_VALUE(company_, company) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline Pbc& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Pbc& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // developerId Field Functions 
    bool hasDeveloperId() const { return this->developerId_ != nullptr;};
    void deleteDeveloperId() { this->developerId_ = nullptr;};
    inline string getDeveloperId() const { DARABONBA_PTR_GET_DEFAULT(developerId_, "") };
    inline Pbc& setDeveloperId(string developerId) { DARABONBA_PTR_SET_VALUE(developerId_, developerId) };


    // developerName Field Functions 
    bool hasDeveloperName() const { return this->developerName_ != nullptr;};
    void deleteDeveloperName() { this->developerName_ = nullptr;};
    inline string getDeveloperName() const { DARABONBA_PTR_GET_DEFAULT(developerName_, "") };
    inline Pbc& setDeveloperName(string developerName) { DARABONBA_PTR_SET_VALUE(developerName_, developerName) };


    // forkCount Field Functions 
    bool hasForkCount() const { return this->forkCount_ != nullptr;};
    void deleteForkCount() { this->forkCount_ = nullptr;};
    inline int32_t getForkCount() const { DARABONBA_PTR_GET_DEFAULT(forkCount_, 0) };
    inline Pbc& setForkCount(int32_t forkCount) { DARABONBA_PTR_SET_VALUE(forkCount_, forkCount) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline Pbc& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline Pbc& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // invorkCount Field Functions 
    bool hasInvorkCount() const { return this->invorkCount_ != nullptr;};
    void deleteInvorkCount() { this->invorkCount_ = nullptr;};
    inline int64_t getInvorkCount() const { DARABONBA_PTR_GET_DEFAULT(invorkCount_, 0L) };
    inline Pbc& setInvorkCount(int64_t invorkCount) { DARABONBA_PTR_SET_VALUE(invorkCount_, invorkCount) };


    // isWatched Field Functions 
    bool hasIsWatched() const { return this->isWatched_ != nullptr;};
    void deleteIsWatched() { this->isWatched_ = nullptr;};
    inline bool getIsWatched() const { DARABONBA_PTR_GET_DEFAULT(isWatched_, false) };
    inline Pbc& setIsWatched(bool isWatched) { DARABONBA_PTR_SET_VALUE(isWatched_, isWatched) };


    // latestVersionId Field Functions 
    bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
    void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
    inline int64_t getLatestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, 0L) };
    inline Pbc& setLatestVersionId(int64_t latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline Pbc& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Pbc& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline Pbc& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline Pbc& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // watchCount Field Functions 
    bool hasWatchCount() const { return this->watchCount_ != nullptr;};
    void deleteWatchCount() { this->watchCount_ = nullptr;};
    inline int64_t getWatchCount() const { DARABONBA_PTR_GET_DEFAULT(watchCount_, 0L) };
    inline Pbc& setWatchCount(int64_t watchCount) { DARABONBA_PTR_SET_VALUE(watchCount_, watchCount) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> assetType_ {};
    shared_ptr<string> company_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> developerId_ {};
    shared_ptr<string> developerName_ {};
    shared_ptr<int32_t> forkCount_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<int64_t> invorkCount_ {};
    shared_ptr<bool> isWatched_ {};
    shared_ptr<int64_t> latestVersionId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<string> type_ {};
    shared_ptr<int64_t> watchCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
