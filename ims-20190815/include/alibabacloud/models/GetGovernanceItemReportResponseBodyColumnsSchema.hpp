// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSSCHEMA_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSSCHEMA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceItemReportResponseBodyColumnsSchema : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceItemReportResponseBodyColumnsSchema& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnSchema, columnSchema_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceItemReportResponseBodyColumnsSchema& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnSchema, columnSchema_);
    };
    GetGovernanceItemReportResponseBodyColumnsSchema() = default ;
    GetGovernanceItemReportResponseBodyColumnsSchema(const GetGovernanceItemReportResponseBodyColumnsSchema &) = default ;
    GetGovernanceItemReportResponseBodyColumnsSchema(GetGovernanceItemReportResponseBodyColumnsSchema &&) = default ;
    GetGovernanceItemReportResponseBodyColumnsSchema(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceItemReportResponseBodyColumnsSchema() = default ;
    GetGovernanceItemReportResponseBodyColumnsSchema& operator=(const GetGovernanceItemReportResponseBodyColumnsSchema &) = default ;
    GetGovernanceItemReportResponseBodyColumnsSchema& operator=(GetGovernanceItemReportResponseBodyColumnsSchema &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnSchema_ != nullptr; };
    // columnSchema Field Functions 
    bool hasColumnSchema() const { return this->columnSchema_ != nullptr;};
    void deleteColumnSchema() { this->columnSchema_ = nullptr;};
    inline const vector<Models::GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema> & columnSchema() const { DARABONBA_PTR_GET_CONST(columnSchema_, vector<Models::GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema>) };
    inline vector<Models::GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema> columnSchema() { DARABONBA_PTR_GET(columnSchema_, vector<Models::GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema>) };
    inline GetGovernanceItemReportResponseBodyColumnsSchema& setColumnSchema(const vector<Models::GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema> & columnSchema) { DARABONBA_PTR_SET_VALUE(columnSchema_, columnSchema) };
    inline GetGovernanceItemReportResponseBodyColumnsSchema& setColumnSchema(vector<Models::GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema> && columnSchema) { DARABONBA_PTR_SET_RVALUE(columnSchema_, columnSchema) };


  protected:
    std::shared_ptr<vector<Models::GetGovernanceItemReportResponseBodyColumnsSchemaColumnSchema>> columnSchema_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
