// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOCONFLUENTINSTANCECOMPONENTSCONFLUENTINSTANCECOMPONENTVO_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCELISTRESPONSEBODYINSTANCELISTINSTANCEVOCONFLUENTINSTANCECOMPONENTSCONFLUENTINSTANCECOMPONENTVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(DeployModule, deployModule_);
      DARABONBA_PTR_TO_JSON(PubEndpoint, pubEndpoint_);
      DARABONBA_PTR_TO_JSON(VpcEndpoint, vpcEndpoint_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(DeployModule, deployModule_);
      DARABONBA_PTR_FROM_JSON(PubEndpoint, pubEndpoint_);
      DARABONBA_PTR_FROM_JSON(VpcEndpoint, vpcEndpoint_);
    };
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO(const GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO(GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO &&) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO() = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& operator=(const GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO &) = default ;
    GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& operator=(GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentType_ == nullptr
        && return this->deployModule_ == nullptr && return this->pubEndpoint_ == nullptr && return this->vpcEndpoint_ == nullptr; };
    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // deployModule Field Functions 
    bool hasDeployModule() const { return this->deployModule_ != nullptr;};
    void deleteDeployModule() { this->deployModule_ = nullptr;};
    inline string deployModule() const { DARABONBA_PTR_GET_DEFAULT(deployModule_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& setDeployModule(string deployModule) { DARABONBA_PTR_SET_VALUE(deployModule_, deployModule) };


    // pubEndpoint Field Functions 
    bool hasPubEndpoint() const { return this->pubEndpoint_ != nullptr;};
    void deletePubEndpoint() { this->pubEndpoint_ = nullptr;};
    inline string pubEndpoint() const { DARABONBA_PTR_GET_DEFAULT(pubEndpoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& setPubEndpoint(string pubEndpoint) { DARABONBA_PTR_SET_VALUE(pubEndpoint_, pubEndpoint) };


    // vpcEndpoint Field Functions 
    bool hasVpcEndpoint() const { return this->vpcEndpoint_ != nullptr;};
    void deleteVpcEndpoint() { this->vpcEndpoint_ = nullptr;};
    inline string vpcEndpoint() const { DARABONBA_PTR_GET_DEFAULT(vpcEndpoint_, "") };
    inline GetInstanceListResponseBodyInstanceListInstanceVOConfluentInstanceComponentsConfluentInstanceComponentVO& setVpcEndpoint(string vpcEndpoint) { DARABONBA_PTR_SET_VALUE(vpcEndpoint_, vpcEndpoint) };


  protected:
    std::shared_ptr<string> componentType_ = nullptr;
    std::shared_ptr<string> deployModule_ = nullptr;
    std::shared_ptr<string> pubEndpoint_ = nullptr;
    std::shared_ptr<string> vpcEndpoint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
