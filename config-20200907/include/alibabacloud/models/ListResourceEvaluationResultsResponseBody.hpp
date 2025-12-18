// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEVALUATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEVALUATIONRESULTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListResourceEvaluationResultsResponseBodyEvaluationResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListResourceEvaluationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListResourceEvaluationResultsResponseBody() = default ;
    ListResourceEvaluationResultsResponseBody(const ListResourceEvaluationResultsResponseBody &) = default ;
    ListResourceEvaluationResultsResponseBody(ListResourceEvaluationResultsResponseBody &&) = default ;
    ListResourceEvaluationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceEvaluationResultsResponseBody() = default ;
    ListResourceEvaluationResultsResponseBody& operator=(const ListResourceEvaluationResultsResponseBody &) = default ;
    ListResourceEvaluationResultsResponseBody& operator=(ListResourceEvaluationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->evaluationResults_ == nullptr
        && return this->requestId_ == nullptr; };
    // evaluationResults Field Functions 
    bool hasEvaluationResults() const { return this->evaluationResults_ != nullptr;};
    void deleteEvaluationResults() { this->evaluationResults_ = nullptr;};
    inline const ListResourceEvaluationResultsResponseBodyEvaluationResults & evaluationResults() const { DARABONBA_PTR_GET_CONST(evaluationResults_, ListResourceEvaluationResultsResponseBodyEvaluationResults) };
    inline ListResourceEvaluationResultsResponseBodyEvaluationResults evaluationResults() { DARABONBA_PTR_GET(evaluationResults_, ListResourceEvaluationResultsResponseBodyEvaluationResults) };
    inline ListResourceEvaluationResultsResponseBody& setEvaluationResults(const ListResourceEvaluationResultsResponseBodyEvaluationResults & evaluationResults) { DARABONBA_PTR_SET_VALUE(evaluationResults_, evaluationResults) };
    inline ListResourceEvaluationResultsResponseBody& setEvaluationResults(ListResourceEvaluationResultsResponseBodyEvaluationResults && evaluationResults) { DARABONBA_PTR_SET_RVALUE(evaluationResults_, evaluationResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceEvaluationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation results returned.
    std::shared_ptr<ListResourceEvaluationResultsResponseBodyEvaluationResults> evaluationResults_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
