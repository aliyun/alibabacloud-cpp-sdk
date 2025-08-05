// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKPROMETHEUSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEEVENTSTREAMINGREQUESTSINKSINKPROMETHEUSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersData.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersURL.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId.hpp>
#include <alibabacloud/models/UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class UpdateEventStreamingRequestSinkSinkPrometheusParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEventStreamingRequestSinkSinkPrometheusParameters& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
      DARABONBA_PTR_TO_JSON(Username, username_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEventStreamingRequestSinkSinkPrometheusParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationType, authorizationType_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HeaderParameters, headerParameters_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    UpdateEventStreamingRequestSinkSinkPrometheusParameters() = default ;
    UpdateEventStreamingRequestSinkSinkPrometheusParameters(const UpdateEventStreamingRequestSinkSinkPrometheusParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkPrometheusParameters(UpdateEventStreamingRequestSinkSinkPrometheusParameters &&) = default ;
    UpdateEventStreamingRequestSinkSinkPrometheusParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEventStreamingRequestSinkSinkPrometheusParameters() = default ;
    UpdateEventStreamingRequestSinkSinkPrometheusParameters& operator=(const UpdateEventStreamingRequestSinkSinkPrometheusParameters &) = default ;
    UpdateEventStreamingRequestSinkSinkPrometheusParameters& operator=(UpdateEventStreamingRequestSinkSinkPrometheusParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizationType_ != nullptr
        && this->data_ != nullptr && this->headerParameters_ != nullptr && this->networkType_ != nullptr && this->password_ != nullptr && this->securityGroupId_ != nullptr
        && this->URL_ != nullptr && this->username_ != nullptr && this->vSwitchId_ != nullptr && this->vpcId_ != nullptr; };
    // authorizationType Field Functions 
    bool hasAuthorizationType() const { return this->authorizationType_ != nullptr;};
    void deleteAuthorizationType() { this->authorizationType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType & authorizationType() const { DARABONBA_PTR_GET_CONST(authorizationType_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType authorizationType() { DARABONBA_PTR_GET(authorizationType_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setAuthorizationType(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType & authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setAuthorizationType(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType && authorizationType) { DARABONBA_PTR_SET_RVALUE(authorizationType_, authorizationType) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersData) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersData data() { DARABONBA_PTR_GET(data_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersData) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setData(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setData(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters headerParameters() { DARABONBA_PTR_GET(headerParameters_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setHeaderParameters(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setHeaderParameters(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setNetworkType(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setNetworkType(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword & password() const { DARABONBA_PTR_GET_CONST(password_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword password() { DARABONBA_PTR_GET(password_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setPassword(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setPassword(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setSecurityGroupId(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setSecurityGroupId(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersURL & URL() const { DARABONBA_PTR_GET_CONST(URL_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersURL) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersURL URL() { DARABONBA_PTR_GET(URL_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersURL) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setURL(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersURL & URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setURL(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersURL && URL) { DARABONBA_PTR_SET_RVALUE(URL_, URL) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername & username() const { DARABONBA_PTR_GET_CONST(username_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername username() { DARABONBA_PTR_GET(username_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setUsername(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername & username) { DARABONBA_PTR_SET_VALUE(username_, username) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setUsername(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername && username) { DARABONBA_PTR_SET_RVALUE(username_, username) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setVSwitchId(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setVSwitchId(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId) };
    inline Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setVpcId(const Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline UpdateEventStreamingRequestSinkSinkPrometheusParameters& setVpcId(Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    // The authentication method.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType> authorizationType_ = nullptr;
    // The metric data.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersData> data_ = nullptr;
    // The parameters that are configured for the request header.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters> headerParameters_ = nullptr;
    // The network type.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersNetworkType> networkType_ = nullptr;
    // The password.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersPassword> password_ = nullptr;
    // The ID of the security group.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId> securityGroupId_ = nullptr;
    // The URL for the remote write configuration item of the Managed Service for Prometheus instance.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersURL> URL_ = nullptr;
    // The username.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersUsername> username_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId> vSwitchId_ = nullptr;
    // The VPC ID.
    std::shared_ptr<Models::UpdateEventStreamingRequestSinkSinkPrometheusParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
