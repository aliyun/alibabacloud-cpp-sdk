// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIBRARYCREATECMD_HPP_
#define ALIBABACLOUD_MODELS_LIBRARYCREATECMD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class LibraryCreateCmd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LibraryCreateCmd& obj) { 
      DARABONBA_PTR_TO_JSON(artifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(groupId, groupId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(repoUrl, repoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, LibraryCreateCmd& obj) { 
      DARABONBA_PTR_FROM_JSON(artifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(groupId, groupId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(repoUrl, repoUrl_);
    };
    LibraryCreateCmd() = default ;
    LibraryCreateCmd(const LibraryCreateCmd &) = default ;
    LibraryCreateCmd(LibraryCreateCmd &&) = default ;
    LibraryCreateCmd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LibraryCreateCmd() = default ;
    LibraryCreateCmd& operator=(const LibraryCreateCmd &) = default ;
    LibraryCreateCmd& operator=(LibraryCreateCmd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->companyId_ == nullptr && this->description_ == nullptr && this->groupId_ == nullptr && this->marketId_ == nullptr && this->name_ == nullptr
        && this->repoUrl_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline LibraryCreateCmd& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline LibraryCreateCmd& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline LibraryCreateCmd& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline LibraryCreateCmd& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline LibraryCreateCmd& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline LibraryCreateCmd& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // repoUrl Field Functions 
    bool hasRepoUrl() const { return this->repoUrl_ != nullptr;};
    void deleteRepoUrl() { this->repoUrl_ = nullptr;};
    inline string getRepoUrl() const { DARABONBA_PTR_GET_DEFAULT(repoUrl_, "") };
    inline LibraryCreateCmd& setRepoUrl(string repoUrl) { DARABONBA_PTR_SET_VALUE(repoUrl_, repoUrl) };


  protected:
    shared_ptr<string> artifactId_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> groupId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> repoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
