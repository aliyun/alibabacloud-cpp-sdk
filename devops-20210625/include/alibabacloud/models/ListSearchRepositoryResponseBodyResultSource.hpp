// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYRESPONSEBODYRESULTSOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHREPOSITORYRESPONSEBODYRESULTSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchRepositoryResponseBodyResultSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchRepositoryResponseBodyResultSource& obj) { 
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(lastActivityTime, lastActivityTime_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(readMe, readMe_);
      DARABONBA_PTR_TO_JSON(repoName, repoName_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchRepositoryResponseBodyResultSource& obj) { 
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(lastActivityTime, lastActivityTime_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(readMe, readMe_);
      DARABONBA_PTR_FROM_JSON(repoName, repoName_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
    };
    ListSearchRepositoryResponseBodyResultSource() = default ;
    ListSearchRepositoryResponseBodyResultSource(const ListSearchRepositoryResponseBodyResultSource &) = default ;
    ListSearchRepositoryResponseBodyResultSource(ListSearchRepositoryResponseBodyResultSource &&) = default ;
    ListSearchRepositoryResponseBodyResultSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchRepositoryResponseBodyResultSource() = default ;
    ListSearchRepositoryResponseBodyResultSource& operator=(const ListSearchRepositoryResponseBodyResultSource &) = default ;
    ListSearchRepositoryResponseBodyResultSource& operator=(ListSearchRepositoryResponseBodyResultSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->lastActivityTime_ == nullptr && return this->organizationId_ == nullptr && return this->readMe_ == nullptr && return this->repoName_ == nullptr
        && return this->repoPath_ == nullptr && return this->visibilityLevel_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListSearchRepositoryResponseBodyResultSource& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListSearchRepositoryResponseBodyResultSource& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lastActivityTime Field Functions 
    bool hasLastActivityTime() const { return this->lastActivityTime_ != nullptr;};
    void deleteLastActivityTime() { this->lastActivityTime_ = nullptr;};
    inline string lastActivityTime() const { DARABONBA_PTR_GET_DEFAULT(lastActivityTime_, "") };
    inline ListSearchRepositoryResponseBodyResultSource& setLastActivityTime(string lastActivityTime) { DARABONBA_PTR_SET_VALUE(lastActivityTime_, lastActivityTime) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchRepositoryResponseBodyResultSource& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // readMe Field Functions 
    bool hasReadMe() const { return this->readMe_ != nullptr;};
    void deleteReadMe() { this->readMe_ = nullptr;};
    inline string readMe() const { DARABONBA_PTR_GET_DEFAULT(readMe_, "") };
    inline ListSearchRepositoryResponseBodyResultSource& setReadMe(string readMe) { DARABONBA_PTR_SET_VALUE(readMe_, readMe) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListSearchRepositoryResponseBodyResultSource& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline string repoPath() const { DARABONBA_PTR_GET_DEFAULT(repoPath_, "") };
    inline ListSearchRepositoryResponseBodyResultSource& setRepoPath(string repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline ListSearchRepositoryResponseBodyResultSource& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> lastActivityTime_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> readMe_ = nullptr;
    std::shared_ptr<string> repoName_ = nullptr;
    std::shared_ptr<string> repoPath_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
