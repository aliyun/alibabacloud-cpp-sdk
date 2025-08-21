// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEALLSQLCONCURRENCYCONTROLRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEALLSQLCONCURRENCYCONTROLRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableAllSqlConcurrencyControlRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableAllSqlConcurrencyControlRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableAllSqlConcurrencyControlRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableAllSqlConcurrencyControlRulesRequest() = default ;
    DisableAllSqlConcurrencyControlRulesRequest(const DisableAllSqlConcurrencyControlRulesRequest &) = default ;
    DisableAllSqlConcurrencyControlRulesRequest(DisableAllSqlConcurrencyControlRulesRequest &&) = default ;
    DisableAllSqlConcurrencyControlRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableAllSqlConcurrencyControlRulesRequest() = default ;
    DisableAllSqlConcurrencyControlRulesRequest& operator=(const DisableAllSqlConcurrencyControlRulesRequest &) = default ;
    DisableAllSqlConcurrencyControlRulesRequest& operator=(DisableAllSqlConcurrencyControlRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->consoleContext_ != nullptr
        && this->instanceId_ != nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string consoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline DisableAllSqlConcurrencyControlRulesRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableAllSqlConcurrencyControlRulesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The reserved parameter.
    std::shared_ptr<string> consoleContext_ = nullptr;
    // The instance ID.
    // 
    // >  You must specify this parameter only if your database instance is an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
