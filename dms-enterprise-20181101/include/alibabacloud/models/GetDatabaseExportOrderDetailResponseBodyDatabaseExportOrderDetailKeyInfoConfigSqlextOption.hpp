// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAILKEYINFOCONFIGSQLEXTOPTION_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEEXPORTORDERDETAILRESPONSEBODYDATABASEEXPORTORDERDETAILKEYINFOCONFIGSQLEXTOPTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption& obj) { 
      DARABONBA_PTR_TO_JSON(SQLExtOption, SQLExtOption_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption& obj) { 
      DARABONBA_PTR_FROM_JSON(SQLExtOption, SQLExtOption_);
    };
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption &&) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption() = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption& operator=(const GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption &) = default ;
    GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption& operator=(GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->SQLExtOption_ != nullptr; };
    // SQLExtOption Field Functions 
    bool hasSQLExtOption() const { return this->SQLExtOption_ != nullptr;};
    void deleteSQLExtOption() { this->SQLExtOption_ = nullptr;};
    inline const vector<string> & SQLExtOption() const { DARABONBA_PTR_GET_CONST(SQLExtOption_, vector<string>) };
    inline vector<string> SQLExtOption() { DARABONBA_PTR_GET(SQLExtOption_, vector<string>) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption& setSQLExtOption(const vector<string> & SQLExtOption) { DARABONBA_PTR_SET_VALUE(SQLExtOption_, SQLExtOption) };
    inline GetDatabaseExportOrderDetailResponseBodyDatabaseExportOrderDetailKeyInfoConfigSQLExtOption& setSQLExtOption(vector<string> && SQLExtOption) { DARABONBA_PTR_SET_RVALUE(SQLExtOption_, SQLExtOption) };


  protected:
    std::shared_ptr<vector<string>> SQLExtOption_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
