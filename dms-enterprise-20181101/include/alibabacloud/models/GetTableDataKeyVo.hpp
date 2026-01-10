// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEDATAKEYVO_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEDATAKEYVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableDataKeyVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableDataKeyVO& obj) { 
      DARABONBA_PTR_TO_JSON(ColName, colName_);
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(MekId, mekId_);
      DARABONBA_PTR_TO_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_TO_JSON(TblName, tblName_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableDataKeyVO& obj) { 
      DARABONBA_PTR_FROM_JSON(ColName, colName_);
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(MekId, mekId_);
      DARABONBA_PTR_FROM_JSON(SchemaName, schemaName_);
      DARABONBA_PTR_FROM_JSON(TblName, tblName_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
    };
    GetTableDataKeyVO() = default ;
    GetTableDataKeyVO(const GetTableDataKeyVO &) = default ;
    GetTableDataKeyVO(GetTableDataKeyVO &&) = default ;
    GetTableDataKeyVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableDataKeyVO() = default ;
    GetTableDataKeyVO& operator=(const GetTableDataKeyVO &) = default ;
    GetTableDataKeyVO& operator=(GetTableDataKeyVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->colName_ == nullptr
        && this->dbName_ == nullptr && this->mekId_ == nullptr && this->schemaName_ == nullptr && this->tblName_ == nullptr && this->userName_ == nullptr; };
    // colName Field Functions 
    bool hasColName() const { return this->colName_ != nullptr;};
    void deleteColName() { this->colName_ = nullptr;};
    inline string getColName() const { DARABONBA_PTR_GET_DEFAULT(colName_, "") };
    inline GetTableDataKeyVO& setColName(string colName) { DARABONBA_PTR_SET_VALUE(colName_, colName) };


    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string getDbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline GetTableDataKeyVO& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // mekId Field Functions 
    bool hasMekId() const { return this->mekId_ != nullptr;};
    void deleteMekId() { this->mekId_ = nullptr;};
    inline int64_t getMekId() const { DARABONBA_PTR_GET_DEFAULT(mekId_, 0L) };
    inline GetTableDataKeyVO& setMekId(int64_t mekId) { DARABONBA_PTR_SET_VALUE(mekId_, mekId) };


    // schemaName Field Functions 
    bool hasSchemaName() const { return this->schemaName_ != nullptr;};
    void deleteSchemaName() { this->schemaName_ = nullptr;};
    inline string getSchemaName() const { DARABONBA_PTR_GET_DEFAULT(schemaName_, "") };
    inline GetTableDataKeyVO& setSchemaName(string schemaName) { DARABONBA_PTR_SET_VALUE(schemaName_, schemaName) };


    // tblName Field Functions 
    bool hasTblName() const { return this->tblName_ != nullptr;};
    void deleteTblName() { this->tblName_ = nullptr;};
    inline string getTblName() const { DARABONBA_PTR_GET_DEFAULT(tblName_, "") };
    inline GetTableDataKeyVO& setTblName(string tblName) { DARABONBA_PTR_SET_VALUE(tblName_, tblName) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetTableDataKeyVO& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


  protected:
    shared_ptr<string> colName_ {};
    shared_ptr<string> dbName_ {};
    shared_ptr<int64_t> mekId_ {};
    shared_ptr<string> schemaName_ {};
    shared_ptr<string> tblName_ {};
    shared_ptr<string> userName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
