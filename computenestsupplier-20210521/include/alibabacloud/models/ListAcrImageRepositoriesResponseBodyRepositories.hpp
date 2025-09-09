// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESRESPONSEBODYREPOSITORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESRESPONSEBODYREPOSITORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListAcrImageRepositoriesResponseBodyRepositories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAcrImageRepositoriesResponseBodyRepositories& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(RepoId, repoId_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
      DARABONBA_PTR_TO_JSON(RepoType, repoType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAcrImageRepositoriesResponseBodyRepositories& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
      DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
    };
    ListAcrImageRepositoriesResponseBodyRepositories() = default ;
    ListAcrImageRepositoriesResponseBodyRepositories(const ListAcrImageRepositoriesResponseBodyRepositories &) = default ;
    ListAcrImageRepositoriesResponseBodyRepositories(ListAcrImageRepositoriesResponseBodyRepositories &&) = default ;
    ListAcrImageRepositoriesResponseBodyRepositories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAcrImageRepositoriesResponseBodyRepositories() = default ;
    ListAcrImageRepositoriesResponseBodyRepositories& operator=(const ListAcrImageRepositoriesResponseBodyRepositories &) = default ;
    ListAcrImageRepositoriesResponseBodyRepositories& operator=(ListAcrImageRepositoriesResponseBodyRepositories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->modifiedTime_ != nullptr && this->namespace_ != nullptr && this->repoId_ != nullptr && this->repoName_ != nullptr && this->repoType_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAcrImageRepositoriesResponseBodyRepositories& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline string modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
    inline ListAcrImageRepositoriesResponseBodyRepositories& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAcrImageRepositoriesResponseBodyRepositories& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // repoId Field Functions 
    bool hasRepoId() const { return this->repoId_ != nullptr;};
    void deleteRepoId() { this->repoId_ = nullptr;};
    inline string repoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
    inline ListAcrImageRepositoriesResponseBodyRepositories& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string repoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListAcrImageRepositoriesResponseBodyRepositories& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // repoType Field Functions 
    bool hasRepoType() const { return this->repoType_ != nullptr;};
    void deleteRepoType() { this->repoType_ = nullptr;};
    inline string repoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
    inline ListAcrImageRepositoriesResponseBodyRepositories& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


  protected:
    // The time when the image was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the image was modified.
    std::shared_ptr<string> modifiedTime_ = nullptr;
    // The namespace of the repository
    std::shared_ptr<string> namespace_ = nullptr;
    // The image repo ID.
    std::shared_ptr<string> repoId_ = nullptr;
    // The image repo name.
    std::shared_ptr<string> repoName_ = nullptr;
    // The type of the repository. Valid values:
    // 
    // *   `Private`: a private repository
    // *   `Public`: a public repository
    std::shared_ptr<string> repoType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
