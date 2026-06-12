// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTACRIMAGEREPOSITORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListAcrImageRepositoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAcrImageRepositoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RepoName, repoName_);
    };
    friend void from_json(const Darabonba::Json& j, ListAcrImageRepositoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactType, artifactType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RepoName, repoName_);
    };
    ListAcrImageRepositoriesRequest() = default ;
    ListAcrImageRepositoriesRequest(const ListAcrImageRepositoriesRequest &) = default ;
    ListAcrImageRepositoriesRequest(ListAcrImageRepositoriesRequest &&) = default ;
    ListAcrImageRepositoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAcrImageRepositoriesRequest() = default ;
    ListAcrImageRepositoriesRequest& operator=(const ListAcrImageRepositoriesRequest &) = default ;
    ListAcrImageRepositoriesRequest& operator=(ListAcrImageRepositoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->repoName_ == nullptr; };
    // artifactType Field Functions 
    bool hasArtifactType() const { return this->artifactType_ != nullptr;};
    void deleteArtifactType() { this->artifactType_ = nullptr;};
    inline string getArtifactType() const { DARABONBA_PTR_GET_DEFAULT(artifactType_, "") };
    inline ListAcrImageRepositoriesRequest& setArtifactType(string artifactType) { DARABONBA_PTR_SET_VALUE(artifactType_, artifactType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAcrImageRepositoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAcrImageRepositoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline ListAcrImageRepositoriesRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


  protected:
    // The type of the artifact. The default value is AcrImage. Valid values:
    // 
    // - HelmChart: a Helm chart image.
    // 
    // - AcrImage: a container image.
    shared_ptr<string> artifactType_ {};
    // The number of entries to return on each page for a paged query. The maximum value is 100. The default value is 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to start the next query.
    shared_ptr<string> nextToken_ {};
    // The name of the image repository.
    shared_ptr<string> repoName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
