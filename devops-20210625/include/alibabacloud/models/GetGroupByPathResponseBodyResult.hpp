// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGROUPBYPATHRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETGROUPBYPATHRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetGroupByPathResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGroupByPathResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_TO_JSON(ownerId, ownerId_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_TO_JSON(webUrl, webUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GetGroupByPathResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(avatarUrl, avatarUrl_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(ownerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
      DARABONBA_PTR_FROM_JSON(webUrl, webUrl_);
    };
    GetGroupByPathResponseBodyResult() = default ;
    GetGroupByPathResponseBodyResult(const GetGroupByPathResponseBodyResult &) = default ;
    GetGroupByPathResponseBodyResult(GetGroupByPathResponseBodyResult &&) = default ;
    GetGroupByPathResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGroupByPathResponseBodyResult() = default ;
    GetGroupByPathResponseBodyResult& operator=(const GetGroupByPathResponseBodyResult &) = default ;
    GetGroupByPathResponseBodyResult& operator=(GetGroupByPathResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->avatarUrl_ == nullptr
        && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->nameWithNamespace_ == nullptr && return this->ownerId_ == nullptr
        && return this->parentId_ == nullptr && return this->path_ == nullptr && return this->pathWithNamespace_ == nullptr && return this->visibilityLevel_ == nullptr && return this->webUrl_ == nullptr; };
    // avatarUrl Field Functions 
    bool hasAvatarUrl() const { return this->avatarUrl_ != nullptr;};
    void deleteAvatarUrl() { this->avatarUrl_ = nullptr;};
    inline string avatarUrl() const { DARABONBA_PTR_GET_DEFAULT(avatarUrl_, "") };
    inline GetGroupByPathResponseBodyResult& setAvatarUrl(string avatarUrl) { DARABONBA_PTR_SET_VALUE(avatarUrl_, avatarUrl) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetGroupByPathResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetGroupByPathResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGroupByPathResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameWithNamespace Field Functions 
    bool hasNameWithNamespace() const { return this->nameWithNamespace_ != nullptr;};
    void deleteNameWithNamespace() { this->nameWithNamespace_ = nullptr;};
    inline string nameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(nameWithNamespace_, "") };
    inline GetGroupByPathResponseBodyResult& setNameWithNamespace(string nameWithNamespace) { DARABONBA_PTR_SET_VALUE(nameWithNamespace_, nameWithNamespace) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetGroupByPathResponseBodyResult& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline string parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, "") };
    inline GetGroupByPathResponseBodyResult& setParentId(string parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetGroupByPathResponseBodyResult& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathWithNamespace Field Functions 
    bool hasPathWithNamespace() const { return this->pathWithNamespace_ != nullptr;};
    void deletePathWithNamespace() { this->pathWithNamespace_ = nullptr;};
    inline string pathWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(pathWithNamespace_, "") };
    inline GetGroupByPathResponseBodyResult& setPathWithNamespace(string pathWithNamespace) { DARABONBA_PTR_SET_VALUE(pathWithNamespace_, pathWithNamespace) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline GetGroupByPathResponseBodyResult& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


    // webUrl Field Functions 
    bool hasWebUrl() const { return this->webUrl_ != nullptr;};
    void deleteWebUrl() { this->webUrl_ = nullptr;};
    inline string webUrl() const { DARABONBA_PTR_GET_DEFAULT(webUrl_, "") };
    inline GetGroupByPathResponseBodyResult& setWebUrl(string webUrl) { DARABONBA_PTR_SET_VALUE(webUrl_, webUrl) };


  protected:
    std::shared_ptr<string> avatarUrl_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameWithNamespace_ = nullptr;
    std::shared_ptr<string> ownerId_ = nullptr;
    std::shared_ptr<string> parentId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> pathWithNamespace_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
    std::shared_ptr<string> webUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
