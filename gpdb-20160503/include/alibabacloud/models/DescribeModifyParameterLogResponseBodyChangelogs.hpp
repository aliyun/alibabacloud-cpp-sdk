// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODYCHANGELOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMODIFYPARAMETERLOGRESPONSEBODYCHANGELOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Gpdb20160503
{
namespace Models
{
  class DescribeModifyParameterLogResponseBodyChangelogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeModifyParameterLogResponseBodyChangelogs& obj) { 
      DARABONBA_PTR_TO_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_TO_JSON(ParameterValid, parameterValid_);
      DARABONBA_PTR_TO_JSON(ParameterValueAfter, parameterValueAfter_);
      DARABONBA_PTR_TO_JSON(ParameterValueBefore, parameterValueBefore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeModifyParameterLogResponseBodyChangelogs& obj) { 
      DARABONBA_PTR_FROM_JSON(EffectTime, effectTime_);
      DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
      DARABONBA_PTR_FROM_JSON(ParameterValid, parameterValid_);
      DARABONBA_PTR_FROM_JSON(ParameterValueAfter, parameterValueAfter_);
      DARABONBA_PTR_FROM_JSON(ParameterValueBefore, parameterValueBefore_);
    };
    DescribeModifyParameterLogResponseBodyChangelogs() = default ;
    DescribeModifyParameterLogResponseBodyChangelogs(const DescribeModifyParameterLogResponseBodyChangelogs &) = default ;
    DescribeModifyParameterLogResponseBodyChangelogs(DescribeModifyParameterLogResponseBodyChangelogs &&) = default ;
    DescribeModifyParameterLogResponseBodyChangelogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeModifyParameterLogResponseBodyChangelogs() = default ;
    DescribeModifyParameterLogResponseBodyChangelogs& operator=(const DescribeModifyParameterLogResponseBodyChangelogs &) = default ;
    DescribeModifyParameterLogResponseBodyChangelogs& operator=(DescribeModifyParameterLogResponseBodyChangelogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->effectTime_ != nullptr
        && this->parameterName_ != nullptr && this->parameterValid_ != nullptr && this->parameterValueAfter_ != nullptr && this->parameterValueBefore_ != nullptr; };
    // effectTime Field Functions 
    bool hasEffectTime() const { return this->effectTime_ != nullptr;};
    void deleteEffectTime() { this->effectTime_ = nullptr;};
    inline string effectTime() const { DARABONBA_PTR_GET_DEFAULT(effectTime_, "") };
    inline DescribeModifyParameterLogResponseBodyChangelogs& setEffectTime(string effectTime) { DARABONBA_PTR_SET_VALUE(effectTime_, effectTime) };


    // parameterName Field Functions 
    bool hasParameterName() const { return this->parameterName_ != nullptr;};
    void deleteParameterName() { this->parameterName_ = nullptr;};
    inline string parameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
    inline DescribeModifyParameterLogResponseBodyChangelogs& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


    // parameterValid Field Functions 
    bool hasParameterValid() const { return this->parameterValid_ != nullptr;};
    void deleteParameterValid() { this->parameterValid_ = nullptr;};
    inline string parameterValid() const { DARABONBA_PTR_GET_DEFAULT(parameterValid_, "") };
    inline DescribeModifyParameterLogResponseBodyChangelogs& setParameterValid(string parameterValid) { DARABONBA_PTR_SET_VALUE(parameterValid_, parameterValid) };


    // parameterValueAfter Field Functions 
    bool hasParameterValueAfter() const { return this->parameterValueAfter_ != nullptr;};
    void deleteParameterValueAfter() { this->parameterValueAfter_ = nullptr;};
    inline string parameterValueAfter() const { DARABONBA_PTR_GET_DEFAULT(parameterValueAfter_, "") };
    inline DescribeModifyParameterLogResponseBodyChangelogs& setParameterValueAfter(string parameterValueAfter) { DARABONBA_PTR_SET_VALUE(parameterValueAfter_, parameterValueAfter) };


    // parameterValueBefore Field Functions 
    bool hasParameterValueBefore() const { return this->parameterValueBefore_ != nullptr;};
    void deleteParameterValueBefore() { this->parameterValueBefore_ = nullptr;};
    inline string parameterValueBefore() const { DARABONBA_PTR_GET_DEFAULT(parameterValueBefore_, "") };
    inline DescribeModifyParameterLogResponseBodyChangelogs& setParameterValueBefore(string parameterValueBefore) { DARABONBA_PTR_SET_VALUE(parameterValueBefore_, parameterValueBefore) };


  protected:
    // The effective time.
    std::shared_ptr<string> effectTime_ = nullptr;
    // The name of the parameter.
    std::shared_ptr<string> parameterName_ = nullptr;
    // Indicates whether the modification takes effect.
    std::shared_ptr<string> parameterValid_ = nullptr;
    // The original value of the parameter.
    std::shared_ptr<string> parameterValueAfter_ = nullptr;
    // The new value of the parameter.
    std::shared_ptr<string> parameterValueBefore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Gpdb20160503
#endif
