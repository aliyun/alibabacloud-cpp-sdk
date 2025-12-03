// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTINSIGHTTAGREFRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTINSIGHTTAGREFRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExportInsightTagRefResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExportInsightTagRefResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportInsightTagRefResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ExportInsightTagRefResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ExportInsightTagRefResponseBody() = default ;
    ExportInsightTagRefResponseBody(const ExportInsightTagRefResponseBody &) = default ;
    ExportInsightTagRefResponseBody(ExportInsightTagRefResponseBody &&) = default ;
    ExportInsightTagRefResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportInsightTagRefResponseBody() = default ;
    ExportInsightTagRefResponseBody& operator=(const ExportInsightTagRefResponseBody &) = default ;
    ExportInsightTagRefResponseBody& operator=(ExportInsightTagRefResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->result_ == nullptr && return this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ExportInsightTagRefResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExportInsightTagRefResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ExportInsightTagRefResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ExportInsightTagRefResponseBodyResult>) };
    inline vector<ExportInsightTagRefResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ExportInsightTagRefResponseBodyResult>) };
    inline ExportInsightTagRefResponseBody& setResult(const vector<ExportInsightTagRefResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ExportInsightTagRefResponseBody& setResult(vector<ExportInsightTagRefResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ExportInsightTagRefResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ExportInsightTagRefResponseBodyResult>> result_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
