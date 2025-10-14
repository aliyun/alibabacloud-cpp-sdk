// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNORMALIZATIONFIELDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTNORMALIZATIONFIELDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListNormalizationFieldsResponseBodyNormalizationFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ListNormalizationFieldsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNormalizationFieldsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NormalizationFields, normalizationFields_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListNormalizationFieldsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NormalizationFields, normalizationFields_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListNormalizationFieldsResponseBody() = default ;
    ListNormalizationFieldsResponseBody(const ListNormalizationFieldsResponseBody &) = default ;
    ListNormalizationFieldsResponseBody(ListNormalizationFieldsResponseBody &&) = default ;
    ListNormalizationFieldsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNormalizationFieldsResponseBody() = default ;
    ListNormalizationFieldsResponseBody& operator=(const ListNormalizationFieldsResponseBody &) = default ;
    ListNormalizationFieldsResponseBody& operator=(ListNormalizationFieldsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->normalizationFields_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListNormalizationFieldsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListNormalizationFieldsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // normalizationFields Field Functions 
    bool hasNormalizationFields() const { return this->normalizationFields_ != nullptr;};
    void deleteNormalizationFields() { this->normalizationFields_ = nullptr;};
    inline const vector<ListNormalizationFieldsResponseBodyNormalizationFields> & normalizationFields() const { DARABONBA_PTR_GET_CONST(normalizationFields_, vector<ListNormalizationFieldsResponseBodyNormalizationFields>) };
    inline vector<ListNormalizationFieldsResponseBodyNormalizationFields> normalizationFields() { DARABONBA_PTR_GET(normalizationFields_, vector<ListNormalizationFieldsResponseBodyNormalizationFields>) };
    inline ListNormalizationFieldsResponseBody& setNormalizationFields(const vector<ListNormalizationFieldsResponseBodyNormalizationFields> & normalizationFields) { DARABONBA_PTR_SET_VALUE(normalizationFields_, normalizationFields) };
    inline ListNormalizationFieldsResponseBody& setNormalizationFields(vector<ListNormalizationFieldsResponseBodyNormalizationFields> && normalizationFields) { DARABONBA_PTR_SET_RVALUE(normalizationFields_, normalizationFields) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListNormalizationFieldsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListNormalizationFieldsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ListNormalizationFieldsResponseBodyNormalizationFields>> normalizationFields_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
