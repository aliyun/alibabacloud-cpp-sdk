// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEMANTICQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEMANTICQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SemanticQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SemanticQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaTypes, mediaTypes_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(WithFields, withFields_);
    };
    friend void from_json(const Darabonba::Json& j, SemanticQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaTypes, mediaTypes_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFields_);
    };
    SemanticQueryRequest() = default ;
    SemanticQueryRequest(const SemanticQueryRequest &) = default ;
    SemanticQueryRequest(SemanticQueryRequest &&) = default ;
    SemanticQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SemanticQueryRequest() = default ;
    SemanticQueryRequest& operator=(const SemanticQueryRequest &) = default ;
    SemanticQueryRequest& operator=(SemanticQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && return this->maxResults_ == nullptr && return this->mediaTypes_ == nullptr && return this->nextToken_ == nullptr && return this->projectName_ == nullptr && return this->query_ == nullptr
        && return this->sourceURI_ == nullptr && return this->withFields_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string datasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SemanticQueryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SemanticQueryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaTypes Field Functions 
    bool hasMediaTypes() const { return this->mediaTypes_ != nullptr;};
    void deleteMediaTypes() { this->mediaTypes_ = nullptr;};
    inline const vector<string> & mediaTypes() const { DARABONBA_PTR_GET_CONST(mediaTypes_, vector<string>) };
    inline vector<string> mediaTypes() { DARABONBA_PTR_GET(mediaTypes_, vector<string>) };
    inline SemanticQueryRequest& setMediaTypes(const vector<string> & mediaTypes) { DARABONBA_PTR_SET_VALUE(mediaTypes_, mediaTypes) };
    inline SemanticQueryRequest& setMediaTypes(vector<string> && mediaTypes) { DARABONBA_PTR_SET_RVALUE(mediaTypes_, mediaTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SemanticQueryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SemanticQueryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SemanticQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string sourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline SemanticQueryRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // withFields Field Functions 
    bool hasWithFields() const { return this->withFields_ != nullptr;};
    void deleteWithFields() { this->withFields_ = nullptr;};
    inline const vector<string> & withFields() const { DARABONBA_PTR_GET_CONST(withFields_, vector<string>) };
    inline vector<string> withFields() { DARABONBA_PTR_GET(withFields_, vector<string>) };
    inline SemanticQueryRequest& setWithFields(const vector<string> & withFields) { DARABONBA_PTR_SET_VALUE(withFields_, withFields) };
    inline SemanticQueryRequest& setWithFields(vector<string> && withFields) { DARABONBA_PTR_SET_RVALUE(withFields_, withFields) };


  protected:
    // The name of the dataset.
    // 
    // This parameter is required.
    std::shared_ptr<string> datasetName_ = nullptr;
    // The maximum number of entries to return. Valid values: 1 to 1000.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The types of the media that you want to query. Default value:
    // 
    // ["image"]
    std::shared_ptr<vector<string>> mediaTypes_ = nullptr;
    // This parameter is no longer available.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The name of the project.
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The content of the query that you input.
    std::shared_ptr<string> query_ = nullptr;
    std::shared_ptr<string> sourceURI_ = nullptr;
    // The fields that you want to include in the response. Including only necessary metadata fields can help reduce the size of the response.
    // 
    // If you do not specify this parameter or set the value to null, all existing metadata fields are returned.
    std::shared_ptr<vector<string>> withFields_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
