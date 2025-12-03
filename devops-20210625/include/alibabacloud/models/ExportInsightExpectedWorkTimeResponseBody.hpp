// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTINSIGHTEXPECTEDWORKTIMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXPORTINSIGHTEXPECTEDWORKTIMERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ExportInsightExpectedWorkTimeResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExportInsightExpectedWorkTimeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportInsightExpectedWorkTimeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ExportInsightExpectedWorkTimeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ExportInsightExpectedWorkTimeResponseBody() = default ;
    ExportInsightExpectedWorkTimeResponseBody(const ExportInsightExpectedWorkTimeResponseBody &) = default ;
    ExportInsightExpectedWorkTimeResponseBody(ExportInsightExpectedWorkTimeResponseBody &&) = default ;
    ExportInsightExpectedWorkTimeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportInsightExpectedWorkTimeResponseBody() = default ;
    ExportInsightExpectedWorkTimeResponseBody& operator=(const ExportInsightExpectedWorkTimeResponseBody &) = default ;
    ExportInsightExpectedWorkTimeResponseBody& operator=(ExportInsightExpectedWorkTimeResponseBody &&) = default ;
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
    inline ExportInsightExpectedWorkTimeResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ExportInsightExpectedWorkTimeResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ExportInsightExpectedWorkTimeResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<ExportInsightExpectedWorkTimeResponseBodyResult>) };
    inline vector<ExportInsightExpectedWorkTimeResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<ExportInsightExpectedWorkTimeResponseBodyResult>) };
    inline ExportInsightExpectedWorkTimeResponseBody& setResult(const vector<ExportInsightExpectedWorkTimeResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ExportInsightExpectedWorkTimeResponseBody& setResult(vector<ExportInsightExpectedWorkTimeResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ExportInsightExpectedWorkTimeResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<ExportInsightExpectedWorkTimeResponseBodyResult>> result_ = nullptr;
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
