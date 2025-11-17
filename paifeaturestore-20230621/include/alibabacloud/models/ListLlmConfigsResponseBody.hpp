// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLLMCONFIGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTLLMCONFIGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListLLMConfigsResponseBodyLLMConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiFeatureStore20230621
{
namespace Models
{
  class ListLLMConfigsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLLMConfigsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LLMConfigs, LLMConfigs_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListLLMConfigsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LLMConfigs, LLMConfigs_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListLLMConfigsResponseBody() = default ;
    ListLLMConfigsResponseBody(const ListLLMConfigsResponseBody &) = default ;
    ListLLMConfigsResponseBody(ListLLMConfigsResponseBody &&) = default ;
    ListLLMConfigsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLLMConfigsResponseBody() = default ;
    ListLLMConfigsResponseBody& operator=(const ListLLMConfigsResponseBody &) = default ;
    ListLLMConfigsResponseBody& operator=(ListLLMConfigsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->LLMConfigs_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // LLMConfigs Field Functions 
    bool hasLLMConfigs() const { return this->LLMConfigs_ != nullptr;};
    void deleteLLMConfigs() { this->LLMConfigs_ = nullptr;};
    inline const vector<ListLLMConfigsResponseBodyLLMConfigs> & LLMConfigs() const { DARABONBA_PTR_GET_CONST(LLMConfigs_, vector<ListLLMConfigsResponseBodyLLMConfigs>) };
    inline vector<ListLLMConfigsResponseBodyLLMConfigs> LLMConfigs() { DARABONBA_PTR_GET(LLMConfigs_, vector<ListLLMConfigsResponseBodyLLMConfigs>) };
    inline ListLLMConfigsResponseBody& setLLMConfigs(const vector<ListLLMConfigsResponseBodyLLMConfigs> & LLMConfigs) { DARABONBA_PTR_SET_VALUE(LLMConfigs_, LLMConfigs) };
    inline ListLLMConfigsResponseBody& setLLMConfigs(vector<ListLLMConfigsResponseBodyLLMConfigs> && LLMConfigs) { DARABONBA_PTR_SET_RVALUE(LLMConfigs_, LLMConfigs) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListLLMConfigsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListLLMConfigsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListLLMConfigsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListLLMConfigsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<ListLLMConfigsResponseBodyLLMConfigs>> LLMConfigs_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiFeatureStore20230621
#endif
