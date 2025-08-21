// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGENTINFORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAGENTINFORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class GetAgentInfoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAgentInfoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(AgentName, agentName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAgentInfoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
    };
    GetAgentInfoResponseBodyData() = default ;
    GetAgentInfoResponseBodyData(const GetAgentInfoResponseBodyData &) = default ;
    GetAgentInfoResponseBodyData(GetAgentInfoResponseBodyData &&) = default ;
    GetAgentInfoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAgentInfoResponseBodyData() = default ;
    GetAgentInfoResponseBodyData& operator=(const GetAgentInfoResponseBodyData &) = default ;
    GetAgentInfoResponseBodyData& operator=(GetAgentInfoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->agentName_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline GetAgentInfoResponseBodyData& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // agentName Field Functions 
    bool hasAgentName() const { return this->agentName_ != nullptr;};
    void deleteAgentName() { this->agentName_ = nullptr;};
    inline string agentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
    inline GetAgentInfoResponseBodyData& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> agentName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
