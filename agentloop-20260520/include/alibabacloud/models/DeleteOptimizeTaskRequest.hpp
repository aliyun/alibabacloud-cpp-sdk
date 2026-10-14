// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEOPTIMIZETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEOPTIMIZETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class DeleteOptimizeTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteOptimizeTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteOptimizeTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    DeleteOptimizeTaskRequest() = default ;
    DeleteOptimizeTaskRequest(const DeleteOptimizeTaskRequest &) = default ;
    DeleteOptimizeTaskRequest(DeleteOptimizeTaskRequest &&) = default ;
    DeleteOptimizeTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteOptimizeTaskRequest() = default ;
    DeleteOptimizeTaskRequest& operator=(const DeleteOptimizeTaskRequest &) = default ;
    DeleteOptimizeTaskRequest& operator=(DeleteOptimizeTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteOptimizeTaskRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The idempotency token.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
