// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODELPARAMETERRULE_HPP_
#define ALIBABACLOUD_MODELS_MODELPARAMETERRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class ModelParameterRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModelParameterRule& obj) { 
      DARABONBA_ANY_TO_JSON(default, default_);
      DARABONBA_PTR_TO_JSON(max, max_);
      DARABONBA_PTR_TO_JSON(min, min_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(required, required_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModelParameterRule& obj) { 
      DARABONBA_ANY_FROM_JSON(default, default_);
      DARABONBA_PTR_FROM_JSON(max, max_);
      DARABONBA_PTR_FROM_JSON(min, min_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(required, required_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    ModelParameterRule() = default ;
    ModelParameterRule(const ModelParameterRule &) = default ;
    ModelParameterRule(ModelParameterRule &&) = default ;
    ModelParameterRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModelParameterRule() = default ;
    ModelParameterRule& operator=(const ModelParameterRule &) = default ;
    ModelParameterRule& operator=(ModelParameterRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->default_ == nullptr
        && this->max_ == nullptr && this->min_ == nullptr && this->name_ == nullptr && this->required_ == nullptr && this->type_ == nullptr; };
    // default Field Functions 
    bool hasDefault() const { return this->default_ != nullptr;};
    void deleteDefault() { this->default_ = nullptr;};
    inline     const Darabonba::Json & getDefault() const { DARABONBA_GET(default_) };
    Darabonba::Json & getDefault() { DARABONBA_GET(default_) };
    inline ModelParameterRule& setDefault(const Darabonba::Json & _default) { DARABONBA_SET_VALUE(default_, _default) };
    inline ModelParameterRule& setDefault(Darabonba::Json && _default) { DARABONBA_SET_RVALUE(default_, _default) };


    // max Field Functions 
    bool hasMax() const { return this->max_ != nullptr;};
    void deleteMax() { this->max_ = nullptr;};
    inline int32_t getMax() const { DARABONBA_PTR_GET_DEFAULT(max_, 0) };
    inline ModelParameterRule& setMax(int32_t max) { DARABONBA_PTR_SET_VALUE(max_, max) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline int32_t getMin() const { DARABONBA_PTR_GET_DEFAULT(min_, 0) };
    inline ModelParameterRule& setMin(int32_t min) { DARABONBA_PTR_SET_VALUE(min_, min) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModelParameterRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // required Field Functions 
    bool hasRequired() const { return this->required_ != nullptr;};
    void deleteRequired() { this->required_ = nullptr;};
    inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
    inline ModelParameterRule& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModelParameterRule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    Darabonba::Json default_ {};
    shared_ptr<int32_t> max_ {};
    shared_ptr<int32_t> min_ {};
    shared_ptr<string> name_ {};
    shared_ptr<bool> required_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
