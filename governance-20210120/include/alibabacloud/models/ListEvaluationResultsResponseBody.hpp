// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListEvaluationResultsResponseBodyResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
    };
    ListEvaluationResultsResponseBody() = default ;
    ListEvaluationResultsResponseBody(const ListEvaluationResultsResponseBody &) = default ;
    ListEvaluationResultsResponseBody(ListEvaluationResultsResponseBody &&) = default ;
    ListEvaluationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationResultsResponseBody() = default ;
    ListEvaluationResultsResponseBody& operator=(const ListEvaluationResultsResponseBody &) = default ;
    ListEvaluationResultsResponseBody& operator=(ListEvaluationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->requestId_ == nullptr && return this->results_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline int64_t accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, 0L) };
    inline ListEvaluationResultsResponseBody& setAccountId(int64_t accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const ListEvaluationResultsResponseBodyResults & results() const { DARABONBA_PTR_GET_CONST(results_, ListEvaluationResultsResponseBodyResults) };
    inline ListEvaluationResultsResponseBodyResults results() { DARABONBA_PTR_GET(results_, ListEvaluationResultsResponseBodyResults) };
    inline ListEvaluationResultsResponseBody& setResults(const ListEvaluationResultsResponseBodyResults & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ListEvaluationResultsResponseBody& setResults(ListEvaluationResultsResponseBodyResults && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


  protected:
    // The Alibaba Cloud account ID of the member.
    std::shared_ptr<int64_t> accountId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The check results, including the status of the overall check and the results of check items.
    std::shared_ptr<ListEvaluationResultsResponseBodyResults> results_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
