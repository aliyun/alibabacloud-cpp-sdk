// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRICTEVENTNAMERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRICTEVENTNAMERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrictEventNameResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrictEventNameResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(ShowEventName, showEventName_);
      DARABONBA_PTR_TO_JSON(ShowEventType, showEventType_);
      DARABONBA_PTR_TO_JSON(SwitchConfig, switchConfig_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrictEventNameResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(ShowEventName, showEventName_);
      DARABONBA_PTR_FROM_JSON(ShowEventType, showEventType_);
      DARABONBA_PTR_FROM_JSON(SwitchConfig, switchConfig_);
    };
    DescribeStrictEventNameResponseBodyData() = default ;
    DescribeStrictEventNameResponseBodyData(const DescribeStrictEventNameResponseBodyData &) = default ;
    DescribeStrictEventNameResponseBodyData(DescribeStrictEventNameResponseBodyData &&) = default ;
    DescribeStrictEventNameResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrictEventNameResponseBodyData() = default ;
    DescribeStrictEventNameResponseBodyData& operator=(const DescribeStrictEventNameResponseBodyData &) = default ;
    DescribeStrictEventNameResponseBodyData& operator=(DescribeStrictEventNameResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventName_ != nullptr
        && this->eventType_ != nullptr && this->showEventName_ != nullptr && this->showEventType_ != nullptr && this->switchConfig_ != nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeStrictEventNameResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeStrictEventNameResponseBodyData& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // showEventName Field Functions 
    bool hasShowEventName() const { return this->showEventName_ != nullptr;};
    void deleteShowEventName() { this->showEventName_ = nullptr;};
    inline string showEventName() const { DARABONBA_PTR_GET_DEFAULT(showEventName_, "") };
    inline DescribeStrictEventNameResponseBodyData& setShowEventName(string showEventName) { DARABONBA_PTR_SET_VALUE(showEventName_, showEventName) };


    // showEventType Field Functions 
    bool hasShowEventType() const { return this->showEventType_ != nullptr;};
    void deleteShowEventType() { this->showEventType_ = nullptr;};
    inline string showEventType() const { DARABONBA_PTR_GET_DEFAULT(showEventType_, "") };
    inline DescribeStrictEventNameResponseBodyData& setShowEventType(string showEventType) { DARABONBA_PTR_SET_VALUE(showEventType_, showEventType) };


    // switchConfig Field Functions 
    bool hasSwitchConfig() const { return this->switchConfig_ != nullptr;};
    void deleteSwitchConfig() { this->switchConfig_ = nullptr;};
    inline bool switchConfig() const { DARABONBA_PTR_GET_DEFAULT(switchConfig_, false) };
    inline DescribeStrictEventNameResponseBodyData& setSwitchConfig(bool switchConfig) { DARABONBA_PTR_SET_VALUE(switchConfig_, switchConfig) };


  protected:
    // Alarm name.
    std::shared_ptr<string> eventName_ = nullptr;
    // Alarm type.
    std::shared_ptr<string> eventType_ = nullptr;
    // Displayed alarm name.
    std::shared_ptr<string> showEventName_ = nullptr;
    // Displayed alarm type.
    std::shared_ptr<string> showEventType_ = nullptr;
    // Indicates whether the user has enabled the strict mode for this alarm type.
    // - true: Enabled
    // - false: Not enabled
    std::shared_ptr<bool> switchConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
