// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEVENTBUSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETEVENTBUSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class GetEventBusResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEventBusResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EventBusARN, eventBusARN_);
      DARABONBA_PTR_TO_JSON(EventBusName, eventBusName_);
    };
    friend void from_json(const Darabonba::Json& j, GetEventBusResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EventBusARN, eventBusARN_);
      DARABONBA_PTR_FROM_JSON(EventBusName, eventBusName_);
    };
    GetEventBusResponseBodyData() = default ;
    GetEventBusResponseBodyData(const GetEventBusResponseBodyData &) = default ;
    GetEventBusResponseBodyData(GetEventBusResponseBodyData &&) = default ;
    GetEventBusResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEventBusResponseBodyData() = default ;
    GetEventBusResponseBodyData& operator=(const GetEventBusResponseBodyData &) = default ;
    GetEventBusResponseBodyData& operator=(GetEventBusResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTimestamp_ != nullptr
        && this->description_ != nullptr && this->eventBusARN_ != nullptr && this->eventBusName_ != nullptr; };
    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline GetEventBusResponseBodyData& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetEventBusResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // eventBusARN Field Functions 
    bool hasEventBusARN() const { return this->eventBusARN_ != nullptr;};
    void deleteEventBusARN() { this->eventBusARN_ = nullptr;};
    inline string eventBusARN() const { DARABONBA_PTR_GET_DEFAULT(eventBusARN_, "") };
    inline GetEventBusResponseBodyData& setEventBusARN(string eventBusARN) { DARABONBA_PTR_SET_VALUE(eventBusARN_, eventBusARN) };


    // eventBusName Field Functions 
    bool hasEventBusName() const { return this->eventBusName_ != nullptr;};
    void deleteEventBusName() { this->eventBusName_ = nullptr;};
    inline string eventBusName() const { DARABONBA_PTR_GET_DEFAULT(eventBusName_, "") };
    inline GetEventBusResponseBodyData& setEventBusName(string eventBusName) { DARABONBA_PTR_SET_VALUE(eventBusName_, eventBusName) };


  protected:
    // The timestamp that indicates when the event bus was created.
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    // The description of the event bus.
    std::shared_ptr<string> description_ = nullptr;
    // The Alibaba Cloud Resource Name (ARN) of the event bus.
    std::shared_ptr<string> eventBusARN_ = nullptr;
    // The name of the event bus.
    std::shared_ptr<string> eventBusName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
