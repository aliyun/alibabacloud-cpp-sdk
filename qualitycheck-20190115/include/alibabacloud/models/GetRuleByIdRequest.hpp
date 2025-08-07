// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRULEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRULEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetRuleByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRuleByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRuleByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    GetRuleByIdRequest() = default ;
    GetRuleByIdRequest(const GetRuleByIdRequest &) = default ;
    GetRuleByIdRequest(GetRuleByIdRequest &&) = default ;
    GetRuleByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRuleByIdRequest() = default ;
    GetRuleByIdRequest& operator=(const GetRuleByIdRequest &) = default ;
    GetRuleByIdRequest& operator=(GetRuleByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseMeAgentId_ != nullptr
        && this->ruleId_ != nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline GetRuleByIdRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline GetRuleByIdRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
