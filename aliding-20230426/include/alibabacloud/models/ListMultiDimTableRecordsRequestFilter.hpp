// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUESTFILTER_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUESTFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiDimTableRecordsRequestFilterConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMultiDimTableRecordsRequestFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiDimTableRecordsRequestFilter& obj) { 
      DARABONBA_PTR_TO_JSON(Combination, combination_);
      DARABONBA_PTR_TO_JSON(Conditions, conditions_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiDimTableRecordsRequestFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(Combination, combination_);
      DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
    };
    ListMultiDimTableRecordsRequestFilter() = default ;
    ListMultiDimTableRecordsRequestFilter(const ListMultiDimTableRecordsRequestFilter &) = default ;
    ListMultiDimTableRecordsRequestFilter(ListMultiDimTableRecordsRequestFilter &&) = default ;
    ListMultiDimTableRecordsRequestFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiDimTableRecordsRequestFilter() = default ;
    ListMultiDimTableRecordsRequestFilter& operator=(const ListMultiDimTableRecordsRequestFilter &) = default ;
    ListMultiDimTableRecordsRequestFilter& operator=(ListMultiDimTableRecordsRequestFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->combination_ != nullptr
        && this->conditions_ != nullptr; };
    // combination Field Functions 
    bool hasCombination() const { return this->combination_ != nullptr;};
    void deleteCombination() { this->combination_ = nullptr;};
    inline string combination() const { DARABONBA_PTR_GET_DEFAULT(combination_, "") };
    inline ListMultiDimTableRecordsRequestFilter& setCombination(string combination) { DARABONBA_PTR_SET_VALUE(combination_, combination) };


    // conditions Field Functions 
    bool hasConditions() const { return this->conditions_ != nullptr;};
    void deleteConditions() { this->conditions_ = nullptr;};
    inline const vector<Models::ListMultiDimTableRecordsRequestFilterConditions> & conditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Models::ListMultiDimTableRecordsRequestFilterConditions>) };
    inline vector<Models::ListMultiDimTableRecordsRequestFilterConditions> conditions() { DARABONBA_PTR_GET(conditions_, vector<Models::ListMultiDimTableRecordsRequestFilterConditions>) };
    inline ListMultiDimTableRecordsRequestFilter& setConditions(const vector<Models::ListMultiDimTableRecordsRequestFilterConditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
    inline ListMultiDimTableRecordsRequestFilter& setConditions(vector<Models::ListMultiDimTableRecordsRequestFilterConditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


  protected:
    std::shared_ptr<string> combination_ = nullptr;
    std::shared_ptr<vector<Models::ListMultiDimTableRecordsRequestFilterConditions>> conditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
