// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCHEMAINDEXESSEARCHFIELDSVALUE_HPP_
#define ALIBABACLOUD_MODELS_SCHEMAINDEXESSEARCHFIELDSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class SchemaIndexesSearchFieldsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SchemaIndexesSearchFieldsValue& obj) { 
      DARABONBA_PTR_TO_JSON(analyzer, analyzer_);
      DARABONBA_PTR_TO_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_TO_JSON(analyzerGeneration, analyzerGeneration_);
      DARABONBA_PTR_TO_JSON(fields, fields_);
      DARABONBA_PTR_TO_JSON(label, label_);
    };
    friend void from_json(const Darabonba::Json& j, SchemaIndexesSearchFieldsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(analyzer, analyzer_);
      DARABONBA_PTR_FROM_JSON(analyzerType, analyzerType_);
      DARABONBA_PTR_FROM_JSON(analyzerGeneration, analyzerGeneration_);
      DARABONBA_PTR_FROM_JSON(fields, fields_);
      DARABONBA_PTR_FROM_JSON(label, label_);
    };
    SchemaIndexesSearchFieldsValue() = default ;
    SchemaIndexesSearchFieldsValue(const SchemaIndexesSearchFieldsValue &) = default ;
    SchemaIndexesSearchFieldsValue(SchemaIndexesSearchFieldsValue &&) = default ;
    SchemaIndexesSearchFieldsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SchemaIndexesSearchFieldsValue() = default ;
    SchemaIndexesSearchFieldsValue& operator=(const SchemaIndexesSearchFieldsValue &) = default ;
    SchemaIndexesSearchFieldsValue& operator=(SchemaIndexesSearchFieldsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->analyzer_ == nullptr
        && return this->analyzerType_ == nullptr && return this->analyzerGeneration_ == nullptr && return this->fields_ == nullptr && return this->label_ == nullptr; };
    // analyzer Field Functions 
    bool hasAnalyzer() const { return this->analyzer_ != nullptr;};
    void deleteAnalyzer() { this->analyzer_ = nullptr;};
    inline string analyzer() const { DARABONBA_PTR_GET_DEFAULT(analyzer_, "") };
    inline SchemaIndexesSearchFieldsValue& setAnalyzer(string analyzer) { DARABONBA_PTR_SET_VALUE(analyzer_, analyzer) };


    // analyzerType Field Functions 
    bool hasAnalyzerType() const { return this->analyzerType_ != nullptr;};
    void deleteAnalyzerType() { this->analyzerType_ = nullptr;};
    inline string analyzerType() const { DARABONBA_PTR_GET_DEFAULT(analyzerType_, "") };
    inline SchemaIndexesSearchFieldsValue& setAnalyzerType(string analyzerType) { DARABONBA_PTR_SET_VALUE(analyzerType_, analyzerType) };


    // analyzerGeneration Field Functions 
    bool hasAnalyzerGeneration() const { return this->analyzerGeneration_ != nullptr;};
    void deleteAnalyzerGeneration() { this->analyzerGeneration_ = nullptr;};
    inline string analyzerGeneration() const { DARABONBA_PTR_GET_DEFAULT(analyzerGeneration_, "") };
    inline SchemaIndexesSearchFieldsValue& setAnalyzerGeneration(string analyzerGeneration) { DARABONBA_PTR_SET_VALUE(analyzerGeneration_, analyzerGeneration) };


    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<string> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<string>) };
    inline vector<string> fields() { DARABONBA_PTR_GET(fields_, vector<string>) };
    inline SchemaIndexesSearchFieldsValue& setFields(const vector<string> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline SchemaIndexesSearchFieldsValue& setFields(vector<string> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // label Field Functions 
    bool hasLabel() const { return this->label_ != nullptr;};
    void deleteLabel() { this->label_ = nullptr;};
    inline string label() const { DARABONBA_PTR_GET_DEFAULT(label_, "") };
    inline SchemaIndexesSearchFieldsValue& setLabel(string label) { DARABONBA_PTR_SET_VALUE(label_, label) };


  protected:
    std::shared_ptr<string> analyzer_ = nullptr;
    std::shared_ptr<string> analyzerType_ = nullptr;
    std::shared_ptr<string> analyzerGeneration_ = nullptr;
    std::shared_ptr<vector<string>> fields_ = nullptr;
    std::shared_ptr<string> label_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
