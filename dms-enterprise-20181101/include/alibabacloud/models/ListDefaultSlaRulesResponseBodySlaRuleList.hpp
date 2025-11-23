// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEFAULTSLARULESRESPONSEBODYSLARULELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTDEFAULTSLARULESRESPONSEBODYSLARULELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListDefaultSLARulesResponseBodySLARuleListSLARule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListDefaultSLARulesResponseBodySLARuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDefaultSLARulesResponseBodySLARuleList& obj) { 
      DARABONBA_PTR_TO_JSON(SLARule, SLARule_);
    };
    friend void from_json(const Darabonba::Json& j, ListDefaultSLARulesResponseBodySLARuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(SLARule, SLARule_);
    };
    ListDefaultSLARulesResponseBodySLARuleList() = default ;
    ListDefaultSLARulesResponseBodySLARuleList(const ListDefaultSLARulesResponseBodySLARuleList &) = default ;
    ListDefaultSLARulesResponseBodySLARuleList(ListDefaultSLARulesResponseBodySLARuleList &&) = default ;
    ListDefaultSLARulesResponseBodySLARuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDefaultSLARulesResponseBodySLARuleList() = default ;
    ListDefaultSLARulesResponseBodySLARuleList& operator=(const ListDefaultSLARulesResponseBodySLARuleList &) = default ;
    ListDefaultSLARulesResponseBodySLARuleList& operator=(ListDefaultSLARulesResponseBodySLARuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->SLARule_ == nullptr; };
    // SLARule Field Functions 
    bool hasSLARule() const { return this->SLARule_ != nullptr;};
    void deleteSLARule() { this->SLARule_ = nullptr;};
    inline const vector<Models::ListDefaultSLARulesResponseBodySLARuleListSLARule> & SLARule() const { DARABONBA_PTR_GET_CONST(SLARule_, vector<Models::ListDefaultSLARulesResponseBodySLARuleListSLARule>) };
    inline vector<Models::ListDefaultSLARulesResponseBodySLARuleListSLARule> SLARule() { DARABONBA_PTR_GET(SLARule_, vector<Models::ListDefaultSLARulesResponseBodySLARuleListSLARule>) };
    inline ListDefaultSLARulesResponseBodySLARuleList& setSLARule(const vector<Models::ListDefaultSLARulesResponseBodySLARuleListSLARule> & SLARule) { DARABONBA_PTR_SET_VALUE(SLARule_, SLARule) };
    inline ListDefaultSLARulesResponseBodySLARuleList& setSLARule(vector<Models::ListDefaultSLARulesResponseBodySLARuleListSLARule> && SLARule) { DARABONBA_PTR_SET_RVALUE(SLARule_, SLARule) };


  protected:
    std::shared_ptr<vector<Models::ListDefaultSLARulesResponseBodySLARuleListSLARule>> SLARule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
