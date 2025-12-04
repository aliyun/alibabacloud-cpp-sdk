// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOOKUPEVENTSREQUESTLOOKUPATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_LOOKUPEVENTSREQUESTLOOKUPATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Actiontrail20200706
{
namespace Models
{
  class LookupEventsRequestLookupAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LookupEventsRequestLookupAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(Key, key_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, LookupEventsRequestLookupAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(Key, key_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    LookupEventsRequestLookupAttribute() = default ;
    LookupEventsRequestLookupAttribute(const LookupEventsRequestLookupAttribute &) = default ;
    LookupEventsRequestLookupAttribute(LookupEventsRequestLookupAttribute &&) = default ;
    LookupEventsRequestLookupAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LookupEventsRequestLookupAttribute() = default ;
    LookupEventsRequestLookupAttribute& operator=(const LookupEventsRequestLookupAttribute &) = default ;
    LookupEventsRequestLookupAttribute& operator=(LookupEventsRequestLookupAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->key_ == nullptr
        && return this->value_ == nullptr; };
    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline LookupEventsRequestLookupAttribute& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline LookupEventsRequestLookupAttribute& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The key of the query condition. Valid values:
    // 
    // *  ServiceName: the name of a specific Alibaba Cloud service.
    // *  EventName: the name of a specific event.
    // *  User: the name of the RAM user who calls a specific operation.
    // *  EventId: the ID of a specific event.
    // *  ResourceType: the type of resources.
    // *   ResourceName: the name of a specific resource.
    // *   EventRW: the read/write type of events.
    // *  EventAccessKeyId: the AccessKey ID used in events.
    // 
    // > You can use only one query condition for each query.
    std::shared_ptr<string> key_ = nullptr;
    // The value of the query condition. Valid values:
    // 
    // *   When the LookupAttribute.N.Key parameter is set to ServiceName, you can set this parameter to a value such as `Ecs`.
    // *   When the LookupAttribute.N.Key parameter is set to EventName, you can set this parameter to a value such as `ConsoleSignin`.
    // *   When the LookupAttribute.N.Key parameter is set to User, you can set this parameter to a value such as `Alice`.
    // *   When the LookupAttribute.N.Key parameter is set to EventId, you can set this parameter to a value such as `B702AFA3-FD4B-40E3-88E4-C0752FAA****`.
    // *   When the LookupAttribute.N.Key parameter is set to ResourceType, you can set this parameter to a value such as `ACS::ECS::Instance`.
    // *   When the LookupAttribute.N.Key parameter is set to ResourceName, you can set this parameter to a value such as `i-bp14664y88udkt45****`.
    // *   When the LookupAttribute.N.Key parameter is set to EventRW, you can set this parameter to `Read` or `Write`.
    // *   When the LookupAttribute.N.Key parameter is set to EventAccessKeyId, you can set this parameter to a value such as `LTAI****************`.
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Actiontrail20200706
#endif
