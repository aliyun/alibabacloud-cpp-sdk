// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODYPREDICTIVEVALUES_HPP_
#define ALIBABACLOUD_MODELS_QUERYPREDICTIVEVALUERESPONSEBODYPREDICTIVEVALUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class QueryPredictiveValueResponseBodyPredictiveValues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPredictiveValueResponseBodyPredictiveValues& obj) { 
      DARABONBA_PTR_TO_JSON(PredictiveValue, predictiveValue_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPredictiveValueResponseBodyPredictiveValues& obj) { 
      DARABONBA_PTR_FROM_JSON(PredictiveValue, predictiveValue_);
    };
    QueryPredictiveValueResponseBodyPredictiveValues() = default ;
    QueryPredictiveValueResponseBodyPredictiveValues(const QueryPredictiveValueResponseBodyPredictiveValues &) = default ;
    QueryPredictiveValueResponseBodyPredictiveValues(QueryPredictiveValueResponseBodyPredictiveValues &&) = default ;
    QueryPredictiveValueResponseBodyPredictiveValues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPredictiveValueResponseBodyPredictiveValues() = default ;
    QueryPredictiveValueResponseBodyPredictiveValues& operator=(const QueryPredictiveValueResponseBodyPredictiveValues &) = default ;
    QueryPredictiveValueResponseBodyPredictiveValues& operator=(QueryPredictiveValueResponseBodyPredictiveValues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->predictiveValue_ == nullptr; };
    // predictiveValue Field Functions 
    bool hasPredictiveValue() const { return this->predictiveValue_ != nullptr;};
    void deletePredictiveValue() { this->predictiveValue_ = nullptr;};
    inline const vector<Models::QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue> & predictiveValue() const { DARABONBA_PTR_GET_CONST(predictiveValue_, vector<Models::QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue>) };
    inline vector<Models::QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue> predictiveValue() { DARABONBA_PTR_GET(predictiveValue_, vector<Models::QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue>) };
    inline QueryPredictiveValueResponseBodyPredictiveValues& setPredictiveValue(const vector<Models::QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue> & predictiveValue) { DARABONBA_PTR_SET_VALUE(predictiveValue_, predictiveValue) };
    inline QueryPredictiveValueResponseBodyPredictiveValues& setPredictiveValue(vector<Models::QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue> && predictiveValue) { DARABONBA_PTR_SET_RVALUE(predictiveValue_, predictiveValue) };


  protected:
    std::shared_ptr<vector<Models::QueryPredictiveValueResponseBodyPredictiveValuesPredictiveValue>> predictiveValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
