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
        && this->maxResults_ == nullptr && this->mediaTypes_ == nullptr && this->nextToken_ == nullptr && this->projectName_ == nullptr && this->query_ == nullptr
        && this->sourceURI_ == nullptr && this->withFields_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SemanticQueryRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SemanticQueryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaTypes Field Functions 
    bool hasMediaTypes() const { return this->mediaTypes_ != nullptr;};
    void deleteMediaTypes() { this->mediaTypes_ = nullptr;};
    inline const vector<string> & getMediaTypes() const { DARABONBA_PTR_GET_CONST(mediaTypes_, vector<string>) };
    inline vector<string> getMediaTypes() { DARABONBA_PTR_GET(mediaTypes_, vector<string>) };
    inline SemanticQueryRequest& setMediaTypes(const vector<string> & mediaTypes) { DARABONBA_PTR_SET_VALUE(mediaTypes_, mediaTypes) };
    inline SemanticQueryRequest& setMediaTypes(vector<string> && mediaTypes) { DARABONBA_PTR_SET_RVALUE(mediaTypes_, mediaTypes) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SemanticQueryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SemanticQueryRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SemanticQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline SemanticQueryRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // withFields Field Functions 
    bool hasWithFields() const { return this->withFields_ != nullptr;};
    void deleteWithFields() { this->withFields_ = nullptr;};
    inline const vector<string> & getWithFields() const { DARABONBA_PTR_GET_CONST(withFields_, vector<string>) };
    inline vector<string> getWithFields() { DARABONBA_PTR_GET(withFields_, vector<string>) };
    inline SemanticQueryRequest& setWithFields(const vector<string> & withFields) { DARABONBA_PTR_SET_VALUE(withFields_, withFields) };
    inline SemanticQueryRequest& setWithFields(vector<string> && withFields) { DARABONBA_PTR_SET_RVALUE(withFields_, withFields) };


  protected:
    // The name of the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The maximum number of entries to return. Valid values: 1 to 1000.
    shared_ptr<int32_t> maxResults_ {};
    // The types of the media that you want to query. Default value:
    // 
    // ["image"]
    shared_ptr<vector<string>> mediaTypes_ {};
    // This parameter is no longer available.
    shared_ptr<string> nextToken_ {};
    // The name of the project.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The content of the query that you input.
    shared_ptr<string> query_ {};
    // > Either this parameter or the Query parameter must be specified. This parameter is valid only for image searches on datasets configured with a search-by-image workflow.
    // >
    // URI of the source data for retrieval.
    // The URI must be in the oss://${Bucket}/${Object} format. ${Bucket} specifies the name of the OSS bucket that is in the same region as the current project. ${Object} specifies the full path of the file that contains the file name extension.
    // 
    // Contact us if you need to configure a workflow template.
    shared_ptr<string> sourceURI_ {};
    // >  Either this parameter or the SourceURI parameter must be specified.
    // 
    // The content of the query that you input.
    shared_ptr<vector<string>> withFields_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
