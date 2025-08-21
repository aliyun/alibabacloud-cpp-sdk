// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSVALUE_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSVALUE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetGovernanceItemReportResponseBodyColumnsValueColumnRow.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceItemReportResponseBodyColumnsValue : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceItemReportResponseBodyColumnsValue& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnRow, columnRow_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceItemReportResponseBodyColumnsValue& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnRow, columnRow_);
    };
    GetGovernanceItemReportResponseBodyColumnsValue() = default ;
    GetGovernanceItemReportResponseBodyColumnsValue(const GetGovernanceItemReportResponseBodyColumnsValue &) = default ;
    GetGovernanceItemReportResponseBodyColumnsValue(GetGovernanceItemReportResponseBodyColumnsValue &&) = default ;
    GetGovernanceItemReportResponseBodyColumnsValue(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceItemReportResponseBodyColumnsValue() = default ;
    GetGovernanceItemReportResponseBodyColumnsValue& operator=(const GetGovernanceItemReportResponseBodyColumnsValue &) = default ;
    GetGovernanceItemReportResponseBodyColumnsValue& operator=(GetGovernanceItemReportResponseBodyColumnsValue &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnRow_ != nullptr; };
    // columnRow Field Functions 
    bool hasColumnRow() const { return this->columnRow_ != nullptr;};
    void deleteColumnRow() { this->columnRow_ = nullptr;};
    inline const vector<Models::GetGovernanceItemReportResponseBodyColumnsValueColumnRow> & columnRow() const { DARABONBA_PTR_GET_CONST(columnRow_, vector<Models::GetGovernanceItemReportResponseBodyColumnsValueColumnRow>) };
    inline vector<Models::GetGovernanceItemReportResponseBodyColumnsValueColumnRow> columnRow() { DARABONBA_PTR_GET(columnRow_, vector<Models::GetGovernanceItemReportResponseBodyColumnsValueColumnRow>) };
    inline GetGovernanceItemReportResponseBodyColumnsValue& setColumnRow(const vector<Models::GetGovernanceItemReportResponseBodyColumnsValueColumnRow> & columnRow) { DARABONBA_PTR_SET_VALUE(columnRow_, columnRow) };
    inline GetGovernanceItemReportResponseBodyColumnsValue& setColumnRow(vector<Models::GetGovernanceItemReportResponseBodyColumnsValueColumnRow> && columnRow) { DARABONBA_PTR_SET_RVALUE(columnRow_, columnRow) };


  protected:
    std::shared_ptr<vector<Models::GetGovernanceItemReportResponseBodyColumnsValueColumnRow>> columnRow_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
