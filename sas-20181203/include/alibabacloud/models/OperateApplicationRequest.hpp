// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEAPPLICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OperateApplicationRequestContainerWebDefenseApplicationDTOS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class OperateApplicationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateApplicationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerWebDefenseApplicationDTOS, containerWebDefenseApplicationDTOS_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
    };
    friend void from_json(const Darabonba::Json& j, OperateApplicationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerWebDefenseApplicationDTOS, containerWebDefenseApplicationDTOS_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
    };
    OperateApplicationRequest() = default ;
    OperateApplicationRequest(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest(OperateApplicationRequest &&) = default ;
    OperateApplicationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateApplicationRequest() = default ;
    OperateApplicationRequest& operator=(const OperateApplicationRequest &) = default ;
    OperateApplicationRequest& operator=(OperateApplicationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containerWebDefenseApplicationDTOS_ == nullptr
        && return this->ruleId_ == nullptr; };
    // containerWebDefenseApplicationDTOS Field Functions 
    bool hasContainerWebDefenseApplicationDTOS() const { return this->containerWebDefenseApplicationDTOS_ != nullptr;};
    void deleteContainerWebDefenseApplicationDTOS() { this->containerWebDefenseApplicationDTOS_ = nullptr;};
    inline const vector<OperateApplicationRequestContainerWebDefenseApplicationDTOS> & containerWebDefenseApplicationDTOS() const { DARABONBA_PTR_GET_CONST(containerWebDefenseApplicationDTOS_, vector<OperateApplicationRequestContainerWebDefenseApplicationDTOS>) };
    inline vector<OperateApplicationRequestContainerWebDefenseApplicationDTOS> containerWebDefenseApplicationDTOS() { DARABONBA_PTR_GET(containerWebDefenseApplicationDTOS_, vector<OperateApplicationRequestContainerWebDefenseApplicationDTOS>) };
    inline OperateApplicationRequest& setContainerWebDefenseApplicationDTOS(const vector<OperateApplicationRequestContainerWebDefenseApplicationDTOS> & containerWebDefenseApplicationDTOS) { DARABONBA_PTR_SET_VALUE(containerWebDefenseApplicationDTOS_, containerWebDefenseApplicationDTOS) };
    inline OperateApplicationRequest& setContainerWebDefenseApplicationDTOS(vector<OperateApplicationRequestContainerWebDefenseApplicationDTOS> && containerWebDefenseApplicationDTOS) { DARABONBA_PTR_SET_RVALUE(containerWebDefenseApplicationDTOS_, containerWebDefenseApplicationDTOS) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline int64_t ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
    inline OperateApplicationRequest& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


  protected:
    // The container application that is protected from being tampered with.
    // 
    // This parameter is required.
    std::shared_ptr<vector<OperateApplicationRequestContainerWebDefenseApplicationDTOS>> containerWebDefenseApplicationDTOS_ = nullptr;
    // The ID of the rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> ruleId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
