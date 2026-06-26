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
      DARABONBA_PTR_TO_JSON(RerankModel, rerankModel_);
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
      DARABONBA_PTR_FROM_JSON(RerankModel, rerankModel_);
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
    class RerankModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RerankModel& obj) { 
        DARABONBA_PTR_TO_JSON(Instruct, instruct_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(RerankMetadataFields, rerankMetadataFields_);
      };
      friend void from_json(const Darabonba::Json& j, RerankModel& obj) { 
        DARABONBA_PTR_FROM_JSON(Instruct, instruct_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(RerankMetadataFields, rerankMetadataFields_);
      };
      RerankModel() = default ;
      RerankModel(const RerankModel &) = default ;
      RerankModel(RerankModel &&) = default ;
      RerankModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RerankModel() = default ;
      RerankModel& operator=(const RerankModel &) = default ;
      RerankModel& operator=(RerankModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instruct_ == nullptr
        && this->name_ == nullptr && this->rerankMetadataFields_ == nullptr; };
      // instruct Field Functions 
      bool hasInstruct() const { return this->instruct_ != nullptr;};
      void deleteInstruct() { this->instruct_ = nullptr;};
      inline string getInstruct() const { DARABONBA_PTR_GET_DEFAULT(instruct_, "") };
      inline RerankModel& setInstruct(string instruct) { DARABONBA_PTR_SET_VALUE(instruct_, instruct) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RerankModel& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // rerankMetadataFields Field Functions 
      bool hasRerankMetadataFields() const { return this->rerankMetadataFields_ != nullptr;};
      void deleteRerankMetadataFields() { this->rerankMetadataFields_ = nullptr;};
      inline string getRerankMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(rerankMetadataFields_, "") };
      inline RerankModel& setRerankMetadataFields(string rerankMetadataFields) { DARABONBA_PTR_SET_VALUE(rerankMetadataFields_, rerankMetadataFields) };


    protected:
      // This parameter can be set when RerankModel.Name is qwen3-rerank.
      // Adds a custom sorting task type description. This parameter guides the model to adopt different sorting strategies.
      shared_ptr<string> instruct_ {};
      // The name of the rerank model. Valid values: qwen3-rerank, gte-rerank-v2.
      shared_ptr<string> name_ {};
      shared_ptr<string> rerankMetadataFields_ {};
    };

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
      // The number of top entities and relationship edges to return. Default value: 60.
      shared_ptr<int32_t> graphTopK_ {};
    };

    virtual bool empty() const override { return this->collection_ == nullptr
        && this->content_ == nullptr && this->DBInstanceId_ == nullptr && this->fileName_ == nullptr && this->fileUrlObject_ == nullptr && this->filter_ == nullptr
        && this->graphEnhance_ == nullptr && this->graphSearchArgs_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr && this->includeFileUrl_ == nullptr
        && this->includeMetadataFields_ == nullptr && this->includeVector_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr && this->namespacePassword_ == nullptr
        && this->offset_ == nullptr && this->orderBy_ == nullptr && this->ownerId_ == nullptr && this->recallWindow_ == nullptr && this->regionId_ == nullptr
        && this->rerankFactor_ == nullptr && this->rerankModel_ == nullptr && this->topK_ == nullptr && this->urlExpiration_ == nullptr && this->useFullTextRetrieval_ == nullptr; };
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


    // rerankModel Field Functions 
    bool hasRerankModel() const { return this->rerankModel_ != nullptr;};
    void deleteRerankModel() { this->rerankModel_ = nullptr;};
    inline const QueryContentAdvanceRequest::RerankModel & getRerankModel() const { DARABONBA_PTR_GET_CONST(rerankModel_, QueryContentAdvanceRequest::RerankModel) };
    inline QueryContentAdvanceRequest::RerankModel getRerankModel() { DARABONBA_PTR_GET(rerankModel_, QueryContentAdvanceRequest::RerankModel) };
    inline QueryContentAdvanceRequest& setRerankModel(const QueryContentAdvanceRequest::RerankModel & rerankModel) { DARABONBA_PTR_SET_VALUE(rerankModel_, rerankModel) };
    inline QueryContentAdvanceRequest& setRerankModel(QueryContentAdvanceRequest::RerankModel && rerankModel) { DARABONBA_PTR_SET_RVALUE(rerankModel_, rerankModel) };


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
    // The name of the document collection.
    // 
    // > The document collection is created by calling the [CreateDocumentCollection](https://help.aliyun.com/document_detail/2618448.html) operation. You can call the [ListDocumentCollections](https://help.aliyun.com/document_detail/2618452.html) operation to query existing document collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The text content used for retrieval.
    shared_ptr<string> content_ {};
    // The instance ID.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query the details of all AnalyticDB for PostgreSQL instances in a region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // The name of the source image file to search in image-to-image search scenarios.
    // 
    // > The image file must have a file extension. Supported image extensions: bmp, jpg, jpeg, png, and tiff.
    shared_ptr<string> fileName_ {};
    // The publicly accessible URL of the image file in image-to-image search scenarios.
    // 
    // > The image file must have a file extension. Supported image extensions: bmp, jpg, jpeg, png, and tiff.
    shared_ptr<Darabonba::IStream> fileUrlObject_ {};
    // The filter condition for the data to query, in SQL WHERE clause format. The filter is an expression that returns a Boolean value (true or false). Conditions can be simple comparison operators such as equal to (=), not equal to (<> or !=), greater than (>), less than (<), greater than or equal to (>=), and less than or equal to (<=). Conditions can also be more complex expressions combined with logical operators (AND, OR, NOT), as well as conditions using the IN, BETWEEN, and LIKE keywords.
    // 
    // > 
    // > - For detailed syntax, refer to: https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/.
    shared_ptr<string> filter_ {};
    // Specifies whether to enable knowledge graph enhancement. Default value: false.
    shared_ptr<bool> graphEnhance_ {};
    // The knowledge graph retrieval parameters.
    shared_ptr<QueryContentAdvanceRequest::GraphSearchArgs> graphSearchArgs_ {};
    // The multi-channel recall algorithm. Default value: empty, which indicates that the dense vector and full-text index scores are directly compared and sorted.
    // 
    // Valid values:
    // 
    // - RRF: Reciprocal Rank Fusion. A parameter k controls the fusion effect. For more information, see the HybridSearchArgs configuration.
    // - Weight: Weighted sorting. Parameters control the score weights of AISearch retrieve and full-text index results before sorting. For more information, see the HybridSearchArgs configuration.
    // - Cascaded: Full-text index retrieve is performed first, followed by AISearch retrieve based on the full-text index results.
    shared_ptr<string> hybridSearch_ {};
    // The algorithm parameters for multi-channel recall. RRF and Weight are supported. HybridPathsSetting specifies the recall paths: dense vectors (dense), sparse vectors (sparse), and full-text index (fulltext). If this value is empty, dense vectors (dense) and full-text index (fulltext) are used by default.
    // 
    // - RRF: Specifies the constant k in the score calculation formula `1/(k+rank_i)`. The value must be a positive integer greater than 1. Format:
    // ```
    // {
    //   "HybridPathsSetting": {
    //     "paths": "dense,fulltext"
    //   },
    //   "RRF": {
    //     "k": 60
    //   }
    // }
    // ```
    // 
    // - Weight: 
    //    - Dual-path recall (without specifying HybridPathsSetting, only specifying alpha):
    //       - Formula: alpha * dense_score + (1-alpha) * fulltext_score. The alpha parameter specifies the score weight between dense vectors and full-text index retrieve. Valid values: 0 to 1, where 0 indicates full-text index only and 1 indicates dense vector only:
    // ```
    // { 
    //    "Weight": {
    //     "alpha": 0.5
    //    }
    // }
    // ```
    //   - Three-path recall pattern:
    //      - Formula: normalized_dense * dense_score + normalized_sparse * sparse_score + normalized_fulltext * fulltext_score. The dense, sparse, and fulltext values represent the weights for dense vectors, sparse vectors, and full-text index retrieve respectively. Valid values: greater than or equal to 0. The system automatically performs normalization of the weights to 0 to 1 (normalized_x = x / (dense + sparse + fulltext)).
    // ```
    // {
    //   "HybridPathsSetting": {
    //      "paths": "dense,sparse,fulltext"
    //    },
    //   "Weight": {
    //     "dense": 0.5,
    //     "sparse": 0.3,
    //     "fulltext": 0.2
    //   }
    // }
    // ```
    shared_ptr<map<string, Darabonba::Json>> hybridSearchArgs_ {};
    // Specifies whether to synchronously return the URL of the document. By default, the URL is not returned.
    shared_ptr<bool> includeFileUrl_ {};
    // The metadata fields to return. Default value: empty. Separate multiple fields with commas.
    shared_ptr<string> includeMetadataFields_ {};
    // Specifies whether to return vectors. Default value: false.
    // > - **false**: Does not return vectors.
    // > - **true**: Returns vectors.
    shared_ptr<bool> includeVector_ {};
    // The similarity algorithm used for retrieval. If this value is empty, the algorithm specified when the knowledge base was created is used. Leave this parameter empty unless you have specific requirements.
    // 
    // > Valid values:
    // > - **l2**: Euclidean distance.
    // > - **ip**: inner product distance.
    // > - **cosine**: cosine similarity.
    shared_ptr<string> metrics_ {};
    // The namespace. Default value: public.
    // 
    // > You can create a namespace by calling the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation and query namespaces by calling the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation.
    shared_ptr<string> namespace_ {};
    // The password of the namespace.
    // 
    // > This value is specified by the [CreateNamespace](https://help.aliyun.com/document_detail/2401495.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    // The offset for paged query. Used for paging through results.
    shared_ptr<int32_t> offset_ {};
    // The field used for sorting. Default value: empty.
    // 
    // The field must belong to metadata or a default field in the table, such as id. Supported formats:
    // 
    // A single field, such as chunk_id.
    // Multiple fields separated by commas, such as block_id, chunk_id.
    // Descending order, such as block_id DESC, chunk_id DESC.
    shared_ptr<string> orderBy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The recall window. When this value is not empty, additional context around the retrieval results is returned. The format is a two-element array: List<A, B>, where -10<=A<=0 and 0<=B<=10.
    // > - Use this parameter when documents are split into overly small chunks and retrieval may lose contextual information.
    // > - Reranking takes priority over windowing. Reranking is performed first, followed by windowing.
    shared_ptr<vector<int32_t>> recallWindow_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The reranking factor. When this value is not empty, the AISearch retrieve results are reranked. Valid values: 1 < RerankFactor <= 5.
    // > - Reranking is slow when documents are sparsely chunked.
    // > - The total number of reranked results (TopK × Factor, rounded up) should not exceed 50.
    shared_ptr<double> rerankFactor_ {};
    // The rerank model parameters.
    shared_ptr<QueryContentAdvanceRequest::RerankModel> rerankModel_ {};
    // The number of top results to return.
    shared_ptr<int32_t> topK_ {};
    // The validity period of the returned image URL.
    // 
    // > Valid values:
    // > - Supports seconds (s) and days (d) as units. For example, 300s indicates a validity period of 300 seconds, and 60d indicates a validity period of 60 days.
    // > - Valid values: 60s to 365d.
    // > - Default value: 7200s (2 hours).
    shared_ptr<string> urlExpiration_ {};
    // (Deprecated) Specifies whether to use full-text retrieval (dual-path recall). Default value: false, which indicates that only vector retrieval is used.
    shared_ptr<bool> useFullTextRetrieval_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
