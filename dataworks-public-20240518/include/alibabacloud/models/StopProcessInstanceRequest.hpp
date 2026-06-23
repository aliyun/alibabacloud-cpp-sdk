// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPPROCESSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPPROCESSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class StopProcessInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopProcessInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, StopProcessInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
    };
    StopProcessInstanceRequest() = default ;
    StopProcessInstanceRequest(const StopProcessInstanceRequest &) = default ;
    StopProcessInstanceRequest(StopProcessInstanceRequest &&) = default ;
    StopProcessInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopProcessInstanceRequest() = default ;
    StopProcessInstanceRequest& operator=(const StopProcessInstanceRequest &) = default ;
    StopProcessInstanceRequest& operator=(StopProcessInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->processInstanceId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline StopProcessInstanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string getProcessInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline StopProcessInstanceRequest& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


  protected:
    // A token to ensure that the request is idempotent. We recommend that you use a universally unique identifier (UUID).
    shared_ptr<string> clientToken_ {};
    // The process instance ID. This operation supports approval forms from both the old and new versions of Security Center.
    // 
    // This parameter is required.
    shared_ptr<string> processInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
