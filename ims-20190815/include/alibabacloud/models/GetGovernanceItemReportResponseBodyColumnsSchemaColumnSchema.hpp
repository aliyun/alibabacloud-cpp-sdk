// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSSCHEMACOLUMNSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSSCHEMACOLUMNSCHEMA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnName, columnName_);
      DARABONBA_PTR_TO_JSON(ColumnType, columnType_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnName, columnName_);
      DARABONBA_PTR_FROM_JSON(ColumnType, columnType_);
    };
    GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema() = default ;
    GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema(const GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema &) = default ;
    GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema(GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema &&) = default ;
    GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema() = default ;
    GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema& operator=(const GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema &) = default ;
    GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema& operator=(GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnName_ != nullptr
        && this->columnType_ != nullptr; };
    // columnName Field Functions 
    bool hasColumnName() const { return this->columnName_ != nullptr;};
    void deleteColumnName() { this->columnName_ = nullptr;};
    inline string columnName() const { DARABONBA_PTR_GET_DEFAULT(columnName_, "") };
    inline GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema& setColumnName(string columnName) { DARABONBA_PTR_SET_VALUE(columnName_, columnName) };


    // columnType Field Functions 
    bool hasColumnType() const { return this->columnType_ != nullptr;};
    void deleteColumnType() { this->columnType_ = nullptr;};
    inline string columnType() const { DARABONBA_PTR_GET_DEFAULT(columnType_, "") };
    inline GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema& setColumnType(string columnType) { DARABONBA_PTR_SET_VALUE(columnType_, columnType) };


  protected:
    std::shared_ptr<string> columnName_ = nullptr;
    std::shared_ptr<string> columnType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
