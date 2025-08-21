// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENATGATEWAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENATGATEWAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DeleteNatGatewayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNatGatewayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ForceDelete, forceDelete_);
      DARABONBA_PTR_TO_JSON(NatGatewayId, natGatewayId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNatGatewayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ForceDelete, forceDelete_);
      DARABONBA_PTR_FROM_JSON(NatGatewayId, natGatewayId_);
    };
    DeleteNatGatewayRequest() = default ;
    DeleteNatGatewayRequest(const DeleteNatGatewayRequest &) = default ;
    DeleteNatGatewayRequest(DeleteNatGatewayRequest &&) = default ;
    DeleteNatGatewayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNatGatewayRequest() = default ;
    DeleteNatGatewayRequest& operator=(const DeleteNatGatewayRequest &) = default ;
    DeleteNatGatewayRequest& operator=(DeleteNatGatewayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forceDelete_ != nullptr
        && this->natGatewayId_ != nullptr; };
    // forceDelete Field Functions 
    bool hasForceDelete() const { return this->forceDelete_ != nullptr;};
    void deleteForceDelete() { this->forceDelete_ = nullptr;};
    inline bool forceDelete() const { DARABONBA_PTR_GET_DEFAULT(forceDelete_, false) };
    inline DeleteNatGatewayRequest& setForceDelete(bool forceDelete) { DARABONBA_PTR_SET_VALUE(forceDelete_, forceDelete) };


    // natGatewayId Field Functions 
    bool hasNatGatewayId() const { return this->natGatewayId_ != nullptr;};
    void deleteNatGatewayId() { this->natGatewayId_ = nullptr;};
    inline string natGatewayId() const { DARABONBA_PTR_GET_DEFAULT(natGatewayId_, "") };
    inline DeleteNatGatewayRequest& setNatGatewayId(string natGatewayId) { DARABONBA_PTR_SET_VALUE(natGatewayId_, natGatewayId) };


  protected:
    // Specifies whether to forcefully delete the NAT instance.
    std::shared_ptr<bool> forceDelete_ = nullptr;
    // The ID of the NAT gateway that you want to delete.
    // 
    // This parameter is required.
    std::shared_ptr<string> natGatewayId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
