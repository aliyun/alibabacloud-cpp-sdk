// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RETRIEVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RETRIEVEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EnergyExpertExternal20220923
{
namespace Models
{
  class RetrieveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RetrieveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(documentIds, documentIds_);
      DARABONBA_PTR_TO_JSON(folderIds, folderIds_);
      DARABONBA_PTR_TO_JSON(preRetrieveTopK, preRetrieveTopK_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(rerankerThreshold, rerankerThreshold_);
      DARABONBA_PTR_TO_JSON(topK, topK_);
      DARABONBA_PTR_TO_JSON(useReranker, useReranker_);
    };
    friend void from_json(const Darabonba::Json& j, RetrieveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(documentIds, documentIds_);
      DARABONBA_PTR_FROM_JSON(folderIds, folderIds_);
      DARABONBA_PTR_FROM_JSON(preRetrieveTopK, preRetrieveTopK_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(rerankerThreshold, rerankerThreshold_);
      DARABONBA_PTR_FROM_JSON(topK, topK_);
      DARABONBA_PTR_FROM_JSON(useReranker, useReranker_);
    };
    RetrieveRequest() = default ;
    RetrieveRequest(const RetrieveRequest &) = default ;
    RetrieveRequest(RetrieveRequest &&) = default ;
    RetrieveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RetrieveRequest() = default ;
    RetrieveRequest& operator=(const RetrieveRequest &) = default ;
    RetrieveRequest& operator=(RetrieveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->documentIds_ == nullptr
        && this->folderIds_ == nullptr && this->preRetrieveTopK_ == nullptr && this->query_ == nullptr && this->rerankerThreshold_ == nullptr && this->topK_ == nullptr
        && this->useReranker_ == nullptr; };
    // documentIds Field Functions 
    bool hasDocumentIds() const { return this->documentIds_ != nullptr;};
    void deleteDocumentIds() { this->documentIds_ = nullptr;};
    inline const vector<int64_t> & getDocumentIds() const { DARABONBA_PTR_GET_CONST(documentIds_, vector<int64_t>) };
    inline vector<int64_t> getDocumentIds() { DARABONBA_PTR_GET(documentIds_, vector<int64_t>) };
    inline RetrieveRequest& setDocumentIds(const vector<int64_t> & documentIds) { DARABONBA_PTR_SET_VALUE(documentIds_, documentIds) };
    inline RetrieveRequest& setDocumentIds(vector<int64_t> && documentIds) { DARABONBA_PTR_SET_RVALUE(documentIds_, documentIds) };


    // folderIds Field Functions 
    bool hasFolderIds() const { return this->folderIds_ != nullptr;};
    void deleteFolderIds() { this->folderIds_ = nullptr;};
    inline const vector<string> & getFolderIds() const { DARABONBA_PTR_GET_CONST(folderIds_, vector<string>) };
    inline vector<string> getFolderIds() { DARABONBA_PTR_GET(folderIds_, vector<string>) };
    inline RetrieveRequest& setFolderIds(const vector<string> & folderIds) { DARABONBA_PTR_SET_VALUE(folderIds_, folderIds) };
    inline RetrieveRequest& setFolderIds(vector<string> && folderIds) { DARABONBA_PTR_SET_RVALUE(folderIds_, folderIds) };


    // preRetrieveTopK Field Functions 
    bool hasPreRetrieveTopK() const { return this->preRetrieveTopK_ != nullptr;};
    void deletePreRetrieveTopK() { this->preRetrieveTopK_ = nullptr;};
    inline int32_t getPreRetrieveTopK() const { DARABONBA_PTR_GET_DEFAULT(preRetrieveTopK_, 0) };
    inline RetrieveRequest& setPreRetrieveTopK(int32_t preRetrieveTopK) { DARABONBA_PTR_SET_VALUE(preRetrieveTopK_, preRetrieveTopK) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline RetrieveRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // rerankerThreshold Field Functions 
    bool hasRerankerThreshold() const { return this->rerankerThreshold_ != nullptr;};
    void deleteRerankerThreshold() { this->rerankerThreshold_ = nullptr;};
    inline float getRerankerThreshold() const { DARABONBA_PTR_GET_DEFAULT(rerankerThreshold_, 0.0) };
    inline RetrieveRequest& setRerankerThreshold(float rerankerThreshold) { DARABONBA_PTR_SET_VALUE(rerankerThreshold_, rerankerThreshold) };


    // topK Field Functions 
    bool hasTopK() const { return this->topK_ != nullptr;};
    void deleteTopK() { this->topK_ = nullptr;};
    inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
    inline RetrieveRequest& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


    // useReranker Field Functions 
    bool hasUseReranker() const { return this->useReranker_ != nullptr;};
    void deleteUseReranker() { this->useReranker_ = nullptr;};
    inline bool getUseReranker() const { DARABONBA_PTR_GET_DEFAULT(useReranker_, false) };
    inline RetrieveRequest& setUseReranker(bool useReranker) { DARABONBA_PTR_SET_VALUE(useReranker_, useReranker) };


  protected:
    shared_ptr<vector<int64_t>> documentIds_ {};
    shared_ptr<vector<string>> folderIds_ {};
    shared_ptr<int32_t> preRetrieveTopK_ {};
    // This parameter is required.
    shared_ptr<string> query_ {};
    shared_ptr<float> rerankerThreshold_ {};
    shared_ptr<int32_t> topK_ {};
    shared_ptr<bool> useReranker_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EnergyExpertExternal20220923
#endif
