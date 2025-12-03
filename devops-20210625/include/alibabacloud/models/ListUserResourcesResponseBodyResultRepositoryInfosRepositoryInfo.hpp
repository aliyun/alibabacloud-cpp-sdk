// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTREPOSITORYINFOSREPOSITORYINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERRESOURCESRESPONSEBODYRESULTREPOSITORYINFOSREPOSITORYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& obj) { 
      DARABONBA_PTR_TO_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_TO_JSON(archived, archived_);
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(creatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(encrypted, encrypted_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_TO_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(path, path_);
      DARABONBA_PTR_TO_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_TO_JSON(visibilityLevel, visibilityLevel_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(accessLevel, accessLevel_);
      DARABONBA_PTR_FROM_JSON(archived, archived_);
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(creatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(encrypted, encrypted_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(lastActivityAt, lastActivityAt_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nameWithNamespace, nameWithNamespace_);
      DARABONBA_PTR_FROM_JSON(namespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(path, path_);
      DARABONBA_PTR_FROM_JSON(pathWithNamespace, pathWithNamespace_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
      DARABONBA_PTR_FROM_JSON(visibilityLevel, visibilityLevel_);
    };
    ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo() = default ;
    ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo(const ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo &) = default ;
    ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo(ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo &&) = default ;
    ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo() = default ;
    ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& operator=(const ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo &) = default ;
    ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& operator=(ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessLevel_ == nullptr
        && return this->archived_ == nullptr && return this->createdAt_ == nullptr && return this->creatorId_ == nullptr && return this->description_ == nullptr && return this->encrypted_ == nullptr
        && return this->id_ == nullptr && return this->lastActivityAt_ == nullptr && return this->name_ == nullptr && return this->nameWithNamespace_ == nullptr && return this->namespaceId_ == nullptr
        && return this->path_ == nullptr && return this->pathWithNamespace_ == nullptr && return this->updatedAt_ == nullptr && return this->visibilityLevel_ == nullptr; };
    // accessLevel Field Functions 
    bool hasAccessLevel() const { return this->accessLevel_ != nullptr;};
    void deleteAccessLevel() { this->accessLevel_ = nullptr;};
    inline int32_t accessLevel() const { DARABONBA_PTR_GET_DEFAULT(accessLevel_, 0) };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setAccessLevel(int32_t accessLevel) { DARABONBA_PTR_SET_VALUE(accessLevel_, accessLevel) };


    // archived Field Functions 
    bool hasArchived() const { return this->archived_ != nullptr;};
    void deleteArchived() { this->archived_ = nullptr;};
    inline bool archived() const { DARABONBA_PTR_GET_DEFAULT(archived_, false) };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setArchived(bool archived) { DARABONBA_PTR_SET_VALUE(archived_, archived) };


    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline string createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setCreatedAt(string createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline int64_t creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, 0L) };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setCreatorId(int64_t creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encrypted Field Functions 
    bool hasEncrypted() const { return this->encrypted_ != nullptr;};
    void deleteEncrypted() { this->encrypted_ = nullptr;};
    inline bool encrypted() const { DARABONBA_PTR_GET_DEFAULT(encrypted_, false) };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setEncrypted(bool encrypted) { DARABONBA_PTR_SET_VALUE(encrypted_, encrypted) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // lastActivityAt Field Functions 
    bool hasLastActivityAt() const { return this->lastActivityAt_ != nullptr;};
    void deleteLastActivityAt() { this->lastActivityAt_ = nullptr;};
    inline string lastActivityAt() const { DARABONBA_PTR_GET_DEFAULT(lastActivityAt_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setLastActivityAt(string lastActivityAt) { DARABONBA_PTR_SET_VALUE(lastActivityAt_, lastActivityAt) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nameWithNamespace Field Functions 
    bool hasNameWithNamespace() const { return this->nameWithNamespace_ != nullptr;};
    void deleteNameWithNamespace() { this->nameWithNamespace_ = nullptr;};
    inline string nameWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(nameWithNamespace_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setNameWithNamespace(string nameWithNamespace) { DARABONBA_PTR_SET_VALUE(nameWithNamespace_, nameWithNamespace) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline int64_t namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, 0L) };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setNamespaceId(int64_t namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string path() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // pathWithNamespace Field Functions 
    bool hasPathWithNamespace() const { return this->pathWithNamespace_ != nullptr;};
    void deletePathWithNamespace() { this->pathWithNamespace_ = nullptr;};
    inline string pathWithNamespace() const { DARABONBA_PTR_GET_DEFAULT(pathWithNamespace_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setPathWithNamespace(string pathWithNamespace) { DARABONBA_PTR_SET_VALUE(pathWithNamespace_, pathWithNamespace) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline string updatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, "") };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setUpdatedAt(string updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


    // visibilityLevel Field Functions 
    bool hasVisibilityLevel() const { return this->visibilityLevel_ != nullptr;};
    void deleteVisibilityLevel() { this->visibilityLevel_ = nullptr;};
    inline int32_t visibilityLevel() const { DARABONBA_PTR_GET_DEFAULT(visibilityLevel_, 0) };
    inline ListUserResourcesResponseBodyResultRepositoryInfosRepositoryInfo& setVisibilityLevel(int32_t visibilityLevel) { DARABONBA_PTR_SET_VALUE(visibilityLevel_, visibilityLevel) };


  protected:
    std::shared_ptr<int32_t> accessLevel_ = nullptr;
    std::shared_ptr<bool> archived_ = nullptr;
    std::shared_ptr<string> createdAt_ = nullptr;
    std::shared_ptr<int64_t> creatorId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> encrypted_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> lastActivityAt_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> nameWithNamespace_ = nullptr;
    std::shared_ptr<int64_t> namespaceId_ = nullptr;
    std::shared_ptr<string> path_ = nullptr;
    std::shared_ptr<string> pathWithNamespace_ = nullptr;
    std::shared_ptr<string> updatedAt_ = nullptr;
    std::shared_ptr<int32_t> visibilityLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
