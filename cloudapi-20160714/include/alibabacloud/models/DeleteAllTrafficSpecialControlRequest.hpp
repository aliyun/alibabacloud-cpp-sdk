// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALLTRAFFICSPECIALCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALLTRAFFICSPECIALCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteAllTrafficSpecialControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAllTrafficSpecialControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAllTrafficSpecialControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
    };
    DeleteAllTrafficSpecialControlRequest() = default ;
    DeleteAllTrafficSpecialControlRequest(const DeleteAllTrafficSpecialControlRequest &) = default ;
    DeleteAllTrafficSpecialControlRequest(DeleteAllTrafficSpecialControlRequest &&) = default ;
    DeleteAllTrafficSpecialControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAllTrafficSpecialControlRequest() = default ;
    DeleteAllTrafficSpecialControlRequest& operator=(const DeleteAllTrafficSpecialControlRequest &) = default ;
    DeleteAllTrafficSpecialControlRequest& operator=(DeleteAllTrafficSpecialControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && return this->trafficControlId_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteAllTrafficSpecialControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string trafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline DeleteAllTrafficSpecialControlRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


  protected:
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The ID of the throttling policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficControlId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
