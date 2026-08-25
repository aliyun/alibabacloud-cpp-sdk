// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEWORKFLOWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEWORKFLOWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class DeleteWorkflowRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteWorkflowRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteWorkflowRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientUniqueCode, clientUniqueCode_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
    };
    DeleteWorkflowRequest() = default ;
    DeleteWorkflowRequest(const DeleteWorkflowRequest &) = default ;
    DeleteWorkflowRequest(DeleteWorkflowRequest &&) = default ;
    DeleteWorkflowRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteWorkflowRequest() = default ;
    DeleteWorkflowRequest& operator=(const DeleteWorkflowRequest &) = default ;
    DeleteWorkflowRequest& operator=(DeleteWorkflowRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientUniqueCode_ == nullptr
        && this->envType_ == nullptr && this->id_ == nullptr; };
    // clientUniqueCode Field Functions 
    bool hasClientUniqueCode() const { return this->clientUniqueCode_ != nullptr;};
    void deleteClientUniqueCode() { this->clientUniqueCode_ = nullptr;};
    inline string getClientUniqueCode() const { DARABONBA_PTR_GET_DEFAULT(clientUniqueCode_, "") };
    inline DeleteWorkflowRequest& setClientUniqueCode(string clientUniqueCode) { DARABONBA_PTR_SET_VALUE(clientUniqueCode_, clientUniqueCode) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline string getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, "") };
    inline DeleteWorkflowRequest& setEnvType(string envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DeleteWorkflowRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


  protected:
    // The client unique code of the workflow, which is used to implement asynchronous operations and idempotence. If you do not specify this parameter during creation, the system automatically generates one. This code is uniquely bound to the resource ID. If you specify this parameter during update or deletion, it must be the same as the client unique code specified during creation.
    shared_ptr<string> clientUniqueCode_ {};
    // The project environment. Valid values:
    // 
    // - Prod: production
    // - Dev: development
    shared_ptr<string> envType_ {};
    // The unique identifier of the workflow.
    // 
    // This parameter is required.
    shared_ptr<int64_t> id_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
