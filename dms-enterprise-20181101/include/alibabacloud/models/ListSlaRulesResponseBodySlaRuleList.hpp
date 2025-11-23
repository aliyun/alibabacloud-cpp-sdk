// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSLARULESRESPONSEBODYSLARULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSLARULESRESPONSEBODYSLARULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListSLARulesResponseBodySLARuleListSLARule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListSLARulesResponseBodySLARuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSLARulesResponseBodySLARuleList& obj) { 
      DARABONBA_PTR_TO_JSON(SLARule, SLARule_);
    };
    friend void from_json(const Darabonba::Json& j, ListSLARulesResponseBodySLARuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(SLARule, SLARule_);
    };
    ListSLARulesResponseBodySLARuleList() = default ;
    ListSLARulesResponseBodySLARuleList(const ListSLARulesResponseBodySLARuleList &) = default ;
    ListSLARulesResponseBodySLARuleList(ListSLARulesResponseBodySLARuleList &&) = default ;
    ListSLARulesResponseBodySLARuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSLARulesResponseBodySLARuleList() = default ;
    ListSLARulesResponseBodySLARuleList& operator=(const ListSLARulesResponseBodySLARuleList &) = default ;
    ListSLARulesResponseBodySLARuleList& operator=(ListSLARulesResponseBodySLARuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SLARule_ == nullptr; };
    // SLARule Field Functions 
    bool hasSLARule() const { return this->SLARule_ != nullptr;};
    void deleteSLARule() { this->SLARule_ = nullptr;};
    inline const vector<Models::ListSLARulesResponseBodySLARuleListSLARule> & SLARule() const { DARABONBA_PTR_GET_CONST(SLARule_, vector<Models::ListSLARulesResponseBodySLARuleListSLARule>) };
    inline vector<Models::ListSLARulesResponseBodySLARuleListSLARule> SLARule() { DARABONBA_PTR_GET(SLARule_, vector<Models::ListSLARulesResponseBodySLARuleListSLARule>) };
    inline ListSLARulesResponseBodySLARuleList& setSLARule(const vector<Models::ListSLARulesResponseBodySLARuleListSLARule> & SLARule) { DARABONBA_PTR_SET_VALUE(SLARule_, SLARule) };
    inline ListSLARulesResponseBodySLARuleList& setSLARule(vector<Models::ListSLARulesResponseBodySLARuleListSLARule> && SLARule) { DARABONBA_PTR_SET_RVALUE(SLARule_, SLARule) };


  protected:
    std::shared_ptr<vector<Models::ListSLARulesResponseBodySLARuleListSLARule>> SLARule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
