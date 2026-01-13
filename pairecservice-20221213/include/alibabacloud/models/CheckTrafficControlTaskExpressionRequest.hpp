// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKTRAFFICCONTROLTASKEXPRESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKTRAFFICCONTROLTASKEXPRESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CheckTrafficControlTaskExpressionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckTrafficControlTaskExpressionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Expression, expression_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TableMetaId, tableMetaId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckTrafficControlTaskExpressionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Expression, expression_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TableMetaId, tableMetaId_);
    };
    CheckTrafficControlTaskExpressionRequest() = default ;
    CheckTrafficControlTaskExpressionRequest(const CheckTrafficControlTaskExpressionRequest &) = default ;
    CheckTrafficControlTaskExpressionRequest(CheckTrafficControlTaskExpressionRequest &&) = default ;
    CheckTrafficControlTaskExpressionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckTrafficControlTaskExpressionRequest() = default ;
    CheckTrafficControlTaskExpressionRequest& operator=(const CheckTrafficControlTaskExpressionRequest &) = default ;
    CheckTrafficControlTaskExpressionRequest& operator=(CheckTrafficControlTaskExpressionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expression_ == nullptr
        && this->instanceId_ == nullptr && this->tableMetaId_ == nullptr; };
    // expression Field Functions 
    bool hasExpression() const { return this->expression_ != nullptr;};
    void deleteExpression() { this->expression_ = nullptr;};
    inline string getExpression() const { DARABONBA_PTR_GET_DEFAULT(expression_, "") };
    inline CheckTrafficControlTaskExpressionRequest& setExpression(string expression) { DARABONBA_PTR_SET_VALUE(expression_, expression) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CheckTrafficControlTaskExpressionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // tableMetaId Field Functions 
    bool hasTableMetaId() const { return this->tableMetaId_ != nullptr;};
    void deleteTableMetaId() { this->tableMetaId_ = nullptr;};
    inline string getTableMetaId() const { DARABONBA_PTR_GET_DEFAULT(tableMetaId_, "") };
    inline CheckTrafficControlTaskExpressionRequest& setTableMetaId(string tableMetaId) { DARABONBA_PTR_SET_VALUE(tableMetaId_, tableMetaId) };


  protected:
    // This parameter is required.
    shared_ptr<string> expression_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // This parameter is required.
    shared_ptr<string> tableMetaId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
