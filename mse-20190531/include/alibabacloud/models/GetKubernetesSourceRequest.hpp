// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKUBERNETESSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETKUBERNETESSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetKubernetesSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKubernetesSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_TO_JSON(IsAll, isAll_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKubernetesSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GatewayUniqueId, gatewayUniqueId_);
      DARABONBA_PTR_FROM_JSON(IsAll, isAll_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetKubernetesSourceRequest() = default ;
    GetKubernetesSourceRequest(const GetKubernetesSourceRequest &) = default ;
    GetKubernetesSourceRequest(GetKubernetesSourceRequest &&) = default ;
    GetKubernetesSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKubernetesSourceRequest() = default ;
    GetKubernetesSourceRequest& operator=(const GetKubernetesSourceRequest &) = default ;
    GetKubernetesSourceRequest& operator=(GetKubernetesSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->gatewayUniqueId_ == nullptr && return this->isAll_ == nullptr && return this->vpcId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetKubernetesSourceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // gatewayUniqueId Field Functions 
    bool hasGatewayUniqueId() const { return this->gatewayUniqueId_ != nullptr;};
    void deleteGatewayUniqueId() { this->gatewayUniqueId_ = nullptr;};
    inline string gatewayUniqueId() const { DARABONBA_PTR_GET_DEFAULT(gatewayUniqueId_, "") };
    inline GetKubernetesSourceRequest& setGatewayUniqueId(string gatewayUniqueId) { DARABONBA_PTR_SET_VALUE(gatewayUniqueId_, gatewayUniqueId) };


    // isAll Field Functions 
    bool hasIsAll() const { return this->isAll_ != nullptr;};
    void deleteIsAll() { this->isAll_ = nullptr;};
    inline bool isAll() const { DARABONBA_PTR_GET_DEFAULT(isAll_, false) };
    inline GetKubernetesSourceRequest& setIsAll(bool isAll) { DARABONBA_PTR_SET_VALUE(isAll_, isAll) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetKubernetesSourceRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The unique ID of the gateway.
    // 
    // This parameter is required.
    std::shared_ptr<string> gatewayUniqueId_ = nullptr;
    // Specifies whether to obtain the information about all Kubernetes clusters. If you set the value to false, only the information about unassociated clusters is obtained.
    std::shared_ptr<bool> isAll_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
