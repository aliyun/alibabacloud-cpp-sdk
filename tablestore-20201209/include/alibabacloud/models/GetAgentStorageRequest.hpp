// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTSTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTSTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tablestore20201209
{
namespace Models
{
  class GetAgentStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentStorageName, agentStorageName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentStorageName, agentStorageName_);
    };
    GetAgentStorageRequest() = default ;
    GetAgentStorageRequest(const GetAgentStorageRequest &) = default ;
    GetAgentStorageRequest(GetAgentStorageRequest &&) = default ;
    GetAgentStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentStorageRequest() = default ;
    GetAgentStorageRequest& operator=(const GetAgentStorageRequest &) = default ;
    GetAgentStorageRequest& operator=(GetAgentStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentStorageName_ == nullptr; };
    // agentStorageName Field Functions 
    bool hasAgentStorageName() const { return this->agentStorageName_ != nullptr;};
    void deleteAgentStorageName() { this->agentStorageName_ = nullptr;};
    inline string getAgentStorageName() const { DARABONBA_PTR_GET_DEFAULT(agentStorageName_, "") };
    inline GetAgentStorageRequest& setAgentStorageName(string agentStorageName) { DARABONBA_PTR_SET_VALUE(agentStorageName_, agentStorageName) };


  protected:
    // The name of the agent storage.
    // 
    // This parameter is required.
    shared_ptr<string> agentStorageName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tablestore20201209
#endif
