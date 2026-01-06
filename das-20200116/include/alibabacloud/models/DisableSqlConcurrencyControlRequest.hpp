// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESQLCONCURRENCYCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESQLCONCURRENCYCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DisableSqlConcurrencyControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSqlConcurrencyControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemId, itemId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSqlConcurrencyControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConsoleContext, consoleContext_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemId, itemId_);
    };
    DisableSqlConcurrencyControlRequest() = default ;
    DisableSqlConcurrencyControlRequest(const DisableSqlConcurrencyControlRequest &) = default ;
    DisableSqlConcurrencyControlRequest(DisableSqlConcurrencyControlRequest &&) = default ;
    DisableSqlConcurrencyControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSqlConcurrencyControlRequest() = default ;
    DisableSqlConcurrencyControlRequest& operator=(const DisableSqlConcurrencyControlRequest &) = default ;
    DisableSqlConcurrencyControlRequest& operator=(DisableSqlConcurrencyControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->consoleContext_ == nullptr
        && this->instanceId_ == nullptr && this->itemId_ == nullptr; };
    // consoleContext Field Functions 
    bool hasConsoleContext() const { return this->consoleContext_ != nullptr;};
    void deleteConsoleContext() { this->consoleContext_ = nullptr;};
    inline string getConsoleContext() const { DARABONBA_PTR_GET_DEFAULT(consoleContext_, "") };
    inline DisableSqlConcurrencyControlRequest& setConsoleContext(string consoleContext) { DARABONBA_PTR_SET_VALUE(consoleContext_, consoleContext) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableSqlConcurrencyControlRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline int64_t getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, 0L) };
    inline DisableSqlConcurrencyControlRequest& setItemId(int64_t itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


  protected:
    // The reserved parameter.
    shared_ptr<string> consoleContext_ {};
    // The instance ID.
    // 
    // >  The database instance must be an ApsaraDB RDS for MySQL instance or a PolarDB for MySQL cluster.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the throttling rule that is applied to the instance. You can call the [GetRunningSqlConcurrencyControlRules](https://help.aliyun.com/document_detail/223538.html) operation to query the ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> itemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
