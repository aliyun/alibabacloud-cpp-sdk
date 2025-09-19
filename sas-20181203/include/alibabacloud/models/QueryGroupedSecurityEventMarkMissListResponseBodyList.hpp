// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYGROUPEDSECURITYEVENTMARKMISSLISTRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class QueryGroupedSecurityEventMarkMissListResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryGroupedSecurityEventMarkMissListResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(AliUid, aliUid_);
      DARABONBA_PTR_TO_JSON(DisposalWay, disposalWay_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventNameOriginal, eventNameOriginal_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
      DARABONBA_PTR_TO_JSON(EventTypeOriginal, eventTypeOriginal_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_TO_JSON(Operate, operate_);
      DARABONBA_PTR_TO_JSON(Uuids, uuids_);
    };
    friend void from_json(const Darabonba::Json& j, QueryGroupedSecurityEventMarkMissListResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliUid, aliUid_);
      DARABONBA_PTR_FROM_JSON(DisposalWay, disposalWay_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventNameOriginal, eventNameOriginal_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
      DARABONBA_PTR_FROM_JSON(EventTypeOriginal, eventTypeOriginal_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(FiledAliasName, filedAliasName_);
      DARABONBA_PTR_FROM_JSON(Operate, operate_);
      DARABONBA_PTR_FROM_JSON(Uuids, uuids_);
    };
    QueryGroupedSecurityEventMarkMissListResponseBodyList() = default ;
    QueryGroupedSecurityEventMarkMissListResponseBodyList(const QueryGroupedSecurityEventMarkMissListResponseBodyList &) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBodyList(QueryGroupedSecurityEventMarkMissListResponseBodyList &&) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryGroupedSecurityEventMarkMissListResponseBodyList() = default ;
    QueryGroupedSecurityEventMarkMissListResponseBodyList& operator=(const QueryGroupedSecurityEventMarkMissListResponseBodyList &) = default ;
    QueryGroupedSecurityEventMarkMissListResponseBodyList& operator=(QueryGroupedSecurityEventMarkMissListResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliUid_ != nullptr
        && this->disposalWay_ != nullptr && this->eventName_ != nullptr && this->eventNameOriginal_ != nullptr && this->eventType_ != nullptr && this->eventTypeOriginal_ != nullptr
        && this->field_ != nullptr && this->fieldValue_ != nullptr && this->filedAliasName_ != nullptr && this->operate_ != nullptr && this->uuids_ != nullptr; };
    // aliUid Field Functions 
    bool hasAliUid() const { return this->aliUid_ != nullptr;};
    void deleteAliUid() { this->aliUid_ = nullptr;};
    inline int64_t aliUid() const { DARABONBA_PTR_GET_DEFAULT(aliUid_, 0L) };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setAliUid(int64_t aliUid) { DARABONBA_PTR_SET_VALUE(aliUid_, aliUid) };


    // disposalWay Field Functions 
    bool hasDisposalWay() const { return this->disposalWay_ != nullptr;};
    void deleteDisposalWay() { this->disposalWay_ = nullptr;};
    inline string disposalWay() const { DARABONBA_PTR_GET_DEFAULT(disposalWay_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setDisposalWay(string disposalWay) { DARABONBA_PTR_SET_VALUE(disposalWay_, disposalWay) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventNameOriginal Field Functions 
    bool hasEventNameOriginal() const { return this->eventNameOriginal_ != nullptr;};
    void deleteEventNameOriginal() { this->eventNameOriginal_ = nullptr;};
    inline string eventNameOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventNameOriginal_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setEventNameOriginal(string eventNameOriginal) { DARABONBA_PTR_SET_VALUE(eventNameOriginal_, eventNameOriginal) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


    // eventTypeOriginal Field Functions 
    bool hasEventTypeOriginal() const { return this->eventTypeOriginal_ != nullptr;};
    void deleteEventTypeOriginal() { this->eventTypeOriginal_ = nullptr;};
    inline string eventTypeOriginal() const { DARABONBA_PTR_GET_DEFAULT(eventTypeOriginal_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setEventTypeOriginal(string eventTypeOriginal) { DARABONBA_PTR_SET_VALUE(eventTypeOriginal_, eventTypeOriginal) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // filedAliasName Field Functions 
    bool hasFiledAliasName() const { return this->filedAliasName_ != nullptr;};
    void deleteFiledAliasName() { this->filedAliasName_ = nullptr;};
    inline string filedAliasName() const { DARABONBA_PTR_GET_DEFAULT(filedAliasName_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setFiledAliasName(string filedAliasName) { DARABONBA_PTR_SET_VALUE(filedAliasName_, filedAliasName) };


    // operate Field Functions 
    bool hasOperate() const { return this->operate_ != nullptr;};
    void deleteOperate() { this->operate_ = nullptr;};
    inline string operate() const { DARABONBA_PTR_GET_DEFAULT(operate_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setOperate(string operate) { DARABONBA_PTR_SET_VALUE(operate_, operate) };


    // uuids Field Functions 
    bool hasUuids() const { return this->uuids_ != nullptr;};
    void deleteUuids() { this->uuids_ = nullptr;};
    inline string uuids() const { DARABONBA_PTR_GET_DEFAULT(uuids_, "") };
    inline QueryGroupedSecurityEventMarkMissListResponseBodyList& setUuids(string uuids) { DARABONBA_PTR_SET_VALUE(uuids_, uuids) };


  protected:
    // The ID of the user.
    std::shared_ptr<int64_t> aliUid_ = nullptr;
    // The handling method. Valid values:
    // 
    // *   **auto_add_white**: Automatically Added to Whitelist
    // *   **defense_not_notification**: Defense Without Notification
    std::shared_ptr<string> disposalWay_ = nullptr;
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
    // The operator. Valid values:
    // 
    // *   **contains**: contains
    // *   **notContains**: does not contain
    // *   **strEqual**: equals
    // *   **strNotEqual**: does not equal
    // *   **regex**: regular expression
    std::shared_ptr<string> operate_ = nullptr;
    // The UUIDs of assets. Multiple UUIDs are separated by commas (,).
    std::shared_ptr<string> uuids_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
