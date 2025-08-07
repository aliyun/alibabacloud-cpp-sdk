// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class DeleteRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_TO_JSON(ForceDelete, forceDelete_);
      DARABONBA_PTR_TO_JSON(IsSchemeData, isSchemeData_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseMeAgentId, baseMeAgentId_);
      DARABONBA_PTR_FROM_JSON(ForceDelete, forceDelete_);
      DARABONBA_PTR_FROM_JSON(IsSchemeData, isSchemeData_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    DeleteRuleRequest() = default ;
    DeleteRuleRequest(const DeleteRuleRequest &) = default ;
    DeleteRuleRequest(DeleteRuleRequest &&) = default ;
    DeleteRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRuleRequest() = default ;
    DeleteRuleRequest& operator=(const DeleteRuleRequest &) = default ;
    DeleteRuleRequest& operator=(DeleteRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseMeAgentId_ != nullptr
        && this->forceDelete_ != nullptr && this->isSchemeData_ != nullptr && this->ruleId_ != nullptr; };
    // baseMeAgentId Field Functions 
    bool hasBaseMeAgentId() const { return this->baseMeAgentId_ != nullptr;};
    void deleteBaseMeAgentId() { this->baseMeAgentId_ = nullptr;};
    inline int64_t baseMeAgentId() const { DARABONBA_PTR_GET_DEFAULT(baseMeAgentId_, 0L) };
    inline DeleteRuleRequest& setBaseMeAgentId(int64_t baseMeAgentId) { DARABONBA_PTR_SET_VALUE(baseMeAgentId_, baseMeAgentId) };


    // forceDelete Field Functions 
    bool hasForceDelete() const { return this->forceDelete_ != nullptr;};
    void deleteForceDelete() { this->forceDelete_ = nullptr;};
    inline bool forceDelete() const { DARABONBA_PTR_GET_DEFAULT(forceDelete_, false) };
    inline DeleteRuleRequest& setForceDelete(bool forceDelete) { DARABONBA_PTR_SET_VALUE(forceDelete_, forceDelete) };


    // isSchemeData Field Functions 
    bool hasIsSchemeData() const { return this->isSchemeData_ != nullptr;};
    void deleteIsSchemeData() { this->isSchemeData_ = nullptr;};
    inline int32_t isSchemeData() const { DARABONBA_PTR_GET_DEFAULT(isSchemeData_, 0) };
    inline DeleteRuleRequest& setIsSchemeData(int32_t isSchemeData) { DARABONBA_PTR_SET_VALUE(isSchemeData_, isSchemeData) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline DeleteRuleRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // baseMeAgentId
    std::shared_ptr<int64_t> baseMeAgentId_ = nullptr;
    std::shared_ptr<bool> forceDelete_ = nullptr;
    std::shared_ptr<int32_t> isSchemeData_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
