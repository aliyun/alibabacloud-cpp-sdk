// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYRESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYRESPONSEBODYRESULTHIGHLIGHTTEXTMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchRepositoryResponseBodyResultHighlightTextMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchRepositoryResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_TO_JSON(creatorUserId, creatorUserId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(readMe, readMe_);
      DARABONBA_PTR_TO_JSON(repoNameWithNamespace, repoNameWithNamespace_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchRepositoryResponseBodyResultHighlightTextMap& obj) { 
      DARABONBA_PTR_FROM_JSON(creatorUserId, creatorUserId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(readMe, readMe_);
      DARABONBA_PTR_FROM_JSON(repoNameWithNamespace, repoNameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
    };
    ListSearchRepositoryResponseBodyResultHighlightTextMap() = default ;
    ListSearchRepositoryResponseBodyResultHighlightTextMap(const ListSearchRepositoryResponseBodyResultHighlightTextMap &) = default ;
    ListSearchRepositoryResponseBodyResultHighlightTextMap(ListSearchRepositoryResponseBodyResultHighlightTextMap &&) = default ;
    ListSearchRepositoryResponseBodyResultHighlightTextMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchRepositoryResponseBodyResultHighlightTextMap() = default ;
    ListSearchRepositoryResponseBodyResultHighlightTextMap& operator=(const ListSearchRepositoryResponseBodyResultHighlightTextMap &) = default ;
    ListSearchRepositoryResponseBodyResultHighlightTextMap& operator=(ListSearchRepositoryResponseBodyResultHighlightTextMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creatorUserId_ == nullptr
        && return this->description_ == nullptr && return this->organizationId_ == nullptr && return this->readMe_ == nullptr && return this->repoNameWithNamespace_ == nullptr && return this->repoPath_ == nullptr; };
    // creatorUserId Field Functions 
    bool hasCreatorUserId() const { return this->creatorUserId_ != nullptr;};
    void deleteCreatorUserId() { this->creatorUserId_ = nullptr;};
    inline string creatorUserId() const { DARABONBA_PTR_GET_DEFAULT(creatorUserId_, "") };
    inline ListSearchRepositoryResponseBodyResultHighlightTextMap& setCreatorUserId(string creatorUserId) { DARABONBA_PTR_SET_VALUE(creatorUserId_, creatorUserId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSearchRepositoryResponseBodyResultHighlightTextMap& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchRepositoryResponseBodyResultHighlightTextMap& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // readMe Field Functions 
    bool hasReadMe() const { return this->readMe_ != nullptr;};
    void deleteReadMe() { this->readMe_ = nullptr;};
    inline string readMe() const { DARABONBA_PTR_GET_DEFAULT(readMe_, "") };
    inline ListSearchRepositoryResponseBodyResultHighlightTextMap& setReadMe(string readMe) { DARABONBA_PTR_SET_VALUE(readMe_, readMe) };


    // repoNameWithNamespace Field Functions 
    bool hasRepoNameWithNamespace() const { return this->repoNameWithNamespace_ != nullptr;};
    void deleteRepoNameWithNamespace() { this->repoNameWithNamespace_ = nullptr;};
    inline string repoNameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(repoNameWithNamespace_, "") };
    inline ListSearchRepositoryResponseBodyResultHighlightTextMap& setRepoNameWithNamespace(string repoNameWithNamespace) { DARABONBA_PTR_SET_VALUE(repoNameWithNamespace_, repoNameWithNamespace) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline string repoPath() const { DARABONBA_PTR_GET_DEFAULT(repoPath_, "") };
    inline ListSearchRepositoryResponseBodyResultHighlightTextMap& setRepoPath(string repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };


  protected:
    std::shared_ptr<string> creatorUserId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> readMe_ = nullptr;
    std::shared_ptr<string> repoNameWithNamespace_ = nullptr;
    std::shared_ptr<string> repoPath_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
