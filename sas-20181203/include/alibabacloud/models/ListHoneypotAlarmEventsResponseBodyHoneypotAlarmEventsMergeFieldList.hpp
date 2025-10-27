// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODYHONEYPOTALARMEVENTSMERGEFIELDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTHONEYPOTALARMEVENTSRESPONSEBODYHONEYPOTALARMEVENTSMERGEFIELDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& obj) { 
      DARABONBA_PTR_TO_JSON(FieldExtInfo, fieldExtInfo_);
      DARABONBA_PTR_TO_JSON(FieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(FieldType, fieldType_);
      DARABONBA_PTR_TO_JSON(FieldValue, fieldValue_);
    };
    friend void from_json(const Darabonba::Json& j, ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& obj) { 
      DARABONBA_PTR_FROM_JSON(FieldExtInfo, fieldExtInfo_);
      DARABONBA_PTR_FROM_JSON(FieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(FieldType, fieldType_);
      DARABONBA_PTR_FROM_JSON(FieldValue, fieldValue_);
    };
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList() = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList(const ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList &) = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList(ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList &&) = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList() = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& operator=(const ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList &) = default ;
    ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& operator=(ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->fieldExtInfo_ == nullptr
        && return this->fieldKey_ == nullptr && return this->fieldType_ == nullptr && return this->fieldValue_ == nullptr; };
    // fieldExtInfo Field Functions 
    bool hasFieldExtInfo() const { return this->fieldExtInfo_ != nullptr;};
    void deleteFieldExtInfo() { this->fieldExtInfo_ = nullptr;};
    inline string fieldExtInfo() const { DARABONBA_PTR_GET_DEFAULT(fieldExtInfo_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& setFieldExtInfo(string fieldExtInfo) { DARABONBA_PTR_SET_VALUE(fieldExtInfo_, fieldExtInfo) };


    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string fieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // fieldType Field Functions 
    bool hasFieldType() const { return this->fieldType_ != nullptr;};
    void deleteFieldType() { this->fieldType_ = nullptr;};
    inline string fieldType() const { DARABONBA_PTR_GET_DEFAULT(fieldType_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& setFieldType(string fieldType) { DARABONBA_PTR_SET_VALUE(fieldType_, fieldType) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline ListHoneypotAlarmEventsResponseBodyHoneypotAlarmEventsMergeFieldList& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


  protected:
    // The extended value that corresponds to the field key.
    std::shared_ptr<string> fieldExtInfo_ = nullptr;
    // The key of the field.
    std::shared_ptr<string> fieldKey_ = nullptr;
    // The type of the field. You can ignore this internal parameter.
    std::shared_ptr<string> fieldType_ = nullptr;
    // The value that corresponds to the field key.
    std::shared_ptr<string> fieldValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
