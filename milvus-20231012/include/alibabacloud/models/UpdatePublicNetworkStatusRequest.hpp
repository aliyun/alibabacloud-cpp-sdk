// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPUBLICNETWORKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPUBLICNETWORKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class UpdatePublicNetworkStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePublicNetworkStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cidr, cidr_);
      DARABONBA_PTR_TO_JSON(ComponentType, componentType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PublicNetworkEnabled, publicNetworkEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePublicNetworkStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cidr, cidr_);
      DARABONBA_PTR_FROM_JSON(ComponentType, componentType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PublicNetworkEnabled, publicNetworkEnabled_);
    };
    UpdatePublicNetworkStatusRequest() = default ;
    UpdatePublicNetworkStatusRequest(const UpdatePublicNetworkStatusRequest &) = default ;
    UpdatePublicNetworkStatusRequest(UpdatePublicNetworkStatusRequest &&) = default ;
    UpdatePublicNetworkStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePublicNetworkStatusRequest() = default ;
    UpdatePublicNetworkStatusRequest& operator=(const UpdatePublicNetworkStatusRequest &) = default ;
    UpdatePublicNetworkStatusRequest& operator=(UpdatePublicNetworkStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidr_ != nullptr
        && this->componentType_ != nullptr && this->instanceId_ != nullptr && this->publicNetworkEnabled_ != nullptr; };
    // cidr Field Functions 
    bool hasCidr() const { return this->cidr_ != nullptr;};
    void deleteCidr() { this->cidr_ = nullptr;};
    inline string cidr() const { DARABONBA_PTR_GET_DEFAULT(cidr_, "") };
    inline UpdatePublicNetworkStatusRequest& setCidr(string cidr) { DARABONBA_PTR_SET_VALUE(cidr_, cidr) };


    // componentType Field Functions 
    bool hasComponentType() const { return this->componentType_ != nullptr;};
    void deleteComponentType() { this->componentType_ = nullptr;};
    inline string componentType() const { DARABONBA_PTR_GET_DEFAULT(componentType_, "") };
    inline UpdatePublicNetworkStatusRequest& setComponentType(string componentType) { DARABONBA_PTR_SET_VALUE(componentType_, componentType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdatePublicNetworkStatusRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // publicNetworkEnabled Field Functions 
    bool hasPublicNetworkEnabled() const { return this->publicNetworkEnabled_ != nullptr;};
    void deletePublicNetworkEnabled() { this->publicNetworkEnabled_ = nullptr;};
    inline bool publicNetworkEnabled() const { DARABONBA_PTR_GET_DEFAULT(publicNetworkEnabled_, false) };
    inline UpdatePublicNetworkStatusRequest& setPublicNetworkEnabled(bool publicNetworkEnabled) { DARABONBA_PTR_SET_VALUE(publicNetworkEnabled_, publicNetworkEnabled) };


  protected:
    // The CIDR blocks.
    std::shared_ptr<string> cidr_ = nullptr;
    // The component type. Valid values:
    // 
    // *   Proxy
    // 
    // This parameter is required.
    std::shared_ptr<string> componentType_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // Enable /disable the Internet.
    // 
    // This parameter is required.
    std::shared_ptr<bool> publicNetworkEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
