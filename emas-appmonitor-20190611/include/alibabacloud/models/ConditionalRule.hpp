// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONDITIONALRULE_HPP_
#define ALIBABACLOUD_MODELS_CONDITIONALRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class ConditionalRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConditionalRule& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, ConditionalRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    ConditionalRule() = default ;
    ConditionalRule(const ConditionalRule &) = default ;
    ConditionalRule(ConditionalRule &&) = default ;
    ConditionalRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConditionalRule() = default ;
    ConditionalRule& operator=(const ConditionalRule &) = default ;
    ConditionalRule& operator=(ConditionalRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->filter_ != nullptr
        && this->modifyTime_ != nullptr && this->name_ != nullptr && this->operator_ != nullptr && this->sampleRate_ != nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const EventFilter & filter() const { DARABONBA_PTR_GET_CONST(filter_, EventFilter) };
    inline EventFilter filter() { DARABONBA_PTR_GET(filter_, EventFilter) };
    inline ConditionalRule& setFilter(const EventFilter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ConditionalRule& setFilter(EventFilter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ConditionalRule& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ConditionalRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ConditionalRule& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline float sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0.0) };
    inline ConditionalRule& setSampleRate(float sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    std::shared_ptr<EventFilter> filter_ = nullptr;
    std::shared_ptr<string> modifyTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<float> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
