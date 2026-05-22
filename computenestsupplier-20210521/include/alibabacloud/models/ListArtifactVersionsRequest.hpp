// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTARTIFACTVERSIONSREQUEST_HPP_
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
  class ListArtifactVersionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListArtifactVersionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListArtifactVersionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactId, artifactId_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListArtifactVersionsRequest() = default ;
    ListArtifactVersionsRequest(const ListArtifactVersionsRequest &) = default ;
    ListArtifactVersionsRequest(ListArtifactVersionsRequest &&) = default ;
    ListArtifactVersionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListArtifactVersionsRequest() = default ;
    ListArtifactVersionsRequest& operator=(const ListArtifactVersionsRequest &) = default ;
    ListArtifactVersionsRequest& operator=(ListArtifactVersionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->values_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The parameter name of the filter. You can specify one or more filters. Valid values:
      // 
      // **Status**：The artifact status
      shared_ptr<string> name_ {};
      // The parameter values of the filter.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->artifactId_ == nullptr
        && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // artifactId Field Functions 
    bool hasArtifactId() const { return this->artifactId_ != nullptr;};
    void deleteArtifactId() { this->artifactId_ = nullptr;};
    inline string getArtifactId() const { DARABONBA_PTR_GET_DEFAULT(artifactId_, "") };
    inline ListArtifactVersionsRequest& setArtifactId(string artifactId) { DARABONBA_PTR_SET_VALUE(artifactId_, artifactId) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListArtifactVersionsRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListArtifactVersionsRequest::Filters>) };
    inline vector<ListArtifactVersionsRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListArtifactVersionsRequest::Filters>) };
    inline ListArtifactVersionsRequest& setFilters(const vector<ListArtifactVersionsRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListArtifactVersionsRequest& setFilters(vector<ListArtifactVersionsRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListArtifactVersionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListArtifactVersionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The ID of the deployment package.
    // 
    // This parameter is required.
    shared_ptr<string> artifactId_ {};
    // The filter.
    shared_ptr<vector<ListArtifactVersionsRequest::Filters>> filters_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
