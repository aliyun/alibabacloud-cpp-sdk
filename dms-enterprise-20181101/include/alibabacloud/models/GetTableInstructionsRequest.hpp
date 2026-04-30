// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEINSTRUCTIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEINSTRUCTIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetTableInstructionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableInstructionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableInstructionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetTableInstructionsRequest() = default ;
    GetTableInstructionsRequest(const GetTableInstructionsRequest &) = default ;
    GetTableInstructionsRequest(GetTableInstructionsRequest &&) = default ;
    GetTableInstructionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableInstructionsRequest() = default ;
    GetTableInstructionsRequest& operator=(const GetTableInstructionsRequest &) = default ;
    GetTableInstructionsRequest& operator=(GetTableInstructionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbId_ == nullptr
        && this->tableName_ == nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t getDbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline GetTableInstructionsRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetTableInstructionsRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    // This parameter is required.
    shared_ptr<int32_t> dbId_ {};
    // This parameter is required.
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
