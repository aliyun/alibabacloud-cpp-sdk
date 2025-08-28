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
    virtual bool empty() const override { this->dryRun_ != nullptr
        && this->orderMode_ != nullptr && this->regionId_ != nullptr && this->token_ != nullptr && this->vbrId_ != nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateVpconnFromVbrRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // orderMode Field Functions 
    bool hasOrderMode() const { return this->orderMode_ != nullptr;};
    void deleteOrderMode() { this->orderMode_ = nullptr;};
    inline string orderMode() const { DARABONBA_PTR_GET_DEFAULT(orderMode_, "") };
    inline CreateVpconnFromVbrRequest& setOrderMode(string orderMode) { DARABONBA_PTR_SET_VALUE(orderMode_, orderMode) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateVpconnFromVbrRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline CreateVpconnFromVbrRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // vbrId Field Functions 
    bool hasVbrId() const { return this->vbrId_ != nullptr;};
    void deleteVbrId() { this->vbrId_ = nullptr;};
    inline string vbrId() const { DARABONBA_PTR_GET_DEFAULT(vbrId_, "") };
    inline CreateVpconnFromVbrRequest& setVbrId(string vbrId) { DARABONBA_PTR_SET_VALUE(vbrId_, vbrId) };


  protected:
    // Specifies whether to perform only a dry run, without performing the actual request. Valid values:
    // 
    // *   **true**: performs only a dry run. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and instance status. If the request fails the dry run, an error message is returned. If the request passes the dry run, the system returns the ID of the request.
    // *   **false** (default): performs a dry run and performs the actual request. If the request passes the dry run, a 2xx HTTP status code is returned and the operation is performed.
    std::shared_ptr<bool> dryRun_ = nullptr;
    // The payer for the shared Express Connect circuit. Valid values:
    // 
    // *   **PayByPhysicalConnectionOwner**: the owner of the shared Express Connect circuit
    // *   **PayByVirtualPhysicalConnectionOwner**: the owner of the hosted connection
    std::shared_ptr<string> orderMode_ = nullptr;
    // The region ID of the hosted connection.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that it is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> token_ = nullptr;
    // The ID of the associated VBR.
    // 
    // This parameter is required.
    std::shared_ptr<string> vbrId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
