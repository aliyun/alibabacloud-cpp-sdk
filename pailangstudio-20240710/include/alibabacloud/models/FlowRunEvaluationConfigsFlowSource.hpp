// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLOWRUNEVALUATIONCONFIGSFLOWSOURCE_HPP_
#define ALIBABACLOUD_MODELS_FLOWRUNEVALUATIONCONFIGSFLOWSOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class FlowRunEvaluationConfigsFlowSource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlowRunEvaluationConfigsFlowSource& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, FlowRunEvaluationConfigsFlowSource& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    FlowRunEvaluationConfigsFlowSource() = default ;
    FlowRunEvaluationConfigsFlowSource(const FlowRunEvaluationConfigsFlowSource &) = default ;
    FlowRunEvaluationConfigsFlowSource(FlowRunEvaluationConfigsFlowSource &&) = default ;
    FlowRunEvaluationConfigsFlowSource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlowRunEvaluationConfigsFlowSource() = default ;
    FlowRunEvaluationConfigsFlowSource& operator=(const FlowRunEvaluationConfigsFlowSource &) = default ;
    FlowRunEvaluationConfigsFlowSource& operator=(FlowRunEvaluationConfigsFlowSource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->name_ == nullptr && return this->type_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline FlowRunEvaluationConfigsFlowSource& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline FlowRunEvaluationConfigsFlowSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline FlowRunEvaluationConfigsFlowSource& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // ID
    std::shared_ptr<string> id_ = nullptr;
    // 名称
    std::shared_ptr<string> name_ = nullptr;
    // 类型
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
