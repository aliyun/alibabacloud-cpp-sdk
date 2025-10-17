// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGENTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAGENTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListAgentResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAgentResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
      DARABONBA_ANY_TO_JSON(InstanceInfos, instanceInfos_);
    };
    friend void from_json(const Darabonba::Json& j, ListAgentResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
      DARABONBA_ANY_FROM_JSON(InstanceInfos, instanceInfos_);
    };
    ListAgentResponseBodyData() = default ;
    ListAgentResponseBodyData(const ListAgentResponseBodyData &) = default ;
    ListAgentResponseBodyData(ListAgentResponseBodyData &&) = default ;
    ListAgentResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAgentResponseBodyData() = default ;
    ListAgentResponseBodyData& operator=(const ListAgentResponseBodyData &) = default ;
    ListAgentResponseBodyData& operator=(ListAgentResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && return this->agentKey_ == nullptr && return this->agentName_ == nullptr && return this->instanceInfos_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline int64_t agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, 0L) };
    inline ListAgentResponseBodyData& setAgentId(int64_t agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListAgentResponseBodyData& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline ListAgentResponseBodyData& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


    // instanceInfos Field Functions 
    bool hasInstanceInfos() const { return this->instanceInfos_ != nullptr;};
    void deleteInstanceInfos() { this->instanceInfos_ = nullptr;};
    inline     const Darabonba::Json & instanceInfos() const { DARABONBA_GET(instanceInfos_) };
    Darabonba::Json & instanceInfos() { DARABONBA_GET(instanceInfos_) };
    inline ListAgentResponseBodyData& setInstanceInfos(const Darabonba::Json & instanceInfos) { DARABONBA_SET_VALUE(instanceInfos_, instanceInfos) };
    inline ListAgentResponseBodyData& setInstanceInfos(Darabonba::Json & instanceInfos) { DARABONBA_SET_RVALUE(instanceInfos_, instanceInfos) };


  protected:
    std::shared_ptr<int64_t> agentId_ = nullptr;
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
    Darabonba::Json instanceInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
