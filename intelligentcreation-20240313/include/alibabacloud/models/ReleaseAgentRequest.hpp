// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RELEASEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RELEASEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class ReleaseAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReleaseAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(agentId, agentId_);
    };
    friend void from_json(const Darabonba::Json& j, ReleaseAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(agentId, agentId_);
    };
    ReleaseAgentRequest() = default ;
    ReleaseAgentRequest(const ReleaseAgentRequest &) = default ;
    ReleaseAgentRequest(ReleaseAgentRequest &&) = default ;
    ReleaseAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReleaseAgentRequest() = default ;
    ReleaseAgentRequest& operator=(const ReleaseAgentRequest &) = default ;
    ReleaseAgentRequest& operator=(ReleaseAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ReleaseAgentRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
