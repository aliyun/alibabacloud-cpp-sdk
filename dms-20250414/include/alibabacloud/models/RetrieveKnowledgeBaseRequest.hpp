// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEKNOWLEDGEBASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class RetrieveKnowledgeBaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_TO_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_TO_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_TO_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_TO_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_TO_JSON(Metrics, metrics_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_TO_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_TO_JSON(TopK, topK_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveKnowledgeBaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(HybridSearch, hybridSearch_);
      DARABONBA_PTR_FROM_JSON(HybridSearchArgs, hybridSearchArgs_);
      DARABONBA_PTR_FROM_JSON(IncludeMetadataFields, includeMetadataFields_);
      DARABONBA_PTR_FROM_JSON(IncludeVector, includeVector_);
      DARABONBA_PTR_FROM_JSON(KbUuid, kbUuid_);
      DARABONBA_PTR_FROM_JSON(Metrics, metrics_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OrderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RecallWindow, recallWindow_);
      DARABONBA_PTR_FROM_JSON(RerankFactor, rerankFactor_);
      DARABONBA_PTR_FROM_JSON(TopK, topK_);
    };
    RetrieveKnowledgeBaseRequest() = default ;
    RetrieveKnowledgeBaseRequest(const RetrieveKnowledgeBaseRequest &) = default ;
    RetrieveKnowledgeBaseRequest(RetrieveKnowledgeBaseRequest &&) = default ;
    RetrieveKnowledgeBaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveKnowledgeBaseRequest() = default ;
    RetrieveKnowledgeBaseRequest& operator=(const RetrieveKnowledgeBaseRequest &) = default ;
    RetrieveKnowledgeBaseRequest& operator=(RetrieveKnowledgeBaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && this->hybridSearch_ == nullptr && this->hybridSearchArgs_ == nullptr && this->includeMetadataFields_ == nullptr && this->includeVector_ == nullptr && this->kbUuid_ == nullptr
        && this->metrics_ == nullptr && this->offset_ == nullptr && this->orderBy_ == nullptr && this->query_ == nullptr && this->recallWindow_ == nullptr
        && this->rerankFactor_ == nullptr && this->topK_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string getFilter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline RetrieveKnowledgeBaseRequest& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // hybridSearch Field Functions 
    bool hasHybridSearch() const { return this->hybridSearch_ != nullptr;};
    void deleteHybridSearch() { this->hybridSearch_ = nullptr;};
    inline string getHybridSearch() const { DARABONBA_PTR_GET_DEFAULT(hybridSearch_, "") };
    inline RetrieveKnowledgeBaseRequest& setHybridSearch(string hybridSearch) { DARABONBA_PTR_SET_VALUE(hybridSearch_, hybridSearch) };


    // hybridSearchArgs Field Functions 
    bool hasHybridSearchArgs() const { return this->hybridSearchArgs_ != nullptr;};
    void deleteHybridSearchArgs() { this->hybridSearchArgs_ = nullptr;};
    inline string getHybridSearchArgs() const { DARABONBA_PTR_GET_DEFAULT(hybridSearchArgs_, "") };
    inline RetrieveKnowledgeBaseRequest& setHybridSearchArgs(string hybridSearchArgs) { DARABONBA_PTR_SET_VALUE(hybridSearchArgs_, hybridSearchArgs) };


    // includeMetadataFields Field Functions 
    bool hasIncludeMetadataFields() const { return this->includeMetadataFields_ != nullptr;};
    void deleteIncludeMetadataFields() { this->includeMetadataFields_ = nullptr;};
    inline string getIncludeMetadataFields() const { DARABONBA_PTR_GET_DEFAULT(includeMetadataFields_, "") };
    inline RetrieveKnowledgeBaseRequest& setIncludeMetadataFields(string includeMetadataFields) { DARABONBA_PTR_SET_VALUE(includeMetadataFields_, includeMetadataFields) };


    // includeVector Field Functions 
    bool hasIncludeVector() const { return this->includeVector_ != nullptr;};
    void deleteIncludeVector() { this->includeVector_ = nullptr;};
    inline bool getIncludeVector() const { DARABONBA_PTR_GET_DEFAULT(includeVector_, false) };
    inline RetrieveKnowledgeBaseRequest& setIncludeVector(bool includeVector) { DARABONBA_PTR_SET_VALUE(includeVector_, includeVector) };


    // kbUuid Field Functions 
    bool hasKbUuid() const { return this->kbUuid_ != nullptr;};
    void deleteKbUuid() { this->kbUuid_ = nullptr;};
    inline string getKbUuid() const { DARABONBA_PTR_GET_DEFAULT(kbUuid_, "") };
    inline RetrieveKnowledgeBaseRequest& setKbUuid(string kbUuid) { DARABONBA_PTR_SET_VALUE(kbUuid_, kbUuid) };


    // metrics Field Functions 
    bool hasMetrics() const { return this->metrics_ != nullptr;};
    void deleteMetrics() { this->metrics_ = nullptr;};
    inline string getMetrics() const { DARABONBA_PTR_GET_DEFAULT(metrics_, "") };
    inline RetrieveKnowledgeBaseRequest& setMetrics(string metrics) { DARABONBA_PTR_SET_VALUE(metrics_, metrics) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline RetrieveKnowledgeBaseRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline RetrieveKnowledgeBaseRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveKnowledgeBaseRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // recallWindow Field Functions 
    bool hasRecallWindow() const { return this->recallWindow_ != nullptr;};
    void deleteRecallWindow() { this->recallWindow_ = nullptr;};
    inline string getRecallWindow() const { DARABONBA_PTR_GET_DEFAULT(recallWindow_, "") };
    inline RetrieveKnowledgeBaseRequest& setRecallWindow(string recallWindow) { DARABONBA_PTR_SET_VALUE(recallWindow_, recallWindow) };


    // rerankFactor Field Functions 
    bool hasRerankFactor() const { return this->rerankFactor_ != nullptr;};
    void deleteRerankFactor() { this->rerankFactor_ = nullptr;};
    inline double getRerankFactor() const { DARABONBA_PTR_GET_DEFAULT(rerankFactor_, 0.0) };
    inline RetrieveKnowledgeBaseRequest& setRerankFactor(double rerankFactor) { DARABONBA_PTR_SET_VALUE(rerankFactor_, rerankFactor) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RetrieveKnowledgeBaseRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


  protected:
    shared_ptr<string> filter_ {};
    shared_ptr<string> hybridSearch_ {};
    shared_ptr<string> hybridSearchArgs_ {};
    shared_ptr<string> includeMetadataFields_ {};
    shared_ptr<bool> includeVector_ {};
    // This parameter is required.
    shared_ptr<string> kbUuid_ {};
    shared_ptr<string> metrics_ {};
    shared_ptr<int32_t> offset_ {};
    shared_ptr<string> orderBy_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<string> recallWindow_ {};
    shared_ptr<double> rerankFactor_ {};
    shared_ptr<int32_t> topK_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
