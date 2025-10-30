// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEPHYSICALNODESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAUSEPHYSICALNODESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class PausePhysicalNodeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PausePhysicalNodeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(PauseCommand, pauseCommandShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PausePhysicalNodeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(PauseCommand, pauseCommandShrink_);
    };
    PausePhysicalNodeShrinkRequest() = default ;
    PausePhysicalNodeShrinkRequest(const PausePhysicalNodeShrinkRequest &) = default ;
    PausePhysicalNodeShrinkRequest(PausePhysicalNodeShrinkRequest &&) = default ;
    PausePhysicalNodeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PausePhysicalNodeShrinkRequest() = default ;
    PausePhysicalNodeShrinkRequest& operator=(const PausePhysicalNodeShrinkRequest &) = default ;
    PausePhysicalNodeShrinkRequest& operator=(PausePhysicalNodeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && return this->opTenantId_ == nullptr && return this->pauseCommandShrink_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline PausePhysicalNodeShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline PausePhysicalNodeShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // pauseCommandShrink Field Functions 
    bool hasPauseCommandShrink() const { return this->pauseCommandShrink_ != nullptr;};
    void deletePauseCommandShrink() { this->pauseCommandShrink_ = nullptr;};
    inline string pauseCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(pauseCommandShrink_, "") };
    inline PausePhysicalNodeShrinkRequest& setPauseCommandShrink(string pauseCommandShrink) { DARABONBA_PTR_SET_VALUE(pauseCommandShrink_, pauseCommandShrink) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> pauseCommandShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
