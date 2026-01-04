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
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including required parameters, request syntax, and instance status. If the request fails the dry run, an error message is returned. If the request passes the dry run, the request ID is returned.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // The region ID of the hosted connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> token_ {};
    // The ID of the VBR.
    // 
    // This parameter is required.
    shared_ptr<string> vbrId_ {};
    // The ID of the hosted connection.
    // 
    // This parameter is required.
    shared_ptr<string> vpconnId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
