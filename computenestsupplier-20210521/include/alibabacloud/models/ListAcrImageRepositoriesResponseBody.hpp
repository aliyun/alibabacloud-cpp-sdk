// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListAcrImageRepositoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAcrImageRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Repositories, repositories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAcrImageRepositoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Repositories, repositories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAcrImageRepositoriesResponseBody() = default ;
    ListAcrImageRepositoriesResponseBody(const ListAcrImageRepositoriesResponseBody &) = default ;
    ListAcrImageRepositoriesResponseBody(ListAcrImageRepositoriesResponseBody &&) = default ;
    ListAcrImageRepositoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAcrImageRepositoriesResponseBody() = default ;
    ListAcrImageRepositoriesResponseBody& operator=(const ListAcrImageRepositoriesResponseBody &) = default ;
    ListAcrImageRepositoriesResponseBody& operator=(ListAcrImageRepositoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Repositories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Repositories& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(Namespace, namespace_);
        DARABONBA_PTR_TO_JSON(RepoId, repoId_);
        DARABONBA_PTR_TO_JSON(RepoName, repoName_);
        DARABONBA_PTR_TO_JSON(RepoType, repoType_);
      };
      friend void from_json(const Darabonba::Json& j, Repositories& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
        DARABONBA_PTR_FROM_JSON(RepoId, repoId_);
        DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
        DARABONBA_PTR_FROM_JSON(RepoType, repoType_);
      };
      Repositories() = default ;
      Repositories(const Repositories &) = default ;
      Repositories(Repositories &&) = default ;
      Repositories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Repositories() = default ;
      Repositories& operator=(const Repositories &) = default ;
      Repositories& operator=(Repositories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->modifiedTime_ == nullptr && this->namespace_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr && this->repoType_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Repositories& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Repositories& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // namespace Field Functions 
      bool hasNamespace() const { return this->namespace_ != nullptr;};
      void deleteNamespace() { this->namespace_ = nullptr;};
      inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
      inline Repositories& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline Repositories& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Repositories& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // repoType Field Functions 
      bool hasRepoType() const { return this->repoType_ != nullptr;};
      void deleteRepoType() { this->repoType_ = nullptr;};
      inline string getRepoType() const { DARABONBA_PTR_GET_DEFAULT(repoType_, "") };
      inline Repositories& setRepoType(string repoType) { DARABONBA_PTR_SET_VALUE(repoType_, repoType) };


    protected:
      // The time when the image was created.
      shared_ptr<string> createTime_ {};
      // The time when the image was modified.
      shared_ptr<string> modifiedTime_ {};
      // The namespace of the repository
      shared_ptr<string> namespace_ {};
      // The image repo ID.
      shared_ptr<string> repoId_ {};
      // The image repo name.
      shared_ptr<string> repoName_ {};
      // The type of the repository. Valid values:
      // 
      // *   `Private`: a private repository
      // *   `Public`: a public repository
      shared_ptr<string> repoType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->repositories_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAcrImageRepositoriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAcrImageRepositoriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // repositories Field Functions 
    bool hasRepositories() const { return this->repositories_ != nullptr;};
    void deleteRepositories() { this->repositories_ = nullptr;};
    inline const vector<ListAcrImageRepositoriesResponseBody::Repositories> & getRepositories() const { DARABONBA_PTR_GET_CONST(repositories_, vector<ListAcrImageRepositoriesResponseBody::Repositories>) };
    inline vector<ListAcrImageRepositoriesResponseBody::Repositories> getRepositories() { DARABONBA_PTR_GET(repositories_, vector<ListAcrImageRepositoriesResponseBody::Repositories>) };
    inline ListAcrImageRepositoriesResponseBody& setRepositories(const vector<ListAcrImageRepositoriesResponseBody::Repositories> & repositories) { DARABONBA_PTR_SET_VALUE(repositories_, repositories) };
    inline ListAcrImageRepositoriesResponseBody& setRepositories(vector<ListAcrImageRepositoriesResponseBody::Repositories> && repositories) { DARABONBA_PTR_SET_RVALUE(repositories_, repositories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAcrImageRepositoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListAcrImageRepositoriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The images.
    shared_ptr<vector<ListAcrImageRepositoriesResponseBody::Repositories>> repositories_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
