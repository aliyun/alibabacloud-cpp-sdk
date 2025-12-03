// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSEARCHCOMMITRESPONSEBODYRESULTSOURCE_HPP_
#define ALIBABACLOUD_MODELS_LISTSEARCHCOMMITRESPONSEBODYRESULTSOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListSearchCommitResponseBodyResultSourceAuthor.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListSearchCommitResponseBodyResultSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSearchCommitResponseBodyResultSource& obj) { 
      DARABONBA_PTR_TO_JSON(author, author_);
      DARABONBA_PTR_TO_JSON(authorTime, authorTime_);
      DARABONBA_PTR_TO_JSON(commitId, commitId_);
      DARABONBA_PTR_TO_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repoPath, repoPath_);
      DARABONBA_PTR_TO_JSON(title, title_);
    };
    friend void from_json(const Darabonba::Json& j, ListSearchCommitResponseBodyResultSource& obj) { 
      DARABONBA_PTR_FROM_JSON(author, author_);
      DARABONBA_PTR_FROM_JSON(authorTime, authorTime_);
      DARABONBA_PTR_FROM_JSON(commitId, commitId_);
      DARABONBA_PTR_FROM_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repoPath, repoPath_);
      DARABONBA_PTR_FROM_JSON(title, title_);
    };
    ListSearchCommitResponseBodyResultSource() = default ;
    ListSearchCommitResponseBodyResultSource(const ListSearchCommitResponseBodyResultSource &) = default ;
    ListSearchCommitResponseBodyResultSource(ListSearchCommitResponseBodyResultSource &&) = default ;
    ListSearchCommitResponseBodyResultSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSearchCommitResponseBodyResultSource() = default ;
    ListSearchCommitResponseBodyResultSource& operator=(const ListSearchCommitResponseBodyResultSource &) = default ;
    ListSearchCommitResponseBodyResultSource& operator=(ListSearchCommitResponseBodyResultSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->author_ == nullptr
        && return this->authorTime_ == nullptr && return this->commitId_ == nullptr && return this->commitMessage_ == nullptr && return this->organizationId_ == nullptr && return this->repoPath_ == nullptr
        && return this->title_ == nullptr; };
    // author Field Functions 
    bool hasAuthor() const { return this->author_ != nullptr;};
    void deleteAuthor() { this->author_ = nullptr;};
    inline const Models::ListSearchCommitResponseBodyResultSourceAuthor & author() const { DARABONBA_PTR_GET_CONST(author_, Models::ListSearchCommitResponseBodyResultSourceAuthor) };
    inline Models::ListSearchCommitResponseBodyResultSourceAuthor author() { DARABONBA_PTR_GET(author_, Models::ListSearchCommitResponseBodyResultSourceAuthor) };
    inline ListSearchCommitResponseBodyResultSource& setAuthor(const Models::ListSearchCommitResponseBodyResultSourceAuthor & author) { DARABONBA_PTR_SET_VALUE(author_, author) };
    inline ListSearchCommitResponseBodyResultSource& setAuthor(Models::ListSearchCommitResponseBodyResultSourceAuthor && author) { DARABONBA_PTR_SET_RVALUE(author_, author) };


    // authorTime Field Functions 
    bool hasAuthorTime() const { return this->authorTime_ != nullptr;};
    void deleteAuthorTime() { this->authorTime_ = nullptr;};
    inline string authorTime() const { DARABONBA_PTR_GET_DEFAULT(authorTime_, "") };
    inline ListSearchCommitResponseBodyResultSource& setAuthorTime(string authorTime) { DARABONBA_PTR_SET_VALUE(authorTime_, authorTime) };


    // commitId Field Functions 
    bool hasCommitId() const { return this->commitId_ != nullptr;};
    void deleteCommitId() { this->commitId_ = nullptr;};
    inline string commitId() const { DARABONBA_PTR_GET_DEFAULT(commitId_, "") };
    inline ListSearchCommitResponseBodyResultSource& setCommitId(string commitId) { DARABONBA_PTR_SET_VALUE(commitId_, commitId) };


    // commitMessage Field Functions 
    bool hasCommitMessage() const { return this->commitMessage_ != nullptr;};
    void deleteCommitMessage() { this->commitMessage_ = nullptr;};
    inline string commitMessage() const { DARABONBA_PTR_GET_DEFAULT(commitMessage_, "") };
    inline ListSearchCommitResponseBodyResultSource& setCommitMessage(string commitMessage) { DARABONBA_PTR_SET_VALUE(commitMessage_, commitMessage) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListSearchCommitResponseBodyResultSource& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repoPath Field Functions 
    bool hasRepoPath() const { return this->repoPath_ != nullptr;};
    void deleteRepoPath() { this->repoPath_ = nullptr;};
    inline string repoPath() const { DARABONBA_PTR_GET_DEFAULT(repoPath_, "") };
    inline ListSearchCommitResponseBodyResultSource& setRepoPath(string repoPath) { DARABONBA_PTR_SET_VALUE(repoPath_, repoPath) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListSearchCommitResponseBodyResultSource& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    std::shared_ptr<Models::ListSearchCommitResponseBodyResultSourceAuthor> author_ = nullptr;
    std::shared_ptr<string> authorTime_ = nullptr;
    std::shared_ptr<string> commitId_ = nullptr;
    std::shared_ptr<string> commitMessage_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> repoPath_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
