// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListRulesResponseBodyDataRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class ListRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListRulesResponseBodyData() = default ;
    ListRulesResponseBodyData(const ListRulesResponseBodyData &) = default ;
    ListRulesResponseBodyData(ListRulesResponseBodyData &&) = default ;
    ListRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRulesResponseBodyData() = default ;
    ListRulesResponseBodyData& operator=(const ListRulesResponseBodyData &) = default ;
    ListRulesResponseBodyData& operator=(ListRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->rules_ != nullptr && this->total_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListRulesResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<Models::ListRulesResponseBodyDataRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<Models::ListRulesResponseBodyDataRules>) };
    inline vector<Models::ListRulesResponseBodyDataRules> rules() { DARABONBA_PTR_GET(rules_, vector<Models::ListRulesResponseBodyDataRules>) };
    inline ListRulesResponseBodyData& setRules(const vector<Models::ListRulesResponseBodyDataRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline ListRulesResponseBodyData& setRules(vector<Models::ListRulesResponseBodyDataRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListRulesResponseBodyData& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // If excess return values exist, this parameter is returned.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The event rules.
    std::shared_ptr<vector<Models::ListRulesResponseBodyDataRules>> rules_ = nullptr;
    // The total number of entries.
    std::shared_ptr<int32_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
