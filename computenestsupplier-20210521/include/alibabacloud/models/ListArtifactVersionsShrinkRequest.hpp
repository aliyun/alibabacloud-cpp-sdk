// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListArtifactVersionsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactVersionsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(Filters, filtersShrink_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactVersionsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(Filters, filtersShrink_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListArtifactVersionsShrinkRequest() = default ;
    ListArtifactVersionsShrinkRequest(const ListArtifactVersionsShrinkRequest &) = default ;
    ListArtifactVersionsShrinkRequest(ListArtifactVersionsShrinkRequest &&) = default ;
    ListArtifactVersionsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactVersionsShrinkRequest() = default ;
    ListArtifactVersionsShrinkRequest& operator=(const ListArtifactVersionsShrinkRequest &) = default ;
    ListArtifactVersionsShrinkRequest& operator=(ListArtifactVersionsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->filtersShrink_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ListArtifactVersionsShrinkRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // filtersShrink Field Functions 
    bool hasFiltersShrink() const { return this->filtersShrink_ != nullptr;};
    void deleteFiltersShrink() { this->filtersShrink_ = nullptr;};
    inline string getFiltersShrink() const { DARABONBA_PTR_GET_DEFAULT(filtersShrink_, "") };
    inline ListArtifactVersionsShrinkRequest& setFiltersShrink(string filtersShrink) { DARABONBA_PTR_SET_VALUE(filtersShrink_, filtersShrink) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactVersionsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactVersionsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The ID of the deployment package.
    // 
    // This parameter is required.
    shared_ptr<string> artifactId_ {};
    // The filter.
    shared_ptr<string> filtersShrink_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
