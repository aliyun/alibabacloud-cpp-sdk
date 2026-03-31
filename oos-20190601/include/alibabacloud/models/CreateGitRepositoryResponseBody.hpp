// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGITREPOSITORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGITREPOSITORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateGitRepositoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GitRepo, gitRepo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGitRepositoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GitRepo, gitRepo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateGitRepositoryResponseBody() = default ;
    CreateGitRepositoryResponseBody(const CreateGitRepositoryResponseBody &) = default ;
    CreateGitRepositoryResponseBody(CreateGitRepositoryResponseBody &&) = default ;
    CreateGitRepositoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGitRepositoryResponseBody() = default ;
    CreateGitRepositoryResponseBody& operator=(const CreateGitRepositoryResponseBody &) = default ;
    CreateGitRepositoryResponseBody& operator=(CreateGitRepositoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GitRepo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GitRepo& obj) { 
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(FullName, fullName_);
        DARABONBA_PTR_TO_JSON(HtmlUrl, htmlUrl_);
        DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
      };
      friend void from_json(const Darabonba::Json& j, GitRepo& obj) { 
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(FullName, fullName_);
        DARABONBA_PTR_FROM_JSON(HtmlUrl, htmlUrl_);
        DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
      };
      GitRepo() = default ;
      GitRepo(const GitRepo &) = default ;
      GitRepo(GitRepo &&) = default ;
      GitRepo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GitRepo() = default ;
      GitRepo& operator=(const GitRepo &) = default ;
      GitRepo& operator=(GitRepo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->description_ == nullptr
        && this->fullName_ == nullptr && this->htmlUrl_ == nullptr && this->isPrivate_ == nullptr; };
      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline GitRepo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // fullName Field Functions 
      bool hasFullName() const { return this->fullName_ != nullptr;};
      void deleteFullName() { this->fullName_ = nullptr;};
      inline string getFullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
      inline GitRepo& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


      // htmlUrl Field Functions 
      bool hasHtmlUrl() const { return this->htmlUrl_ != nullptr;};
      void deleteHtmlUrl() { this->htmlUrl_ = nullptr;};
      inline string getHtmlUrl() const { DARABONBA_PTR_GET_DEFAULT(htmlUrl_, "") };
      inline GitRepo& setHtmlUrl(string htmlUrl) { DARABONBA_PTR_SET_VALUE(htmlUrl_, htmlUrl) };


      // isPrivate Field Functions 
      bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
      void deleteIsPrivate() { this->isPrivate_ = nullptr;};
      inline string getIsPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, "") };
      inline GitRepo& setIsPrivate(string isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


    protected:
      shared_ptr<string> description_ {};
      shared_ptr<string> fullName_ {};
      shared_ptr<string> htmlUrl_ {};
      shared_ptr<string> isPrivate_ {};
    };

    virtual bool empty() const override { return this->gitRepo_ == nullptr
        && this->requestId_ == nullptr; };
    // gitRepo Field Functions 
    bool hasGitRepo() const { return this->gitRepo_ != nullptr;};
    void deleteGitRepo() { this->gitRepo_ = nullptr;};
    inline const CreateGitRepositoryResponseBody::GitRepo & getGitRepo() const { DARABONBA_PTR_GET_CONST(gitRepo_, CreateGitRepositoryResponseBody::GitRepo) };
    inline CreateGitRepositoryResponseBody::GitRepo getGitRepo() { DARABONBA_PTR_GET(gitRepo_, CreateGitRepositoryResponseBody::GitRepo) };
    inline CreateGitRepositoryResponseBody& setGitRepo(const CreateGitRepositoryResponseBody::GitRepo & gitRepo) { DARABONBA_PTR_SET_VALUE(gitRepo_, gitRepo) };
    inline CreateGitRepositoryResponseBody& setGitRepo(CreateGitRepositoryResponseBody::GitRepo && gitRepo) { DARABONBA_PTR_SET_RVALUE(gitRepo_, gitRepo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGitRepositoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<CreateGitRepositoryResponseBody::GitRepo> gitRepo_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
