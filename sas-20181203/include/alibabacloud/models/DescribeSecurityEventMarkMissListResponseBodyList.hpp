// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTMARKMISSLISTRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECURITYEVENTMARKMISSLISTRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSecurityEventMarkMissListResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecurityEventMarkMissListResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventNameOriginal, eventNameOriginal_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(EventTypeOriginal, eventTypeOriginal_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecurityEventMarkMissListResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventNameOriginal, eventNameOriginal_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(EventTypeOriginal, eventTypeOriginal_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribeSecurityEventMarkMissListResponseBodyList() = default ;
    DescribeSecurityEventMarkMissListResponseBodyList(const DescribeSecurityEventMarkMissListResponseBodyList &) = default ;
    DescribeSecurityEventMarkMissListResponseBodyList(DescribeSecurityEventMarkMissListResponseBodyList &&) = default ;
    DescribeSecurityEventMarkMissListResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecurityEventMarkMissListResponseBodyList() = default ;
    DescribeSecurityEventMarkMissListResponseBodyList& operator=(const DescribeSecurityEventMarkMissListResponseBodyList &) = default ;
    DescribeSecurityEventMarkMissListResponseBodyList& operator=(DescribeSecurityEventMarkMissListResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliUid_ == nullptr
        && return this->eventName_ == nullptr && return this->eventNameOriginal_ == nullptr && return this->eventType_ == nullptr && return this->eventTypeOriginal_ == nullptr && return this->field_ == nullptr
        && return this->fieldValue_ == nullptr && return this->filedAliasName_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr
        && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->operate_ == nullptr && return this->uuid_ == nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventNameOriginal Field Functions 
    bool hasEventNameOriginal() const { return this->eventNameOriginal_ != nullptr;};
    void deleteEventNameOriginal() { this->eventNameOriginal_ = nullptr;};
    inline string eventNameOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventNameOriginal_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setEventNameOriginal(string eventNameOriginal) { DARABONBA_PTR_SET_VALUE(eventNameOriginal_, eventNameOriginal) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // eventTypeOriginal Field Functions 
    bool hasEventTypeOriginal() const { return this->eventTypeOriginal_ != nullptr;};
    void deleteEventTypeOriginal() { this->eventTypeOriginal_ = nullptr;};
    inline string eventTypeOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventTypeOriginal_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setEventTypeOriginal(string eventTypeOriginal) { DARABONBA_PTR_SET_VALUE(eventTypeOriginal_, eventTypeOriginal) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // filedAliasName Field Functions 
    bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
    void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
    inline string filedAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string operate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeSecurityEventMarkMissListResponseBodyList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The user ID.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The name of the alert event. The value indicates a subtype.
    std::shared_ptr<string> eventName_ = nullptr;
    // The name of the alert event. The value indicates a type.
    std::shared_ptr<string> eventNameOriginal_ = nullptr;
    // The subtype of the alert event.
    std::shared_ptr<string> eventType_ = nullptr;
    // The type of the alert event.
    std::shared_ptr<string> eventTypeOriginal_ = nullptr;
    // The field that is used in the whitelist rule.
    std::shared_ptr<string> field_ = nullptr;
    // The value of the field.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The alias of the field.
    std::shared_ptr<string> filedAliasName_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The instance ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name of the asset.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The operator. Valid values:
    // 
    // - **contains**: contains
    // - **notContains**: does not contain
    // - **strEqual**: equals
    // - **strNotEqual**: does not equal
    // - **regex**: regular expression
    std::shared_ptr<string> operate_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
