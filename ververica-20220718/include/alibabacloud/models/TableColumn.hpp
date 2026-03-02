// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TABLECOLUMN_HPP_
#define ALIBABACLOUD_MODELS_TABLECOLUMN_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MetadataInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ververica20220718
{
namespace Models
{
  class TableColumn : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TableColumn& obj) { 
      DARABONBA_PTR_TO_JSON(expression, expression_);
      DARABONBA_PTR_TO_JSON(logicalType, logicalType_);
      DARABONBA_PTR_TO_JSON(metadataInfo, metadataInfo_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(nullable, nullable_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, TableColumn& obj) { 
      DARABONBA_PTR_FROM_JSON(expression, expression_);
      DARABONBA_PTR_FROM_JSON(logicalType, logicalType_);
      DARABONBA_PTR_FROM_JSON(metadataInfo, metadataInfo_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(nullable, nullable_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    TableColumn() = default ;
    TableColumn(const TableColumn &) = default ;
    TableColumn(TableColumn &&) = default ;
    TableColumn(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TableColumn() = default ;
    TableColumn& operator=(const TableColumn &) = default ;
    TableColumn& operator=(TableColumn &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && this->logicalType_ == nullptr && this->metadataInfo_ == nullptr && this->name_ == nullptr && this->nullable_ == nullptr && this->type_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline TableColumn& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // logicalType Field Functions 
    bool hasLogicalType() const { return this->logicalType_ != nullptr;};
    void deleteLogicalType() { this->logicalType_ = nullptr;};
    inline string getLogicalType() const { DARABONBA_PTR_GET_DEFAULT(logicalType_, "") };
    inline TableColumn& setLogicalType(string logicalType) { DARABONBA_PTR_SET_VALUE(logicalType_, logicalType) };


    // metadataInfo Field Functions 
    bool hasMetadataInfo() const { return this->metadataInfo_ != nullptr;};
    void deleteMetadataInfo() { this->metadataInfo_ = nullptr;};
    inline const MetadataInfo & getMetadataInfo() const { DARABONBA_PTR_GET_CONST(metadataInfo_, MetadataInfo) };
    inline MetadataInfo getMetadataInfo() { DARABONBA_PTR_GET(metadataInfo_, MetadataInfo) };
    inline TableColumn& setMetadataInfo(const MetadataInfo & metadataInfo) { DARABONBA_PTR_SET_VALUE(metadataInfo_, metadataInfo) };
    inline TableColumn& setMetadataInfo(MetadataInfo && metadataInfo) { DARABONBA_PTR_SET_RVALUE(metadataInfo_, metadataInfo) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TableColumn& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nullable Field Functions 
    bool hasNullable() const { return this->nullable_ != nullptr;};
    void deleteNullable() { this->nullable_ = nullptr;};
    inline bool getNullable() const { DARABONBA_PTR_GET_DEFAULT(nullable_, false) };
    inline TableColumn& setNullable(bool nullable) { DARABONBA_PTR_SET_VALUE(nullable_, nullable) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TableColumn& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The computed column.
    shared_ptr<string> expression_ {};
    shared_ptr<string> logicalType_ {};
    // The metadata information.
    shared_ptr<MetadataInfo> metadataInfo_ {};
    // The column name.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // Specifies whether the column can have a null value.
    shared_ptr<bool> nullable_ {};
    // The data type of the column.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ververica20220718
#endif
