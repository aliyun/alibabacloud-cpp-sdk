// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_DELETECONFIGRULESRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DeleteConfigRulesResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteConfigRulesResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    DeleteConfigRulesResponseBodyOperateRuleResult() = default ;
    DeleteConfigRulesResponseBodyOperateRuleResult(const DeleteConfigRulesResponseBodyOperateRuleResult &) = default ;
    DeleteConfigRulesResponseBodyOperateRuleResult(DeleteConfigRulesResponseBodyOperateRuleResult &&) = default ;
    DeleteConfigRulesResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteConfigRulesResponseBodyOperateRuleResult() = default ;
    DeleteConfigRulesResponseBodyOperateRuleResult& operator=(const DeleteConfigRulesResponseBodyOperateRuleResult &) = default ;
    DeleteConfigRulesResponseBodyOperateRuleResult& operator=(DeleteConfigRulesResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline DeleteConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline DeleteConfigRulesResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The result of the delete operation.
    std::shared_ptr<vector<Models::DeleteConfigRulesResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
