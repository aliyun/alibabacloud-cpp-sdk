// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAGENTSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAGENTSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class UpdateAgentSpaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAgentSpaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(cmsWorkspace, cmsWorkspace_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAgentSpaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(cmsWorkspace, cmsWorkspace_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    UpdateAgentSpaceRequest() = default ;
    UpdateAgentSpaceRequest(const UpdateAgentSpaceRequest &) = default ;
    UpdateAgentSpaceRequest(UpdateAgentSpaceRequest &&) = default ;
    UpdateAgentSpaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAgentSpaceRequest() = default ;
    UpdateAgentSpaceRequest& operator=(const UpdateAgentSpaceRequest &) = default ;
    UpdateAgentSpaceRequest& operator=(UpdateAgentSpaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cmsWorkspace_ == nullptr
        && this->description_ == nullptr && this->clientToken_ == nullptr; };
    // cmsWorkspace Field Functions 
    bool hasCmsWorkspace() const { return this->cmsWorkspace_ != nullptr;};
    void deleteCmsWorkspace() { this->cmsWorkspace_ = nullptr;};
    inline string getCmsWorkspace() const { DARABONBA_PTR_GET_DEFAULT(cmsWorkspace_, "") };
    inline UpdateAgentSpaceRequest& setCmsWorkspace(string cmsWorkspace) { DARABONBA_PTR_SET_VALUE(cmsWorkspace_, cmsWorkspace) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAgentSpaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateAgentSpaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> cmsWorkspace_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
