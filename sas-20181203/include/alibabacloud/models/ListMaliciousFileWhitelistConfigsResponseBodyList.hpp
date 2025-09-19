// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMALICIOUSFILEWHITELISTCONFIGSRESPONSEBODYLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTMALICIOUSFILEWHITELISTCONFIGSRESPONSEBODYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListMaliciousFileWhitelistConfigsResponseBodyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMaliciousFileWhitelistConfigsResponseBodyList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetValue, targetValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListMaliciousFileWhitelistConfigsResponseBodyList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetValue, targetValue_);
    };
    ListMaliciousFileWhitelistConfigsResponseBodyList() = default ;
    ListMaliciousFileWhitelistConfigsResponseBodyList(const ListMaliciousFileWhitelistConfigsResponseBodyList &) = default ;
    ListMaliciousFileWhitelistConfigsResponseBodyList(ListMaliciousFileWhitelistConfigsResponseBodyList &&) = default ;
    ListMaliciousFileWhitelistConfigsResponseBodyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMaliciousFileWhitelistConfigsResponseBodyList() = default ;
    ListMaliciousFileWhitelistConfigsResponseBodyList& operator=(const ListMaliciousFileWhitelistConfigsResponseBodyList &) = default ;
    ListMaliciousFileWhitelistConfigsResponseBodyList& operator=(ListMaliciousFileWhitelistConfigsResponseBodyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->eventName_ != nullptr && this->field_ != nullptr && this->fieldValue_ != nullptr && this->gmtCreate_ != nullptr && this->gmtModified_ != nullptr
        && this->id_ != nullptr && this->operator_ != nullptr && this->source_ != nullptr && this->targetType_ != nullptr && this->targetValue_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline ListMaliciousFileWhitelistConfigsResponseBodyList& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // The number of the assets on which the rule takes effect.
    // 
    // >  The value of this parameter is returned only if the value of TargetType is SELECTION_KEY.
    std::shared_ptr<string> count_ = nullptr;
    // The name of the alert.
    // 
    // *   The value is fixed as ALL, which indicates all alert types.
    std::shared_ptr<string> eventName_ = nullptr;
    // The field that is used in the whitelist rule.
    std::shared_ptr<string> field_ = nullptr;
    // The value of the field that is used in the whitelist rule.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // The time when the rule was created.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The time when the rule was modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The logical operator of the whitelist rule.
    // 
    // *   The value is fixed as strEqual, which indicates the equality operator (=).
    std::shared_ptr<string> operator_ = nullptr;
    // The feature to which this operation belongs.
    // 
    // *   The value is fixed as agentless, which indicates the agentless detection feature.
    std::shared_ptr<string> source_ = nullptr;
    // The type of the assets on which the rule takes effect. Valid values:
    // 
    // *   ALL: all assets
    // *   SELECTION_KEY: selected assets
    std::shared_ptr<string> targetType_ = nullptr;
    // The assets on which the rule takes effect. Valid values:
    // 
    // *   ALL: all assets
    // *   Others: selected assets
    std::shared_ptr<string> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
