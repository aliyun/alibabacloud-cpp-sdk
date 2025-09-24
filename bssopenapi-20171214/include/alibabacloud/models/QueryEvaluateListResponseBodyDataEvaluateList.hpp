// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODYDATAEVALUATELIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYEVALUATELISTRESPONSEBODYDATAEVALUATELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryEvaluateListResponseBodyDataEvaluateListEvaluate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20171214
{
namespace Models
{
  class QueryEvaluateListResponseBodyDataEvaluateList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEvaluateListResponseBodyDataEvaluateList& obj) { 
      DARABONBA_PTR_TO_JSON(Evaluate, evaluate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEvaluateListResponseBodyDataEvaluateList& obj) { 
      DARABONBA_PTR_FROM_JSON(Evaluate, evaluate_);
    };
    QueryEvaluateListResponseBodyDataEvaluateList() = default ;
    QueryEvaluateListResponseBodyDataEvaluateList(const QueryEvaluateListResponseBodyDataEvaluateList &) = default ;
    QueryEvaluateListResponseBodyDataEvaluateList(QueryEvaluateListResponseBodyDataEvaluateList &&) = default ;
    QueryEvaluateListResponseBodyDataEvaluateList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEvaluateListResponseBodyDataEvaluateList() = default ;
    QueryEvaluateListResponseBodyDataEvaluateList& operator=(const QueryEvaluateListResponseBodyDataEvaluateList &) = default ;
    QueryEvaluateListResponseBodyDataEvaluateList& operator=(QueryEvaluateListResponseBodyDataEvaluateList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->evaluate_ != nullptr; };
    // evaluate Field Functions 
    bool hasEvaluate() const { return this->evaluate_ != nullptr;};
    void deleteEvaluate() { this->evaluate_ = nullptr;};
    inline const vector<Models::QueryEvaluateListResponseBodyDataEvaluateListEvaluate> & evaluate() const { DARABONBA_PTR_GET_CONST(evaluate_, vector<Models::QueryEvaluateListResponseBodyDataEvaluateListEvaluate>) };
    inline vector<Models::QueryEvaluateListResponseBodyDataEvaluateListEvaluate> evaluate() { DARABONBA_PTR_GET(evaluate_, vector<Models::QueryEvaluateListResponseBodyDataEvaluateListEvaluate>) };
    inline QueryEvaluateListResponseBodyDataEvaluateList& setEvaluate(const vector<Models::QueryEvaluateListResponseBodyDataEvaluateListEvaluate> & evaluate) { DARABONBA_PTR_SET_VALUE(evaluate_, evaluate) };
    inline QueryEvaluateListResponseBodyDataEvaluateList& setEvaluate(vector<Models::QueryEvaluateListResponseBodyDataEvaluateListEvaluate> && evaluate) { DARABONBA_PTR_SET_RVALUE(evaluate_, evaluate) };


  protected:
    std::shared_ptr<vector<Models::QueryEvaluateListResponseBodyDataEvaluateListEvaluate>> evaluate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20171214
#endif
