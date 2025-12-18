// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODYAGGREGATORSRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATORSRESPONSEBODYAGGREGATORSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAggregatorsResponseBodyAggregatorsResultAggregators.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregatorsResponseBodyAggregatorsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregatorsResponseBodyAggregatorsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregators, aggregators_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregatorsResponseBodyAggregatorsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregators, aggregators_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListAggregatorsResponseBodyAggregatorsResult() = default ;
    ListAggregatorsResponseBodyAggregatorsResult(const ListAggregatorsResponseBodyAggregatorsResult &) = default ;
    ListAggregatorsResponseBodyAggregatorsResult(ListAggregatorsResponseBodyAggregatorsResult &&) = default ;
    ListAggregatorsResponseBodyAggregatorsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregatorsResponseBodyAggregatorsResult() = default ;
    ListAggregatorsResponseBodyAggregatorsResult& operator=(const ListAggregatorsResponseBodyAggregatorsResult &) = default ;
    ListAggregatorsResponseBodyAggregatorsResult& operator=(ListAggregatorsResponseBodyAggregatorsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregators_ == nullptr
        && return this->nextToken_ == nullptr; };
    // aggregators Field Functions 
    bool hasAggregators() const { return this->aggregators_ != nullptr;};
    void deleteAggregators() { this->aggregators_ = nullptr;};
    inline const vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregators> & aggregators() const { DARABONBA_PTR_GET_CONST(aggregators_, vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregators>) };
    inline vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregators> aggregators() { DARABONBA_PTR_GET(aggregators_, vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregators>) };
    inline ListAggregatorsResponseBodyAggregatorsResult& setAggregators(const vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregators> & aggregators) { DARABONBA_PTR_SET_VALUE(aggregators_, aggregators) };
    inline ListAggregatorsResponseBodyAggregatorsResult& setAggregators(vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregators> && aggregators) { DARABONBA_PTR_SET_RVALUE(aggregators_, aggregators) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregatorsResponseBodyAggregatorsResult& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The list of the account groups.
    std::shared_ptr<vector<Models::ListAggregatorsResponseBodyAggregatorsResultAggregators>> aggregators_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of `NextToken`.
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
