// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVALUATIONMETADATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEvaluationMetadataResponseBodyEvaluationMetadata.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Governance20210120
{
namespace Models
{
  class ListEvaluationMetadataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEvaluationMetadataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationMetadata, evaluationMetadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEvaluationMetadataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationMetadata, evaluationMetadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListEvaluationMetadataResponseBody() = default ;
    ListEvaluationMetadataResponseBody(const ListEvaluationMetadataResponseBody &) = default ;
    ListEvaluationMetadataResponseBody(ListEvaluationMetadataResponseBody &&) = default ;
    ListEvaluationMetadataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEvaluationMetadataResponseBody() = default ;
    ListEvaluationMetadataResponseBody& operator=(const ListEvaluationMetadataResponseBody &) = default ;
    ListEvaluationMetadataResponseBody& operator=(ListEvaluationMetadataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->evaluationMetadata_ == nullptr
        && return this->requestId_ == nullptr; };
    // evaluationMetadata Field Functions 
    bool hasEvaluationMetadata() const { return this->evaluationMetadata_ != nullptr;};
    void deleteEvaluationMetadata() { this->evaluationMetadata_ = nullptr;};
    inline const vector<ListEvaluationMetadataResponseBodyEvaluationMetadata> & evaluationMetadata() const { DARABONBA_PTR_GET_CONST(evaluationMetadata_, vector<ListEvaluationMetadataResponseBodyEvaluationMetadata>) };
    inline vector<ListEvaluationMetadataResponseBodyEvaluationMetadata> evaluationMetadata() { DARABONBA_PTR_GET(evaluationMetadata_, vector<ListEvaluationMetadataResponseBodyEvaluationMetadata>) };
    inline ListEvaluationMetadataResponseBody& setEvaluationMetadata(const vector<ListEvaluationMetadataResponseBodyEvaluationMetadata> & evaluationMetadata) { DARABONBA_PTR_SET_VALUE(evaluationMetadata_, evaluationMetadata) };
    inline ListEvaluationMetadataResponseBody& setEvaluationMetadata(vector<ListEvaluationMetadataResponseBodyEvaluationMetadata> && evaluationMetadata) { DARABONBA_PTR_SET_RVALUE(evaluationMetadata_, evaluationMetadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEvaluationMetadataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of a governance maturity check.
    std::shared_ptr<vector<ListEvaluationMetadataResponseBodyEvaluationMetadata>> evaluationMetadata_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Governance20210120
#endif
