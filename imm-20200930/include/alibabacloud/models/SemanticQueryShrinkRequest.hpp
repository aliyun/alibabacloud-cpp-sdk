// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEMANTICQUERYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEMANTICQUERYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SemanticQueryShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SemanticQueryShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MediaTypes, mediaTypesShrink_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_TO_JSON(WithFields, withFieldsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, SemanticQueryShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetName, datasetName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MediaTypes, mediaTypesShrink_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(SourceURI, sourceURI_);
      DARABONBA_PTR_FROM_JSON(WithFields, withFieldsShrink_);
    };
    SemanticQueryShrinkRequest() = default ;
    SemanticQueryShrinkRequest(const SemanticQueryShrinkRequest &) = default ;
    SemanticQueryShrinkRequest(SemanticQueryShrinkRequest &&) = default ;
    SemanticQueryShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SemanticQueryShrinkRequest() = default ;
    SemanticQueryShrinkRequest& operator=(const SemanticQueryShrinkRequest &) = default ;
    SemanticQueryShrinkRequest& operator=(SemanticQueryShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetName_ == nullptr
        && this->maxResults_ == nullptr && this->mediaTypesShrink_ == nullptr && this->nextToken_ == nullptr && this->projectName_ == nullptr && this->query_ == nullptr
        && this->sourceURI_ == nullptr && this->withFieldsShrink_ == nullptr; };
    // datasetName Field Functions 
    bool hasDatasetName() const { return this->datasetName_ != nullptr;};
    void deleteDatasetName() { this->datasetName_ = nullptr;};
    inline string getDatasetName() const { DARABONBA_PTR_GET_DEFAULT(datasetName_, "") };
    inline SemanticQueryShrinkRequest& setDatasetName(string datasetName) { DARABONBA_PTR_SET_VALUE(datasetName_, datasetName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SemanticQueryShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // mediaTypesShrink Field Functions 
    bool hasMediaTypesShrink() const { return this->mediaTypesShrink_ != nullptr;};
    void deleteMediaTypesShrink() { this->mediaTypesShrink_ = nullptr;};
    inline string getMediaTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(mediaTypesShrink_, "") };
    inline SemanticQueryShrinkRequest& setMediaTypesShrink(string mediaTypesShrink) { DARABONBA_PTR_SET_VALUE(mediaTypesShrink_, mediaTypesShrink) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SemanticQueryShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline SemanticQueryShrinkRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline SemanticQueryShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // sourceURI Field Functions 
    bool hasSourceURI() const { return this->sourceURI_ != nullptr;};
    void deleteSourceURI() { this->sourceURI_ = nullptr;};
    inline string getSourceURI() const { DARABONBA_PTR_GET_DEFAULT(sourceURI_, "") };
    inline SemanticQueryShrinkRequest& setSourceURI(string sourceURI) { DARABONBA_PTR_SET_VALUE(sourceURI_, sourceURI) };


    // withFieldsShrink Field Functions 
    bool hasWithFieldsShrink() const { return this->withFieldsShrink_ != nullptr;};
    void deleteWithFieldsShrink() { this->withFieldsShrink_ = nullptr;};
    inline string getWithFieldsShrink() const { DARABONBA_PTR_GET_DEFAULT(withFieldsShrink_, "") };
    inline SemanticQueryShrinkRequest& setWithFieldsShrink(string withFieldsShrink) { DARABONBA_PTR_SET_VALUE(withFieldsShrink_, withFieldsShrink) };


  protected:
    // The name of the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> datasetName_ {};
    // The maximum number of data records to return in this request. Value range: (0,100].
    shared_ptr<int32_t> maxResults_ {};
    // The media types to search. If this parameter is left empty, the default value is:
    shared_ptr<string> mediaTypesShrink_ {};
    // This parameter is no longer provided.
    shared_ptr<string> nextToken_ {};
    // The name of the project.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // <notice>Either this parameter or the SourceURI parameter must be specified.</notice>
    // The content for semantic search.
    shared_ptr<string> query_ {};
    // <notice>Either this parameter or the Query parameter must be specified. This parameter is currently valid only when the search type is specified as image and the dataset is configured with a workflow template for image-to-image search.</notice>
    // The storage address of the source data used for retrieval. The storage address supports OSS URIs.
    // 
    // The OSS address format is oss://${Bucket}/${Object}, where ${Bucket} is the name of the OSS bucket that resides in the same region as the current project, and ${Object} is the full path of the file including the file name extension.
    // 
    // If you need to configure the corresponding workflow template, [contact us](https://help.aliyun.com/document_detail/84454.html).
    shared_ptr<string> sourceURI_ {};
    // Specifies the specific fields to return instead of all existing metadata fields. This helps reduce the size of the returned struct.
    // 
    // If this parameter is left empty, all fields are returned.
    shared_ptr<string> withFieldsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
