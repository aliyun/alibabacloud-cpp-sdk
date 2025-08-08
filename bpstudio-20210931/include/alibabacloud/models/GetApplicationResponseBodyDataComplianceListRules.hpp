// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATACOMPLIANCELISTRULES_HPP_
#define ALIBABACLOUD_MODELS_GETAPPLICATIONRESPONSEBODYDATACOMPLIANCELISTRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BPStudio20210931
{
namespace Models
{
  class GetApplicationResponseBodyDataComplianceListRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetApplicationResponseBodyDataComplianceListRules& obj) { 
      DARABONBA_PTR_TO_JSON(ruleDetail, ruleDetail_);
      DARABONBA_PTR_TO_JSON(ruleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetApplicationResponseBodyDataComplianceListRules& obj) { 
      DARABONBA_PTR_FROM_JSON(ruleDetail, ruleDetail_);
      DARABONBA_PTR_FROM_JSON(ruleId, ruleId_);
    };
    GetApplicationResponseBodyDataComplianceListRules() = default ;
    GetApplicationResponseBodyDataComplianceListRules(const GetApplicationResponseBodyDataComplianceListRules &) = default ;
    GetApplicationResponseBodyDataComplianceListRules(GetApplicationResponseBodyDataComplianceListRules &&) = default ;
    GetApplicationResponseBodyDataComplianceListRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetApplicationResponseBodyDataComplianceListRules() = default ;
    GetApplicationResponseBodyDataComplianceListRules& operator=(const GetApplicationResponseBodyDataComplianceListRules &) = default ;
    GetApplicationResponseBodyDataComplianceListRules& operator=(GetApplicationResponseBodyDataComplianceListRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleDetail_ != nullptr
        && this->ruleId_ != nullptr; };
    // ruleDetail Field Functions 
    bool hasRuleDetail() const { return this->ruleDetail_ != nullptr;};
    void deleteRuleDetail() { this->ruleDetail_ = nullptr;};
    inline string ruleDetail() const { DARABONBA_PTR_GET_DEFAULT(ruleDetail_, "") };
    inline GetApplicationResponseBodyDataComplianceListRules& setRuleDetail(string ruleDetail) { DARABONBA_PTR_SET_VALUE(ruleDetail_, ruleDetail) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetApplicationResponseBodyDataComplianceListRules& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    std::shared_ptr<string> ruleDetail_ = nullptr;
    std::shared_ptr<string> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BPStudio20210931
#endif
