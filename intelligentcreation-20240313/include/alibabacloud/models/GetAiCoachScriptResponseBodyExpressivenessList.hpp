// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYEXPRESSIVENESSLIST_HPP_
#define ALIBABACLOUD_MODELS_GETAICOACHSCRIPTRESPONSEBODYEXPRESSIVENESSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetAICoachScriptResponseBodyExpressivenessList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAICoachScriptResponseBodyExpressivenessList& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(expressivenessId, expressivenessId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(rule, rule_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, GetAICoachScriptResponseBodyExpressivenessList& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(expressivenessId, expressivenessId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(rule, rule_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(weight, weight_);
    };
    GetAICoachScriptResponseBodyExpressivenessList() = default ;
    GetAICoachScriptResponseBodyExpressivenessList(const GetAICoachScriptResponseBodyExpressivenessList &) = default ;
    GetAICoachScriptResponseBodyExpressivenessList(GetAICoachScriptResponseBodyExpressivenessList &&) = default ;
    GetAICoachScriptResponseBodyExpressivenessList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAICoachScriptResponseBodyExpressivenessList() = default ;
    GetAICoachScriptResponseBodyExpressivenessList& operator=(const GetAICoachScriptResponseBodyExpressivenessList &) = default ;
    GetAICoachScriptResponseBodyExpressivenessList& operator=(GetAICoachScriptResponseBodyExpressivenessList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->enabled_ == nullptr && return this->expressivenessId_ == nullptr && return this->name_ == nullptr && return this->rule_ == nullptr && return this->type_ == nullptr
        && return this->weight_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetAICoachScriptResponseBodyExpressivenessList& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetAICoachScriptResponseBodyExpressivenessList& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // expressivenessId Field Functions 
    bool hasExpressivenessId() const { return this->expressivenessId_ != nullptr;};
    void deleteExpressivenessId() { this->expressivenessId_ = nullptr;};
    inline string expressivenessId() const { DARABONBA_PTR_GET_DEFAULT(expressivenessId_, "") };
    inline GetAICoachScriptResponseBodyExpressivenessList& setExpressivenessId(string expressivenessId) { DARABONBA_PTR_SET_VALUE(expressivenessId_, expressivenessId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAICoachScriptResponseBodyExpressivenessList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string rule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline GetAICoachScriptResponseBodyExpressivenessList& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAICoachScriptResponseBodyExpressivenessList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline GetAICoachScriptResponseBodyExpressivenessList& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<bool> enabled_ = nullptr;
    std::shared_ptr<string> expressivenessId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> rule_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
