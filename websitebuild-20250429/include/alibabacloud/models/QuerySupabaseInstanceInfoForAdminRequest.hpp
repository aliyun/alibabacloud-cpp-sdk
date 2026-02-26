// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSUPABASEINSTANCEINFOFORADMINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSUPABASEINSTANCEINFOFORADMINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class QuerySupabaseInstanceInfoForAdminRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySupabaseInstanceInfoForAdminRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySupabaseInstanceInfoForAdminRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    QuerySupabaseInstanceInfoForAdminRequest() = default ;
    QuerySupabaseInstanceInfoForAdminRequest(const QuerySupabaseInstanceInfoForAdminRequest &) = default ;
    QuerySupabaseInstanceInfoForAdminRequest(QuerySupabaseInstanceInfoForAdminRequest &&) = default ;
    QuerySupabaseInstanceInfoForAdminRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySupabaseInstanceInfoForAdminRequest() = default ;
    QuerySupabaseInstanceInfoForAdminRequest& operator=(const QuerySupabaseInstanceInfoForAdminRequest &) = default ;
    QuerySupabaseInstanceInfoForAdminRequest& operator=(QuerySupabaseInstanceInfoForAdminRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->env_ == nullptr && this->userId_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline QuerySupabaseInstanceInfoForAdminRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string getEnv() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline QuerySupabaseInstanceInfoForAdminRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline QuerySupabaseInstanceInfoForAdminRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    shared_ptr<string> bizId_ {};
    // This parameter is required.
    shared_ptr<string> env_ {};
    shared_ptr<string> userId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
