// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERHEALTHSTATUSRESPONSEBODYLISTENERHEALTHSTATUSSERVERGROUPINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nlb20220430
{
namespace Models
{
  class GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& obj) { 
      DARABONBA_PTR_TO_JSON(HeathCheckEnabled, heathCheckEnabled_);
      DARABONBA_PTR_TO_JSON(NonNormalServers, nonNormalServers_);
      DARABONBA_PTR_TO_JSON(ServerGroupId, serverGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(HeathCheckEnabled, heathCheckEnabled_);
      DARABONBA_PTR_FROM_JSON(NonNormalServers, nonNormalServers_);
      DARABONBA_PTR_FROM_JSON(ServerGroupId, serverGroupId_);
    };
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &&) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos() = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& operator=(const GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &) = default ;
    GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& operator=(GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->heathCheckEnabled_ != nullptr
        && this->nonNormalServers_ != nullptr && this->serverGroupId_ != nullptr; };
    // heathCheckEnabled Field Functions 
    bool hasHeathCheckEnabled() const { return this->heathCheckEnabled_ != nullptr;};
    void deleteHeathCheckEnabled() { this->heathCheckEnabled_ = nullptr;};
    inline bool heathCheckEnabled() const { DARABONBA_PTR_GET_DEFAULT(heathCheckEnabled_, false) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setHeathCheckEnabled(bool heathCheckEnabled) { DARABONBA_PTR_SET_VALUE(heathCheckEnabled_, heathCheckEnabled) };


    // nonNormalServers Field Functions 
    bool hasNonNormalServers() const { return this->nonNormalServers_ != nullptr;};
    void deleteNonNormalServers() { this->nonNormalServers_ = nullptr;};
    inline const vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> & nonNormalServers() const { DARABONBA_PTR_GET_CONST(nonNormalServers_, vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>) };
    inline vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> nonNormalServers() { DARABONBA_PTR_GET(nonNormalServers_, vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setNonNormalServers(const vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> & nonNormalServers) { DARABONBA_PTR_SET_VALUE(nonNormalServers_, nonNormalServers) };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setNonNormalServers(vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers> && nonNormalServers) { DARABONBA_PTR_SET_RVALUE(nonNormalServers_, nonNormalServers) };


    // serverGroupId Field Functions 
    bool hasServerGroupId() const { return this->serverGroupId_ != nullptr;};
    void deleteServerGroupId() { this->serverGroupId_ = nullptr;};
    inline string serverGroupId() const { DARABONBA_PTR_GET_DEFAULT(serverGroupId_, "") };
    inline GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfos& setServerGroupId(string serverGroupId) { DARABONBA_PTR_SET_VALUE(serverGroupId_, serverGroupId) };


  protected:
    // Indicates whether the health check feature is enabled. Valid values:
    // 
    // *   **true**: enabled
    // *   **false**: disabled
    std::shared_ptr<bool> heathCheckEnabled_ = nullptr;
    // A list of unhealthy backend servers.
    std::shared_ptr<vector<Models::GetListenerHealthStatusResponseBodyListenerHealthStatusServerGroupInfosNonNormalServers>> nonNormalServers_ = nullptr;
    // The ID of the server group.
    std::shared_ptr<string> serverGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nlb20220430
#endif
