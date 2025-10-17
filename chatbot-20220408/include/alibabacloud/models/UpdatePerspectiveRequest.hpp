// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPERSPECTIVEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPERSPECTIVEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class UpdatePerspectiveRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePerspectiveRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PerspectiveId, perspectiveId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePerspectiveRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PerspectiveId, perspectiveId_);
    };
    UpdatePerspectiveRequest() = default ;
    UpdatePerspectiveRequest(const UpdatePerspectiveRequest &) = default ;
    UpdatePerspectiveRequest(UpdatePerspectiveRequest &&) = default ;
    UpdatePerspectiveRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePerspectiveRequest() = default ;
    UpdatePerspectiveRequest& operator=(const UpdatePerspectiveRequest &) = default ;
    UpdatePerspectiveRequest& operator=(UpdatePerspectiveRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && return this->name_ == nullptr && return this->perspectiveId_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline UpdatePerspectiveRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdatePerspectiveRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // perspectiveId Field Functions 
    bool hasPerspectiveId() const { return this->perspectiveId_ != nullptr;};
    void deletePerspectiveId() { this->perspectiveId_ = nullptr;};
    inline string perspectiveId() const { DARABONBA_PTR_GET_DEFAULT(perspectiveId_, "") };
    inline UpdatePerspectiveRequest& setPerspectiveId(string perspectiveId) { DARABONBA_PTR_SET_VALUE(perspectiveId_, perspectiveId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> perspectiveId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
