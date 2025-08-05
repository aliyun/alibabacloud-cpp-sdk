// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OTSDETAIL_HPP_
#define ALIBABACLOUD_MODELS_OTSDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class OtsDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OtsDetail& obj) { 
      DARABONBA_PTR_TO_JSON(TableNames, tableNames_);
    };
    friend void from_json(const Darabonba::Json& j, OtsDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(TableNames, tableNames_);
    };
    OtsDetail() = default ;
    OtsDetail(const OtsDetail &) = default ;
    OtsDetail(OtsDetail &&) = default ;
    OtsDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OtsDetail() = default ;
    OtsDetail& operator=(const OtsDetail &) = default ;
    OtsDetail& operator=(OtsDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tableNames_ != nullptr; };
    // tableNames Field Functions 
    bool hasTableNames() const { return this->tableNames_ != nullptr;};
    void deleteTableNames() { this->tableNames_ = nullptr;};
    inline const vector<string> & tableNames() const { DARABONBA_PTR_GET_CONST(tableNames_, vector<string>) };
    inline vector<string> tableNames() { DARABONBA_PTR_GET(tableNames_, vector<string>) };
    inline OtsDetail& setTableNames(const vector<string> & tableNames) { DARABONBA_PTR_SET_VALUE(tableNames_, tableNames) };
    inline OtsDetail& setTableNames(vector<string> && tableNames) { DARABONBA_PTR_SET_RVALUE(tableNames_, tableNames) };


  protected:
    std::shared_ptr<vector<string>> tableNames_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
