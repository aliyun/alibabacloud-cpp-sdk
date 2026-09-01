// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCONNFROMVBRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCONNFROMVBRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateVpconnFromVbrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpconnFromVbrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(OrderMode, orderMode_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpconnFromVbrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(OrderMode, orderMode_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
    };
    CreateVpconnFromVbrRequest() = default ;
    CreateVpconnFromVbrRequest(const CreateVpconnFromVbrRequest &) = default ;
    CreateVpconnFromVbrRequest(CreateVpconnFromVbrRequest &&) = default ;
    CreateVpconnFromVbrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpconnFromVbrRequest() = default ;
    CreateVpconnFromVbrRequest& operator=(const CreateVpconnFromVbrRequest &) = default ;
    CreateVpconnFromVbrRequest& operator=(CreateVpconnFromVbrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->orderMode_ == nullptr && this->regionId_ == nullptr && this->token_ == nullptr && this->vbrId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpconnFromVbrRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // orderMode Field Functions 
    bool hasOrderMode() const { return this->orderMode_ != nullptr;};
    void deleteOrderMode() { this->orderMode_ = nullptr;};
    inline string getOrderMode() const { DARABONBA_PTR_GET_DEFAULT(orderMode_, "") };
    inline CreateVpconnFromVbrRequest& setOrderMode(string orderMode) { DARABONBA_PTR_SET_VALUE(orderMode_, orderMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpconnFromVbrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateVpconnFromVbrRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline CreateVpconnFromVbrRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


  protected:
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without transforming the shared Express Connect circuits mode. The system checks the required parameters, request format, and instance status. If the check fails, the corresponding error is returned. If the check succeeds, the corresponding request ID is returned.
    // - **false** (default): sends a Normal request. After the request passes the check, the shared Express Connect circuits mode is transformed.
    shared_ptr<bool> dryRun_ {};
    // The payer of the shared Express Connect circuits. Valid values:
    // 
    // - **PayByPhysicalConnectionOwner**: The owner of the Express Connect circuit associated with the shared Express Connect circuits pays the fee.
    // - **PayByVirtualPhysicalConnectionOwner**: The owner of the shared Express Connect circuits pays the fee.
    shared_ptr<string> orderMode_ {};
    // The region ID of the shared Express Connect circuits.
    // 
    // You can invoke the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // The client token must be unique among different requests. The maximum length is 64 ASCII characters.
    shared_ptr<string> token_ {};
    // The instance ID of the cross-account VBR.
    // 
    // This parameter is required.
    shared_ptr<string> vbrId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
