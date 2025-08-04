// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAUSERINFO_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAUSERINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataUserInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataUserInfo& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataUserInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetPropertiesResponseBodyDataUserInfo() = default ;
    GetPropertiesResponseBodyDataUserInfo(const GetPropertiesResponseBodyDataUserInfo &) = default ;
    GetPropertiesResponseBodyDataUserInfo(GetPropertiesResponseBodyDataUserInfo &&) = default ;
    GetPropertiesResponseBodyDataUserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataUserInfo() = default ;
    GetPropertiesResponseBodyDataUserInfo& operator=(const GetPropertiesResponseBodyDataUserInfo &) = default ;
    GetPropertiesResponseBodyDataUserInfo& operator=(GetPropertiesResponseBodyDataUserInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentId_ != nullptr
        && this->tenantId_ != nullptr && this->userId_ != nullptr && this->username_ != nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string agentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline GetPropertiesResponseBodyDataUserInfo& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetPropertiesResponseBodyDataUserInfo& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetPropertiesResponseBodyDataUserInfo& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetPropertiesResponseBodyDataUserInfo& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> agentId_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
