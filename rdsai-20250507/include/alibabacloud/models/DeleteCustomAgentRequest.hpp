// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class DeleteCustomAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
    };
    DeleteCustomAgentRequest() = default ;
    DeleteCustomAgentRequest(const DeleteCustomAgentRequest &) = default ;
    DeleteCustomAgentRequest(DeleteCustomAgentRequest &&) = default ;
    DeleteCustomAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomAgentRequest() = default ;
    DeleteCustomAgentRequest& operator=(const DeleteCustomAgentRequest &) = default ;
    DeleteCustomAgentRequest& operator=(DeleteCustomAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string customAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline DeleteCustomAgentRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


  protected:
    // AgentId。
    std::shared_ptr<string> customAgentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
