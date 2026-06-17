// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOLLECTIONDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class QueryCollectionDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCollectionDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Collection, collection_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_TO_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_TO_JSON(IncludeSparseValues, includeSparseValues_);
      DARABONBA_PTR_TO_JSON(IncludeValues, includeValues_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RelationalTableFilter, relationalTableFilter_);
      DARABONBA_PTR_TO_JSON(SparseVector, sparseVector_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
      DARABONBA_PTR_TO_JSON(Vector, vector_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCollectionDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Collection, collection_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_FROM_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_FROM_JSON(IncludeSparseValues, includeSparseValues_);
      DARABONBA_PTR_FROM_JSON(IncludeValues, includeValues_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespacePassword, namespacePassword_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RelationalTableFilter, relationalTableFilter_);
      DARABONBA_PTR_FROM_JSON(SparseVector, sparseVector_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
      DARABONBA_PTR_FROM_JSON(Vector, vector_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    QueryCollectionDataRequest() = default ;
    QueryCollectionDataRequest(const QueryCollectionDataRequest &) = default ;
    QueryCollectionDataRequest(QueryCollectionDataRequest &&) = default ;
    QueryCollectionDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCollectionDataRequest() = default ;
    QueryCollectionDataRequest& operator=(const QueryCollectionDataRequest &) = default ;
    QueryCollectionDataRequest& operator=(QueryCollectionDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SparseVector : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SparseVector& obj) { 
        DARABONBA_PTR_TO_JSON(Indices, indices_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, SparseVector& obj) { 
        DARABONBA_PTR_FROM_JSON(Indices, indices_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      SparseVector() = default ;
      SparseVector(const SparseVector &) = default ;
      SparseVector(SparseVector &&) = default ;
      SparseVector(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SparseVector() = default ;
      SparseVector& operator=(const SparseVector &) = default ;
      SparseVector& operator=(SparseVector &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->indices_ == nullptr
        && this->values_ == nullptr; };
      // indices Field Functions 
      bool hasIndices() const { return this->indices_ != nullptr;};
      void deleteIndices() { this->indices_ = nullptr;};
      inline const vector<int64_t> & getIndices() const { DARABONBA_PTR_GET_CONST(indices_, vector<int64_t>) };
      inline vector<int64_t> getIndices() { DARABONBA_PTR_GET(indices_, vector<int64_t>) };
      inline SparseVector& setIndices(const vector<int64_t> & indices) { DARABONBA_PTR_SET_VALUE(indices_, indices) };
      inline SparseVector& setIndices(vector<int64_t> && indices) { DARABONBA_PTR_SET_RVALUE(indices_, indices) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<double> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<double>) };
      inline vector<double> getValues() { DARABONBA_PTR_GET(values_, vector<double>) };
      inline SparseVector& setValues(const vector<double> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline SparseVector& setValues(vector<double> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The array of indexes.
      // 
      // > The number of elements in the array cannot exceed 4,000.
      shared_ptr<vector<int64_t>> indices_ {};
      // The array of sparse vectors.
      shared_ptr<vector<double>> values_ {};
    };

    class RelationalTableFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RelationalTableFilter& obj) { 
        DARABONBA_PTR_TO_JSON(CollectionMetadataField, collectionMetadataField_);
        DARABONBA_PTR_TO_JSON(Condition, condition_);
        DARABONBA_PTR_TO_JSON(TableField, tableField_);
        DARABONBA_PTR_TO_JSON(TableName, tableName_);
      };
      friend void from_json(const Darabonba::Json& j, RelationalTableFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(CollectionMetadataField, collectionMetadataField_);
        DARABONBA_PTR_FROM_JSON(Condition, condition_);
        DARABONBA_PTR_FROM_JSON(TableField, tableField_);
        DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      };
      RelationalTableFilter() = default ;
      RelationalTableFilter(const RelationalTableFilter &) = default ;
      RelationalTableFilter(RelationalTableFilter &&) = default ;
      RelationalTableFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RelationalTableFilter() = default ;
      RelationalTableFilter& operator=(const RelationalTableFilter &) = default ;
      RelationalTableFilter& operator=(RelationalTableFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->collectionMetadataField_ == nullptr
        && this->condition_ == nullptr && this->tableField_ == nullptr && this->tableName_ == nullptr; };
      // collectionMetadataField Field Functions 
      bool hasCollectionMetadataField() const { return this->collectionMetadataField_ != nullptr;};
      void deleteCollectionMetadataField() { this->collectionMetadataField_ = nullptr;};
      inline string getCollectionMetadataField() const { DARABONBA_PTR_GET_DEFAULT(collectionMetadataField_, "") };
      inline RelationalTableFilter& setCollectionMetadataField(string collectionMetadataField) { DARABONBA_PTR_SET_VALUE(collectionMetadataField_, collectionMetadataField) };


      // condition Field Functions 
      bool hasCondition() const { return this->condition_ != nullptr;};
      void deleteCondition() { this->condition_ = nullptr;};
      inline string getCondition() const { DARABONBA_PTR_GET_DEFAULT(condition_, "") };
      inline RelationalTableFilter& setCondition(string condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };


      // tableField Field Functions 
      bool hasTableField() const { return this->tableField_ != nullptr;};
      void deleteTableField() { this->tableField_ = nullptr;};
      inline string getTableField() const { DARABONBA_PTR_GET_DEFAULT(tableField_, "") };
      inline RelationalTableFilter& setTableField(string tableField) { DARABONBA_PTR_SET_VALUE(tableField_, tableField) };


      // tableName Field Functions 
      bool hasTableName() const { return this->tableName_ != nullptr;};
      void deleteTableName() { this->tableName_ = nullptr;};
      inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
      inline RelationalTableFilter& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    protected:
      // The metadata field of the vector collection, which is used to associate with the fields of the vector table.
      shared_ptr<string> collectionMetadataField_ {};
      // The filter conditions for the relational table.
      shared_ptr<string> condition_ {};
      // The field of the relational table, which is used to associate with the metadata field of the vector collection.
      shared_ptr<string> tableField_ {};
      // The name of the relational table.
      shared_ptr<string> tableName_ {};
    };

    virtual bool empty() const override { return this->collection_ == nullptr
        && this->content_ == nullptr && this->DBInstanceId_ == nullptr && this->filter_ == nullptr && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr
        && this->includeMetadataFields_ == nullptr && this->includeSparseValues_ == nullptr && this->includeValues_ == nullptr && this->metrics_ == nullptr && this->namespace_ == nullptr
        && this->namespacePassword_ == nullptr && this->offset_ == nullptr && this->orderBy_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr
        && this->relationalTableFilter_ == nullptr && this->sparseVector_ == nullptr && this->topK_ == nullptr && this->vector_ == nullptr && this->workspaceId_ == nullptr; };
    // collection Field Functions 
    bool hasCollection() const { return this->collection_ != nullptr;};
    void deleteCollection() { this->collection_ = nullptr;};
    inline string getCollection() const { DARABONBA_PTR_GET_DEFAULT(collection_, "") };
    inline QueryCollectionDataRequest& setCollection(string collection) { DARABONBA_PTR_SET_VALUE(collection_, collection) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline QueryCollectionDataRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline QueryCollectionDataRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline QueryCollectionDataRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline QueryCollectionDataRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgs Field Functions 
    bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
    void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
    inline const map<string, Darabonba::Json> & getHybridSearchArgs() const { DARABONBA_PTR_GET_CONST(hybridSearchArgs_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> getHybridSearchArgs() { DARABONBA_PTR_GET(hybridSearchArgs_, map<string, Darabonba::Json>) };
    inline QueryCollectionDataRequest& setHybridSearchArgs(const map<string, Darabonba::Json> & hybridSearchArgs) { DARABONBA_PTR_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };
    inline QueryCollectionDataRequest& setHybridSearchArgs(map<string, Darabonba::Json> && hybridSearchArgs) { DARABONBA_PTR_SET_RVALUE(hybridSearchArgs_, hybridSearchArgs) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string getIncludeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline QueryCollectionDataRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeSparseValues Field Functions 
    bool hasIncludeSparseValues() const { return this->includeSparseValues_ != nullptr;};
    void deleteIncludeSparseValues() { this->includeSparseValues_ = nullptr;};
    inline bool getIncludeSparseValues() const { DARABONBA_PTR_GET_DEFAULT(includeSparseValues_, false) };
    inline QueryCollectionDataRequest& setIncludeSparseValues(bool includeSparseValues) { DARABONBA_PTR_SET_VALUE(includeSparseValues_, includeSparseValues) };


    // includeValues Field Functions 
    bool hasIncludeValues() const { return this->includeValues_ != nullptr;};
    void deleteIncludeValues() { this->includeValues_ = nullptr;};
    inline bool getIncludeValues() const { DARABONBA_PTR_GET_DEFAULT(includeValues_, false) };
    inline QueryCollectionDataRequest& setIncludeValues(bool includeValues) { DARABONBA_PTR_SET_VALUE(includeValues_, includeValues) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline QueryCollectionDataRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline QueryCollectionDataRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespacePassword Field Functions 
    bool hasNamespacePassword() const { return this->namespacePassword_ != nullptr;};
    void deleteNamespacePassword() { this->namespacePassword_ = nullptr;};
    inline string getNamespacePassword() const { DARABONBA_PTR_GET_DEFAULT(namespacePassword_, "") };
    inline QueryCollectionDataRequest& setNamespacePassword(string namespacePassword) { DARABONBA_PTR_SET_VALUE(namespacePassword_, namespacePassword) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline QueryCollectionDataRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline QueryCollectionDataRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QueryCollectionDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline QueryCollectionDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // relationalTableFilter Field Functions 
    bool hasRelationalTableFilter() const { return this->relationalTableFilter_ != nullptr;};
    void deleteRelationalTableFilter() { this->relationalTableFilter_ = nullptr;};
    inline const QueryCollectionDataRequest::RelationalTableFilter & getRelationalTableFilter() const { DARABONBA_PTR_GET_CONST(relationalTableFilter_, QueryCollectionDataRequest::RelationalTableFilter) };
    inline QueryCollectionDataRequest::RelationalTableFilter getRelationalTableFilter() { DARABONBA_PTR_GET(relationalTableFilter_, QueryCollectionDataRequest::RelationalTableFilter) };
    inline QueryCollectionDataRequest& setRelationalTableFilter(const QueryCollectionDataRequest::RelationalTableFilter & relationalTableFilter) { DARABONBA_PTR_SET_VALUE(relationalTableFilter_, relationalTableFilter) };
    inline QueryCollectionDataRequest& setRelationalTableFilter(QueryCollectionDataRequest::RelationalTableFilter && relationalTableFilter) { DARABONBA_PTR_SET_RVALUE(relationalTableFilter_, relationalTableFilter) };


    // sparseVector Field Functions 
    bool hasSparseVector() const { return this->sparseVector_ != nullptr;};
    void deleteSparseVector() { this->sparseVector_ = nullptr;};
    inline const QueryCollectionDataRequest::SparseVector & getSparseVector() const { DARABONBA_PTR_GET_CONST(sparseVector_, QueryCollectionDataRequest::SparseVector) };
    inline QueryCollectionDataRequest::SparseVector getSparseVector() { DARABONBA_PTR_GET(sparseVector_, QueryCollectionDataRequest::SparseVector) };
    inline QueryCollectionDataRequest& setSparseVector(const QueryCollectionDataRequest::SparseVector & sparseVector) { DARABONBA_PTR_SET_VALUE(sparseVector_, sparseVector) };
    inline QueryCollectionDataRequest& setSparseVector(QueryCollectionDataRequest::SparseVector && sparseVector) { DARABONBA_PTR_SET_RVALUE(sparseVector_, sparseVector) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int64_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0L) };
    inline QueryCollectionDataRequest& setTopK(int64_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // vector Field Functions 
    bool hasVector() const { return this->vector_ != nullptr;};
    void deleteVector() { this->vector_ = nullptr;};
    inline const vector<double> & getVector() const { DARABONBA_PTR_GET_CONST(vector_, vector<double>) };
    inline vector<double> getVector() { DARABONBA_PTR_GET(vector_, vector<double>) };
    inline QueryCollectionDataRequest& setVector(const vector<double> & _vector) { DARABONBA_PTR_SET_VALUE(vector_, _vector) };
    inline QueryCollectionDataRequest& setVector(vector<double> && _vector) { DARABONBA_PTR_SET_RVALUE(vector_, _vector) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline QueryCollectionDataRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The name of the collection.
    // 
    // > You can call the [ListCollections](https://help.aliyun.com/document_detail/2401503.html) operation to list available collections.
    // 
    // This parameter is required.
    shared_ptr<string> collection_ {};
    // The content for full-text search. If this parameter is omitted, only vector search is performed. If this parameter is specified, the system performs a hybrid search of vector search and full-text search.
    // 
    // > You must specify one of the Content and Vector parameters.
    shared_ptr<string> content_ {};
    // The ID of the instance.
    // 
    // > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/86911.html) operation to query details for all AnalyticDB for PostgreSQL instances in a region, including their instance IDs.
    shared_ptr<string> DBInstanceId_ {};
    // The filter conditions for data retrieval. It is in the format of a WHERE clause in SQL. This expression returns a boolean value, which can be a simple comparison operator, such as `=`, `<>`, `!=`, `>`, `<`, `>=`, and `<=`, or a more complex expression combined with logical operators, such as `AND`, `OR`, and `NOT`, and keywords such as `IN`, `BETWEEN`, and `LIKE`.
    // 
    // > - For more information about the syntax, see [PostgreSQL WHERE](https://www.postgresqltutorial.com/postgresql-tutorial/postgresql-where/).
    shared_ptr<string> filter_ {};
    // The hybrid search algorithm. If this parameter is empty, the system ranks results by directly comparing the scores from the vector search and the full-text search.
    // 
    // Valid values:
    // 
    // - `RRF`: Reciprocal Rank Fusion. This algorithm has a parameter k to control the fusion effect. For more information, see the description of the `HybridSearchArgs` parameter.
    // 
    // - `Weight`: weighted sort. This algorithm uses a parameter alpha to control the score ratio of vector search and full-text search, and then sorts the results. For more information about the parameter, see the `HybridSearchArgs` parameter.
    // 
    // - `Cascaded`: performs a full-text search, and then performs a vector search on the search results.
    shared_ptr<string> hybridSearch_ {};
    // The parameters for the hybrid search algorithm. The following algorithms are supported: RRF and Weight.
    // 
    // - For RRF, specify the constant k in the scoring algorithm `1/(k+rank_i)`. The value must be a positive integer greater than 1. The format is as follows:
    // 
    // ```
    // { 
    //    "RRF": {
    //     "k": 60
    //    }
    // }
    // ```
    // 
    // - For Weight, in the formula `alpha * vector_score + (1-alpha) * text_score`, the alpha parameter indicates the score ratio of the vector search to the full-text search. The value ranges from 0 to 1. 0 indicates that only the full-text search is used, and 1 indicates that only the vector search is used.
    // 
    // ```
    // { 
    //    "Weight": {
    //     "alpha": 0.5
    //    }
    // }
    // ```
    shared_ptr<map<string, Darabonba::Json>> hybridSearchArgs_ {};
    // This parameter is left empty by default. It specifies the metadata fields to be returned. You can specify multiple fields and separate them with commas (,).
    shared_ptr<string> includeMetadataFields_ {};
    // Specifies whether to return sparse vector data. Valid values:
    // 
    // - **true**: returns sparse vector data.
    // 
    // - **false**: does not return sparse vector data.
    shared_ptr<bool> includeSparseValues_ {};
    // Specifies whether to return dense vector data. Valid values:
    // 
    // - **true**: returns dense vector data.
    // 
    // - **false**: does not return dense vector data.
    shared_ptr<bool> includeValues_ {};
    // The similarity algorithm for search. Valid values:
    // 
    // - **l2**: the Euclidean distance.
    // 
    // - **ip**: the dot product distance.
    // 
    // - **cosine**: the cosine similarity.
    // 
    // > If this parameter is not specified, the algorithm specified when the index is created is used.
    shared_ptr<string> metrics_ {};
    // The name of the namespace.
    // 
    // > You can call the [ListNamespaces](https://help.aliyun.com/document_detail/2401502.html) operation to list available namespaces.
    shared_ptr<string> namespace_ {};
    // The password for the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> namespacePassword_ {};
    // This parameter is left empty by default. It specifies the start position of a paged query. This parameter is not supported in hybrid search.
    // 
    // The value must be greater than or equal to 0. When this parameter is not empty, Total in the response indicates the total number of hits. This parameter is used with TopK. For example, if you want to retrieve chunks 0 to 44 with a page size of 20, you must send three requests:
    // 
    // - `Offset=0, TopK=20` returns chunks 0 to 19.
    // 
    // - `Offset=20, TopK=20` returns chunks 20 to 39.
    // 
    // - `Offset=40, TopK=20` returns chunks 40 to 44.
    shared_ptr<int32_t> offset_ {};
    // This parameter is left empty by default. It specifies the field based on which to sort the results. This parameter is not supported in hybrid search.
    // 
    // The field must be a metadata field or a default field in the table, such as `id`. The following formats are supported:
    // 
    // - A single field, such as `chunk_id`.
    // 
    // - Multiple fields separated by commas (,), such as `block_id, chunk_id`.
    // 
    // - Descending order, such as `block_id DESC, chunk_id DESC`.
    shared_ptr<string> orderBy_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // Uses another relational table to filter vector data, which is similar to the JOIN operation.
    // 
    // > The data of the relational table can be returned by setting the IncludeMetadataFields parameter. For example, `rds_table_name.id` indicates that the id field of the relational table is returned.
    shared_ptr<QueryCollectionDataRequest::RelationalTableFilter> relationalTableFilter_ {};
    // The sparse vector data.
    shared_ptr<QueryCollectionDataRequest::SparseVector> sparseVector_ {};
    // Specifies the number of top results to return.
    // 
    // This parameter is required.
    shared_ptr<int64_t> topK_ {};
    // The vector data. The length of the vector data must be the same as that specified in the [CreateCollection](https://help.aliyun.com/document_detail/2401497.html) operation.
    // 
    // > - If `SparseVector` is empty, only the dense vector search results are returned.
    // >
    // > - If both `Vector` and `SparseVector` are empty, only the full-text search results are returned.
    shared_ptr<vector<double>> vector_ {};
    // The ID of the workspace that consists of multiple database instances. You must specify this parameter or the DBInstanceId parameter. If both this parameter and DBInstanceId are specified, this parameter is used.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
