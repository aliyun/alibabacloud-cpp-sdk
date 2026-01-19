// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETTRAFFICCONTROLAPISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETTRAFFICCONTROLAPISREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class SetTrafficControlApisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetTrafficControlApisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(StageName, stageName_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
    };
    friend void from_json(const Darabonba::Json& j, SetTrafficControlApisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApiIds, apiIds_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(StageName, stageName_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
    };
    SetTrafficControlApisRequest() = default ;
    SetTrafficControlApisRequest(const SetTrafficControlApisRequest &) = default ;
    SetTrafficControlApisRequest(SetTrafficControlApisRequest &&) = default ;
    SetTrafficControlApisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetTrafficControlApisRequest() = default ;
    SetTrafficControlApisRequest& operator=(const SetTrafficControlApisRequest &) = default ;
    SetTrafficControlApisRequest& operator=(SetTrafficControlApisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiIds_ == nullptr
        && this->groupId_ == nullptr && this->securityToken_ == nullptr && this->stageName_ == nullptr && this->trafficControlId_ == nullptr; };
    // apiIds Field Functions 
    bool hasApiIds() const { return this->apiIds_ != nullptr;};
    void deleteApiIds() { this->apiIds_ = nullptr;};
    inline string getApiIds() const { DARABONBA_PTR_GET_DEFAULT(apiIds_, "") };
    inline SetTrafficControlApisRequest& setApiIds(string apiIds) { DARABONBA_PTR_SET_VALUE(apiIds_, apiIds) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline SetTrafficControlApisRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline SetTrafficControlApisRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // stageName Field Functions 
    bool hasStageName() const { return this->stageName_ != nullptr;};
    void deleteStageName() { this->stageName_ = nullptr;};
    inline string getStageName() const { DARABONBA_PTR_GET_DEFAULT(stageName_, "") };
    inline SetTrafficControlApisRequest& setStageName(string stageName) { DARABONBA_PTR_SET_VALUE(stageName_, stageName) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string getTrafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline SetTrafficControlApisRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


  protected:
    // The API ID for the specified operation. Separate multiple API IDs with commas (,). A maximum of 100 API IDs can be entered.
    // 
    // This parameter is required.
    shared_ptr<string> apiIds_ {};
    // The ID of the API group containing the APIs to which you want to bind a specified throttling policy.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
    // The name of the runtime environment. Valid values:
    // 
    // *   **RELEASE**
    // *   **TEST**
    // 
    // This parameter is required.
    shared_ptr<string> stageName_ {};
    // The ID of the throttling policy.
    // 
    // This parameter is required.
    shared_ptr<string> trafficControlId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
