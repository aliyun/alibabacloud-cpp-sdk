// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALERTRULESENTITYTYPEFILTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYALERTRULESENTITYTYPEFILTER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class QueryAlertRulesEntityTypeFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAlertRulesEntityTypeFilter& obj) { 
      DARABONBA_PTR_TO_JSON(in, in_);
      DARABONBA_PTR_TO_JSON(notIn, notIn_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAlertRulesEntityTypeFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(in, in_);
      DARABONBA_PTR_FROM_JSON(notIn, notIn_);
    };
    QueryAlertRulesEntityTypeFilter() = default ;
    QueryAlertRulesEntityTypeFilter(const QueryAlertRulesEntityTypeFilter &) = default ;
    QueryAlertRulesEntityTypeFilter(QueryAlertRulesEntityTypeFilter &&) = default ;
    QueryAlertRulesEntityTypeFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAlertRulesEntityTypeFilter() = default ;
    QueryAlertRulesEntityTypeFilter& operator=(const QueryAlertRulesEntityTypeFilter &) = default ;
    QueryAlertRulesEntityTypeFilter& operator=(QueryAlertRulesEntityTypeFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->in_ == nullptr
        && this->notIn_ == nullptr; };
    // in Field Functions 
    bool hasIn() const { return this->in_ != nullptr;};
    void deleteIn() { this->in_ = nullptr;};
    inline const vector<string> & getIn() const { DARABONBA_PTR_GET_CONST(in_, vector<string>) };
    inline vector<string> getIn() { DARABONBA_PTR_GET(in_, vector<string>) };
    inline QueryAlertRulesEntityTypeFilter& setIn(const vector<string> & in) { DARABONBA_PTR_SET_VALUE(in_, in) };
    inline QueryAlertRulesEntityTypeFilter& setIn(vector<string> && in) { DARABONBA_PTR_SET_RVALUE(in_, in) };


    // notIn Field Functions 
    bool hasNotIn() const { return this->notIn_ != nullptr;};
    void deleteNotIn() { this->notIn_ = nullptr;};
    inline const vector<string> & getNotIn() const { DARABONBA_PTR_GET_CONST(notIn_, vector<string>) };
    inline vector<string> getNotIn() { DARABONBA_PTR_GET(notIn_, vector<string>) };
    inline QueryAlertRulesEntityTypeFilter& setNotIn(const vector<string> & notIn) { DARABONBA_PTR_SET_VALUE(notIn_, notIn) };
    inline QueryAlertRulesEntityTypeFilter& setNotIn(vector<string> && notIn) { DARABONBA_PTR_SET_RVALUE(notIn_, notIn) };


  protected:
    shared_ptr<vector<string>> in_ {};
    shared_ptr<vector<string>> notIn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
