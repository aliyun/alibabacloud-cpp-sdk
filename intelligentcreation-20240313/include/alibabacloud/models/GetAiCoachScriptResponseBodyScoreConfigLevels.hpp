// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYSCORECONFIGLEVELS_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYSCORECONFIGLEVELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyScoreConfigLevels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyScoreConfigLevels& obj) { 
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(name, name_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyScoreConfigLevels& obj) { 
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(name, name_);
    };
    GetAICoachScriptResponseBodyScoreConfigLevels() = default ;
    GetAICoachScriptResponseBodyScoreConfigLevels(const GetAICoachScriptResponseBodyScoreConfigLevels &) = default ;
    GetAICoachScriptResponseBodyScoreConfigLevels(GetAICoachScriptResponseBodyScoreConfigLevels &&) = default ;
    GetAICoachScriptResponseBodyScoreConfigLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyScoreConfigLevels() = default ;
    GetAICoachScriptResponseBodyScoreConfigLevels& operator=(const GetAICoachScriptResponseBodyScoreConfigLevels &) = default ;
    GetAICoachScriptResponseBodyScoreConfigLevels& operator=(GetAICoachScriptResponseBodyScoreConfigLevels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->max_ == nullptr
        && return this->min_ == nullptr && return this->name_ == nullptr; };
    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t max() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline GetAICoachScriptResponseBodyScoreConfigLevels& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t min() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline GetAICoachScriptResponseBodyScoreConfigLevels& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBodyScoreConfigLevels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<int32_t> max_ = nullptr;
    std::shared_ptr<int32_t> min_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
