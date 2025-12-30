// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATEINSTANCESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_OPERATEINSTANCESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class OperateInstanceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OperateInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OperateCommand, operateCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, OperateInstanceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OperateCommand, operateCommandShrink_);
    };
    OperateInstanceShrinkRequest() = default ;
    OperateInstanceShrinkRequest(const OperateInstanceShrinkRequest &) = default ;
    OperateInstanceShrinkRequest(OperateInstanceShrinkRequest &&) = default ;
    OperateInstanceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OperateInstanceShrinkRequest() = default ;
    OperateInstanceShrinkRequest& operator=(const OperateInstanceShrinkRequest &) = default ;
    OperateInstanceShrinkRequest& operator=(OperateInstanceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->opTenantId_ == nullptr && this->operateCommandShrink_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline OperateInstanceShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline OperateInstanceShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // operateCommandShrink Field Functions 
    bool hasOperateCommandShrink() const { return this->operateCommandShrink_ != nullptr;};
    void deleteOperateCommandShrink() { this->operateCommandShrink_ = nullptr;};
    inline string getOperateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(operateCommandShrink_, "") };
    inline OperateInstanceShrinkRequest& setOperateCommandShrink(string operateCommandShrink) { DARABONBA_PTR_SET_VALUE(operateCommandShrink_, operateCommandShrink) };


  protected:
    shared_ptr<string> env_ {};
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // This parameter is required.
    shared_ptr<string> operateCommandShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
