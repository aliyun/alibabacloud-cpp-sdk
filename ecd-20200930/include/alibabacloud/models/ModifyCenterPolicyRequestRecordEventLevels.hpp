// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTRECORDEVENTLEVELS_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCENTERPOLICYREQUESTRECORDEVENTLEVELS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ModifyCenterPolicyRequestRecordEventLevels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCenterPolicyRequestRecordEventLevels& obj) { 
      DARABONBA_PTR_TO_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCenterPolicyRequestRecordEventLevels& obj) { 
      DARABONBA_PTR_FROM_JSON(EventLevel, eventLevel_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    ModifyCenterPolicyRequestRecordEventLevels() = default ;
    ModifyCenterPolicyRequestRecordEventLevels(const ModifyCenterPolicyRequestRecordEventLevels &) = default ;
    ModifyCenterPolicyRequestRecordEventLevels(ModifyCenterPolicyRequestRecordEventLevels &&) = default ;
    ModifyCenterPolicyRequestRecordEventLevels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCenterPolicyRequestRecordEventLevels() = default ;
    ModifyCenterPolicyRequestRecordEventLevels& operator=(const ModifyCenterPolicyRequestRecordEventLevels &) = default ;
    ModifyCenterPolicyRequestRecordEventLevels& operator=(ModifyCenterPolicyRequestRecordEventLevels &&) = default ;
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
    inline ModifyCenterPolicyRequestRecordEventLevels& setEventLevel(string eventLevel) { DARABONBA_PTR_SET_VALUE(eventLevel_, eventLevel) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline ModifyCenterPolicyRequestRecordEventLevels& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    std::shared_ptr<string> eventLevel_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
