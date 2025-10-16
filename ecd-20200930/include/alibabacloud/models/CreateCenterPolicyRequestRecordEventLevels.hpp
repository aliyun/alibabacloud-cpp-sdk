// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTRECORDEVENTLEVELS_HPP_
#define ALIBABACLOUD_MODELS_CREATECENTERPOLICYREQUESTRECORDEVENTLEVELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateCenterPolicyRequestRecordEventLevels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCenterPolicyRequestRecordEventLevels& obj) { 
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCenterPolicyRequestRecordEventLevels& obj) { 
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    CreateCenterPolicyRequestRecordEventLevels() = default ;
    CreateCenterPolicyRequestRecordEventLevels(const CreateCenterPolicyRequestRecordEventLevels &) = default ;
    CreateCenterPolicyRequestRecordEventLevels(CreateCenterPolicyRequestRecordEventLevels &&) = default ;
    CreateCenterPolicyRequestRecordEventLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCenterPolicyRequestRecordEventLevels() = default ;
    CreateCenterPolicyRequestRecordEventLevels& operator=(const CreateCenterPolicyRequestRecordEventLevels &) = default ;
    CreateCenterPolicyRequestRecordEventLevels& operator=(CreateCenterPolicyRequestRecordEventLevels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventLevel_ == nullptr
        && return this->eventType_ == nullptr; };
    // eventLevel Field Functions 
    bool hasEventLevel() const { return this->eventLevel_ != nullptr;};
    void deleteEventLevel() { this->eventLevel_ = nullptr;};
    inline string eventLevel() const { DARABONBA_PTR_GET_DEFAULT(eventLevel_, "") };
    inline CreateCenterPolicyRequestRecordEventLevels& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline CreateCenterPolicyRequestRecordEventLevels& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
