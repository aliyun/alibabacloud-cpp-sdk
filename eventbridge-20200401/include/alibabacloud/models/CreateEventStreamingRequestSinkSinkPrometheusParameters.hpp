// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKPROMETHEUSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTSTREAMINGREQUESTSINKSINKPROMETHEUSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersData.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersPassword.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersURL.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersUsername.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId.hpp>
#include <alibabacloud/models/CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class CreateEventStreamingRequestSinkSinkPrometheusParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventStreamingRequestSinkSinkPrometheusParameters& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateEventStreamingRequestSinkSinkPrometheusParameters& obj) { 
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
    CreateEventStreamingRequestSinkSinkPrometheusParameters() = default ;
    CreateEventStreamingRequestSinkSinkPrometheusParameters(const CreateEventStreamingRequestSinkSinkPrometheusParameters &) = default ;
    CreateEventStreamingRequestSinkSinkPrometheusParameters(CreateEventStreamingRequestSinkSinkPrometheusParameters &&) = default ;
    CreateEventStreamingRequestSinkSinkPrometheusParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventStreamingRequestSinkSinkPrometheusParameters() = default ;
    CreateEventStreamingRequestSinkSinkPrometheusParameters& operator=(const CreateEventStreamingRequestSinkSinkPrometheusParameters &) = default ;
    CreateEventStreamingRequestSinkSinkPrometheusParameters& operator=(CreateEventStreamingRequestSinkSinkPrometheusParameters &&) = default ;
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
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType & authorizationType() const { DARABONBA_PTR_GET_CONST(authorizationType_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType authorizationType() { DARABONBA_PTR_GET(authorizationType_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setAuthorizationType(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType & authorizationType) { DARABONBA_PTR_SET_VALUE(authorizationType_, authorizationType) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setAuthorizationType(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType && authorizationType) { DARABONBA_PTR_SET_RVALUE(authorizationType_, authorizationType) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersData) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersData data() { DARABONBA_PTR_GET(data_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersData) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setData(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setData(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // headerParameters Field Functions 
    bool hasHeaderParameters() const { return this->headerParameters_ != nullptr;};
    void deleteHeaderParameters() { this->headerParameters_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters & headerParameters() const { DARABONBA_PTR_GET_CONST(headerParameters_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters headerParameters() { DARABONBA_PTR_GET(headerParameters_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setHeaderParameters(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters & headerParameters) { DARABONBA_PTR_SET_VALUE(headerParameters_, headerParameters) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setHeaderParameters(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters && headerParameters) { DARABONBA_PTR_SET_RVALUE(headerParameters_, headerParameters) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType & networkType() const { DARABONBA_PTR_GET_CONST(networkType_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType networkType() { DARABONBA_PTR_GET(networkType_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setNetworkType(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType & networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setNetworkType(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType && networkType) { DARABONBA_PTR_SET_RVALUE(networkType_, networkType) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersPassword & password() const { DARABONBA_PTR_GET_CONST(password_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersPassword) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersPassword password() { DARABONBA_PTR_GET(password_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersPassword) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setPassword(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersPassword & password) { DARABONBA_PTR_SET_VALUE(password_, password) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setPassword(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersPassword && password) { DARABONBA_PTR_SET_RVALUE(password_, password) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId & securityGroupId() const { DARABONBA_PTR_GET_CONST(securityGroupId_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId securityGroupId() { DARABONBA_PTR_GET(securityGroupId_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setSecurityGroupId(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId & securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setSecurityGroupId(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId && securityGroupId) { DARABONBA_PTR_SET_RVALUE(securityGroupId_, securityGroupId) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersURL & URL() const { DARABONBA_PTR_GET_CONST(URL_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersURL) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersURL URL() { DARABONBA_PTR_GET(URL_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersURL) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setURL(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersURL & URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setURL(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersURL && URL) { DARABONBA_PTR_SET_RVALUE(URL_, URL) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersUsername & username() const { DARABONBA_PTR_GET_CONST(username_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersUsername) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersUsername username() { DARABONBA_PTR_GET(username_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersUsername) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setUsername(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersUsername & username) { DARABONBA_PTR_SET_VALUE(username_, username) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setUsername(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersUsername && username) { DARABONBA_PTR_SET_RVALUE(username_, username) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setVSwitchId(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setVSwitchId(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId & vpcId() const { DARABONBA_PTR_GET_CONST(vpcId_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId) };
    inline Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId vpcId() { DARABONBA_PTR_GET(vpcId_, Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setVpcId(const Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId & vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };
    inline CreateEventStreamingRequestSinkSinkPrometheusParameters& setVpcId(Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId && vpcId) { DARABONBA_PTR_SET_RVALUE(vpcId_, vpcId) };


  protected:
    // The authentication method.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersAuthorizationType> authorizationType_ = nullptr;
    // The metric data.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersData> data_ = nullptr;
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersHeaderParameters> headerParameters_ = nullptr;
    // The network type.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersNetworkType> networkType_ = nullptr;
    // The password.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersPassword> password_ = nullptr;
    // The ID of the security group to which the Managed Service for Prometheus instance belongs.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersSecurityGroupId> securityGroupId_ = nullptr;
    // The URL for the remote write configuration item of the Managed Service for Prometheus instance.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersURL> URL_ = nullptr;
    // The username.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersUsername> username_ = nullptr;
    // The ID of the vSwitch with which the Managed Service for Prometheus instance is associated.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVSwitchId> vSwitchId_ = nullptr;
    // The ID of the VPC to which the Managed Service for Prometheus instance belongs.
    std::shared_ptr<Models::CreateEventStreamingRequestSinkSinkPrometheusParametersVpcId> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
