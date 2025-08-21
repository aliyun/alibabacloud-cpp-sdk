// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPERSPECTIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPERSPECTIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DeletePerspectiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePerspectiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(PerspectiveId, perspectiveId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePerspectiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(PerspectiveId, perspectiveId_);
    };
    DeletePerspectiveRequest() = default ;
    DeletePerspectiveRequest(const DeletePerspectiveRequest &) = default ;
    DeletePerspectiveRequest(DeletePerspectiveRequest &&) = default ;
    DeletePerspectiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePerspectiveRequest() = default ;
    DeletePerspectiveRequest& operator=(const DeletePerspectiveRequest &) = default ;
    DeletePerspectiveRequest& operator=(DeletePerspectiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->perspectiveId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline DeletePerspectiveRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // perspectiveId Field Functions 
    bool hasPerspectiveId() const { return this->perspectiveId_ != nullptr;};
    void deletePerspectiveId() { this->perspectiveId_ = nullptr;};
    inline string perspectiveId() const { DARABONBA_PTR_GET_DEFAULT(perspectiveId_, "") };
    inline DeletePerspectiveRequest& setPerspectiveId(string perspectiveId) { DARABONBA_PTR_SET_VALUE(perspectiveId_, perspectiveId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> perspectiveId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
