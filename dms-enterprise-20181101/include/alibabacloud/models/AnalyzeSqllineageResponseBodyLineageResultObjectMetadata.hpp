// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULTOBJECTMETADATA_HPP_
#define ALIBABACLOUD_MODELS_ANALYZESQLLINEAGERESPONSEBODYLINEAGERESULTOBJECTMETADATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& obj) { 
      DARABONBA_PTR_TO_JSON(Fields, fields_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& obj) { 
      DARABONBA_PTR_FROM_JSON(Fields, fields_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata() = default ;
    AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata(const AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata(AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata &&) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata() = default ;
    AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& operator=(const AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata &) = default ;
    AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& operator=(AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fields_ != nullptr
        && this->name_ != nullptr && this->source_ != nullptr && this->type_ != nullptr; };
    // fields Field Functions 
    bool hasFields() const { return this->fields_ != nullptr;};
    void deleteFields() { this->fields_ = nullptr;};
    inline const vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields> & fields() const { DARABONBA_PTR_GET_CONST(fields_, vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields>) };
    inline vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields> fields() { DARABONBA_PTR_GET(fields_, vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields>) };
    inline AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& setFields(const vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields> & fields) { DARABONBA_PTR_SET_VALUE(fields_, fields) };
    inline AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& setFields(vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields> && fields) { DARABONBA_PTR_SET_RVALUE(fields_, fields) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AnalyzeSQLLineageResponseBodyLineageResultObjectMetadata& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The fields in the metatable.
    std::shared_ptr<vector<Models::AnalyzeSQLLineageResponseBodyLineageResultObjectMetadataFields>> fields_ = nullptr;
    // The object name.
    std::shared_ptr<string> name_ = nullptr;
    // The source of metadata. Valid values:
    // 
    // *   **DDL**: The metadata comes from parsed SQL statements or definition of databases and tables collected by DMS.
    // *   **LINEAGE**: The metadata comes from lineage analysis results.
    std::shared_ptr<string> source_ = nullptr;
    // The object type. Valid values:
    // 
    // *   **TABLE**
    // *   **VIEW**
    // *   **TMP_TABLE**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
