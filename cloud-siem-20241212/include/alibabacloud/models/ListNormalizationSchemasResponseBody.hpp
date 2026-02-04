// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONSCHEMASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONSCHEMASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationSchemasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationSchemasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationSchemas, normalizationSchemas_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationSchemasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationSchemas, normalizationSchemas_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNormalizationSchemasResponseBody() = default ;
    ListNormalizationSchemasResponseBody(const ListNormalizationSchemasResponseBody &) = default ;
    ListNormalizationSchemasResponseBody(ListNormalizationSchemasResponseBody &&) = default ;
    ListNormalizationSchemasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationSchemasResponseBody() = default ;
    ListNormalizationSchemasResponseBody& operator=(const ListNormalizationSchemasResponseBody &) = default ;
    ListNormalizationSchemasResponseBody& operator=(ListNormalizationSchemasResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationSchemas : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationSchemas& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaDescription, normalizationSchemaDescription_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaFrom, normalizationSchemaFrom_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaName, normalizationSchemaName_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaTargetLogStore, normalizationSchemaTargetLogStore_);
        DARABONBA_PTR_TO_JSON(TargetLogStore, targetLogStore_);
        DARABONBA_PTR_TO_JSON(TargetStoreView, targetStoreView_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationSchemas& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaDescription, normalizationSchemaDescription_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaFrom, normalizationSchemaFrom_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaName, normalizationSchemaName_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaTargetLogStore, normalizationSchemaTargetLogStore_);
        DARABONBA_PTR_FROM_JSON(TargetLogStore, targetLogStore_);
        DARABONBA_PTR_FROM_JSON(TargetStoreView, targetStoreView_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      NormalizationSchemas() = default ;
      NormalizationSchemas(const NormalizationSchemas &) = default ;
      NormalizationSchemas(NormalizationSchemas &&) = default ;
      NormalizationSchemas(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationSchemas() = default ;
      NormalizationSchemas& operator=(const NormalizationSchemas &) = default ;
      NormalizationSchemas& operator=(NormalizationSchemas &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->normalizationCategoryId_ == nullptr && this->normalizationSchemaDescription_ == nullptr && this->normalizationSchemaFrom_ == nullptr && this->normalizationSchemaId_ == nullptr && this->normalizationSchemaName_ == nullptr
        && this->normalizationSchemaTargetLogStore_ == nullptr && this->targetLogStore_ == nullptr && this->targetStoreView_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NormalizationSchemas& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // normalizationCategoryId Field Functions 
      bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
      void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
      inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
      inline NormalizationSchemas& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


      // normalizationSchemaDescription Field Functions 
      bool hasNormalizationSchemaDescription() const { return this->normalizationSchemaDescription_ != nullptr;};
      void deleteNormalizationSchemaDescription() { this->normalizationSchemaDescription_ = nullptr;};
      inline string getNormalizationSchemaDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaDescription_, "") };
      inline NormalizationSchemas& setNormalizationSchemaDescription(string normalizationSchemaDescription) { DARABONBA_PTR_SET_VALUE(normalizationSchemaDescription_, normalizationSchemaDescription) };


      // normalizationSchemaFrom Field Functions 
      bool hasNormalizationSchemaFrom() const { return this->normalizationSchemaFrom_ != nullptr;};
      void deleteNormalizationSchemaFrom() { this->normalizationSchemaFrom_ = nullptr;};
      inline string getNormalizationSchemaFrom() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaFrom_, "") };
      inline NormalizationSchemas& setNormalizationSchemaFrom(string normalizationSchemaFrom) { DARABONBA_PTR_SET_VALUE(normalizationSchemaFrom_, normalizationSchemaFrom) };


      // normalizationSchemaId Field Functions 
      bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
      void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
      inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
      inline NormalizationSchemas& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


      // normalizationSchemaName Field Functions 
      bool hasNormalizationSchemaName() const { return this->normalizationSchemaName_ != nullptr;};
      void deleteNormalizationSchemaName() { this->normalizationSchemaName_ = nullptr;};
      inline string getNormalizationSchemaName() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaName_, "") };
      inline NormalizationSchemas& setNormalizationSchemaName(string normalizationSchemaName) { DARABONBA_PTR_SET_VALUE(normalizationSchemaName_, normalizationSchemaName) };


      // normalizationSchemaTargetLogStore Field Functions 
      bool hasNormalizationSchemaTargetLogStore() const { return this->normalizationSchemaTargetLogStore_ != nullptr;};
      void deleteNormalizationSchemaTargetLogStore() { this->normalizationSchemaTargetLogStore_ = nullptr;};
      inline string getNormalizationSchemaTargetLogStore() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaTargetLogStore_, "") };
      inline NormalizationSchemas& setNormalizationSchemaTargetLogStore(string normalizationSchemaTargetLogStore) { DARABONBA_PTR_SET_VALUE(normalizationSchemaTargetLogStore_, normalizationSchemaTargetLogStore) };


      // targetLogStore Field Functions 
      bool hasTargetLogStore() const { return this->targetLogStore_ != nullptr;};
      void deleteTargetLogStore() { this->targetLogStore_ = nullptr;};
      inline string getTargetLogStore() const { DARABONBA_PTR_GET_DEFAULT(targetLogStore_, "") };
      inline NormalizationSchemas& setTargetLogStore(string targetLogStore) { DARABONBA_PTR_SET_VALUE(targetLogStore_, targetLogStore) };


      // targetStoreView Field Functions 
      bool hasTargetStoreView() const { return this->targetStoreView_ != nullptr;};
      void deleteTargetStoreView() { this->targetStoreView_ = nullptr;};
      inline string getTargetStoreView() const { DARABONBA_PTR_GET_DEFAULT(targetStoreView_, "") };
      inline NormalizationSchemas& setTargetStoreView(string targetStoreView) { DARABONBA_PTR_SET_VALUE(targetStoreView_, targetStoreView) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NormalizationSchemas& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> normalizationCategoryId_ {};
      shared_ptr<string> normalizationSchemaDescription_ {};
      shared_ptr<string> normalizationSchemaFrom_ {};
      shared_ptr<string> normalizationSchemaId_ {};
      shared_ptr<string> normalizationSchemaName_ {};
      shared_ptr<string> normalizationSchemaTargetLogStore_ {};
      shared_ptr<string> targetLogStore_ {};
      shared_ptr<string> targetStoreView_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->normalizationSchemas_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationSchemasResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationSchemasResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationSchemas Field Functions 
    bool hasNormalizationSchemas() const { return this->normalizationSchemas_ != nullptr;};
    void deleteNormalizationSchemas() { this->normalizationSchemas_ = nullptr;};
    inline const vector<ListNormalizationSchemasResponseBody::NormalizationSchemas> & getNormalizationSchemas() const { DARABONBA_PTR_GET_CONST(normalizationSchemas_, vector<ListNormalizationSchemasResponseBody::NormalizationSchemas>) };
    inline vector<ListNormalizationSchemasResponseBody::NormalizationSchemas> getNormalizationSchemas() { DARABONBA_PTR_GET(normalizationSchemas_, vector<ListNormalizationSchemasResponseBody::NormalizationSchemas>) };
    inline ListNormalizationSchemasResponseBody& setNormalizationSchemas(const vector<ListNormalizationSchemasResponseBody::NormalizationSchemas> & normalizationSchemas) { DARABONBA_PTR_SET_VALUE(normalizationSchemas_, normalizationSchemas) };
    inline ListNormalizationSchemasResponseBody& setNormalizationSchemas(vector<ListNormalizationSchemasResponseBody::NormalizationSchemas> && normalizationSchemas) { DARABONBA_PTR_SET_RVALUE(normalizationSchemas_, normalizationSchemas) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationSchemasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationSchemasResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListNormalizationSchemasResponseBody::NormalizationSchemas>> normalizationSchemas_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
