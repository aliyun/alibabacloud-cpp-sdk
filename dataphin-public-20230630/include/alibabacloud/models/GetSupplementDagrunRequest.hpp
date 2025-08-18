// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSUPPLEMENTDAGRUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetSupplementDagrunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSupplementDagrunRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_TO_JSON(SupplementId, supplementId_);
    };
    friend void from_json(const Darabonba::Json& j, GetSupplementDagrunRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
      DARABONBA_PTR_FROM_JSON(SupplementId, supplementId_);
    };
    GetSupplementDagrunRequest() = default ;
    GetSupplementDagrunRequest(const GetSupplementDagrunRequest &) = default ;
    GetSupplementDagrunRequest(GetSupplementDagrunRequest &&) = default ;
    GetSupplementDagrunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSupplementDagrunRequest() = default ;
    GetSupplementDagrunRequest& operator=(const GetSupplementDagrunRequest &) = default ;
    GetSupplementDagrunRequest& operator=(GetSupplementDagrunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->opTenantId_ != nullptr && this->supplementId_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetSupplementDagrunRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetSupplementDagrunRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


    // supplementId Field Functions 
    bool hasSupplementId() const { return this->supplementId_ != nullptr;};
    void deleteSupplementId() { this->supplementId_ = nullptr;};
    inline string supplementId() const { DARABONBA_PTR_GET_DEFAULT(supplementId_, "") };
    inline GetSupplementDagrunRequest& setSupplementId(string supplementId) { DARABONBA_PTR_SET_VALUE(supplementId_, supplementId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> supplementId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
