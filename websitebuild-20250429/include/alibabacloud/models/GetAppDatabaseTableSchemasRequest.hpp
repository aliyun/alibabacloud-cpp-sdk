// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPDATABASETABLESCHEMASREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPDATABASETABLESCHEMASREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppDatabaseTableSchemasRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppDatabaseTableSchemasRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppDatabaseTableSchemasRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
    };
    GetAppDatabaseTableSchemasRequest() = default ;
    GetAppDatabaseTableSchemasRequest(const GetAppDatabaseTableSchemasRequest &) = default ;
    GetAppDatabaseTableSchemasRequest(GetAppDatabaseTableSchemasRequest &&) = default ;
    GetAppDatabaseTableSchemasRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppDatabaseTableSchemasRequest() = default ;
    GetAppDatabaseTableSchemasRequest& operator=(const GetAppDatabaseTableSchemasRequest &) = default ;
    GetAppDatabaseTableSchemasRequest& operator=(GetAppDatabaseTableSchemasRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->tableName_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline GetAppDatabaseTableSchemasRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline GetAppDatabaseTableSchemasRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> tableName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
