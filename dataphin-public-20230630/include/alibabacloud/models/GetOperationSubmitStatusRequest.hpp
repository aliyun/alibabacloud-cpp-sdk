// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPERATIONSUBMITSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetOperationSubmitStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOperationSubmitStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Env, env_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OpTenantId, opTenantId_);
    };
    friend void from_json(const Darabonba::Json& j, GetOperationSubmitStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Env, env_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OpTenantId, opTenantId_);
    };
    GetOperationSubmitStatusRequest() = default ;
    GetOperationSubmitStatusRequest(const GetOperationSubmitStatusRequest &) = default ;
    GetOperationSubmitStatusRequest(GetOperationSubmitStatusRequest &&) = default ;
    GetOperationSubmitStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOperationSubmitStatusRequest() = default ;
    GetOperationSubmitStatusRequest& operator=(const GetOperationSubmitStatusRequest &) = default ;
    GetOperationSubmitStatusRequest& operator=(GetOperationSubmitStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->env_ != nullptr
        && this->jobId_ != nullptr && this->opTenantId_ != nullptr; };
    // env Field Functions 
    bool hasEnv() const { return this->env_ != nullptr;};
    void deleteEnv() { this->env_ = nullptr;};
    inline string env() const { DARABONBA_PTR_GET_DEFAULT(env_, "") };
    inline GetOperationSubmitStatusRequest& setEnv(string env) { DARABONBA_PTR_SET_VALUE(env_, env) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline GetOperationSubmitStatusRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // opTenantId Field Functions 
    bool hasOpTenantId() const { return this->opTenantId_ != nullptr;};
    void deleteOpTenantId() { this->opTenantId_ = nullptr;};
    inline int64_t opTenantId() const { DARABONBA_PTR_GET_DEFAULT(opTenantId_, 0L) };
    inline GetOperationSubmitStatusRequest& setOpTenantId(int64_t opTenantId) { DARABONBA_PTR_SET_VALUE(opTenantId_, opTenantId) };


  protected:
    std::shared_ptr<string> env_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> opTenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
