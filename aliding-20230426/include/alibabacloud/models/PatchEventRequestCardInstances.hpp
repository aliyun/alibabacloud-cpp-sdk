// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTREQUESTCARDINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTREQUESTCARDINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventRequestCardInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventRequestCardInstances& obj) { 
      DARABONBA_PTR_TO_JSON(OutTrackId, outTrackId_);
      DARABONBA_PTR_TO_JSON(Scenario, scenario_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventRequestCardInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(OutTrackId, outTrackId_);
      DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
    };
    PatchEventRequestCardInstances() = default ;
    PatchEventRequestCardInstances(const PatchEventRequestCardInstances &) = default ;
    PatchEventRequestCardInstances(PatchEventRequestCardInstances &&) = default ;
    PatchEventRequestCardInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventRequestCardInstances() = default ;
    PatchEventRequestCardInstances& operator=(const PatchEventRequestCardInstances &) = default ;
    PatchEventRequestCardInstances& operator=(PatchEventRequestCardInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->outTrackId_ == nullptr
        && return this->scenario_ == nullptr; };
    // outTrackId Field Functions 
    bool hasOutTrackId() const { return this->outTrackId_ != nullptr;};
    void deleteOutTrackId() { this->outTrackId_ = nullptr;};
    inline string outTrackId() const { DARABONBA_PTR_GET_DEFAULT(outTrackId_, "") };
    inline PatchEventRequestCardInstances& setOutTrackId(string outTrackId) { DARABONBA_PTR_SET_VALUE(outTrackId_, outTrackId) };


    // scenario Field Functions 
    bool hasScenario() const { return this->scenario_ != nullptr;};
    void deleteScenario() { this->scenario_ = nullptr;};
    inline string scenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
    inline PatchEventRequestCardInstances& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


  protected:
    std::shared_ptr<string> outTrackId_ = nullptr;
    std::shared_ptr<string> scenario_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
