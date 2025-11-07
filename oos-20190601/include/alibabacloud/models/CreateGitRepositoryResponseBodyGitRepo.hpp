// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGITREPOSITORYRESPONSEBODYGITREPO_HPP_
#define ALIBABACLOUD_MODELS_CREATEGITREPOSITORYRESPONSEBODYGITREPO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class CreateGitRepositoryResponseBodyGitRepo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGitRepositoryResponseBodyGitRepo& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FullName, fullName_);
      DARABONBA_PTR_TO_JSON(HtmlUrl, htmlUrl_);
      DARABONBA_PTR_TO_JSON(IsPrivate, isPrivate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGitRepositoryResponseBodyGitRepo& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FullName, fullName_);
      DARABONBA_PTR_FROM_JSON(HtmlUrl, htmlUrl_);
      DARABONBA_PTR_FROM_JSON(IsPrivate, isPrivate_);
    };
    CreateGitRepositoryResponseBodyGitRepo() = default ;
    CreateGitRepositoryResponseBodyGitRepo(const CreateGitRepositoryResponseBodyGitRepo &) = default ;
    CreateGitRepositoryResponseBodyGitRepo(CreateGitRepositoryResponseBodyGitRepo &&) = default ;
    CreateGitRepositoryResponseBodyGitRepo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGitRepositoryResponseBodyGitRepo() = default ;
    CreateGitRepositoryResponseBodyGitRepo& operator=(const CreateGitRepositoryResponseBodyGitRepo &) = default ;
    CreateGitRepositoryResponseBodyGitRepo& operator=(CreateGitRepositoryResponseBodyGitRepo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->fullName_ == nullptr && return this->htmlUrl_ == nullptr && return this->isPrivate_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateGitRepositoryResponseBodyGitRepo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fullName Field Functions 
    bool hasFullName() const { return this->fullName_ != nullptr;};
    void deleteFullName() { this->fullName_ = nullptr;};
    inline string fullName() const { DARABONBA_PTR_GET_DEFAULT(fullName_, "") };
    inline CreateGitRepositoryResponseBodyGitRepo& setFullName(string fullName) { DARABONBA_PTR_SET_VALUE(fullName_, fullName) };


    // htmlUrl Field Functions 
    bool hasHtmlUrl() const { return this->htmlUrl_ != nullptr;};
    void deleteHtmlUrl() { this->htmlUrl_ = nullptr;};
    inline string htmlUrl() const { DARABONBA_PTR_GET_DEFAULT(htmlUrl_, "") };
    inline CreateGitRepositoryResponseBodyGitRepo& setHtmlUrl(string htmlUrl) { DARABONBA_PTR_SET_VALUE(htmlUrl_, htmlUrl) };


    // isPrivate Field Functions 
    bool hasIsPrivate() const { return this->isPrivate_ != nullptr;};
    void deleteIsPrivate() { this->isPrivate_ = nullptr;};
    inline string isPrivate() const { DARABONBA_PTR_GET_DEFAULT(isPrivate_, "") };
    inline CreateGitRepositoryResponseBodyGitRepo& setIsPrivate(string isPrivate) { DARABONBA_PTR_SET_VALUE(isPrivate_, isPrivate) };


  protected:
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> fullName_ = nullptr;
    std::shared_ptr<string> htmlUrl_ = nullptr;
    std::shared_ptr<string> isPrivate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
