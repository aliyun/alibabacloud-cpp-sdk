// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGITREPOSITORYCONTENTSRESPONSEBODYCONTENTS_HPP_
#define ALIBABACLOUD_MODELS_LISTGITREPOSITORYCONTENTSRESPONSEBODYCONTENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListGitRepositoryContentsResponseBodyContents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGitRepositoryContentsResponseBodyContents& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListGitRepositoryContentsResponseBodyContents& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListGitRepositoryContentsResponseBodyContents() = default ;
    ListGitRepositoryContentsResponseBodyContents(const ListGitRepositoryContentsResponseBodyContents &) = default ;
    ListGitRepositoryContentsResponseBodyContents(ListGitRepositoryContentsResponseBodyContents &&) = default ;
    ListGitRepositoryContentsResponseBodyContents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGitRepositoryContentsResponseBodyContents() = default ;
    ListGitRepositoryContentsResponseBodyContents& operator=(const ListGitRepositoryContentsResponseBodyContents &) = default ;
    ListGitRepositoryContentsResponseBodyContents& operator=(ListGitRepositoryContentsResponseBodyContents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->name_ == nullptr && return this->path_ == nullptr && return this->type_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListGitRepositoryContentsResponseBodyContents& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListGitRepositoryContentsResponseBodyContents& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListGitRepositoryContentsResponseBodyContents& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListGitRepositoryContentsResponseBodyContents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
