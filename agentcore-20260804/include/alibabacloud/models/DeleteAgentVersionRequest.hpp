// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAGENTVERSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAGENTVERSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class DeleteAgentVersionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAgentVersionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAgentVersionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    DeleteAgentVersionRequest() = default ;
    DeleteAgentVersionRequest(const DeleteAgentVersionRequest &) = default ;
    DeleteAgentVersionRequest(DeleteAgentVersionRequest &&) = default ;
    DeleteAgentVersionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAgentVersionRequest() = default ;
    DeleteAgentVersionRequest& operator=(const DeleteAgentVersionRequest &) = default ;
    DeleteAgentVersionRequest& operator=(DeleteAgentVersionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAgentVersionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // 客户端生成的幂等令牌，当前为预留参数，后端暂不提供持久化幂等保证。
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
