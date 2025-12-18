// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCONFIGRULETOCOMPLIANCEPACKRESPONSEBODYOPERATERULERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_TO_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    friend void from_json(const Darabonba::Json& j, AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult& obj) { 
      DARABONBA_PTR_FROM_JSON(OperateRuleItemList, operateRuleItemList_);
    };
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult(const AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult(AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult() = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(const AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult &) = default ;
    AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult& operator=(AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->operateRuleItemList_ == nullptr; };
    // operateRuleItemList Field Functions 
    bool hasOperateRuleItemList() const { return this->operateRuleItemList_ != nullptr;};
    void deleteOperateRuleItemList() { this->operateRuleItemList_ = nullptr;};
    inline const vector<Models::AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList() const { DARABONBA_PTR_GET_CONST(operateRuleItemList_, vector<Models::AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline vector<Models::AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> operateRuleItemList() { DARABONBA_PTR_GET(operateRuleItemList_, vector<Models::AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>) };
    inline AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(const vector<Models::AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> & operateRuleItemList) { DARABONBA_PTR_SET_VALUE(operateRuleItemList_, operateRuleItemList) };
    inline AttachConfigRuleToCompliancePackResponseBodyOperateRuleResult& setOperateRuleItemList(vector<Models::AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList> && operateRuleItemList) { DARABONBA_PTR_SET_RVALUE(operateRuleItemList_, operateRuleItemList) };


  protected:
    // The result of the operation to add the rule.
    std::shared_ptr<vector<Models::AttachConfigRuleToCompliancePackResponseBodyOperateRuleResultOperateRuleItemList>> operateRuleItemList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
