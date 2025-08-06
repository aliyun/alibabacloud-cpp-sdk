// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUESTCARDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUESTCARDINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequestCardInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequestCardInstances& obj) { 
      DARABONBA_PTR_TO_JSON(OutTrackId, outTrackId_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequestCardInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(OutTrackId, outTrackId_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
    };
    CreateEventRequestCardInstances() = default ;
    CreateEventRequestCardInstances(const CreateEventRequestCardInstances &) = default ;
    CreateEventRequestCardInstances(CreateEventRequestCardInstances &&) = default ;
    CreateEventRequestCardInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequestCardInstances() = default ;
    CreateEventRequestCardInstances& operator=(const CreateEventRequestCardInstances &) = default ;
    CreateEventRequestCardInstances& operator=(CreateEventRequestCardInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->outTrackId_ != nullptr
        && this->scenario_ != nullptr; };
    // outTrackId Field Functions 
    bool hasOutTrackId() const { return this->outTrackId_ != nullptr;};
    void deleteOutTrackId() { this->outTrackId_ = nullptr;};
    inline string outTrackId() const { DARABONBA_PTR_GET_DEFAULT(outTrackId_, "") };
    inline CreateEventRequestCardInstances& setOutTrackId(string outTrackId) { DARABONBA_PTR_SET_VALUE(outTrackId_, outTrackId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline CreateEventRequestCardInstances& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    std::shared_ptr<string> outTrackId_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
