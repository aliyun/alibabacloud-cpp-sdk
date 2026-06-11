// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AISTATISTICSPATHFIELD_HPP_
#define ALIBABACLOUD_MODELS_AISTATISTICSPATHFIELD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class AiStatisticsPathField : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AiStatisticsPathField& obj) { 
      DARABONBA_PTR_TO_JSON(category, category_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_TO_JSON(io, io_);
      DARABONBA_PTR_TO_JSON(jsonPath, jsonPath_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(recordEnabled, recordEnabled_);
      DARABONBA_PTR_TO_JSON(rule, rule_);
      DARABONBA_PTR_TO_JSON(sensitive, sensitive_);
      DARABONBA_PTR_TO_JSON(source, source_);
    };
    friend void from_json(const Darabonba::Json& j, AiStatisticsPathField& obj) { 
      DARABONBA_PTR_FROM_JSON(category, category_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(fieldKey, fieldKey_);
      DARABONBA_PTR_FROM_JSON(io, io_);
      DARABONBA_PTR_FROM_JSON(jsonPath, jsonPath_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(recordEnabled, recordEnabled_);
      DARABONBA_PTR_FROM_JSON(rule, rule_);
      DARABONBA_PTR_FROM_JSON(sensitive, sensitive_);
      DARABONBA_PTR_FROM_JSON(source, source_);
    };
    AiStatisticsPathField() = default ;
    AiStatisticsPathField(const AiStatisticsPathField &) = default ;
    AiStatisticsPathField(AiStatisticsPathField &&) = default ;
    AiStatisticsPathField(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AiStatisticsPathField() = default ;
    AiStatisticsPathField& operator=(const AiStatisticsPathField &) = default ;
    AiStatisticsPathField& operator=(AiStatisticsPathField &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->description_ == nullptr && this->fieldKey_ == nullptr && this->io_ == nullptr && this->jsonPath_ == nullptr && this->name_ == nullptr
        && this->recordEnabled_ == nullptr && this->rule_ == nullptr && this->sensitive_ == nullptr && this->source_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline AiStatisticsPathField& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AiStatisticsPathField& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fieldKey Field Functions 
    bool hasFieldKey() const { return this->fieldKey_ != nullptr;};
    void deleteFieldKey() { this->fieldKey_ = nullptr;};
    inline string getFieldKey() const { DARABONBA_PTR_GET_DEFAULT(fieldKey_, "") };
    inline AiStatisticsPathField& setFieldKey(string fieldKey) { DARABONBA_PTR_SET_VALUE(fieldKey_, fieldKey) };


    // io Field Functions 
    bool hasIo() const { return this->io_ != nullptr;};
    void deleteIo() { this->io_ = nullptr;};
    inline string getIo() const { DARABONBA_PTR_GET_DEFAULT(io_, "") };
    inline AiStatisticsPathField& setIo(string io) { DARABONBA_PTR_SET_VALUE(io_, io) };


    // jsonPath Field Functions 
    bool hasJsonPath() const { return this->jsonPath_ != nullptr;};
    void deleteJsonPath() { this->jsonPath_ = nullptr;};
    inline string getJsonPath() const { DARABONBA_PTR_GET_DEFAULT(jsonPath_, "") };
    inline AiStatisticsPathField& setJsonPath(string jsonPath) { DARABONBA_PTR_SET_VALUE(jsonPath_, jsonPath) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AiStatisticsPathField& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // recordEnabled Field Functions 
    bool hasRecordEnabled() const { return this->recordEnabled_ != nullptr;};
    void deleteRecordEnabled() { this->recordEnabled_ = nullptr;};
    inline bool getRecordEnabled() const { DARABONBA_PTR_GET_DEFAULT(recordEnabled_, false) };
    inline AiStatisticsPathField& setRecordEnabled(bool recordEnabled) { DARABONBA_PTR_SET_VALUE(recordEnabled_, recordEnabled) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline AiStatisticsPathField& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // sensitive Field Functions 
    bool hasSensitive() const { return this->sensitive_ != nullptr;};
    void deleteSensitive() { this->sensitive_ = nullptr;};
    inline bool getSensitive() const { DARABONBA_PTR_GET_DEFAULT(sensitive_, false) };
    inline AiStatisticsPathField& setSensitive(bool sensitive) { DARABONBA_PTR_SET_VALUE(sensitive_, sensitive) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AiStatisticsPathField& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


  protected:
    // The category to which the field belongs, used for grouping and organizing fields.
    shared_ptr<string> category_ {};
    // A detailed description that provides additional context about the field\\"s purpose and usage.
    shared_ptr<string> description_ {};
    // The unique key used to identify the field in statistical results.
    shared_ptr<string> fieldKey_ {};
    // Specifies whether the field is an input or an output. Valid values are typically `IN` or `OUT`.
    shared_ptr<string> io_ {};
    // The JSONPath expression to extract the field value from the source data.
    shared_ptr<string> jsonPath_ {};
    // The display name of the field, used for labeling in user interfaces or reports.
    shared_ptr<string> name_ {};
    // Specifies whether logging is enabled for this field. If set to `true`, the system records the field\\"s value in logs.
    shared_ptr<bool> recordEnabled_ {};
    // A rule or condition applied to the extracted field. The rule\\"s format and effect are implementation-specific.
    shared_ptr<string> rule_ {};
    // Indicates whether the field contains sensitive information. If set to `true`, the system may apply masking or other security measures.
    shared_ptr<bool> sensitive_ {};
    // The data source from which the field is extracted. For example, `Request` or `Response`.
    shared_ptr<string> source_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
