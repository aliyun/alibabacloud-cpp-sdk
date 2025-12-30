// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLIBRARYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DianJin20240628
{
namespace Models
{
  class GetLibraryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLibraryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(cost, cost_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(dataType, dataType_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetLibraryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(cost, cost_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(dataType, dataType_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetLibraryListResponseBody() = default ;
    GetLibraryListResponseBody(const GetLibraryListResponseBody &) = default ;
    GetLibraryListResponseBody(GetLibraryListResponseBody &&) = default ;
    GetLibraryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLibraryListResponseBody() = default ;
    GetLibraryListResponseBody& operator=(const GetLibraryListResponseBody &) = default ;
    GetLibraryListResponseBody& operator=(GetLibraryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(currentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(records, records_);
        DARABONBA_PTR_TO_JSON(totalPages, totalPages_);
        DARABONBA_PTR_TO_JSON(totalRecords, totalRecords_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(currentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(records, records_);
        DARABONBA_PTR_FROM_JSON(totalPages, totalPages_);
        DARABONBA_PTR_FROM_JSON(totalRecords, totalRecords_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Records : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Records& obj) { 
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(documentCount, documentCount_);
          DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(id, id_);
          DARABONBA_PTR_TO_JSON(indexSetting, indexSetting_);
          DARABONBA_PTR_TO_JSON(libraryName, libraryName_);
        };
        friend void from_json(const Darabonba::Json& j, Records& obj) { 
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(documentCount, documentCount_);
          DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(id, id_);
          DARABONBA_PTR_FROM_JSON(indexSetting, indexSetting_);
          DARABONBA_PTR_FROM_JSON(libraryName, libraryName_);
        };
        Records() = default ;
        Records(const Records &) = default ;
        Records(Records &&) = default ;
        Records(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Records() = default ;
        Records& operator=(const Records &) = default ;
        Records& operator=(Records &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class IndexSetting : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const IndexSetting& obj) { 
            DARABONBA_PTR_TO_JSON(chunkStrategy, chunkStrategy_);
            DARABONBA_PTR_TO_JSON(modelConfig, modelConfig_);
            DARABONBA_PTR_TO_JSON(promptRoleStyle, promptRoleStyle_);
            DARABONBA_PTR_TO_JSON(queryEnhancer, queryEnhancer_);
            DARABONBA_PTR_TO_JSON(recallStrategy, recallStrategy_);
            DARABONBA_PTR_TO_JSON(textIndexSetting, textIndexSetting_);
            DARABONBA_PTR_TO_JSON(vectorIndexSetting, vectorIndexSetting_);
          };
          friend void from_json(const Darabonba::Json& j, IndexSetting& obj) { 
            DARABONBA_PTR_FROM_JSON(chunkStrategy, chunkStrategy_);
            DARABONBA_PTR_FROM_JSON(modelConfig, modelConfig_);
            DARABONBA_PTR_FROM_JSON(promptRoleStyle, promptRoleStyle_);
            DARABONBA_PTR_FROM_JSON(queryEnhancer, queryEnhancer_);
            DARABONBA_PTR_FROM_JSON(recallStrategy, recallStrategy_);
            DARABONBA_PTR_FROM_JSON(textIndexSetting, textIndexSetting_);
            DARABONBA_PTR_FROM_JSON(vectorIndexSetting, vectorIndexSetting_);
          };
          IndexSetting() = default ;
          IndexSetting(const IndexSetting &) = default ;
          IndexSetting(IndexSetting &&) = default ;
          IndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~IndexSetting() = default ;
          IndexSetting& operator=(const IndexSetting &) = default ;
          IndexSetting& operator=(IndexSetting &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class VectorIndexSetting : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const VectorIndexSetting& obj) { 
              DARABONBA_PTR_TO_JSON(category, category_);
              DARABONBA_PTR_TO_JSON(embeddingType, embeddingType_);
              DARABONBA_PTR_TO_JSON(enable, enable_);
              DARABONBA_PTR_TO_JSON(rankThreshold, rankThreshold_);
              DARABONBA_PTR_TO_JSON(topK, topK_);
            };
            friend void from_json(const Darabonba::Json& j, VectorIndexSetting& obj) { 
              DARABONBA_PTR_FROM_JSON(category, category_);
              DARABONBA_PTR_FROM_JSON(embeddingType, embeddingType_);
              DARABONBA_PTR_FROM_JSON(enable, enable_);
              DARABONBA_PTR_FROM_JSON(rankThreshold, rankThreshold_);
              DARABONBA_PTR_FROM_JSON(topK, topK_);
            };
            VectorIndexSetting() = default ;
            VectorIndexSetting(const VectorIndexSetting &) = default ;
            VectorIndexSetting(VectorIndexSetting &&) = default ;
            VectorIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~VectorIndexSetting() = default ;
            VectorIndexSetting& operator=(const VectorIndexSetting &) = default ;
            VectorIndexSetting& operator=(VectorIndexSetting &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->category_ == nullptr
        && this->embeddingType_ == nullptr && this->enable_ == nullptr && this->rankThreshold_ == nullptr && this->topK_ == nullptr; };
            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline VectorIndexSetting& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // embeddingType Field Functions 
            bool hasEmbeddingType() const { return this->embeddingType_ != nullptr;};
            void deleteEmbeddingType() { this->embeddingType_ = nullptr;};
            inline string getEmbeddingType() const { DARABONBA_PTR_GET_DEFAULT(embeddingType_, "") };
            inline VectorIndexSetting& setEmbeddingType(string embeddingType) { DARABONBA_PTR_SET_VALUE(embeddingType_, embeddingType) };


            // enable Field Functions 
            bool hasEnable() const { return this->enable_ != nullptr;};
            void deleteEnable() { this->enable_ = nullptr;};
            inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
            inline VectorIndexSetting& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


            // rankThreshold Field Functions 
            bool hasRankThreshold() const { return this->rankThreshold_ != nullptr;};
            void deleteRankThreshold() { this->rankThreshold_ = nullptr;};
            inline double getRankThreshold() const { DARABONBA_PTR_GET_DEFAULT(rankThreshold_, 0.0) };
            inline VectorIndexSetting& setRankThreshold(double rankThreshold) { DARABONBA_PTR_SET_VALUE(rankThreshold_, rankThreshold) };


            // topK Field Functions 
            bool hasTopK() const { return this->topK_ != nullptr;};
            void deleteTopK() { this->topK_ = nullptr;};
            inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
            inline VectorIndexSetting& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


          protected:
            shared_ptr<string> category_ {};
            shared_ptr<string> embeddingType_ {};
            shared_ptr<bool> enable_ {};
            shared_ptr<double> rankThreshold_ {};
            shared_ptr<int32_t> topK_ {};
          };

          class TextIndexSetting : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const TextIndexSetting& obj) { 
              DARABONBA_PTR_TO_JSON(category, category_);
              DARABONBA_PTR_TO_JSON(enable, enable_);
              DARABONBA_PTR_TO_JSON(indexAnalyzer, indexAnalyzer_);
              DARABONBA_PTR_TO_JSON(rankThreshold, rankThreshold_);
              DARABONBA_PTR_TO_JSON(searchAnalyzer, searchAnalyzer_);
              DARABONBA_PTR_TO_JSON(topK, topK_);
            };
            friend void from_json(const Darabonba::Json& j, TextIndexSetting& obj) { 
              DARABONBA_PTR_FROM_JSON(category, category_);
              DARABONBA_PTR_FROM_JSON(enable, enable_);
              DARABONBA_PTR_FROM_JSON(indexAnalyzer, indexAnalyzer_);
              DARABONBA_PTR_FROM_JSON(rankThreshold, rankThreshold_);
              DARABONBA_PTR_FROM_JSON(searchAnalyzer, searchAnalyzer_);
              DARABONBA_PTR_FROM_JSON(topK, topK_);
            };
            TextIndexSetting() = default ;
            TextIndexSetting(const TextIndexSetting &) = default ;
            TextIndexSetting(TextIndexSetting &&) = default ;
            TextIndexSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~TextIndexSetting() = default ;
            TextIndexSetting& operator=(const TextIndexSetting &) = default ;
            TextIndexSetting& operator=(TextIndexSetting &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->category_ == nullptr
        && this->enable_ == nullptr && this->indexAnalyzer_ == nullptr && this->rankThreshold_ == nullptr && this->searchAnalyzer_ == nullptr && this->topK_ == nullptr; };
            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline TextIndexSetting& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // enable Field Functions 
            bool hasEnable() const { return this->enable_ != nullptr;};
            void deleteEnable() { this->enable_ = nullptr;};
            inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
            inline TextIndexSetting& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


            // indexAnalyzer Field Functions 
            bool hasIndexAnalyzer() const { return this->indexAnalyzer_ != nullptr;};
            void deleteIndexAnalyzer() { this->indexAnalyzer_ = nullptr;};
            inline string getIndexAnalyzer() const { DARABONBA_PTR_GET_DEFAULT(indexAnalyzer_, "") };
            inline TextIndexSetting& setIndexAnalyzer(string indexAnalyzer) { DARABONBA_PTR_SET_VALUE(indexAnalyzer_, indexAnalyzer) };


            // rankThreshold Field Functions 
            bool hasRankThreshold() const { return this->rankThreshold_ != nullptr;};
            void deleteRankThreshold() { this->rankThreshold_ = nullptr;};
            inline double getRankThreshold() const { DARABONBA_PTR_GET_DEFAULT(rankThreshold_, 0.0) };
            inline TextIndexSetting& setRankThreshold(double rankThreshold) { DARABONBA_PTR_SET_VALUE(rankThreshold_, rankThreshold) };


            // searchAnalyzer Field Functions 
            bool hasSearchAnalyzer() const { return this->searchAnalyzer_ != nullptr;};
            void deleteSearchAnalyzer() { this->searchAnalyzer_ = nullptr;};
            inline string getSearchAnalyzer() const { DARABONBA_PTR_GET_DEFAULT(searchAnalyzer_, "") };
            inline TextIndexSetting& setSearchAnalyzer(string searchAnalyzer) { DARABONBA_PTR_SET_VALUE(searchAnalyzer_, searchAnalyzer) };


            // topK Field Functions 
            bool hasTopK() const { return this->topK_ != nullptr;};
            void deleteTopK() { this->topK_ = nullptr;};
            inline int32_t getTopK() const { DARABONBA_PTR_GET_DEFAULT(topK_, 0) };
            inline TextIndexSetting& setTopK(int32_t topK) { DARABONBA_PTR_SET_VALUE(topK_, topK) };


          protected:
            shared_ptr<string> category_ {};
            shared_ptr<bool> enable_ {};
            shared_ptr<string> indexAnalyzer_ {};
            shared_ptr<double> rankThreshold_ {};
            shared_ptr<string> searchAnalyzer_ {};
            shared_ptr<int32_t> topK_ {};
          };

          class RecallStrategy : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const RecallStrategy& obj) { 
              DARABONBA_PTR_TO_JSON(documentRankType, documentRankType_);
              DARABONBA_PTR_TO_JSON(limit, limit_);
            };
            friend void from_json(const Darabonba::Json& j, RecallStrategy& obj) { 
              DARABONBA_PTR_FROM_JSON(documentRankType, documentRankType_);
              DARABONBA_PTR_FROM_JSON(limit, limit_);
            };
            RecallStrategy() = default ;
            RecallStrategy(const RecallStrategy &) = default ;
            RecallStrategy(RecallStrategy &&) = default ;
            RecallStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~RecallStrategy() = default ;
            RecallStrategy& operator=(const RecallStrategy &) = default ;
            RecallStrategy& operator=(RecallStrategy &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->documentRankType_ == nullptr
        && this->limit_ == nullptr; };
            // documentRankType Field Functions 
            bool hasDocumentRankType() const { return this->documentRankType_ != nullptr;};
            void deleteDocumentRankType() { this->documentRankType_ = nullptr;};
            inline string getDocumentRankType() const { DARABONBA_PTR_GET_DEFAULT(documentRankType_, "") };
            inline RecallStrategy& setDocumentRankType(string documentRankType) { DARABONBA_PTR_SET_VALUE(documentRankType_, documentRankType) };


            // limit Field Functions 
            bool hasLimit() const { return this->limit_ != nullptr;};
            void deleteLimit() { this->limit_ = nullptr;};
            inline int32_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0) };
            inline RecallStrategy& setLimit(int32_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


          protected:
            shared_ptr<string> documentRankType_ {};
            shared_ptr<int32_t> limit_ {};
          };

          class QueryEnhancer : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const QueryEnhancer& obj) { 
              DARABONBA_PTR_TO_JSON(enableFollowUp, enableFollowUp_);
              DARABONBA_PTR_TO_JSON(enableMultiQuery, enableMultiQuery_);
              DARABONBA_PTR_TO_JSON(enableOpenQa, enableOpenQa_);
              DARABONBA_PTR_TO_JSON(enableQueryRewrite, enableQueryRewrite_);
              DARABONBA_PTR_TO_JSON(enableSession, enableSession_);
              DARABONBA_PTR_TO_JSON(localKnowledgeId, localKnowledgeId_);
              DARABONBA_PTR_TO_JSON(withDocumentReference, withDocumentReference_);
            };
            friend void from_json(const Darabonba::Json& j, QueryEnhancer& obj) { 
              DARABONBA_PTR_FROM_JSON(enableFollowUp, enableFollowUp_);
              DARABONBA_PTR_FROM_JSON(enableMultiQuery, enableMultiQuery_);
              DARABONBA_PTR_FROM_JSON(enableOpenQa, enableOpenQa_);
              DARABONBA_PTR_FROM_JSON(enableQueryRewrite, enableQueryRewrite_);
              DARABONBA_PTR_FROM_JSON(enableSession, enableSession_);
              DARABONBA_PTR_FROM_JSON(localKnowledgeId, localKnowledgeId_);
              DARABONBA_PTR_FROM_JSON(withDocumentReference, withDocumentReference_);
            };
            QueryEnhancer() = default ;
            QueryEnhancer(const QueryEnhancer &) = default ;
            QueryEnhancer(QueryEnhancer &&) = default ;
            QueryEnhancer(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~QueryEnhancer() = default ;
            QueryEnhancer& operator=(const QueryEnhancer &) = default ;
            QueryEnhancer& operator=(QueryEnhancer &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->enableFollowUp_ == nullptr
        && this->enableMultiQuery_ == nullptr && this->enableOpenQa_ == nullptr && this->enableQueryRewrite_ == nullptr && this->enableSession_ == nullptr && this->localKnowledgeId_ == nullptr
        && this->withDocumentReference_ == nullptr; };
            // enableFollowUp Field Functions 
            bool hasEnableFollowUp() const { return this->enableFollowUp_ != nullptr;};
            void deleteEnableFollowUp() { this->enableFollowUp_ = nullptr;};
            inline bool getEnableFollowUp() const { DARABONBA_PTR_GET_DEFAULT(enableFollowUp_, false) };
            inline QueryEnhancer& setEnableFollowUp(bool enableFollowUp) { DARABONBA_PTR_SET_VALUE(enableFollowUp_, enableFollowUp) };


            // enableMultiQuery Field Functions 
            bool hasEnableMultiQuery() const { return this->enableMultiQuery_ != nullptr;};
            void deleteEnableMultiQuery() { this->enableMultiQuery_ = nullptr;};
            inline bool getEnableMultiQuery() const { DARABONBA_PTR_GET_DEFAULT(enableMultiQuery_, false) };
            inline QueryEnhancer& setEnableMultiQuery(bool enableMultiQuery) { DARABONBA_PTR_SET_VALUE(enableMultiQuery_, enableMultiQuery) };


            // enableOpenQa Field Functions 
            bool hasEnableOpenQa() const { return this->enableOpenQa_ != nullptr;};
            void deleteEnableOpenQa() { this->enableOpenQa_ = nullptr;};
            inline bool getEnableOpenQa() const { DARABONBA_PTR_GET_DEFAULT(enableOpenQa_, false) };
            inline QueryEnhancer& setEnableOpenQa(bool enableOpenQa) { DARABONBA_PTR_SET_VALUE(enableOpenQa_, enableOpenQa) };


            // enableQueryRewrite Field Functions 
            bool hasEnableQueryRewrite() const { return this->enableQueryRewrite_ != nullptr;};
            void deleteEnableQueryRewrite() { this->enableQueryRewrite_ = nullptr;};
            inline bool getEnableQueryRewrite() const { DARABONBA_PTR_GET_DEFAULT(enableQueryRewrite_, false) };
            inline QueryEnhancer& setEnableQueryRewrite(bool enableQueryRewrite) { DARABONBA_PTR_SET_VALUE(enableQueryRewrite_, enableQueryRewrite) };


            // enableSession Field Functions 
            bool hasEnableSession() const { return this->enableSession_ != nullptr;};
            void deleteEnableSession() { this->enableSession_ = nullptr;};
            inline bool getEnableSession() const { DARABONBA_PTR_GET_DEFAULT(enableSession_, false) };
            inline QueryEnhancer& setEnableSession(bool enableSession) { DARABONBA_PTR_SET_VALUE(enableSession_, enableSession) };


            // localKnowledgeId Field Functions 
            bool hasLocalKnowledgeId() const { return this->localKnowledgeId_ != nullptr;};
            void deleteLocalKnowledgeId() { this->localKnowledgeId_ = nullptr;};
            inline string getLocalKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(localKnowledgeId_, "") };
            inline QueryEnhancer& setLocalKnowledgeId(string localKnowledgeId) { DARABONBA_PTR_SET_VALUE(localKnowledgeId_, localKnowledgeId) };


            // withDocumentReference Field Functions 
            bool hasWithDocumentReference() const { return this->withDocumentReference_ != nullptr;};
            void deleteWithDocumentReference() { this->withDocumentReference_ = nullptr;};
            inline bool getWithDocumentReference() const { DARABONBA_PTR_GET_DEFAULT(withDocumentReference_, false) };
            inline QueryEnhancer& setWithDocumentReference(bool withDocumentReference) { DARABONBA_PTR_SET_VALUE(withDocumentReference_, withDocumentReference) };


          protected:
            shared_ptr<bool> enableFollowUp_ {};
            shared_ptr<bool> enableMultiQuery_ {};
            shared_ptr<bool> enableOpenQa_ {};
            shared_ptr<bool> enableQueryRewrite_ {};
            shared_ptr<bool> enableSession_ {};
            shared_ptr<string> localKnowledgeId_ {};
            shared_ptr<bool> withDocumentReference_ {};
          };

          class ModelConfig : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ModelConfig& obj) { 
              DARABONBA_PTR_TO_JSON(temperature, temperature_);
              DARABONBA_PTR_TO_JSON(topP, topP_);
            };
            friend void from_json(const Darabonba::Json& j, ModelConfig& obj) { 
              DARABONBA_PTR_FROM_JSON(temperature, temperature_);
              DARABONBA_PTR_FROM_JSON(topP, topP_);
            };
            ModelConfig() = default ;
            ModelConfig(const ModelConfig &) = default ;
            ModelConfig(ModelConfig &&) = default ;
            ModelConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ModelConfig() = default ;
            ModelConfig& operator=(const ModelConfig &) = default ;
            ModelConfig& operator=(ModelConfig &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->temperature_ == nullptr
        && this->topP_ == nullptr; };
            // temperature Field Functions 
            bool hasTemperature() const { return this->temperature_ != nullptr;};
            void deleteTemperature() { this->temperature_ = nullptr;};
            inline double getTemperature() const { DARABONBA_PTR_GET_DEFAULT(temperature_, 0.0) };
            inline ModelConfig& setTemperature(double temperature) { DARABONBA_PTR_SET_VALUE(temperature_, temperature) };


            // topP Field Functions 
            bool hasTopP() const { return this->topP_ != nullptr;};
            void deleteTopP() { this->topP_ = nullptr;};
            inline double getTopP() const { DARABONBA_PTR_GET_DEFAULT(topP_, 0.0) };
            inline ModelConfig& setTopP(double topP) { DARABONBA_PTR_SET_VALUE(topP_, topP) };


          protected:
            shared_ptr<double> temperature_ {};
            // topP
            shared_ptr<double> topP_ {};
          };

          class ChunkStrategy : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ChunkStrategy& obj) { 
              DARABONBA_PTR_TO_JSON(docTreeSplit, docTreeSplit_);
              DARABONBA_PTR_TO_JSON(docTreeSplitSize, docTreeSplitSize_);
              DARABONBA_PTR_TO_JSON(enhanceGraph, enhanceGraph_);
              DARABONBA_PTR_TO_JSON(enhanceTable, enhanceTable_);
              DARABONBA_PTR_TO_JSON(overlap, overlap_);
              DARABONBA_PTR_TO_JSON(sentenceSplit, sentenceSplit_);
              DARABONBA_PTR_TO_JSON(sentenceSplitSize, sentenceSplitSize_);
              DARABONBA_PTR_TO_JSON(size, size_);
              DARABONBA_PTR_TO_JSON(split, split_);
            };
            friend void from_json(const Darabonba::Json& j, ChunkStrategy& obj) { 
              DARABONBA_PTR_FROM_JSON(docTreeSplit, docTreeSplit_);
              DARABONBA_PTR_FROM_JSON(docTreeSplitSize, docTreeSplitSize_);
              DARABONBA_PTR_FROM_JSON(enhanceGraph, enhanceGraph_);
              DARABONBA_PTR_FROM_JSON(enhanceTable, enhanceTable_);
              DARABONBA_PTR_FROM_JSON(overlap, overlap_);
              DARABONBA_PTR_FROM_JSON(sentenceSplit, sentenceSplit_);
              DARABONBA_PTR_FROM_JSON(sentenceSplitSize, sentenceSplitSize_);
              DARABONBA_PTR_FROM_JSON(size, size_);
              DARABONBA_PTR_FROM_JSON(split, split_);
            };
            ChunkStrategy() = default ;
            ChunkStrategy(const ChunkStrategy &) = default ;
            ChunkStrategy(ChunkStrategy &&) = default ;
            ChunkStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ChunkStrategy() = default ;
            ChunkStrategy& operator=(const ChunkStrategy &) = default ;
            ChunkStrategy& operator=(ChunkStrategy &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->docTreeSplit_ == nullptr
        && this->docTreeSplitSize_ == nullptr && this->enhanceGraph_ == nullptr && this->enhanceTable_ == nullptr && this->overlap_ == nullptr && this->sentenceSplit_ == nullptr
        && this->sentenceSplitSize_ == nullptr && this->size_ == nullptr && this->split_ == nullptr; };
            // docTreeSplit Field Functions 
            bool hasDocTreeSplit() const { return this->docTreeSplit_ != nullptr;};
            void deleteDocTreeSplit() { this->docTreeSplit_ = nullptr;};
            inline bool getDocTreeSplit() const { DARABONBA_PTR_GET_DEFAULT(docTreeSplit_, false) };
            inline ChunkStrategy& setDocTreeSplit(bool docTreeSplit) { DARABONBA_PTR_SET_VALUE(docTreeSplit_, docTreeSplit) };


            // docTreeSplitSize Field Functions 
            bool hasDocTreeSplitSize() const { return this->docTreeSplitSize_ != nullptr;};
            void deleteDocTreeSplitSize() { this->docTreeSplitSize_ = nullptr;};
            inline int32_t getDocTreeSplitSize() const { DARABONBA_PTR_GET_DEFAULT(docTreeSplitSize_, 0) };
            inline ChunkStrategy& setDocTreeSplitSize(int32_t docTreeSplitSize) { DARABONBA_PTR_SET_VALUE(docTreeSplitSize_, docTreeSplitSize) };


            // enhanceGraph Field Functions 
            bool hasEnhanceGraph() const { return this->enhanceGraph_ != nullptr;};
            void deleteEnhanceGraph() { this->enhanceGraph_ = nullptr;};
            inline bool getEnhanceGraph() const { DARABONBA_PTR_GET_DEFAULT(enhanceGraph_, false) };
            inline ChunkStrategy& setEnhanceGraph(bool enhanceGraph) { DARABONBA_PTR_SET_VALUE(enhanceGraph_, enhanceGraph) };


            // enhanceTable Field Functions 
            bool hasEnhanceTable() const { return this->enhanceTable_ != nullptr;};
            void deleteEnhanceTable() { this->enhanceTable_ = nullptr;};
            inline bool getEnhanceTable() const { DARABONBA_PTR_GET_DEFAULT(enhanceTable_, false) };
            inline ChunkStrategy& setEnhanceTable(bool enhanceTable) { DARABONBA_PTR_SET_VALUE(enhanceTable_, enhanceTable) };


            // overlap Field Functions 
            bool hasOverlap() const { return this->overlap_ != nullptr;};
            void deleteOverlap() { this->overlap_ = nullptr;};
            inline int32_t getOverlap() const { DARABONBA_PTR_GET_DEFAULT(overlap_, 0) };
            inline ChunkStrategy& setOverlap(int32_t overlap) { DARABONBA_PTR_SET_VALUE(overlap_, overlap) };


            // sentenceSplit Field Functions 
            bool hasSentenceSplit() const { return this->sentenceSplit_ != nullptr;};
            void deleteSentenceSplit() { this->sentenceSplit_ = nullptr;};
            inline bool getSentenceSplit() const { DARABONBA_PTR_GET_DEFAULT(sentenceSplit_, false) };
            inline ChunkStrategy& setSentenceSplit(bool sentenceSplit) { DARABONBA_PTR_SET_VALUE(sentenceSplit_, sentenceSplit) };


            // sentenceSplitSize Field Functions 
            bool hasSentenceSplitSize() const { return this->sentenceSplitSize_ != nullptr;};
            void deleteSentenceSplitSize() { this->sentenceSplitSize_ = nullptr;};
            inline int32_t getSentenceSplitSize() const { DARABONBA_PTR_GET_DEFAULT(sentenceSplitSize_, 0) };
            inline ChunkStrategy& setSentenceSplitSize(int32_t sentenceSplitSize) { DARABONBA_PTR_SET_VALUE(sentenceSplitSize_, sentenceSplitSize) };


            // size Field Functions 
            bool hasSize() const { return this->size_ != nullptr;};
            void deleteSize() { this->size_ = nullptr;};
            inline int32_t getSize() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
            inline ChunkStrategy& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


            // split Field Functions 
            bool hasSplit() const { return this->split_ != nullptr;};
            void deleteSplit() { this->split_ = nullptr;};
            inline bool getSplit() const { DARABONBA_PTR_GET_DEFAULT(split_, false) };
            inline ChunkStrategy& setSplit(bool split) { DARABONBA_PTR_SET_VALUE(split_, split) };


          protected:
            shared_ptr<bool> docTreeSplit_ {};
            shared_ptr<int32_t> docTreeSplitSize_ {};
            shared_ptr<bool> enhanceGraph_ {};
            shared_ptr<bool> enhanceTable_ {};
            shared_ptr<int32_t> overlap_ {};
            shared_ptr<bool> sentenceSplit_ {};
            shared_ptr<int32_t> sentenceSplitSize_ {};
            shared_ptr<int32_t> size_ {};
            shared_ptr<bool> split_ {};
          };

          virtual bool empty() const override { return this->chunkStrategy_ == nullptr
        && this->modelConfig_ == nullptr && this->promptRoleStyle_ == nullptr && this->queryEnhancer_ == nullptr && this->recallStrategy_ == nullptr && this->textIndexSetting_ == nullptr
        && this->vectorIndexSetting_ == nullptr; };
          // chunkStrategy Field Functions 
          bool hasChunkStrategy() const { return this->chunkStrategy_ != nullptr;};
          void deleteChunkStrategy() { this->chunkStrategy_ = nullptr;};
          inline const IndexSetting::ChunkStrategy & getChunkStrategy() const { DARABONBA_PTR_GET_CONST(chunkStrategy_, IndexSetting::ChunkStrategy) };
          inline IndexSetting::ChunkStrategy getChunkStrategy() { DARABONBA_PTR_GET(chunkStrategy_, IndexSetting::ChunkStrategy) };
          inline IndexSetting& setChunkStrategy(const IndexSetting::ChunkStrategy & chunkStrategy) { DARABONBA_PTR_SET_VALUE(chunkStrategy_, chunkStrategy) };
          inline IndexSetting& setChunkStrategy(IndexSetting::ChunkStrategy && chunkStrategy) { DARABONBA_PTR_SET_RVALUE(chunkStrategy_, chunkStrategy) };


          // modelConfig Field Functions 
          bool hasModelConfig() const { return this->modelConfig_ != nullptr;};
          void deleteModelConfig() { this->modelConfig_ = nullptr;};
          inline const IndexSetting::ModelConfig & getModelConfig() const { DARABONBA_PTR_GET_CONST(modelConfig_, IndexSetting::ModelConfig) };
          inline IndexSetting::ModelConfig getModelConfig() { DARABONBA_PTR_GET(modelConfig_, IndexSetting::ModelConfig) };
          inline IndexSetting& setModelConfig(const IndexSetting::ModelConfig & modelConfig) { DARABONBA_PTR_SET_VALUE(modelConfig_, modelConfig) };
          inline IndexSetting& setModelConfig(IndexSetting::ModelConfig && modelConfig) { DARABONBA_PTR_SET_RVALUE(modelConfig_, modelConfig) };


          // promptRoleStyle Field Functions 
          bool hasPromptRoleStyle() const { return this->promptRoleStyle_ != nullptr;};
          void deletePromptRoleStyle() { this->promptRoleStyle_ = nullptr;};
          inline string getPromptRoleStyle() const { DARABONBA_PTR_GET_DEFAULT(promptRoleStyle_, "") };
          inline IndexSetting& setPromptRoleStyle(string promptRoleStyle) { DARABONBA_PTR_SET_VALUE(promptRoleStyle_, promptRoleStyle) };


          // queryEnhancer Field Functions 
          bool hasQueryEnhancer() const { return this->queryEnhancer_ != nullptr;};
          void deleteQueryEnhancer() { this->queryEnhancer_ = nullptr;};
          inline const IndexSetting::QueryEnhancer & getQueryEnhancer() const { DARABONBA_PTR_GET_CONST(queryEnhancer_, IndexSetting::QueryEnhancer) };
          inline IndexSetting::QueryEnhancer getQueryEnhancer() { DARABONBA_PTR_GET(queryEnhancer_, IndexSetting::QueryEnhancer) };
          inline IndexSetting& setQueryEnhancer(const IndexSetting::QueryEnhancer & queryEnhancer) { DARABONBA_PTR_SET_VALUE(queryEnhancer_, queryEnhancer) };
          inline IndexSetting& setQueryEnhancer(IndexSetting::QueryEnhancer && queryEnhancer) { DARABONBA_PTR_SET_RVALUE(queryEnhancer_, queryEnhancer) };


          // recallStrategy Field Functions 
          bool hasRecallStrategy() const { return this->recallStrategy_ != nullptr;};
          void deleteRecallStrategy() { this->recallStrategy_ = nullptr;};
          inline const IndexSetting::RecallStrategy & getRecallStrategy() const { DARABONBA_PTR_GET_CONST(recallStrategy_, IndexSetting::RecallStrategy) };
          inline IndexSetting::RecallStrategy getRecallStrategy() { DARABONBA_PTR_GET(recallStrategy_, IndexSetting::RecallStrategy) };
          inline IndexSetting& setRecallStrategy(const IndexSetting::RecallStrategy & recallStrategy) { DARABONBA_PTR_SET_VALUE(recallStrategy_, recallStrategy) };
          inline IndexSetting& setRecallStrategy(IndexSetting::RecallStrategy && recallStrategy) { DARABONBA_PTR_SET_RVALUE(recallStrategy_, recallStrategy) };


          // textIndexSetting Field Functions 
          bool hasTextIndexSetting() const { return this->textIndexSetting_ != nullptr;};
          void deleteTextIndexSetting() { this->textIndexSetting_ = nullptr;};
          inline const IndexSetting::TextIndexSetting & getTextIndexSetting() const { DARABONBA_PTR_GET_CONST(textIndexSetting_, IndexSetting::TextIndexSetting) };
          inline IndexSetting::TextIndexSetting getTextIndexSetting() { DARABONBA_PTR_GET(textIndexSetting_, IndexSetting::TextIndexSetting) };
          inline IndexSetting& setTextIndexSetting(const IndexSetting::TextIndexSetting & textIndexSetting) { DARABONBA_PTR_SET_VALUE(textIndexSetting_, textIndexSetting) };
          inline IndexSetting& setTextIndexSetting(IndexSetting::TextIndexSetting && textIndexSetting) { DARABONBA_PTR_SET_RVALUE(textIndexSetting_, textIndexSetting) };


          // vectorIndexSetting Field Functions 
          bool hasVectorIndexSetting() const { return this->vectorIndexSetting_ != nullptr;};
          void deleteVectorIndexSetting() { this->vectorIndexSetting_ = nullptr;};
          inline const IndexSetting::VectorIndexSetting & getVectorIndexSetting() const { DARABONBA_PTR_GET_CONST(vectorIndexSetting_, IndexSetting::VectorIndexSetting) };
          inline IndexSetting::VectorIndexSetting getVectorIndexSetting() { DARABONBA_PTR_GET(vectorIndexSetting_, IndexSetting::VectorIndexSetting) };
          inline IndexSetting& setVectorIndexSetting(const IndexSetting::VectorIndexSetting & vectorIndexSetting) { DARABONBA_PTR_SET_VALUE(vectorIndexSetting_, vectorIndexSetting) };
          inline IndexSetting& setVectorIndexSetting(IndexSetting::VectorIndexSetting && vectorIndexSetting) { DARABONBA_PTR_SET_RVALUE(vectorIndexSetting_, vectorIndexSetting) };


        protected:
          shared_ptr<IndexSetting::ChunkStrategy> chunkStrategy_ {};
          shared_ptr<IndexSetting::ModelConfig> modelConfig_ {};
          shared_ptr<string> promptRoleStyle_ {};
          shared_ptr<IndexSetting::QueryEnhancer> queryEnhancer_ {};
          shared_ptr<IndexSetting::RecallStrategy> recallStrategy_ {};
          shared_ptr<IndexSetting::TextIndexSetting> textIndexSetting_ {};
          shared_ptr<IndexSetting::VectorIndexSetting> vectorIndexSetting_ {};
        };

        virtual bool empty() const override { return this->description_ == nullptr
        && this->documentCount_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->indexSetting_ == nullptr
        && this->libraryName_ == nullptr; };
        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Records& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // documentCount Field Functions 
        bool hasDocumentCount() const { return this->documentCount_ != nullptr;};
        void deleteDocumentCount() { this->documentCount_ = nullptr;};
        inline int64_t getDocumentCount() const { DARABONBA_PTR_GET_DEFAULT(documentCount_, 0L) };
        inline Records& setDocumentCount(int64_t documentCount) { DARABONBA_PTR_SET_VALUE(documentCount_, documentCount) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Records& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Records& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Records& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // indexSetting Field Functions 
        bool hasIndexSetting() const { return this->indexSetting_ != nullptr;};
        void deleteIndexSetting() { this->indexSetting_ = nullptr;};
        inline const Records::IndexSetting & getIndexSetting() const { DARABONBA_PTR_GET_CONST(indexSetting_, Records::IndexSetting) };
        inline Records::IndexSetting getIndexSetting() { DARABONBA_PTR_GET(indexSetting_, Records::IndexSetting) };
        inline Records& setIndexSetting(const Records::IndexSetting & indexSetting) { DARABONBA_PTR_SET_VALUE(indexSetting_, indexSetting) };
        inline Records& setIndexSetting(Records::IndexSetting && indexSetting) { DARABONBA_PTR_SET_RVALUE(indexSetting_, indexSetting) };


        // libraryName Field Functions 
        bool hasLibraryName() const { return this->libraryName_ != nullptr;};
        void deleteLibraryName() { this->libraryName_ = nullptr;};
        inline string getLibraryName() const { DARABONBA_PTR_GET_DEFAULT(libraryName_, "") };
        inline Records& setLibraryName(string libraryName) { DARABONBA_PTR_SET_VALUE(libraryName_, libraryName) };


      protected:
        shared_ptr<string> description_ {};
        shared_ptr<int64_t> documentCount_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<string> gmtModified_ {};
        shared_ptr<string> id_ {};
        shared_ptr<Records::IndexSetting> indexSetting_ {};
        shared_ptr<string> libraryName_ {};
      };

      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->records_ == nullptr && this->totalPages_ == nullptr && this->totalRecords_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
      inline Data& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // records Field Functions 
      bool hasRecords() const { return this->records_ != nullptr;};
      void deleteRecords() { this->records_ = nullptr;};
      inline const vector<Data::Records> & getRecords() const { DARABONBA_PTR_GET_CONST(records_, vector<Data::Records>) };
      inline vector<Data::Records> getRecords() { DARABONBA_PTR_GET(records_, vector<Data::Records>) };
      inline Data& setRecords(const vector<Data::Records> & records) { DARABONBA_PTR_SET_VALUE(records_, records) };
      inline Data& setRecords(vector<Data::Records> && records) { DARABONBA_PTR_SET_RVALUE(records_, records) };


      // totalPages Field Functions 
      bool hasTotalPages() const { return this->totalPages_ != nullptr;};
      void deleteTotalPages() { this->totalPages_ = nullptr;};
      inline int64_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0L) };
      inline Data& setTotalPages(int64_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


      // totalRecords Field Functions 
      bool hasTotalRecords() const { return this->totalRecords_ != nullptr;};
      void deleteTotalRecords() { this->totalRecords_ = nullptr;};
      inline int64_t getTotalRecords() const { DARABONBA_PTR_GET_DEFAULT(totalRecords_, 0L) };
      inline Data& setTotalRecords(int64_t totalRecords) { DARABONBA_PTR_SET_VALUE(totalRecords_, totalRecords) };


    protected:
      shared_ptr<int64_t> currentPage_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<vector<Data::Records>> records_ {};
      shared_ptr<int64_t> totalPages_ {};
      shared_ptr<int64_t> totalRecords_ {};
    };

    virtual bool empty() const override { return this->cost_ == nullptr
        && this->data_ == nullptr && this->dataType_ == nullptr && this->errCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->time_ == nullptr; };
    // cost Field Functions 
    bool hasCost() const { return this->cost_ != nullptr;};
    void deleteCost() { this->cost_ = nullptr;};
    inline int64_t getCost() const { DARABONBA_PTR_GET_DEFAULT(cost_, 0L) };
    inline GetLibraryListResponseBody& setCost(int64_t cost) { DARABONBA_PTR_SET_VALUE(cost_, cost) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetLibraryListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetLibraryListResponseBody::Data) };
    inline GetLibraryListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetLibraryListResponseBody::Data) };
    inline GetLibraryListResponseBody& setData(const GetLibraryListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetLibraryListResponseBody& setData(GetLibraryListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline GetLibraryListResponseBody& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetLibraryListResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetLibraryListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLibraryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLibraryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetLibraryListResponseBody& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    shared_ptr<int64_t> cost_ {};
    shared_ptr<GetLibraryListResponseBody::Data> data_ {};
    shared_ptr<string> dataType_ {};
    shared_ptr<string> errCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DianJin20240628
#endif
