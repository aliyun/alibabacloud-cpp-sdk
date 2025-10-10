// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYRULEHEALTHSTATUS_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYRULEHEALTHSTATUS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerHealthStatusResponseBodyRuleHealthStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBodyRuleHealthStatus& obj) { 
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(ServerGroupInfos, serverGroupInfos_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBodyRuleHealthStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(ServerGroupInfos, serverGroupInfos_);
    };
    GetListenerHealthStatusResponseBodyRuleHealthStatus() = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatus(const GetListenerHealthStatusResponseBodyRuleHealthStatus &) = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatus(GetListenerHealthStatusResponseBodyRuleHealthStatus &&) = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBodyRuleHealthStatus() = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatus& operator=(const GetListenerHealthStatusResponseBodyRuleHealthStatus &) = default ;
    GetListenerHealthStatusResponseBodyRuleHealthStatus& operator=(GetListenerHealthStatusResponseBodyRuleHealthStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ruleId_ != nullptr
        && this->serverGroupInfos_ != nullptr; };
    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline GetListenerHealthStatusResponseBodyRuleHealthStatus& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // serverGroupInfos Field Functions 
    bool hasServerGroupInfos() const { return this->serverGroupInfos_ != nullptr;};
    void deleteServerGroupInfos() { this->serverGroupInfos_ = nullptr;};
    inline const vector<Models::GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos> & serverGroupInfos() const { DARABONBA_PTR_GET_CONST(serverGroupInfos_, vector<Models::GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos>) };
    inline vector<Models::GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos> serverGroupInfos() { DARABONBA_PTR_GET(serverGroupInfos_, vector<Models::GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos>) };
    inline GetListenerHealthStatusResponseBodyRuleHealthStatus& setServerGroupInfos(const vector<Models::GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos> & serverGroupInfos) { DARABONBA_PTR_SET_VALUE(serverGroupInfos_, serverGroupInfos) };
    inline GetListenerHealthStatusResponseBodyRuleHealthStatus& setServerGroupInfos(vector<Models::GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos> && serverGroupInfos) { DARABONBA_PTR_SET_RVALUE(serverGroupInfos_, serverGroupInfos) };


  protected:
    // The ID of the forwarding rule.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The server groups.
    std::shared_ptr<vector<Models::GetListenerHealthStatusResponseBodyRuleHealthStatusServerGroupInfos>> serverGroupInfos_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
