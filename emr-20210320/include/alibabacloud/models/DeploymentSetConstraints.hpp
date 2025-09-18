// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEPLOYMENTSETCONSTRAINTS_HPP_
#define ALIBABACLOUD_MODELS_DEPLOYMENTSETCONSTRAINTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ReplacementStrategy.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class DeploymentSetConstraints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeploymentSetConstraints& obj) { 
      DARABONBA_PTR_TO_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_TO_JSON(EnableState, enableState_);
      DARABONBA_PTR_TO_JSON(ReplacementStrategy, replacementStrategy_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, DeploymentSetConstraints& obj) { 
      DARABONBA_PTR_FROM_JSON(DefaultValue, defaultValue_);
      DARABONBA_PTR_FROM_JSON(EnableState, enableState_);
      DARABONBA_PTR_FROM_JSON(ReplacementStrategy, replacementStrategy_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    DeploymentSetConstraints() = default ;
    DeploymentSetConstraints(const DeploymentSetConstraints &) = default ;
    DeploymentSetConstraints(DeploymentSetConstraints &&) = default ;
    DeploymentSetConstraints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeploymentSetConstraints() = default ;
    DeploymentSetConstraints& operator=(const DeploymentSetConstraints &) = default ;
    DeploymentSetConstraints& operator=(DeploymentSetConstraints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->defaultValue_ != nullptr
        && this->enableState_ != nullptr && this->replacementStrategy_ != nullptr && this->values_ != nullptr; };
    // defaultValue Field Functions 
    bool hasDefaultValue() const { return this->defaultValue_ != nullptr;};
    void deleteDefaultValue() { this->defaultValue_ = nullptr;};
    inline string defaultValue() const { DARABONBA_PTR_GET_DEFAULT(defaultValue_, "") };
    inline DeploymentSetConstraints& setDefaultValue(string defaultValue) { DARABONBA_PTR_SET_VALUE(defaultValue_, defaultValue) };


    // enableState Field Functions 
    bool hasEnableState() const { return this->enableState_ != nullptr;};
    void deleteEnableState() { this->enableState_ = nullptr;};
    inline string enableState() const { DARABONBA_PTR_GET_DEFAULT(enableState_, "") };
    inline DeploymentSetConstraints& setEnableState(string enableState) { DARABONBA_PTR_SET_VALUE(enableState_, enableState) };


    // replacementStrategy Field Functions 
    bool hasReplacementStrategy() const { return this->replacementStrategy_ != nullptr;};
    void deleteReplacementStrategy() { this->replacementStrategy_ = nullptr;};
    inline const ReplacementStrategy & replacementStrategy() const { DARABONBA_PTR_GET_CONST(replacementStrategy_, ReplacementStrategy) };
    inline ReplacementStrategy replacementStrategy() { DARABONBA_PTR_GET(replacementStrategy_, ReplacementStrategy) };
    inline DeploymentSetConstraints& setReplacementStrategy(const ReplacementStrategy & replacementStrategy) { DARABONBA_PTR_SET_VALUE(replacementStrategy_, replacementStrategy) };
    inline DeploymentSetConstraints& setReplacementStrategy(ReplacementStrategy && replacementStrategy) { DARABONBA_PTR_SET_RVALUE(replacementStrategy_, replacementStrategy) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline DeploymentSetConstraints& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline DeploymentSetConstraints& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // 默认值。
    std::shared_ptr<string> defaultValue_ = nullptr;
    std::shared_ptr<string> enableState_ = nullptr;
    // 替换策略。
    std::shared_ptr<ReplacementStrategy> replacementStrategy_ = nullptr;
    // 枚举值。
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
