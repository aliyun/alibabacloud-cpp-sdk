// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEKMSINSTANCEBINDVPCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEKMSINSTANCEBINDVPCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class UpdateKmsInstanceBindVpcRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateKmsInstanceBindVpcRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_TO_JSON(KmsInstanceId, kmsInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateKmsInstanceBindVpcRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BindVpcs, bindVpcs_);
      DARABONBA_PTR_FROM_JSON(KmsInstanceId, kmsInstanceId_);
    };
    UpdateKmsInstanceBindVpcRequest() = default ;
    UpdateKmsInstanceBindVpcRequest(const UpdateKmsInstanceBindVpcRequest &) = default ;
    UpdateKmsInstanceBindVpcRequest(UpdateKmsInstanceBindVpcRequest &&) = default ;
    UpdateKmsInstanceBindVpcRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateKmsInstanceBindVpcRequest() = default ;
    UpdateKmsInstanceBindVpcRequest& operator=(const UpdateKmsInstanceBindVpcRequest &) = default ;
    UpdateKmsInstanceBindVpcRequest& operator=(UpdateKmsInstanceBindVpcRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindVpcs_ == nullptr
        && this->kmsInstanceId_ == nullptr; };
    // bindVpcs Field Functions 
    bool hasBindVpcs() const { return this->bindVpcs_ != nullptr;};
    void deleteBindVpcs() { this->bindVpcs_ = nullptr;};
    inline string getBindVpcs() const { DARABONBA_PTR_GET_DEFAULT(bindVpcs_, "") };
    inline UpdateKmsInstanceBindVpcRequest& setBindVpcs(string bindVpcs) { DARABONBA_PTR_SET_VALUE(bindVpcs_, bindVpcs) };


    // kmsInstanceId Field Functions 
    bool hasKmsInstanceId() const { return this->kmsInstanceId_ != nullptr;};
    void deleteKmsInstanceId() { this->kmsInstanceId_ = nullptr;};
    inline string getKmsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(kmsInstanceId_, "") };
    inline UpdateKmsInstanceBindVpcRequest& setKmsInstanceId(string kmsInstanceId) { DARABONBA_PTR_SET_VALUE(kmsInstanceId_, kmsInstanceId) };


  protected:
    // The VPC configuration. Each VPC configuration contains the following parameters:
    // 
    // - VpcId: The ID of the VPC.
    // 
    // - VSwitchId: The vSwitch in the VPC.
    // 
    // - RegionID: The region where the VPC resides.
    // 
    // - VpcOwnerId: The Alibaba Cloud account that owns the VPC.
    // 
    // The value is a JSON string in the following format: `[{"VpcId":"${VpcId}","VSwitchId":"${VSwitchId}","RegionId":"${RegionId}","VpcOwnerId":${VpcOwnerId}},...]`.
    // 
    // This parameter is required.
    shared_ptr<string> bindVpcs_ {};
    // The ID of the KMS instance.
    // 
    // This parameter is required.
    shared_ptr<string> kmsInstanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
