// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODYPAGINGINFOEXTENSIONSBINDEVENTLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXTENSIONSRESPONSEBODYPAGINGINFOEXTENSIONSBINDEVENTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListExtensionsResponseBodyPagingInfoExtensionsBindEventList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExtensionsResponseBodyPagingInfoExtensionsBindEventList& obj) { 
      DARABONBA_PTR_TO_JSON(EventCode, eventCode_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
    };
    friend void from_json(const Darabonba::Json& j, ListExtensionsResponseBodyPagingInfoExtensionsBindEventList& obj) { 
      DARABONBA_PTR_FROM_JSON(EventCode, eventCode_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
    };
    ListExtensionsResponseBodyPagingInfoExtensionsBindEventList() = default ;
    ListExtensionsResponseBodyPagingInfoExtensionsBindEventList(const ListExtensionsResponseBodyPagingInfoExtensionsBindEventList &) = default ;
    ListExtensionsResponseBodyPagingInfoExtensionsBindEventList(ListExtensionsResponseBodyPagingInfoExtensionsBindEventList &&) = default ;
    ListExtensionsResponseBodyPagingInfoExtensionsBindEventList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExtensionsResponseBodyPagingInfoExtensionsBindEventList() = default ;
    ListExtensionsResponseBodyPagingInfoExtensionsBindEventList& operator=(const ListExtensionsResponseBodyPagingInfoExtensionsBindEventList &) = default ;
    ListExtensionsResponseBodyPagingInfoExtensionsBindEventList& operator=(ListExtensionsResponseBodyPagingInfoExtensionsBindEventList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventCode_ != nullptr
        && this->eventName_ != nullptr; };
    // eventCode Field Functions 
    bool hasEventCode() const { return this->eventCode_ != nullptr;};
    void deleteEventCode() { this->eventCode_ = nullptr;};
    inline string eventCode() const { DARABONBA_PTR_GET_DEFAULT(eventCode_, "") };
    inline ListExtensionsResponseBodyPagingInfoExtensionsBindEventList& setEventCode(string eventCode) { DARABONBA_PTR_SET_VALUE(eventCode_, eventCode) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListExtensionsResponseBodyPagingInfoExtensionsBindEventList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


  protected:
    // The code of the event.
    std::shared_ptr<string> eventCode_ = nullptr;
    // The name of the event.
    std::shared_ptr<string> eventName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
