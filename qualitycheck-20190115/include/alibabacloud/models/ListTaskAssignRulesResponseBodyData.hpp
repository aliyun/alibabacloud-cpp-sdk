// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKASSIGNRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListTaskAssignRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskAssignRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TaskAssignRuleInfo, taskAssignRuleInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskAssignRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TaskAssignRuleInfo, taskAssignRuleInfo_);
    };
    ListTaskAssignRulesResponseBodyData() = default ;
    ListTaskAssignRulesResponseBodyData(const ListTaskAssignRulesResponseBodyData &) = default ;
    ListTaskAssignRulesResponseBodyData(ListTaskAssignRulesResponseBodyData &&) = default ;
    ListTaskAssignRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskAssignRulesResponseBodyData() = default ;
    ListTaskAssignRulesResponseBodyData& operator=(const ListTaskAssignRulesResponseBodyData &) = default ;
    ListTaskAssignRulesResponseBodyData& operator=(ListTaskAssignRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->taskAssignRuleInfo_ == nullptr; };
    // taskAssignRuleInfo Field Functions 
    bool hasTaskAssignRuleInfo() const { return this->taskAssignRuleInfo_ != nullptr;};
    void deleteTaskAssignRuleInfo() { this->taskAssignRuleInfo_ = nullptr;};
    inline const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo> & taskAssignRuleInfo() const { DARABONBA_PTR_GET_CONST(taskAssignRuleInfo_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo>) };
    inline vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo> taskAssignRuleInfo() { DARABONBA_PTR_GET(taskAssignRuleInfo_, vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo>) };
    inline ListTaskAssignRulesResponseBodyData& setTaskAssignRuleInfo(const vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo> & taskAssignRuleInfo) { DARABONBA_PTR_SET_VALUE(taskAssignRuleInfo_, taskAssignRuleInfo) };
    inline ListTaskAssignRulesResponseBodyData& setTaskAssignRuleInfo(vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo> && taskAssignRuleInfo) { DARABONBA_PTR_SET_RVALUE(taskAssignRuleInfo_, taskAssignRuleInfo) };


  protected:
    std::shared_ptr<vector<Models::ListTaskAssignRulesResponseBodyDataTaskAssignRuleInfo>> taskAssignRuleInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
