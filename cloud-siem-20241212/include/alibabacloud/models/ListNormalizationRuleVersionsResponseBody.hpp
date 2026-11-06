// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONRULEVERSIONSRESPONSEBODY_HPP_
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
  class ListNormalizationRuleVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationRuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationRuleVersions, normalizationRuleVersions_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationRuleVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationRuleVersions, normalizationRuleVersions_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNormalizationRuleVersionsResponseBody() = default ;
    ListNormalizationRuleVersionsResponseBody(const ListNormalizationRuleVersionsResponseBody &) = default ;
    ListNormalizationRuleVersionsResponseBody(ListNormalizationRuleVersionsResponseBody &&) = default ;
    ListNormalizationRuleVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationRuleVersionsResponseBody() = default ;
    ListNormalizationRuleVersionsResponseBody& operator=(const ListNormalizationRuleVersionsResponseBody &) = default ;
    ListNormalizationRuleVersionsResponseBody& operator=(ListNormalizationRuleVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class NormalizationRuleVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const NormalizationRuleVersions& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_TO_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, NormalizationRuleVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleExpression, normalizationRuleExpression_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleId, normalizationRuleId_);
        DARABONBA_PTR_FROM_JSON(NormalizationRuleVersion, normalizationRuleVersion_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      NormalizationRuleVersions() = default ;
      NormalizationRuleVersions(const NormalizationRuleVersions &) = default ;
      NormalizationRuleVersions(NormalizationRuleVersions &&) = default ;
      NormalizationRuleVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~NormalizationRuleVersions() = default ;
      NormalizationRuleVersions& operator=(const NormalizationRuleVersions &) = default ;
      NormalizationRuleVersions& operator=(NormalizationRuleVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->normalizationRuleExpression_ == nullptr && this->normalizationRuleId_ == nullptr && this->normalizationRuleVersion_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline NormalizationRuleVersions& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // normalizationRuleExpression Field Functions 
      bool hasNormalizationRuleExpression() const { return this->normalizationRuleExpression_ != nullptr;};
      void deleteNormalizationRuleExpression() { this->normalizationRuleExpression_ = nullptr;};
      inline string getNormalizationRuleExpression() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleExpression_, "") };
      inline NormalizationRuleVersions& setNormalizationRuleExpression(string normalizationRuleExpression) { DARABONBA_PTR_SET_VALUE(normalizationRuleExpression_, normalizationRuleExpression) };


      // normalizationRuleId Field Functions 
      bool hasNormalizationRuleId() const { return this->normalizationRuleId_ != nullptr;};
      void deleteNormalizationRuleId() { this->normalizationRuleId_ = nullptr;};
      inline string getNormalizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleId_, "") };
      inline NormalizationRuleVersions& setNormalizationRuleId(string normalizationRuleId) { DARABONBA_PTR_SET_VALUE(normalizationRuleId_, normalizationRuleId) };


      // normalizationRuleVersion Field Functions 
      bool hasNormalizationRuleVersion() const { return this->normalizationRuleVersion_ != nullptr;};
      void deleteNormalizationRuleVersion() { this->normalizationRuleVersion_ = nullptr;};
      inline int32_t getNormalizationRuleVersion() const { DARABONBA_PTR_GET_DEFAULT(normalizationRuleVersion_, 0) };
      inline NormalizationRuleVersions& setNormalizationRuleVersion(int32_t normalizationRuleVersion) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersion_, normalizationRuleVersion) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline NormalizationRuleVersions& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> normalizationRuleExpression_ {};
      shared_ptr<string> normalizationRuleId_ {};
      shared_ptr<int32_t> normalizationRuleVersion_ {};
      shared_ptr<int64_t> updateTime_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->normalizationRuleVersions_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationRuleVersionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationRuleVersionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationRuleVersions Field Functions 
    bool hasNormalizationRuleVersions() const { return this->normalizationRuleVersions_ != nullptr;};
    void deleteNormalizationRuleVersions() { this->normalizationRuleVersions_ = nullptr;};
    inline const vector<ListNormalizationRuleVersionsResponseBody::NormalizationRuleVersions> & getNormalizationRuleVersions() const { DARABONBA_PTR_GET_CONST(normalizationRuleVersions_, vector<ListNormalizationRuleVersionsResponseBody::NormalizationRuleVersions>) };
    inline vector<ListNormalizationRuleVersionsResponseBody::NormalizationRuleVersions> getNormalizationRuleVersions() { DARABONBA_PTR_GET(normalizationRuleVersions_, vector<ListNormalizationRuleVersionsResponseBody::NormalizationRuleVersions>) };
    inline ListNormalizationRuleVersionsResponseBody& setNormalizationRuleVersions(const vector<ListNormalizationRuleVersionsResponseBody::NormalizationRuleVersions> & normalizationRuleVersions) { DARABONBA_PTR_SET_VALUE(normalizationRuleVersions_, normalizationRuleVersions) };
    inline ListNormalizationRuleVersionsResponseBody& setNormalizationRuleVersions(vector<ListNormalizationRuleVersionsResponseBody::NormalizationRuleVersions> && normalizationRuleVersions) { DARABONBA_PTR_SET_RVALUE(normalizationRuleVersions_, normalizationRuleVersions) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationRuleVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationRuleVersionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<vector<ListNormalizationRuleVersionsResponseBody::NormalizationRuleVersions>> normalizationRuleVersions_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
