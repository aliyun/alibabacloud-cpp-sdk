// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATESERVERGROUPSERVERSATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATESERVERGROUPSERVERSATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class UpdateServerGroupServersAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateServerGroupServersAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateServerGroupServersAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
    };
    UpdateServerGroupServersAttributeResponseBody() = default ;
    UpdateServerGroupServersAttributeResponseBody(const UpdateServerGroupServersAttributeResponseBody &) = default ;
    UpdateServerGroupServersAttributeResponseBody(UpdateServerGroupServersAttributeResponseBody &&) = default ;
    UpdateServerGroupServersAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateServerGroupServersAttributeResponseBody() = default ;
    UpdateServerGroupServersAttributeResponseBody& operator=(const UpdateServerGroupServersAttributeResponseBody &) = default ;
    UpdateServerGroupServersAttributeResponseBody& operator=(UpdateServerGroupServersAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->requestId_ == nullptr && this->serverGroupId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline UpdateServerGroupServersAttributeResponseBody& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateServerGroupServersAttributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string getServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline UpdateServerGroupServersAttributeResponseBody& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // The ID of the asynchronous task.
    shared_ptr<string> jobId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The server group ID.
    shared_ptr<string> serverGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
