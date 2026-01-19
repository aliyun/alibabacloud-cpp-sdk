// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETRAFFICSPECIALCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETRAFFICSPECIALCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DeleteTrafficSpecialControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTrafficSpecialControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SpecialKey, specialKey_);
      DARABONBA_PTR_TO_JSON(SpecialType, specialType_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTrafficSpecialControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SpecialKey, specialKey_);
      DARABONBA_PTR_FROM_JSON(SpecialType, specialType_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
    };
    DeleteTrafficSpecialControlRequest() = default ;
    DeleteTrafficSpecialControlRequest(const DeleteTrafficSpecialControlRequest &) = default ;
    DeleteTrafficSpecialControlRequest(DeleteTrafficSpecialControlRequest &&) = default ;
    DeleteTrafficSpecialControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTrafficSpecialControlRequest() = default ;
    DeleteTrafficSpecialControlRequest& operator=(const DeleteTrafficSpecialControlRequest &) = default ;
    DeleteTrafficSpecialControlRequest& operator=(DeleteTrafficSpecialControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && this->specialKey_ == nullptr && this->specialType_ == nullptr && this->trafficControlId_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DeleteTrafficSpecialControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // specialKey Field Functions 
    bool hasSpecialKey() const { return this->specialKey_ != nullptr;};
    void deleteSpecialKey() { this->specialKey_ = nullptr;};
    inline string getSpecialKey() const { DARABONBA_PTR_GET_DEFAULT(specialKey_, "") };
    inline DeleteTrafficSpecialControlRequest& setSpecialKey(string specialKey) { DARABONBA_PTR_SET_VALUE(specialKey_, specialKey) };


    // specialType Field Functions 
    bool hasSpecialType() const { return this->specialType_ != nullptr;};
    void deleteSpecialType() { this->specialType_ = nullptr;};
    inline string getSpecialType() const { DARABONBA_PTR_GET_DEFAULT(specialType_, "") };
    inline DeleteTrafficSpecialControlRequest& setSpecialType(string specialType) { DARABONBA_PTR_SET_VALUE(specialType_, specialType) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string getTrafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline DeleteTrafficSpecialControlRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


  protected:
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    shared_ptr<string> securityToken_ {};
    // The ID of the app or Alibaba Cloud account. You can view your account ID on the [Account Management](https://account.console.aliyun.com/?spm=a2c4g.11186623.2.15.343130a8sDi8cO#/secure) page.
    // 
    // This parameter is required.
    shared_ptr<string> specialKey_ {};
    // The type of the special throttling policy. Valid values:
    // 
    // *   **APP**
    // *   **USER**
    // 
    // This parameter is required.
    shared_ptr<string> specialType_ {};
    // The ID of the throttling policy.
    // 
    // This parameter is required.
    shared_ptr<string> trafficControlId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
