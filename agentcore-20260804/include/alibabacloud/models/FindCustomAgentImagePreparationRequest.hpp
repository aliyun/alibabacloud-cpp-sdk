// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FINDCUSTOMAGENTIMAGEPREPARATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FINDCUSTOMAGENTIMAGEPREPARATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class FindCustomAgentImagePreparationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FindCustomAgentImagePreparationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, FindCustomAgentImagePreparationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    FindCustomAgentImagePreparationRequest() = default ;
    FindCustomAgentImagePreparationRequest(const FindCustomAgentImagePreparationRequest &) = default ;
    FindCustomAgentImagePreparationRequest(FindCustomAgentImagePreparationRequest &&) = default ;
    FindCustomAgentImagePreparationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FindCustomAgentImagePreparationRequest() = default ;
    FindCustomAgentImagePreparationRequest& operator=(const FindCustomAgentImagePreparationRequest &) = default ;
    FindCustomAgentImagePreparationRequest& operator=(FindCustomAgentImagePreparationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline FindCustomAgentImagePreparationRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    // The client token submitted when creating or explicitly updating the image. Do not specify AgentId or the operation type.
    // 
    // This parameter is required.
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
