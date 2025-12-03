// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVETRAFFICCONTROLAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVETRAFFICCONTROLAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class RemoveTrafficControlApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveTrafficControlApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveTrafficControlApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
    };
    RemoveTrafficControlApisRequest() = default ;
    RemoveTrafficControlApisRequest(const RemoveTrafficControlApisRequest &) = default ;
    RemoveTrafficControlApisRequest(RemoveTrafficControlApisRequest &&) = default ;
    RemoveTrafficControlApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveTrafficControlApisRequest() = default ;
    RemoveTrafficControlApisRequest& operator=(const RemoveTrafficControlApisRequest &) = default ;
    RemoveTrafficControlApisRequest& operator=(RemoveTrafficControlApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIds_ == nullptr
        && return this->groupId_ == nullptr && return this->securityToken_ == nullptr && return this->stageName_ == nullptr && return this->trafficControlId_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline string apiIds() const { DARABONBA_PTR_GET_DEFAULT(apiIds_, "") };
    inline RemoveTrafficControlApisRequest& setApiIds(string apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline RemoveTrafficControlApisRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline RemoveTrafficControlApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string stageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline RemoveTrafficControlApisRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string trafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline RemoveTrafficControlApisRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


  protected:
    // The IDs of the APIs from which you want to unbind a specified throttling policy.
    // 
    // *   If this parameter is not specified, the throttling policy is unbound from all the APIs in the specified environment of the API group.
    // *   Separate multiple API IDs with commas (,). A maximum of 100 API IDs can be entered.
    std::shared_ptr<string> apiIds_ = nullptr;
    // The ID of the API group containing the APIs from which you want to unbind a specified throttling policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // 
    // This parameter is required.
    std::shared_ptr<string> stageName_ = nullptr;
    // The ID of the throttling policy that you want to unbind from APIs.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficControlId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
