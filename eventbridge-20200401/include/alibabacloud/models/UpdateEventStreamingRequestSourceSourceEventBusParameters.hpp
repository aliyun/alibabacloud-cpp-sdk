// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEEVENTBUSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSOURCESOURCEEVENTBUSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSourceSourceEventBusParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSourceSourceEventBusParameters& obj) { 
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_TO_JSON(EventRuleName, eventRuleName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSourceSourceEventBusParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
      DARABONBA_PTR_FROM_JSON(EventRuleName, eventRuleName_);
    };
    UpdateEventStreamingRequestSourceSourceEventBusParameters() = default ;
    UpdateEventStreamingRequestSourceSourceEventBusParameters(const UpdateEventStreamingRequestSourceSourceEventBusParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceEventBusParameters(UpdateEventStreamingRequestSourceSourceEventBusParameters &&) = default ;
    UpdateEventStreamingRequestSourceSourceEventBusParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSourceSourceEventBusParameters() = default ;
    UpdateEventStreamingRequestSourceSourceEventBusParameters& operator=(const UpdateEventStreamingRequestSourceSourceEventBusParameters &) = default ;
    UpdateEventStreamingRequestSourceSourceEventBusParameters& operator=(UpdateEventStreamingRequestSourceSourceEventBusParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventBusName_ != nullptr
        && this->eventRuleName_ != nullptr; };
    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline UpdateEventStreamingRequestSourceSourceEventBusParameters& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


    // eventRuleName Field Functions 
    bool hasEventRuleName() const { return this->eventRuleName_ != nullptr;};
    void deleteEventRuleName() { this->eventRuleName_ = nullptr;};
    inline string eventRuleName() const { DARABONBA_PTR_GET_DEFAULT(eventRuleName_, "") };
    inline UpdateEventStreamingRequestSourceSourceEventBusParameters& setEventRuleName(string eventRuleName) { DARABONBA_PTR_SET_VALUE(eventRuleName_, eventRuleName) };


  protected:
    std::shared_ptr<string> eventBusName_ = nullptr;
    std::shared_ptr<string> eventRuleName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
