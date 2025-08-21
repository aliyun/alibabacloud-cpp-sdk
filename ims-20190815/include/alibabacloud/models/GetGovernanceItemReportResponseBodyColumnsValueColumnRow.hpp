// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSVALUECOLUMNROW_HPP_
#define ALIBABACLOUD_MODELS_GETGOVERNANCEITEMREPORTRESPONSEBODYCOLUMNSVALUECOLUMNROW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetGovernanceItemReportResponseBodyColumnsValueColumnRow : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGovernanceItemReportResponseBodyColumnsValueColumnRow& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnValue, columnValue_);
    };
    friend void from_json(const Darabonba::Json& j, GetGovernanceItemReportResponseBodyColumnsValueColumnRow& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnValue, columnValue_);
    };
    GetGovernanceItemReportResponseBodyColumnsValueColumnRow() = default ;
    GetGovernanceItemReportResponseBodyColumnsValueColumnRow(const GetGovernanceItemReportResponseBodyColumnsValueColumnRow &) = default ;
    GetGovernanceItemReportResponseBodyColumnsValueColumnRow(GetGovernanceItemReportResponseBodyColumnsValueColumnRow &&) = default ;
    GetGovernanceItemReportResponseBodyColumnsValueColumnRow(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGovernanceItemReportResponseBodyColumnsValueColumnRow() = default ;
    GetGovernanceItemReportResponseBodyColumnsValueColumnRow& operator=(const GetGovernanceItemReportResponseBodyColumnsValueColumnRow &) = default ;
    GetGovernanceItemReportResponseBodyColumnsValueColumnRow& operator=(GetGovernanceItemReportResponseBodyColumnsValueColumnRow &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnValue_ != nullptr; };
    // columnValue Field Functions 
    bool hasColumnValue() const { return this->columnValue_ != nullptr;};
    void deleteColumnValue() { this->columnValue_ = nullptr;};
    inline const vector<Darabonba::Json> & columnValue() const { DARABONBA_PTR_GET_CONST(columnValue_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> columnValue() { DARABONBA_PTR_GET(columnValue_, vector<Darabonba::Json>) };
    inline GetGovernanceItemReportResponseBodyColumnsValueColumnRow& setColumnValue(const vector<Darabonba::Json> & columnValue) { DARABONBA_PTR_SET_VALUE(columnValue_, columnValue) };
    inline GetGovernanceItemReportResponseBodyColumnsValueColumnRow& setColumnValue(vector<Darabonba::Json> && columnValue) { DARABONBA_PTR_SET_RVALUE(columnValue_, columnValue) };


  protected:
    std::shared_ptr<vector<Darabonba::Json>> columnValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
