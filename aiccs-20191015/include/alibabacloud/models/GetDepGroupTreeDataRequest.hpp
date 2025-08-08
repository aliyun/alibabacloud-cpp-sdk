// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEPGROUPTREEDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class GetDepGroupTreeDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDepGroupTreeDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDepGroupTreeDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetDepGroupTreeDataRequest() = default ;
    GetDepGroupTreeDataRequest(const GetDepGroupTreeDataRequest &) = default ;
    GetDepGroupTreeDataRequest(GetDepGroupTreeDataRequest &&) = default ;
    GetDepGroupTreeDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDepGroupTreeDataRequest() = default ;
    GetDepGroupTreeDataRequest& operator=(const GetDepGroupTreeDataRequest &) = default ;
    GetDepGroupTreeDataRequest& operator=(GetDepGroupTreeDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->instanceId_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline GetDepGroupTreeDataRequest& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDepGroupTreeDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> agentId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
