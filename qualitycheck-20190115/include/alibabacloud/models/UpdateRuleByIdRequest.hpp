// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERULEBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATERULEBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class UpdateRuleByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRuleByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_TO_JSON(JsonStrForRule, jsonStrForRule_);
      DARABONBA_PTR_TO_JSON(ReturnRelatedSchemes, returnRelatedSchemes_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRuleByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(IsCopy, isCopy_);
      DARABONBA_PTR_FROM_JSON(JsonStrForRule, jsonStrForRule_);
      DARABONBA_PTR_FROM_JSON(ReturnRelatedSchemes, returnRelatedSchemes_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    UpdateRuleByIdRequest() = default ;
    UpdateRuleByIdRequest(const UpdateRuleByIdRequest &) = default ;
    UpdateRuleByIdRequest(UpdateRuleByIdRequest &&) = default ;
    UpdateRuleByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRuleByIdRequest() = default ;
    UpdateRuleByIdRequest& operator=(const UpdateRuleByIdRequest &) = default ;
    UpdateRuleByIdRequest& operator=(UpdateRuleByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->baseMeAgentId_ == nullptr
        && return this->isCopy_ == nullptr && return this->jsonStrForRule_ == nullptr && return this->returnRelatedSchemes_ == nullptr && return this->ruleId_ == nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline UpdateRuleByIdRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // isCopy Field Functions 
    bool hasIsCopy() const { return this->isCopy_ != nullptr;};
    void deleteIsCopy() { this->isCopy_ = nullptr;};
    inline bool isCopy() const { DARABONBA_PTR_GET_DEFAULT(isCopy_, false) };
    inline UpdateRuleByIdRequest& setIsCopy(bool isCopy) { DARABONBA_PTR_SET_VALUE(isCopy_, isCopy) };


    // jsonStrForRule Field Functions 
    bool hasJsonStrForRule() const { return this->jsonStrForRule_ != nullptr;};
    void deleteJsonStrForRule() { this->jsonStrForRule_ = nullptr;};
    inline string jsonStrForRule() const { DARABONBA_PTR_GET_DEFAULT(jsonStrForRule_, "") };
    inline UpdateRuleByIdRequest& setJsonStrForRule(string jsonStrForRule) { DARABONBA_PTR_SET_VALUE(jsonStrForRule_, jsonStrForRule) };


    // returnRelatedSchemes Field Functions 
    bool hasReturnRelatedSchemes() const { return this->returnRelatedSchemes_ != nullptr;};
    void deleteReturnRelatedSchemes() { this->returnRelatedSchemes_ = nullptr;};
    inline bool returnRelatedSchemes() const { DARABONBA_PTR_GET_DEFAULT(returnRelatedSchemes_, false) };
    inline UpdateRuleByIdRequest& setReturnRelatedSchemes(bool returnRelatedSchemes) { DARABONBA_PTR_SET_VALUE(returnRelatedSchemes_, returnRelatedSchemes) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline UpdateRuleByIdRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    std::shared_ptr<bool> isCopy_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jsonStrForRule_ = nullptr;
    std::shared_ptr<bool> returnRelatedSchemes_ = nullptr;
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
