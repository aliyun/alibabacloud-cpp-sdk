// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryPredictiveValueResponseBodyPredictiveValues.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveValueResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveValueResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PredictiveValues, predictiveValues_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveValueResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PredictiveValues, predictiveValues_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryPredictiveValueResponseBody() = default ;
    QueryPredictiveValueResponseBody(const QueryPredictiveValueResponseBody &) = default ;
    QueryPredictiveValueResponseBody(QueryPredictiveValueResponseBody &&) = default ;
    QueryPredictiveValueResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveValueResponseBody() = default ;
    QueryPredictiveValueResponseBody& operator=(const QueryPredictiveValueResponseBody &) = default ;
    QueryPredictiveValueResponseBody& operator=(QueryPredictiveValueResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->predictiveValues_ == nullptr
        && return this->requestId_ == nullptr; };
    // predictiveValues Field Functions 
    bool hasPredictiveValues() const { return this->predictiveValues_ != nullptr;};
    void deletePredictiveValues() { this->predictiveValues_ = nullptr;};
    inline const QueryPredictiveValueResponseBodyPredictiveValues & predictiveValues() const { DARABONBA_PTR_GET_CONST(predictiveValues_, QueryPredictiveValueResponseBodyPredictiveValues) };
    inline QueryPredictiveValueResponseBodyPredictiveValues predictiveValues() { DARABONBA_PTR_GET(predictiveValues_, QueryPredictiveValueResponseBodyPredictiveValues) };
    inline QueryPredictiveValueResponseBody& setPredictiveValues(const QueryPredictiveValueResponseBodyPredictiveValues & predictiveValues) { DARABONBA_PTR_SET_VALUE(predictiveValues_, predictiveValues) };
    inline QueryPredictiveValueResponseBody& setPredictiveValues(QueryPredictiveValueResponseBodyPredictiveValues && predictiveValues) { DARABONBA_PTR_SET_RVALUE(predictiveValues_, predictiveValues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPredictiveValueResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<QueryPredictiveValueResponseBodyPredictiveValues> predictiveValues_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
