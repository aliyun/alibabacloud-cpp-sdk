// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CARSCENEQUERYRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_CARSCENEQUERYRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class CarSceneQueryResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CarSceneQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(scenarioTemplateId, scenarioTemplateId_);
      DARABONBA_PTR_TO_JSON(scenarioTemplateName, scenarioTemplateName_);
      DARABONBA_PTR_TO_JSON(state, state_);
    };
    friend void from_json(const Darabonba::Json& j, CarSceneQueryResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(scenarioTemplateId, scenarioTemplateId_);
      DARABONBA_PTR_FROM_JSON(scenarioTemplateName, scenarioTemplateName_);
      DARABONBA_PTR_FROM_JSON(state, state_);
    };
    CarSceneQueryResponseBodyModule() = default ;
    CarSceneQueryResponseBodyModule(const CarSceneQueryResponseBodyModule &) = default ;
    CarSceneQueryResponseBodyModule(CarSceneQueryResponseBodyModule &&) = default ;
    CarSceneQueryResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CarSceneQueryResponseBodyModule() = default ;
    CarSceneQueryResponseBodyModule& operator=(const CarSceneQueryResponseBodyModule &) = default ;
    CarSceneQueryResponseBodyModule& operator=(CarSceneQueryResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->scenarioTemplateId_ != nullptr
        && this->scenarioTemplateName_ != nullptr && this->state_ != nullptr; };
    // scenarioTemplateId Field Functions 
    bool hasScenarioTemplateId() const { return this->scenarioTemplateId_ != nullptr;};
    void deleteScenarioTemplateId() { this->scenarioTemplateId_ = nullptr;};
    inline string scenarioTemplateId() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateId_, "") };
    inline CarSceneQueryResponseBodyModule& setScenarioTemplateId(string scenarioTemplateId) { DARABONBA_PTR_SET_VALUE(scenarioTemplateId_, scenarioTemplateId) };


    // scenarioTemplateName Field Functions 
    bool hasScenarioTemplateName() const { return this->scenarioTemplateName_ != nullptr;};
    void deleteScenarioTemplateName() { this->scenarioTemplateName_ = nullptr;};
    inline string scenarioTemplateName() const { DARABONBA_PTR_GET_DEFAULT(scenarioTemplateName_, "") };
    inline CarSceneQueryResponseBodyModule& setScenarioTemplateName(string scenarioTemplateName) { DARABONBA_PTR_SET_VALUE(scenarioTemplateName_, scenarioTemplateName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CarSceneQueryResponseBodyModule& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    std::shared_ptr<string> scenarioTemplateId_ = nullptr;
    std::shared_ptr<string> scenarioTemplateName_ = nullptr;
    std::shared_ptr<string> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
