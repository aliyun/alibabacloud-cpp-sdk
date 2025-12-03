// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPORTINSIGHTCUSTOMVALUERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_EXPORTINSIGHTCUSTOMVALUERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class ExportInsightCustomValueResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExportInsightCustomValueResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(doubleValue, doubleValue_);
      DARABONBA_PTR_TO_JSON(fieldId, fieldId_);
      DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(identifier, identifier_);
      DARABONBA_PTR_TO_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_TO_JSON(longValue, longValue_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(targetId, targetId_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, ExportInsightCustomValueResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(doubleValue, doubleValue_);
      DARABONBA_PTR_FROM_JSON(fieldId, fieldId_);
      DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(gmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(identifier, identifier_);
      DARABONBA_PTR_FROM_JSON(isDeleted, isDeleted_);
      DARABONBA_PTR_FROM_JSON(longValue, longValue_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(targetId, targetId_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    ExportInsightCustomValueResponseBodyResult() = default ;
    ExportInsightCustomValueResponseBodyResult(const ExportInsightCustomValueResponseBodyResult &) = default ;
    ExportInsightCustomValueResponseBodyResult(ExportInsightCustomValueResponseBodyResult &&) = default ;
    ExportInsightCustomValueResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExportInsightCustomValueResponseBodyResult() = default ;
    ExportInsightCustomValueResponseBodyResult& operator=(const ExportInsightCustomValueResponseBodyResult &) = default ;
    ExportInsightCustomValueResponseBodyResult& operator=(ExportInsightCustomValueResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->doubleValue_ == nullptr
        && return this->fieldId_ == nullptr && return this->gmtCreate_ == nullptr && return this->gmtModified_ == nullptr && return this->id_ == nullptr && return this->identifier_ == nullptr
        && return this->isDeleted_ == nullptr && return this->longValue_ == nullptr && return this->organizationId_ == nullptr && return this->targetId_ == nullptr && return this->targetType_ == nullptr
        && return this->type_ == nullptr && return this->value_ == nullptr; };
    // doubleValue Field Functions 
    bool hasDoubleValue() const { return this->doubleValue_ != nullptr;};
    void deleteDoubleValue() { this->doubleValue_ = nullptr;};
    inline double doubleValue() const { DARABONBA_PTR_GET_DEFAULT(doubleValue_, 0.0) };
    inline ExportInsightCustomValueResponseBodyResult& setDoubleValue(double doubleValue) { DARABONBA_PTR_SET_VALUE(doubleValue_, doubleValue) };


    // fieldId Field Functions 
    bool hasFieldId() const { return this->fieldId_ != nullptr;};
    void deleteFieldId() { this->fieldId_ = nullptr;};
    inline string fieldId() const { DARABONBA_PTR_GET_DEFAULT(fieldId_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setFieldId(string fieldId) { DARABONBA_PTR_SET_VALUE(fieldId_, fieldId) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline int64_t gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
    inline ExportInsightCustomValueResponseBodyResult& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline int64_t gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
    inline ExportInsightCustomValueResponseBodyResult& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ExportInsightCustomValueResponseBodyResult& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // identifier Field Functions 
    bool hasIdentifier() const { return this->identifier_ != nullptr;};
    void deleteIdentifier() { this->identifier_ = nullptr;};
    inline string identifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline string isDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setIsDeleted(string isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // longValue Field Functions 
    bool hasLongValue() const { return this->longValue_ != nullptr;};
    void deleteLongValue() { this->longValue_ = nullptr;};
    inline int64_t longValue() const { DARABONBA_PTR_GET_DEFAULT(longValue_, 0L) };
    inline ExportInsightCustomValueResponseBodyResult& setLongValue(int64_t longValue) { DARABONBA_PTR_SET_VALUE(longValue_, longValue) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string targetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline ExportInsightCustomValueResponseBodyResult& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<double> doubleValue_ = nullptr;
    std::shared_ptr<string> fieldId_ = nullptr;
    std::shared_ptr<int64_t> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> gmtModified_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<string> identifier_ = nullptr;
    std::shared_ptr<string> isDeleted_ = nullptr;
    std::shared_ptr<int64_t> longValue_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
    std::shared_ptr<string> targetId_ = nullptr;
    std::shared_ptr<string> targetType_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
