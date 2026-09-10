// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLTABLELINEAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLTABLELINEAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetSqlTableLineageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlTableLineageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(defaultSchema, defaultSchema_);
      DARABONBA_PTR_TO_JSON(dialect, dialect_);
      DARABONBA_PTR_TO_JSON(sourceSqlScriptBase64, sourceSqlScriptBase64_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlTableLineageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(defaultSchema, defaultSchema_);
      DARABONBA_PTR_FROM_JSON(dialect, dialect_);
      DARABONBA_PTR_FROM_JSON(sourceSqlScriptBase64, sourceSqlScriptBase64_);
    };
    GetSqlTableLineageRequest() = default ;
    GetSqlTableLineageRequest(const GetSqlTableLineageRequest &) = default ;
    GetSqlTableLineageRequest(GetSqlTableLineageRequest &&) = default ;
    GetSqlTableLineageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlTableLineageRequest() = default ;
    GetSqlTableLineageRequest& operator=(const GetSqlTableLineageRequest &) = default ;
    GetSqlTableLineageRequest& operator=(GetSqlTableLineageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->defaultSchema_ == nullptr
        && this->dialect_ == nullptr && this->sourceSqlScriptBase64_ == nullptr; };
    // defaultSchema Field Functions 
    bool hasDefaultSchema() const { return this->defaultSchema_ != nullptr;};
    void deleteDefaultSchema() { this->defaultSchema_ = nullptr;};
    inline string getDefaultSchema() const { DARABONBA_PTR_GET_DEFAULT(defaultSchema_, "") };
    inline GetSqlTableLineageRequest& setDefaultSchema(string defaultSchema) { DARABONBA_PTR_SET_VALUE(defaultSchema_, defaultSchema) };


    // dialect Field Functions 
    bool hasDialect() const { return this->dialect_ != nullptr;};
    void deleteDialect() { this->dialect_ = nullptr;};
    inline string getDialect() const { DARABONBA_PTR_GET_DEFAULT(dialect_, "") };
    inline GetSqlTableLineageRequest& setDialect(string dialect) { DARABONBA_PTR_SET_VALUE(dialect_, dialect) };


    // sourceSqlScriptBase64 Field Functions 
    bool hasSourceSqlScriptBase64() const { return this->sourceSqlScriptBase64_ != nullptr;};
    void deleteSourceSqlScriptBase64() { this->sourceSqlScriptBase64_ = nullptr;};
    inline string getSourceSqlScriptBase64() const { DARABONBA_PTR_GET_DEFAULT(sourceSqlScriptBase64_, "") };
    inline GetSqlTableLineageRequest& setSourceSqlScriptBase64(string sourceSqlScriptBase64) { DARABONBA_PTR_SET_VALUE(sourceSqlScriptBase64_, sourceSqlScriptBase64) };


  protected:
    // The default schema (database) name, which is used to complete table references in the SQL script that do not explicitly specify a database name.
    shared_ptr<string> defaultSchema_ {};
    // The SQL dialect.
    shared_ptr<string> dialect_ {};
    // The source script content, Base64-encoded.
    shared_ptr<string> sourceSqlScriptBase64_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
