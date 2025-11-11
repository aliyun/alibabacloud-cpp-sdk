// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUSTOMTOPICVIEWPOINTBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUSTOMTOPICVIEWPOINTBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class DeleteCustomTopicViewPointByIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCustomTopicViewPointByIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(CustomViewPointId, customViewPointId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCustomTopicViewPointByIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(CustomViewPointId, customViewPointId_);
    };
    DeleteCustomTopicViewPointByIdRequest() = default ;
    DeleteCustomTopicViewPointByIdRequest(const DeleteCustomTopicViewPointByIdRequest &) = default ;
    DeleteCustomTopicViewPointByIdRequest(DeleteCustomTopicViewPointByIdRequest &&) = default ;
    DeleteCustomTopicViewPointByIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCustomTopicViewPointByIdRequest() = default ;
    DeleteCustomTopicViewPointByIdRequest& operator=(const DeleteCustomTopicViewPointByIdRequest &) = default ;
    DeleteCustomTopicViewPointByIdRequest& operator=(DeleteCustomTopicViewPointByIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->customViewPointId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeleteCustomTopicViewPointByIdRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // customViewPointId Field Functions 
    bool hasCustomViewPointId() const { return this->customViewPointId_ != nullptr;};
    void deleteCustomViewPointId() { this->customViewPointId_ = nullptr;};
    inline string customViewPointId() const { DARABONBA_PTR_GET_DEFAULT(customViewPointId_, "") };
    inline DeleteCustomTopicViewPointByIdRequest& setCustomViewPointId(string customViewPointId) { DARABONBA_PTR_SET_VALUE(customViewPointId_, customViewPointId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> customViewPointId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
