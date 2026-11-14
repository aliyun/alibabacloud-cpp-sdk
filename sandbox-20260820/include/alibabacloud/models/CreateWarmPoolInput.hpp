// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWARMPOOLINPUT_HPP_
#define ALIBABACLOUD_MODELS_CREATEWARMPOOLINPUT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/WarmPoolCapacityPolicyInput.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class CreateWarmPoolInput : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWarmPoolInput& obj) { 
      DARABONBA_PTR_TO_JSON(capacityPolicy, capacityPolicy_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWarmPoolInput& obj) { 
      DARABONBA_PTR_FROM_JSON(capacityPolicy, capacityPolicy_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
    };
    CreateWarmPoolInput() = default ;
    CreateWarmPoolInput(const CreateWarmPoolInput &) = default ;
    CreateWarmPoolInput(CreateWarmPoolInput &&) = default ;
    CreateWarmPoolInput(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWarmPoolInput() = default ;
    CreateWarmPoolInput& operator=(const CreateWarmPoolInput &) = default ;
    CreateWarmPoolInput& operator=(CreateWarmPoolInput &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capacityPolicy_ == nullptr
        && this->templateID_ == nullptr; };
    // capacityPolicy Field Functions 
    bool hasCapacityPolicy() const { return this->capacityPolicy_ != nullptr;};
    void deleteCapacityPolicy() { this->capacityPolicy_ = nullptr;};
    inline const WarmPoolCapacityPolicyInput & getCapacityPolicy() const { DARABONBA_PTR_GET_CONST(capacityPolicy_, WarmPoolCapacityPolicyInput) };
    inline WarmPoolCapacityPolicyInput getCapacityPolicy() { DARABONBA_PTR_GET(capacityPolicy_, WarmPoolCapacityPolicyInput) };
    inline CreateWarmPoolInput& setCapacityPolicy(const WarmPoolCapacityPolicyInput & capacityPolicy) { DARABONBA_PTR_SET_VALUE(capacityPolicy_, capacityPolicy) };
    inline CreateWarmPoolInput& setCapacityPolicy(WarmPoolCapacityPolicyInput && capacityPolicy) { DARABONBA_PTR_SET_RVALUE(capacityPolicy_, capacityPolicy) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline CreateWarmPoolInput& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


  protected:
    // The warm pool capacity policy, which includes the base target capacity and optional scheduled rules.
    // 
    // This parameter is required.
    shared_ptr<WarmPoolCapacityPolicyInput> capacityPolicy_ {};
    // The template ID, which specifies the template associated with the warm pool.
    // 
    // This parameter is required.
    shared_ptr<string> templateID_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
