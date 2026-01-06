// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLKEYWORDSFROMSQLTEXTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSQLCONCURRENCYCONTROLKEYWORDSFROMSQLTEXTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetSqlConcurrencyControlKeywordsFromSqlTextRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlConcurrencyControlKeywordsFromSqlTextRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlConcurrencyControlKeywordsFromSqlTextRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
    };
    GetSqlConcurrencyControlKeywordsFromSqlTextRequest() = default ;
    GetSqlConcurrencyControlKeywordsFromSqlTextRequest(const GetSqlConcurrencyControlKeywordsFromSqlTextRequest &) = default ;
    GetSqlConcurrencyControlKeywordsFromSqlTextRequest(GetSqlConcurrencyControlKeywordsFromSqlTextRequest &&) = default ;
    GetSqlConcurrencyControlKeywordsFromSqlTextRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlConcurrencyControlKeywordsFromSqlTextRequest() = default ;
    GetSqlConcurrencyControlKeywordsFromSqlTextRequest& operator=(const GetSqlConcurrencyControlKeywordsFromSqlTextRequest &) = default ;
    GetSqlConcurrencyControlKeywordsFromSqlTextRequest& operator=(GetSqlConcurrencyControlKeywordsFromSqlTextRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->instanceId_ == nullptr && this->sqlText_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline GetSqlConcurrencyControlKeywordsFromSqlTextRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetSqlConcurrencyControlKeywordsFromSqlTextRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline GetSqlConcurrencyControlKeywordsFromSqlTextRequest& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The SQL statement based on which a throttling keyword string is to be generated.
    // 
    // This parameter is required.
    shared_ptr<string> sqlText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
