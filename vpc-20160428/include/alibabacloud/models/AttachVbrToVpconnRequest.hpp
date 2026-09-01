// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHVBRTOVPCONNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHVBRTOVPCONNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class AttachVbrToVpconnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachVbrToVpconnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Token, token_);
      DARABONBA_PTR_TO_JSON(VbrId, vbrId_);
      DARABONBA_PTR_TO_JSON(VpconnId, vpconnId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachVbrToVpconnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
      DARABONBA_PTR_FROM_JSON(VbrId, vbrId_);
      DARABONBA_PTR_FROM_JSON(VpconnId, vpconnId_);
    };
    AttachVbrToVpconnRequest() = default ;
    AttachVbrToVpconnRequest(const AttachVbrToVpconnRequest &) = default ;
    AttachVbrToVpconnRequest(AttachVbrToVpconnRequest &&) = default ;
    AttachVbrToVpconnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachVbrToVpconnRequest() = default ;
    AttachVbrToVpconnRequest& operator=(const AttachVbrToVpconnRequest &) = default ;
    AttachVbrToVpconnRequest& operator=(AttachVbrToVpconnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && this->regionId_ == nullptr && this->token_ == nullptr && this->vbrId_ == nullptr && this->vpconnId_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline AttachVbrToVpconnRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachVbrToVpconnRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline AttachVbrToVpconnRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string getVbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline AttachVbrToVpconnRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


    // vpconnId Field Functions 
    bool hasVpconnId() const { return this->vpconnId_ != nullptr;};
    void deleteVpconnId() { this->vpconnId_ = nullptr;};
    inline string getVpconnId() const { DARABONBA_PTR_GET_DEFAULT(vpconnId_, "") };
    inline AttachVbrToVpconnRequest& setVpconnId(string vpconnId) { DARABONBA_PTR_SET_VALUE(vpconnId_, vpconnId) };


  protected:
    // Specifies whether to perform a dry run. Valid values:
    // 
    // - **true**: performs a dry run without associating the VBR instance with shared Express Connect circuits. The system checks whether the required parameters are specified, the request format is valid, and the instance status is correct. If the check fails, the corresponding error is returned. If the check passes, the request ID is returned.
    // - **false** (default): sends a normal request. After the check passes, the VBR instance is directly associated with shared Express Connect circuits.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the shared Express Connect circuits.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // The client token must be unique among different requests. The maximum length is 64 ASCII characters.
    shared_ptr<string> token_ {};
    // The VBR instance ID.
    // >The ID of the VBR instance to be migrated. The VBR must currently be directly attached to an Express Connect circuit owned by the caller, and must be the same VBR specified in CreateVpconnFromVbr.
    // 
    // This parameter is required.
    shared_ptr<string> vbrId_ {};
    // The ID of the shared Express Connect circuits (VirtualPhysicalConnection) instance.
    // >The shared Express Connect circuits instance ID returned by CreateVpconnFromVbr. The instance must have been confirmed and accepted by the tenant (Confirmed) and be in the Enabled state.
    // 
    // This parameter is required.
    shared_ptr<string> vpconnId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
