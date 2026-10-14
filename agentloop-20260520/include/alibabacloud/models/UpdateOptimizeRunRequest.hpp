// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEOPTIMIZERUNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEOPTIMIZERUNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateOptimizeRunRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateOptimizeRunRequest& obj) { 
      DARABONBA_ANY_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateOptimizeRunRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateOptimizeRunRequest() = default ;
    UpdateOptimizeRunRequest(const UpdateOptimizeRunRequest &) = default ;
    UpdateOptimizeRunRequest(UpdateOptimizeRunRequest &&) = default ;
    UpdateOptimizeRunRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateOptimizeRunRequest() = default ;
    UpdateOptimizeRunRequest& operator=(const UpdateOptimizeRunRequest &) = default ;
    UpdateOptimizeRunRequest& operator=(UpdateOptimizeRunRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extra_ == nullptr
        && this->status_ == nullptr && this->clientToken_ == nullptr; };
    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline     const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
    Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
    inline UpdateOptimizeRunRequest& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
    inline UpdateOptimizeRunRequest& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateOptimizeRunRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateOptimizeRunRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The extra parameters. To retry a failed artifact application, set application.action to retry and do not specify status. Do not specify this field when canceling a run.
    Darabonba::Json extra_ {};
    // The status. Only Cancelled is supported when canceling a run. The execution status is maintained by the server. Do not specify this field when retrying an artifact application.
    shared_ptr<string> status_ {};
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
