// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMALICIOUSFILEWHITELISTCONFIGRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATEMALICIOUSFILEWHITELISTCONFIGRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class CreateMaliciousFileWhitelistConfigResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMaliciousFileWhitelistConfigResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateMaliciousFileWhitelistConfigResponseBodyData& obj) { 
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
    CreateMaliciousFileWhitelistConfigResponseBodyData() = default ;
    CreateMaliciousFileWhitelistConfigResponseBodyData(const CreateMaliciousFileWhitelistConfigResponseBodyData &) = default ;
    CreateMaliciousFileWhitelistConfigResponseBodyData(CreateMaliciousFileWhitelistConfigResponseBodyData &&) = default ;
    CreateMaliciousFileWhitelistConfigResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMaliciousFileWhitelistConfigResponseBodyData() = default ;
    CreateMaliciousFileWhitelistConfigResponseBodyData& operator=(const CreateMaliciousFileWhitelistConfigResponseBodyData &) = default ;
    CreateMaliciousFileWhitelistConfigResponseBodyData& operator=(CreateMaliciousFileWhitelistConfigResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->eventName_ == nullptr && return this->field_ == nullptr && return this->fieldValue_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr
        && return this->id_ == nullptr && return this->operator_ == nullptr && return this->source_ == nullptr && return this->targetType_ == nullptr && return this->targetValue_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline string count() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline string field() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


    // fieldValue Field Functions 
    bool hasFieldValue() const { return this->fieldValue_ != nullptr;};
    void deleteFieldValue() { this->fieldValue_ = nullptr;};
    inline string fieldValue() const { DARABONBA_PTR_GET_DEFAULT(fieldValue_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setFieldValue(string fieldValue) { DARABONBA_PTR_SET_VALUE(fieldValue_, fieldValue) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetValue Field Functions 
    bool hasTargetValue() const { return this->targetValue_ != nullptr;};
    void deleteTargetValue() { this->targetValue_ = nullptr;};
    inline string targetValue() const { DARABONBA_PTR_GET_DEFAULT(targetValue_, "") };
    inline CreateMaliciousFileWhitelistConfigResponseBodyData& setTargetValue(string targetValue) { DARABONBA_PTR_SET_VALUE(targetValue_, targetValue) };


  protected:
    // Number of effective assets.
    // > This field has a value when targetType is SELECTION_KEY
    std::shared_ptr<string> count_ = nullptr;
    // Alert name:
    // - ALL: All alert types
    std::shared_ptr<string> eventName_ = nullptr;
    // Whitelisted field.
    std::shared_ptr<string> field_ = nullptr;
    // Whitelisted field value.
    std::shared_ptr<string> fieldValue_ = nullptr;
    // Creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // Modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // Rule ID.
    std::shared_ptr<string> id_ = nullptr;
    // Rule judgment operator:
    // - strEqual: String equals
    std::shared_ptr<string> operator_ = nullptr;
    // Business source:
    // - agentless: Agentless detection
    std::shared_ptr<string> source_ = nullptr;
    // Effective target type:
    // - ALL: All assets
    // - SELECTION_KEY: Assets selected via the asset selection component
    std::shared_ptr<string> targetType_ = nullptr;
    // Target effective scope:
    // - ALL: All assets
    // - Other: Key of the asset range selected by the asset selection component
    std::shared_ptr<string> targetValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
