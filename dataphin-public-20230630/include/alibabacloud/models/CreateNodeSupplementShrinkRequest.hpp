// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENODESUPPLEMENTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateNodeSupplementShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNodeSupplementShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CreateCommand, createCommandShrink_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNodeSupplementShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateCommand, createCommandShrink_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    CreateNodeSupplementShrinkRequest() = default ;
    CreateNodeSupplementShrinkRequest(const CreateNodeSupplementShrinkRequest &) = default ;
    CreateNodeSupplementShrinkRequest(CreateNodeSupplementShrinkRequest &&) = default ;
    CreateNodeSupplementShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNodeSupplementShrinkRequest() = default ;
    CreateNodeSupplementShrinkRequest& operator=(const CreateNodeSupplementShrinkRequest &) = default ;
    CreateNodeSupplementShrinkRequest& operator=(CreateNodeSupplementShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createCommandShrink_ == nullptr
        && this->env_ == nullptr && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // createCommandShrink Field Functions 
    bool hasCreateCommandShrink() const { return this->createCommandShrink_ != nullptr;};
    void deleteCreateCommandShrink() { this->createCommandShrink_ = nullptr;};
    inline string getCreateCommandShrink() const { DARABONBA_PTR_GET_DEFAULT(createCommandShrink_, "") };
    inline CreateNodeSupplementShrinkRequest& setCreateCommandShrink(string createCommandShrink) { DARABONBA_PTR_SET_VALUE(createCommandShrink_, createCommandShrink) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline CreateNodeSupplementShrinkRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline CreateNodeSupplementShrinkRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline CreateNodeSupplementShrinkRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // The data backfill request.
    // 
    // This parameter is required.
    shared_ptr<string> createCommandShrink_ {};
    // The environment identifier. Valid values:
    // - DEV: Development environment. 
    // - PROD (default): Production environment.
    shared_ptr<string> env_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operator user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
