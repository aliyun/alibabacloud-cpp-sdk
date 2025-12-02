// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUESTGPUELASTICPLANRULES_HPP_
#define ALIBABACLOUD_MODELS_CREATEDBRESOURCEGROUPREQUESTGPUELASTICPLANRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class CreateDBResourceGroupRequestGpuElasticPlanRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDBResourceGroupRequestGpuElasticPlanRules& obj) { 
      DARABONBA_PTR_TO_JSON(EndCronExpression, endCronExpression_);
      DARABONBA_PTR_TO_JSON(StartCronExpression, startCronExpression_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDBResourceGroupRequestGpuElasticPlanRules& obj) { 
      DARABONBA_PTR_FROM_JSON(EndCronExpression, endCronExpression_);
      DARABONBA_PTR_FROM_JSON(StartCronExpression, startCronExpression_);
    };
    CreateDBResourceGroupRequestGpuElasticPlanRules() = default ;
    CreateDBResourceGroupRequestGpuElasticPlanRules(const CreateDBResourceGroupRequestGpuElasticPlanRules &) = default ;
    CreateDBResourceGroupRequestGpuElasticPlanRules(CreateDBResourceGroupRequestGpuElasticPlanRules &&) = default ;
    CreateDBResourceGroupRequestGpuElasticPlanRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDBResourceGroupRequestGpuElasticPlanRules() = default ;
    CreateDBResourceGroupRequestGpuElasticPlanRules& operator=(const CreateDBResourceGroupRequestGpuElasticPlanRules &) = default ;
    CreateDBResourceGroupRequestGpuElasticPlanRules& operator=(CreateDBResourceGroupRequestGpuElasticPlanRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endCronExpression_ == nullptr
        && return this->startCronExpression_ == nullptr; };
    // endCronExpression Field Functions 
    bool hasEndCronExpression() const { return this->endCronExpression_ != nullptr;};
    void deleteEndCronExpression() { this->endCronExpression_ = nullptr;};
    inline string endCronExpression() const { DARABONBA_PTR_GET_DEFAULT(endCronExpression_, "") };
    inline CreateDBResourceGroupRequestGpuElasticPlanRules& setEndCronExpression(string endCronExpression) { DARABONBA_PTR_SET_VALUE(endCronExpression_, endCronExpression) };


    // startCronExpression Field Functions 
    bool hasStartCronExpression() const { return this->startCronExpression_ != nullptr;};
    void deleteStartCronExpression() { this->startCronExpression_ = nullptr;};
    inline string startCronExpression() const { DARABONBA_PTR_GET_DEFAULT(startCronExpression_, "") };
    inline CreateDBResourceGroupRequestGpuElasticPlanRules& setStartCronExpression(string startCronExpression) { DARABONBA_PTR_SET_VALUE(startCronExpression_, startCronExpression) };


  protected:
    std::shared_ptr<string> endCronExpression_ = nullptr;
    std::shared_ptr<string> startCronExpression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
