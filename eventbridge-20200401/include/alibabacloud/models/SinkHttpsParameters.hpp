// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINKHTTPSPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_SINKHTTPSPARAMETERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SinkHttpsParametersBody.hpp>
#include <alibabacloud/models/SinkHttpsParametersURL.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class SinkHttpsParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SinkHttpsParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(URL, URL_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, SinkHttpsParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(URL, URL_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    SinkHttpsParameters() = default ;
    SinkHttpsParameters(const SinkHttpsParameters &) = default ;
    SinkHttpsParameters(SinkHttpsParameters &&) = default ;
    SinkHttpsParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SinkHttpsParameters() = default ;
    SinkHttpsParameters& operator=(const SinkHttpsParameters &) = default ;
    SinkHttpsParameters& operator=(SinkHttpsParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && return this->method_ == nullptr && return this->networkType_ == nullptr && return this->securityGroupId_ == nullptr && return this->token_ == nullptr && return this->URL_ == nullptr
        && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const SinkHttpsParametersBody & body() const { DARABONBA_PTR_GET_CONST(body_, SinkHttpsParametersBody) };
    inline SinkHttpsParametersBody body() { DARABONBA_PTR_GET(body_, SinkHttpsParametersBody) };
    inline SinkHttpsParameters& setBody(const SinkHttpsParametersBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline SinkHttpsParameters& setBody(SinkHttpsParametersBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline SinkHttpsParameters& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline SinkHttpsParameters& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline SinkHttpsParameters& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline SinkHttpsParameters& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // URL Field Functions 
    bool hasURL() const { return this->URL_ != nullptr;};
    void deleteURL() { this->URL_ = nullptr;};
    inline const SinkHttpsParametersURL & URL() const { DARABONBA_PTR_GET_CONST(URL_, SinkHttpsParametersURL) };
    inline SinkHttpsParametersURL URL() { DARABONBA_PTR_GET(URL_, SinkHttpsParametersURL) };
    inline SinkHttpsParameters& setURL(const SinkHttpsParametersURL & URL) { DARABONBA_PTR_SET_VALUE(URL_, URL) };
    inline SinkHttpsParameters& setURL(SinkHttpsParametersURL && URL) { DARABONBA_PTR_SET_RVALUE(URL_, URL) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline SinkHttpsParameters& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline SinkHttpsParameters& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    std::shared_ptr<SinkHttpsParametersBody> body_ = nullptr;
    std::shared_ptr<string> method_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<SinkHttpsParametersURL> URL_ = nullptr;
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
