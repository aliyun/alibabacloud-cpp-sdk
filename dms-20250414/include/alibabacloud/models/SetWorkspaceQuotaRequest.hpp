// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETWORKSPACEQUOTAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETWORKSPACEQUOTAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class SetWorkspaceQuotaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetWorkspaceQuotaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(CuQuota, cuQuota_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetWorkspaceQuotaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoPay, autoPay_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(CuQuota, cuQuota_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SetWorkspaceQuotaRequest() = default ;
    SetWorkspaceQuotaRequest(const SetWorkspaceQuotaRequest &) = default ;
    SetWorkspaceQuotaRequest(SetWorkspaceQuotaRequest &&) = default ;
    SetWorkspaceQuotaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetWorkspaceQuotaRequest() = default ;
    SetWorkspaceQuotaRequest& operator=(const SetWorkspaceQuotaRequest &) = default ;
    SetWorkspaceQuotaRequest& operator=(SetWorkspaceQuotaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoPay_ == nullptr
        && this->clientToken_ == nullptr && this->cuQuota_ == nullptr && this->region_ == nullptr && this->workspaceId_ == nullptr; };
    // autoPay Field Functions 
    bool hasAutoPay() const { return this->autoPay_ != nullptr;};
    void deleteAutoPay() { this->autoPay_ = nullptr;};
    inline bool getAutoPay() const { DARABONBA_PTR_GET_DEFAULT(autoPay_, false) };
    inline SetWorkspaceQuotaRequest& setAutoPay(bool autoPay) { DARABONBA_PTR_SET_VALUE(autoPay_, autoPay) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline SetWorkspaceQuotaRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // cuQuota Field Functions 
    bool hasCuQuota() const { return this->cuQuota_ != nullptr;};
    void deleteCuQuota() { this->cuQuota_ = nullptr;};
    inline int32_t getCuQuota() const { DARABONBA_PTR_GET_DEFAULT(cuQuota_, 0) };
    inline SetWorkspaceQuotaRequest& setCuQuota(int32_t cuQuota) { DARABONBA_PTR_SET_VALUE(cuQuota_, cuQuota) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline SetWorkspaceQuotaRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SetWorkspaceQuotaRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // Specifies whether to enable auto-payment for the order.
    shared_ptr<bool> autoPay_ {};
    // A unique, client-generated token to ensure request idempotence. The token can contain only ASCII characters and must be no longer than 64 characters. For more information, see How to ensure idempotence.
    shared_ptr<string> clientToken_ {};
    // The compute unit (CU) quota for the workspace.
    // 
    // This parameter is required.
    shared_ptr<int32_t> cuQuota_ {};
    // The ID of the region.
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // The ID of the Data Management Service (DMS) workspace.
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
