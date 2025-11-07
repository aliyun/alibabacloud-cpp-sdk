// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGITREPOSITORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEGITREPOSITORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateGitRepositoryResponseBodyGitRepo.hpp>
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
    virtual bool empty() const override { return this->gitRepo_ == nullptr
        && return this->requestId_ == nullptr; };
    // gitRepo Field Functions 
    bool hasGitRepo() const { return this->gitRepo_ != nullptr;};
    void deleteGitRepo() { this->gitRepo_ = nullptr;};
    inline const CreateGitRepositoryResponseBodyGitRepo & gitRepo() const { DARABONBA_PTR_GET_CONST(gitRepo_, CreateGitRepositoryResponseBodyGitRepo) };
    inline CreateGitRepositoryResponseBodyGitRepo gitRepo() { DARABONBA_PTR_GET(gitRepo_, CreateGitRepositoryResponseBodyGitRepo) };
    inline CreateGitRepositoryResponseBody& setGitRepo(const CreateGitRepositoryResponseBodyGitRepo & gitRepo) { DARABONBA_PTR_SET_VALUE(gitRepo_, gitRepo) };
    inline CreateGitRepositoryResponseBody& setGitRepo(CreateGitRepositoryResponseBodyGitRepo && gitRepo) { DARABONBA_PTR_SET_RVALUE(gitRepo_, gitRepo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateGitRepositoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<CreateGitRepositoryResponseBodyGitRepo> gitRepo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
