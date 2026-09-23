// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetServerVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
    };
    GetServerVersionRequest() = default ;
    GetServerVersionRequest(const GetServerVersionRequest &) = default ;
    GetServerVersionRequest(GetServerVersionRequest &&) = default ;
    GetServerVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerVersionRequest() = default ;
    GetServerVersionRequest& operator=(const GetServerVersionRequest &) = default ;
    GetServerVersionRequest& operator=(GetServerVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->env_ == nullptr
        && this->opTenantId_ == nullptr && this->opUserId_ == nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetServerVersionRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t getOpTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetServerVersionRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline string getOpUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, "") };
    inline GetServerVersionRequest& setOpUserId(string opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


  protected:
    // **[Deprecated]** The environment identifier. Valid values:
    // - DEV: Development environment. 
    // - PROD (default): Production environment.
    shared_ptr<string> env_ {};
    // The tenant ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> opTenantId_ {};
    // The ID of the operation user.
    shared_ptr<string> opUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
