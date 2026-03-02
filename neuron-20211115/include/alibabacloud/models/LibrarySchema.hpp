// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYSCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/Provider.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibrarySchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibrarySchema& obj) { 
      DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(industry, industry_);
      DARABONBA_PTR_TO_JSON(libraryId, libraryId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(provider, provider_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, LibrarySchema& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(gitGroup, gitGroup_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(industry, industry_);
      DARABONBA_PTR_FROM_JSON(libraryId, libraryId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(provider, provider_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    LibrarySchema() = default ;
    LibrarySchema(const LibrarySchema &) = default ;
    LibrarySchema(LibrarySchema &&) = default ;
    LibrarySchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibrarySchema() = default ;
    LibrarySchema& operator=(const LibrarySchema &) = default ;
    LibrarySchema& operator=(LibrarySchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->companyId_ == nullptr && this->description_ == nullptr && this->gitGroup_ == nullptr && this->groupId_ == nullptr && this->id_ == nullptr
        && this->industry_ == nullptr && this->libraryId_ == nullptr && this->marketId_ == nullptr && this->name_ == nullptr && this->provider_ == nullptr
        && this->requestId_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline LibrarySchema& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline LibrarySchema& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline LibrarySchema& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gitGroup Field Functions 
    bool hasGitGroup() const { return this->gitGroup_ != nullptr;};
    void deleteGitGroup() { this->gitGroup_ = nullptr;};
    inline string getGitGroup() const { DARABONBA_PTR_GET_DEFAULT(gitGroup_, "") };
    inline LibrarySchema& setGitGroup(string gitGroup) { DARABONBA_PTR_SET_VALUE(gitGroup_, gitGroup) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline LibrarySchema& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline LibrarySchema& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // industry Field Functions 
    bool hasIndustry() const { return this->industry_ != nullptr;};
    void deleteIndustry() { this->industry_ = nullptr;};
    inline string getIndustry() const { DARABONBA_PTR_GET_DEFAULT(industry_, "") };
    inline LibrarySchema& setIndustry(string industry) { DARABONBA_PTR_SET_VALUE(industry_, industry) };


    // libraryId Field Functions 
    bool hasLibraryId() const { return this->libraryId_ != nullptr;};
    void deleteLibraryId() { this->libraryId_ = nullptr;};
    inline int64_t getLibraryId() const { DARABONBA_PTR_GET_DEFAULT(libraryId_, 0L) };
    inline LibrarySchema& setLibraryId(int64_t libraryId) { DARABONBA_PTR_SET_VALUE(libraryId_, libraryId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline LibrarySchema& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LibrarySchema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline const Provider & getProvider() const { DARABONBA_PTR_GET_CONST(provider_, Provider) };
    inline Provider getProvider() { DARABONBA_PTR_GET(provider_, Provider) };
    inline LibrarySchema& setProvider(const Provider & provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };
    inline LibrarySchema& setProvider(Provider && provider) { DARABONBA_PTR_SET_RVALUE(provider_, provider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline LibrarySchema& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> artifactId_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> gitGroup_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> industry_ {};
    shared_ptr<int64_t> libraryId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<Provider> provider_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
