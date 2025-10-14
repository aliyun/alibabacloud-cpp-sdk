// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLISTPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYPOINTSANSWERLISTPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyPointsAnswerListParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyPointsAnswerListParameters& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyPointsAnswerListParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    GetAICoachScriptResponseBodyPointsAnswerListParameters() = default ;
    GetAICoachScriptResponseBodyPointsAnswerListParameters(const GetAICoachScriptResponseBodyPointsAnswerListParameters &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListParameters(GetAICoachScriptResponseBodyPointsAnswerListParameters &&) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyPointsAnswerListParameters() = default ;
    GetAICoachScriptResponseBodyPointsAnswerListParameters& operator=(const GetAICoachScriptResponseBodyPointsAnswerListParameters &) = default ;
    GetAICoachScriptResponseBodyPointsAnswerListParameters& operator=(GetAICoachScriptResponseBodyPointsAnswerListParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->value_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBodyPointsAnswerListParameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetAICoachScriptResponseBodyPointsAnswerListParameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
