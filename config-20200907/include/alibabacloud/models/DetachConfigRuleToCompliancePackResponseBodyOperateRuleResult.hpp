// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHCONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_DETACHCONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult(const DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult(DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(const DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline DetachConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The result of the operation to remove the rule.
    std::shared_ptr<vector<Models::DetachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
