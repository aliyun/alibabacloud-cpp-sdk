// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCONTENTADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCONTENTADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryContentAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryContentAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_TO_JSON(GraphSearchArgs, graphSearchArgs_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_TO_JSON(IncludeFileUrl, includeFileUrl_);
      DARABONBA_PTR_TO_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_TO_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(UrlExpiration, urlExpiration_);
      DARABONBA_PTR_TO_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    friend void from_json(const Darabonba::Json& j, QueryContentAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      // fileUrlObject_ is stream
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GraphEnhance, graphEnhance_);
      DARABONBA_PTR_FROM_JSON(GraphSearchArgs, graphSearchArgs_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_FROM_JSON(IncludeFileUrl, includeFileUrl_);
      DARABONBA_PTR_FROM_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_FROM_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(UrlExpiration, urlExpiration_);
      DARABONBA_PTR_FROM_JSON(UseFullTextRetrieval, useFullTextRetrieval_);
    };
    QueryContentAdvanceRequest() = default ;
    QueryContentAdvanceRequest(const QueryContentAdvanceRequest &) = default ;
    QueryContentAdvanceRequest(QueryContentAdvanceRequest &&) = default ;
    QueryContentAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryContentAdvanceRequest() = default ;
    QueryContentAdvanceRequest& operator=(const QueryContentAdvanceRequest &) = default ;
    QueryContentAdvanceRequest& operator=(QueryContentAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GraphSearchArgs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GraphSearchArgs& obj) { 
        DARABONBA_PTR_TO_JSON(GraphTopK, graphTopK_);
      };
      friend void from_json(const Darabonba::Json& j, GraphSearchArgs& obj) { 
        DARABONBA_PTR_FROM_JSON(GraphTopK, graphTopK_);
      };
      GraphSearchArgs() = default ;
      GraphSearchArgs(const GraphSearchArgs &) = default ;
      GraphSearchArgs(GraphSearchArgs &&) = default ;
      GraphSearchArgs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GraphSearchArgs() = default ;
      GraphSearchArgs& operator=(const GraphSearchArgs &) = default ;
      GraphSearchArgs& operator=(GraphSearchArgs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->graphTopK_ == nullptr; };
      // graphTopK Field Functions 
      bool hasGraphTopK() const { return this->graphTopK_ != nullptr;};
      void deleteGraphTopK() { this->graphTopK_ = nullptr;};
      inline int32_t getGraphTopK() const { DARABONBA_PTR_GET_DEFAULT(graphTopK_, 0) };
      inline GraphSearchArgs& setGraphTopK(int32_t graphTopK) { DARABONBA_PTR_SET_VALUE(graphTopK_, graphTopK) };


    protected:
      // The number of top entities and relationship edges. Default value: 60.
      shared_ptr<int32_t> graphTopK_ {};
    };

    virtual bool empty() const override { return this->collection_ == nullptr
        && this->content_ == nullptr && this->DBInstanceId_ == nullptr && this->fileName_ == nullptr && this->fileUrlObject_ == nullptr && this->filter_ == nullptr
        && this->graphEnhance_ == nullptr && this->graphSearchArgs_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr && this->includeFileUrl_ == nullptr
        && this->includeMetadataFields_ == nullptr && this->includeVector_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr
        && this->offset_ == nullptr && this->orderBy_ == nullptr && this->ownerId_ == nullptr && this->recallWindow_ == nullptr && this->regionId_ == nullptr
        && this->rerankFactor_ == nullptr && this->topK_ == nullptr && this->urlExpiration_ == nullptr && this->useFullTextRetrieval_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline QueryContentAdvanceRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryContentAdvanceRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryContentAdvanceRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline QueryContentAdvanceRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // fileUrlObject Field Functions 
    bool hasFileUrlObject() const { return this->fileUrlObject_ != nullptr;};
    void deleteFileUrlObject() { this->fileUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> getFileUrlObject() const { DARABONBA_GET(fileUrlObject_) };
    inline QueryContentAdvanceRequest& setFileUrlObject(shared_ptr<Darabonba::IStream> fileUrlObject) { DARABONBA_SET_VALUE(fileUrlObject_, fileUrlObject) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline QueryContentAdvanceRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // graphEnhance Field Functions 
    bool hasGraphEnhance() const { return this->graphEnhance_ != nullptr;};
    void deleteGraphEnhance() { this->graphEnhance_ = nullptr;};
    inline bool getGraphEnhance() const { DARABONBA_PTR_GET_DEFAULT(graphEnhance_, false) };
    inline QueryContentAdvanceRequest& setGraphEnhance(bool graphEnhance) { DARABONBA_PTR_SET_VALUE(graphEnhance_, graphEnhance) };


    // graphSearchArgs Field Functions 
    bool hasGraphSearchArgs() const { return this->graphSearchArgs_ != nullptr;};
    void deleteGraphSearchArgs() { this->graphSearchArgs_ = nullptr;};
    inline const QueryContentAdvanceRequest::GraphSearchArgs & getGraphSearchArgs() const { DARABONBA_PTR_GET_CONST(graphSearchArgs_, QueryContentAdvanceRequest::GraphSearchArgs) };
    inline QueryContentAdvanceRequest::GraphSearchArgs getGraphSearchArgs() { DARABONBA_PTR_GET(graphSearchArgs_, QueryContentAdvanceRequest::GraphSearchArgs) };
    inline QueryContentAdvanceRequest& setGraphSearchArgs(const QueryContentAdvanceRequest::GraphSearchArgs & graphSearchArgs) { DARABONBA_PTR_SET_VALUE(graphSearchArgs_, graphSearchArgs) };
    inline QueryContentAdvanceRequest& setGraphSearchArgs(QueryContentAdvanceRequest::GraphSearchArgs && graphSearchArgs) { DARABONBA_PTR_SET_RVALUE(graphSearchArgs_, graphSearchArgs) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline QueryContentAdvanceRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgs Field Functions 
    bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
    void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
    inline const map<string, Darabonba::Json> & getHybridSearchArgs() const { DARABONBA_PTR_GET_CONST(hybridSearchArgs_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> getHybridSearchArgs() { DARABONBA_PTR_GET(hybridSearchArgs_, map<string, Darabonba::Json>) };
    inline QueryContentAdvanceRequest& setHybridSearchArgs(const map<string, Darabonba::Json> & hybridSearchArgs) { DARABONBA_PTR_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };
    inline QueryContentAdvanceRequest& setHybridSearchArgs(map<string, Darabonba::Json> && hybridSearchArgs) { DARABONBA_PTR_SET_RVALUE(hybridSearchArgs_, hybridSearchArgs) };


    // includeFileUrl Field Functions 
    bool hasIncludeFileUrl() const { return this->includeFileUrl_ != nullptr;};
    void deleteIncludeFileUrl() { this->includeFileUrl_ = nullptr;};
    inline bool getIncludeFileUrl() const { DARABONBA_PTR_GET_DEFAULT(includeFileUrl_, false) };
    inline QueryContentAdvanceRequest& setIncludeFileUrl(bool includeFileUrl) { DARABONBA_PTR_SET_VALUE(includeFileUrl_, includeFileUrl) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string getIncludeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline QueryContentAdvanceRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeVector Field Functions 
    bool hasIncludeVector() const { return this->includeVector_ != nullptr;};
    void deleteIncludeVector() { this->includeVector_ = nullptr;};
    inline bool getIncludeVector() const { DARABONBA_PTR_GET_DEFAULT(includeVector_, false) };
    inline QueryContentAdvanceRequest& setIncludeVector(bool includeVector) { DARABONBA_PTR_SET_VALUE(includeVector_, includeVector) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryContentAdvanceRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryContentAdvanceRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline QueryContentAdvanceRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline QueryContentAdvanceRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryContentAdvanceRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryContentAdvanceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // recallWindow Field Functions 
    bool hasRecallWindow() const { return this->recallWindow_ != nullptr;};
    void deleteRecallWindow() { this->recallWindow_ = nullptr;};
    inline const vector<int32_t> & getRecallWindow() const { DARABONBA_PTR_GET_CONST(recallWindow_, vector<int32_t>) };
    inline vector<int32_t> getRecallWindow() { DARABONBA_PTR_GET(recallWindow_, vector<int32_t>) };
    inline QueryContentAdvanceRequest& setRecallWindow(const vector<int32_t> & recallWindow) { DARABONBA_PTR_SET_VALUE(recallWindow_, recallWindow) };
    inline QueryContentAdvanceRequest& setRecallWindow(vector<int32_t> && recallWindow) { DARABONBA_PTR_SET_RVALUE(recallWindow_, recallWindow) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryContentAdvanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline QueryContentAdvanceRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline QueryContentAdvanceRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // urlExpiration Field Functions 
    bool hasUrlExpiration() const { return this->urlExpiration_ != nullptr;};
    void deleteUrlExpiration() { this->urlExpiration_ = nullptr;};
    inline string getUrlExpiration() const { DARABONBA_PTR_GET_DEFAULT(urlExpiration_, "") };
    inline QueryContentAdvanceRequest& setUrlExpiration(string urlExpiration) { DARABONBA_PTR_SET_VALUE(urlExpiration_, urlExpiration) };


    // useFullTextRetrieval Field Functions 
    bool hasUseFullTextRetrieval() const { return this->useFullTextRetrieval_ != nullptr;};
    void deleteUseFullTextRetrieval() { this->useFullTextRetrieval_ = nullptr;};
    inline bool getUseFullTextRetrieval() const { DARABONBA_PTR_GET_DEFAULT(useFullTextRetrieval_, false) };
    inline QueryContentAdvanceRequest& setUseFullTextRetrieval(bool useFullTextRetrieval) { DARABONBA_PTR_SET_VALUE(useFullTextRetrieval_, useFullTextRetrieval) };


  protected:
    // Document collection name.
    // 
    // > Created by the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) API. You can use the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) API to view the list of created document collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    shared_ptr<string> content_ {};
    // Instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) API to view details of all AnalyticDB for PostgreSQL instances in the target region, including the instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // In image search scenarios, the source file name of the image to be searched.
    // 
    // > The image file must have a file extension. Currently supported image extensions: bmp, jpg, jpeg, png, tiff.
    shared_ptr<string> fileName_ {};
    // In image search scenarios, the publicly accessible URL of the image file.
    // 
    // > The image file must have a file extension. Currently supported image extensions: bmp, jpg, jpeg, png, tiff.
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    // Filter condition for the data to be queried, in SQL WHERE format. It is an expression that returns a boolean value (true or false). The conditions can be simple comparison operators such as equal (=), not equal (<> or !=), greater than (>), less than (<), greater than or equal to (>=), less than or equal to (<=), or more complex expressions combined with logical operators (AND, OR, NOT), and conditions using keywords like IN, BETWEEN, LIKE, etc.
    // 
    // > 
    // > - For detailed syntax, refer to: https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/
    shared_ptr<string> filter_ {};
    // Whether to enable knowledge graph enhancement. Default value: false.
    shared_ptr<bool> graphEnhance_ {};
    // The search parameters of the knowledge graph.
    shared_ptr<QueryContentAdvanceRequest::GraphSearchArgs> graphSearchArgs_ {};
    // Dual recall algorithm, default is empty (i.e., directly compare and sort the scores of vectors and full text).
    // 
    // Available values:
    // 
    // - RRF: Reciprocal rank fusion, with a parameter k controlling the fusion effect. See HybridSearchArgs configuration for details;
    // - Weight: Weighted ranking, using a parameter alpha to control the weight of vector and full-text scores, then sorting. See HybridSearchArgs configuration for details;
    // - Cascaded: Perform full-text retrieval first, then vector retrieval on top of it;
    shared_ptr<string> hybridSearch_ {};
    // The parameters of the two-way retrieval algorithm. The following parameters are supported:
    // 
    // *   When HybridSearch is set to RRF, the scores are calculated by using the `1/(k+rank_i)` formula. The constant k is a positive integer that is greater than 1.
    // 
    // <!---->
    // 
    //     { 
    //        "RRF": {
    //         "k": 60
    //        }
    //     }
    // 
    // *   When HybridSearch is set to Weight, the scores are calculated by using the `alpha * vector_score + (1-alpha) * text_score` formula. The alpha parameter specifies the proportion of the vector search score and the full-text search score and ranges from 0 to 1. A value of 0 specifies full-text search and a value of 1 specifies vector search.
    // 
    // <!---->
    // 
    //     { 
    //        "Weight": {
    //         "alpha": 0.5
    //        }
    //     }
    shared_ptr<map<string, Darabonba::Json>> hybridSearchArgs_ {};
    // Specifies whether to return the URL of the document. Default value: false.
    shared_ptr<bool> includeFileUrl_ {};
    // The metadata fields to be returned. Separate multiple fields with commas (,). This parameter is empty by default.
    shared_ptr<string> includeMetadataFields_ {};
    // Whether to return vectors. Default is false.
    // > - **false**: Do not return vectors.
    // > - **true**: Return vectors.
    shared_ptr<bool> includeVector_ {};
    // Similarity algorithm used during retrieval. If this value is empty, the algorithm specified at the time of knowledge base creation is used. It is recommended not to set this unless there is a specific need.
    // 
    // > Value description:
    // > - **l2**: Euclidean distance.
    // > - **ip**: Inner product (dot product) distance.
    // > - **cosine**: Cosine similarity.
    shared_ptr<string> metrics_ {};
    // Namespace, default is public.
    // 
    // > You can create a namespace using the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) API and view the list of namespaces using the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) API.
    shared_ptr<string> namespace_ {};
    // Password for the namespace.
    // 
    // > This value is specified in the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) API.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    // Offset, used for paginated queries.
    shared_ptr<int32_t> offset_ {};
    // The fields by which to sort the results. This parameter is empty by default.
    // 
    // The field must be either a metadata field or a default field in the table (e.g., id). Supported formats include:
    // 
    // Single field, such as chunk_id. Multiple fields that are separated by commas (,), such as block_id,chunk_id. Descending order is supported, e.g., block_id DESC, chunk_id DESC.
    shared_ptr<string> orderBy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // Recall window. When this value is not empty, it adds context to the returned search results. The format is an array of 2 elements: List<A, B>, where -10 <= A <= 0 and 0 <= B <= 10.
    // > - Recommended when documents are fragmented and retrieval may lose contextual information.
    // > - Re-ranking takes precedence over windowing, i.e., re-rank first, then apply windowing.
    shared_ptr<vector<int32_t>> recallWindow_ {};
    // The region ID where the instance is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Re-ranking factor. When this value is not empty, it will re-rank the vector search results. The value range is 1 < RerankFactor <= 5.
    // > - Re-ranking is slower when documents are sparsely split.
    // > - It is recommended that the re-ranked count (TopK * Factor, rounded up) does not exceed 50.
    shared_ptr<double> rerankFactor_ {};
    // The number of the returned top results.
    shared_ptr<int32_t> topK_ {};
    // The validity period of the returned image URL.
    // 
    // >  Value Description
    // 
    // *   Supported units are seconds (s) and days (d). For example, 300s specifies that the URL is valid for 300 seconds, and 60d specifies that the URL is valid for 60 days.
    // 
    // *   Valid values: 60s to 365d.
    // 
    // *   Default value: 7200s, that is, 2 hours.
    shared_ptr<string> urlExpiration_ {};
    // Whether to use full-text retrieval (dual recall). Default is false, which means only vector retrieval is used.
    shared_ptr<bool> useFullTextRetrieval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
