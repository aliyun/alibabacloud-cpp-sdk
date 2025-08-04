// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
    };
    GetPropertiesRequest() = default ;
    GetPropertiesRequest(const GetPropertiesRequest &) = default ;
    GetPropertiesRequest(GetPropertiesRequest &&) = default ;
    GetPropertiesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesRequest() = default ;
    GetPropertiesRequest& operator=(const GetPropertiesRequest &) = default ;
    GetPropertiesRequest& operator=(GetPropertiesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GetPropertiesRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> agentKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
