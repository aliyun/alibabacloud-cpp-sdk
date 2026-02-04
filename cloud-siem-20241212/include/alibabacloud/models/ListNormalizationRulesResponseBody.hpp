// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULESRESPONSEBODY_HPP_
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
  class ListNormalizationRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationRules, normalizationRules_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationRules, normalizationRules_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    ListNormalizationRulesResponseBody() = default ;
    ListNormalizationRulesResponseBody(const ListNormalizationRulesResponseBody &) = default ;
    ListNormalizationRulesResponseBody(ListNormalizationRulesResponseBody &&) = default ;
    ListNormalizationRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRulesResponseBody() = default ;
    ListNormalizationRulesResponseBody& operator=(const ListNormalizationRulesResponseBody &) = default ;
    ListNormalizationRulesResponseBody& operator=(ListNormalizationRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationRules& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExtendContentPacked, extendContentPacked_);
        DARABONBA_PTR_TO_JSON(ExtendFieldStoreMode, extendFieldStoreMode_);
        DARABONBA_PTR_TO_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleMode, normalizationRuleMode_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleName, normalizationRuleName_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleReferences, normalizationRuleReferences_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleStatus, normalizationRuleStatus_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleType, normalizationRuleType_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
        DARABONBA_PTR_TO_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VendorId, vendorId_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationRules& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExtendContentPacked, extendContentPacked_);
        DARABONBA_PTR_FROM_JSON(ExtendFieldStoreMode, extendFieldStoreMode_);
        DARABONBA_PTR_FROM_JSON(NormalizationCategoryId, normalizationCategoryId_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleDescription, normalizationRuleDescription_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleFormat, normalizationRuleFormat_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleMode, normalizationRuleMode_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleName, normalizationRuleName_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleReferences, normalizationRuleReferences_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleStatus, normalizationRuleStatus_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleType, normalizationRuleType_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
        DARABONBA_PTR_FROM_JSON(NormalizationSchemaId, normalizationSchemaId_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VendorId, vendorId_);
      };
      NormalizationRules() = default ;
      NormalizationRules(const NormalizationRules &) = default ;
      NormalizationRules(NormalizationRules &&) = default ;
      NormalizationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationRules() = default ;
      NormalizationRules& operator=(const NormalizationRules &) = default ;
      NormalizationRules& operator=(NormalizationRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class NormalizationRuleReferences : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const NormalizationRuleReferences& obj) { 
          DARABONBA_PTR_TO_JSON(DataIngestionId, dataIngestionId_);
        };
        friend void from_json(const Darabonba::Json& j, NormalizationRuleReferences& obj) { 
          DARABONBA_PTR_FROM_JSON(DataIngestionId, dataIngestionId_);
        };
        NormalizationRuleReferences() = default ;
        NormalizationRuleReferences(const NormalizationRuleReferences &) = default ;
        NormalizationRuleReferences(NormalizationRuleReferences &&) = default ;
        NormalizationRuleReferences(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~NormalizationRuleReferences() = default ;
        NormalizationRuleReferences& operator=(const NormalizationRuleReferences &) = default ;
        NormalizationRuleReferences& operator=(NormalizationRuleReferences &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dataIngestionId_ == nullptr; };
        // dataIngestionId Field Functions 
        bool hasDataIngestionId() const { return this->dataIngestionId_ != nullptr;};
        void deleteDataIngestionId() { this->dataIngestionId_ = nullptr;};
        inline string getDataIngestionId() const { DARABONBA_PTR_GET_DEFAULT(dataIngestionId_, "") };
        inline NormalizationRuleReferences& setDataIngestionId(string dataIngestionId) { DARABONBA_PTR_SET_VALUE(dataIngestionId_, dataIngestionId) };


      protected:
        shared_ptr<string> dataIngestionId_ {};
      };

      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->extendContentPacked_ == nullptr && this->extendFieldStoreMode_ == nullptr && this->normalizationCategoryId_ == nullptr && this->normalizationRuleDescription_ == nullptr && this->normalizationRuleExpression_ == nullptr
        && this->normalizationRuleFormat_ == nullptr && this->normalizationRuleId_ == nullptr && this->normalizationRuleMode_ == nullptr && this->normalizationRuleName_ == nullptr && this->normalizationRuleReferences_ == nullptr
        && this->normalizationRuleStatus_ == nullptr && this->normalizationRuleType_ == nullptr && this->normalizationRuleVersion_ == nullptr && this->normalizationSchemaId_ == nullptr && this->productId_ == nullptr
        && this->updateTime_ == nullptr && this->vendorId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NormalizationRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // extendContentPacked Field Functions 
      bool hasExtendContentPacked() const { return this->extendContentPacked_ != nullptr;};
      void deleteExtendContentPacked() { this->extendContentPacked_ = nullptr;};
      inline string getExtendContentPacked() const { DARABONBA_PTR_GET_DEFAULT(extendContentPacked_, "") };
      inline NormalizationRules& setExtendContentPacked(string extendContentPacked) { DARABONBA_PTR_SET_VALUE(extendContentPacked_, extendContentPacked) };


      // extendFieldStoreMode Field Functions 
      bool hasExtendFieldStoreMode() const { return this->extendFieldStoreMode_ != nullptr;};
      void deleteExtendFieldStoreMode() { this->extendFieldStoreMode_ = nullptr;};
      inline string getExtendFieldStoreMode() const { DARABONBA_PTR_GET_DEFAULT(extendFieldStoreMode_, "") };
      inline NormalizationRules& setExtendFieldStoreMode(string extendFieldStoreMode) { DARABONBA_PTR_SET_VALUE(extendFieldStoreMode_, extendFieldStoreMode) };


      // normalizationCategoryId Field Functions 
      bool hasNormalizationCategoryId() const { return this->normalizationCategoryId_ != nullptr;};
      void deleteNormalizationCategoryId() { this->normalizationCategoryId_ = nullptr;};
      inline string getNormalizationCategoryId() const { DARABONBA_PTR_GET_DEFAULT(normalizationCategoryId_, "") };
      inline NormalizationRules& setNormalizationCategoryId(string normalizationCategoryId) { DARABONBA_PTR_SET_VALUE(normalizationCategoryId_, normalizationCategoryId) };


      // normalizationRuleDescription Field Functions 
      bool hasNormalizationRuleDescription() const { return this->normalizationRuleDescription_ != nullptr;};
      void deleteNormalizationRuleDescription() { this->normalizationRuleDescription_ = nullptr;};
      inline string getNormalizationRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleDescription_, "") };
      inline NormalizationRules& setNormalizationRuleDescription(string normalizationRuleDescription) { DARABONBA_PTR_SET_VALUE(normalizationRuleDescription_, normalizationRuleDescription) };


      // normalizationRuleExpression Field Functions 
      bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
      void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
      inline string getNormalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
      inline NormalizationRules& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


      // normalizationRuleFormat Field Functions 
      bool hasNormalizationRuleFormat() const { return this->normalizationRuleFormat_ != nullptr;};
      void deleteNormalizationRuleFormat() { this->normalizationRuleFormat_ = nullptr;};
      inline string getNormalizationRuleFormat() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleFormat_, "") };
      inline NormalizationRules& setNormalizationRuleFormat(string normalizationRuleFormat) { DARABONBA_PTR_SET_VALUE(normalizationRuleFormat_, normalizationRuleFormat) };


      // normalizationRuleId Field Functions 
      bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
      void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
      inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
      inline NormalizationRules& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


      // normalizationRuleMode Field Functions 
      bool hasNormalizationRuleMode() const { return this->normalizationRuleMode_ != nullptr;};
      void deleteNormalizationRuleMode() { this->normalizationRuleMode_ = nullptr;};
      inline string getNormalizationRuleMode() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleMode_, "") };
      inline NormalizationRules& setNormalizationRuleMode(string normalizationRuleMode) { DARABONBA_PTR_SET_VALUE(normalizationRuleMode_, normalizationRuleMode) };


      // normalizationRuleName Field Functions 
      bool hasNormalizationRuleName() const { return this->normalizationRuleName_ != nullptr;};
      void deleteNormalizationRuleName() { this->normalizationRuleName_ = nullptr;};
      inline string getNormalizationRuleName() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleName_, "") };
      inline NormalizationRules& setNormalizationRuleName(string normalizationRuleName) { DARABONBA_PTR_SET_VALUE(normalizationRuleName_, normalizationRuleName) };


      // normalizationRuleReferences Field Functions 
      bool hasNormalizationRuleReferences() const { return this->normalizationRuleReferences_ != nullptr;};
      void deleteNormalizationRuleReferences() { this->normalizationRuleReferences_ = nullptr;};
      inline const vector<NormalizationRules::NormalizationRuleReferences> & getNormalizationRuleReferences() const { DARABONBA_PTR_GET_CONST(normalizationRuleReferences_, vector<NormalizationRules::NormalizationRuleReferences>) };
      inline vector<NormalizationRules::NormalizationRuleReferences> getNormalizationRuleReferences() { DARABONBA_PTR_GET(normalizationRuleReferences_, vector<NormalizationRules::NormalizationRuleReferences>) };
      inline NormalizationRules& setNormalizationRuleReferences(const vector<NormalizationRules::NormalizationRuleReferences> & normalizationRuleReferences) { DARABONBA_PTR_SET_VALUE(normalizationRuleReferences_, normalizationRuleReferences) };
      inline NormalizationRules& setNormalizationRuleReferences(vector<NormalizationRules::NormalizationRuleReferences> && normalizationRuleReferences) { DARABONBA_PTR_SET_RVALUE(normalizationRuleReferences_, normalizationRuleReferences) };


      // normalizationRuleStatus Field Functions 
      bool hasNormalizationRuleStatus() const { return this->normalizationRuleStatus_ != nullptr;};
      void deleteNormalizationRuleStatus() { this->normalizationRuleStatus_ = nullptr;};
      inline string getNormalizationRuleStatus() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleStatus_, "") };
      inline NormalizationRules& setNormalizationRuleStatus(string normalizationRuleStatus) { DARABONBA_PTR_SET_VALUE(normalizationRuleStatus_, normalizationRuleStatus) };


      // normalizationRuleType Field Functions 
      bool hasNormalizationRuleType() const { return this->normalizationRuleType_ != nullptr;};
      void deleteNormalizationRuleType() { this->normalizationRuleType_ = nullptr;};
      inline string getNormalizationRuleType() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleType_, "") };
      inline NormalizationRules& setNormalizationRuleType(string normalizationRuleType) { DARABONBA_PTR_SET_VALUE(normalizationRuleType_, normalizationRuleType) };


      // normalizationRuleVersion Field Functions 
      bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
      void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
      inline string getNormalizationRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersion_, "") };
      inline NormalizationRules& setNormalizationRuleVersion(string normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };


      // normalizationSchemaId Field Functions 
      bool hasNormalizationSchemaId() const { return this->normalizationSchemaId_ != nullptr;};
      void deleteNormalizationSchemaId() { this->normalizationSchemaId_ = nullptr;};
      inline string getNormalizationSchemaId() const { DARABONBA_PTR_GET_DEFAULT(normalizationSchemaId_, "") };
      inline NormalizationRules& setNormalizationSchemaId(string normalizationSchemaId) { DARABONBA_PTR_SET_VALUE(normalizationSchemaId_, normalizationSchemaId) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline NormalizationRules& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NormalizationRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // vendorId Field Functions 
      bool hasVendorId() const { return this->vendorId_ != nullptr;};
      void deleteVendorId() { this->vendorId_ = nullptr;};
      inline string getVendorId() const { DARABONBA_PTR_GET_DEFAULT(vendorId_, "") };
      inline NormalizationRules& setVendorId(string vendorId) { DARABONBA_PTR_SET_VALUE(vendorId_, vendorId) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> extendContentPacked_ {};
      shared_ptr<string> extendFieldStoreMode_ {};
      shared_ptr<string> normalizationCategoryId_ {};
      shared_ptr<string> normalizationRuleDescription_ {};
      shared_ptr<string> normalizationRuleExpression_ {};
      shared_ptr<string> normalizationRuleFormat_ {};
      shared_ptr<string> normalizationRuleId_ {};
      shared_ptr<string> normalizationRuleMode_ {};
      shared_ptr<string> normalizationRuleName_ {};
      shared_ptr<vector<NormalizationRules::NormalizationRuleReferences>> normalizationRuleReferences_ {};
      shared_ptr<string> normalizationRuleStatus_ {};
      shared_ptr<string> normalizationRuleType_ {};
      shared_ptr<string> normalizationRuleVersion_ {};
      shared_ptr<string> normalizationSchemaId_ {};
      shared_ptr<string> productId_ {};
      shared_ptr<int64_t> updateTime_ {};
      shared_ptr<string> vendorId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->normalizationRules_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationRulesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationRulesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationRules Field Functions 
    bool hasNormalizationRules() const { return this->normalizationRules_ != nullptr;};
    void deleteNormalizationRules() { this->normalizationRules_ = nullptr;};
    inline const vector<ListNormalizationRulesResponseBody::NormalizationRules> & getNormalizationRules() const { DARABONBA_PTR_GET_CONST(normalizationRules_, vector<ListNormalizationRulesResponseBody::NormalizationRules>) };
    inline vector<ListNormalizationRulesResponseBody::NormalizationRules> getNormalizationRules() { DARABONBA_PTR_GET(normalizationRules_, vector<ListNormalizationRulesResponseBody::NormalizationRules>) };
    inline ListNormalizationRulesResponseBody& setNormalizationRules(const vector<ListNormalizationRulesResponseBody::NormalizationRules> & normalizationRules) { DARABONBA_PTR_SET_VALUE(normalizationRules_, normalizationRules) };
    inline ListNormalizationRulesResponseBody& setNormalizationRules(vector<ListNormalizationRulesResponseBody::NormalizationRules> && normalizationRules) { DARABONBA_PTR_SET_RVALUE(normalizationRules_, normalizationRules) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNormalizationRulesResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNormalizationRulesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationRulesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int32_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0) };
    inline ListNormalizationRulesResponseBody& setTotalPage(int32_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListNormalizationRulesResponseBody::NormalizationRules>> normalizationRules_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<int32_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
