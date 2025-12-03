// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTRAFFICSPECIALCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDTRAFFICSPECIALCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class AddTrafficSpecialControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTrafficSpecialControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(SpecialKey, specialKey_);
      DARABONBA_PTR_TO_JSON(SpecialType, specialType_);
      DARABONBA_PTR_TO_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_TO_JSON(TrafficValue, trafficValue_);
    };
    friend void from_json(const Darabonba::Json& j, AddTrafficSpecialControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(SpecialKey, specialKey_);
      DARABONBA_PTR_FROM_JSON(SpecialType, specialType_);
      DARABONBA_PTR_FROM_JSON(TrafficControlId, trafficControlId_);
      DARABONBA_PTR_FROM_JSON(TrafficValue, trafficValue_);
    };
    AddTrafficSpecialControlRequest() = default ;
    AddTrafficSpecialControlRequest(const AddTrafficSpecialControlRequest &) = default ;
    AddTrafficSpecialControlRequest(AddTrafficSpecialControlRequest &&) = default ;
    AddTrafficSpecialControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTrafficSpecialControlRequest() = default ;
    AddTrafficSpecialControlRequest& operator=(const AddTrafficSpecialControlRequest &) = default ;
    AddTrafficSpecialControlRequest& operator=(AddTrafficSpecialControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityToken_ == nullptr
        && return this->specialKey_ == nullptr && return this->specialType_ == nullptr && return this->trafficControlId_ == nullptr && return this->trafficValue_ == nullptr; };
    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline AddTrafficSpecialControlRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // specialKey Field Functions 
    bool hasSpecialKey() const { return this->specialKey_ != nullptr;};
    void deleteSpecialKey() { this->specialKey_ = nullptr;};
    inline string specialKey() const { DARABONBA_PTR_GET_DEFAULT(specialKey_, "") };
    inline AddTrafficSpecialControlRequest& setSpecialKey(string specialKey) { DARABONBA_PTR_SET_VALUE(specialKey_, specialKey) };


    // specialType Field Functions 
    bool hasSpecialType() const { return this->specialType_ != nullptr;};
    void deleteSpecialType() { this->specialType_ = nullptr;};
    inline string specialType() const { DARABONBA_PTR_GET_DEFAULT(specialType_, "") };
    inline AddTrafficSpecialControlRequest& setSpecialType(string specialType) { DARABONBA_PTR_SET_VALUE(specialType_, specialType) };


    // trafficControlId Field Functions 
    bool hasTrafficControlId() const { return this->trafficControlId_ != nullptr;};
    void deleteTrafficControlId() { this->trafficControlId_ = nullptr;};
    inline string trafficControlId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlId_, "") };
    inline AddTrafficSpecialControlRequest& setTrafficControlId(string trafficControlId) { DARABONBA_PTR_SET_VALUE(trafficControlId_, trafficControlId) };


    // trafficValue Field Functions 
    bool hasTrafficValue() const { return this->trafficValue_ != nullptr;};
    void deleteTrafficValue() { this->trafficValue_ = nullptr;};
    inline int32_t trafficValue() const { DARABONBA_PTR_GET_DEFAULT(trafficValue_, 0) };
    inline AddTrafficSpecialControlRequest& setTrafficValue(int32_t trafficValue) { DARABONBA_PTR_SET_VALUE(trafficValue_, trafficValue) };


  protected:
    // The security token included in the WebSocket request header. The system uses this token to authenticate the request.
    std::shared_ptr<string> securityToken_ = nullptr;
    // The ID of the app or Alibaba Cloud account. Specify this parameter based on the value of the **SpecialType** parameter. You can view your account ID on the [Account Management](https://account.console.aliyun.com/?spm=a2c4g.11186623.2.15.3f053654YpMPwo#/secure) page.
    // 
    // This parameter is required.
    std::shared_ptr<string> specialKey_ = nullptr;
    // The type of the special throttling policy. Valid values:
    // 
    // *   **APP**
    // *   **USER**
    // 
    // This parameter is required.
    std::shared_ptr<string> specialType_ = nullptr;
    // The ID of the specified throttling policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> trafficControlId_ = nullptr;
    // The special throttling value.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> trafficValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
