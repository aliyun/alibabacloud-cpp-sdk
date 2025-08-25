// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETECUBECARDWHITELISTCONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETECUBECARDWHITELISTCONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20200710
{
namespace Models
{
  class DeleteCubecardWhitelistContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteCubecardWhitelistContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WhitelistId, whitelistId_);
      DARABONBA_PTR_TO_JSON(WhitelistValue, whitelistValue_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteCubecardWhitelistContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WhitelistId, whitelistId_);
      DARABONBA_PTR_FROM_JSON(WhitelistValue, whitelistValue_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DeleteCubecardWhitelistContentRequest() = default ;
    DeleteCubecardWhitelistContentRequest(const DeleteCubecardWhitelistContentRequest &) = default ;
    DeleteCubecardWhitelistContentRequest(DeleteCubecardWhitelistContentRequest &&) = default ;
    DeleteCubecardWhitelistContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteCubecardWhitelistContentRequest() = default ;
    DeleteCubecardWhitelistContentRequest& operator=(const DeleteCubecardWhitelistContentRequest &) = default ;
    DeleteCubecardWhitelistContentRequest& operator=(DeleteCubecardWhitelistContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->tenantId_ != nullptr && this->whitelistId_ != nullptr && this->whitelistValue_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteCubecardWhitelistContentRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteCubecardWhitelistContentRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // whitelistId Field Functions 
    bool hasWhitelistId() const { return this->whitelistId_ != nullptr;};
    void deleteWhitelistId() { this->whitelistId_ = nullptr;};
    inline string whitelistId() const { DARABONBA_PTR_GET_DEFAULT(whitelistId_, "") };
    inline DeleteCubecardWhitelistContentRequest& setWhitelistId(string whitelistId) { DARABONBA_PTR_SET_VALUE(whitelistId_, whitelistId) };


    // whitelistValue Field Functions 
    bool hasWhitelistValue() const { return this->whitelistValue_ != nullptr;};
    void deleteWhitelistValue() { this->whitelistValue_ = nullptr;};
    inline string whitelistValue() const { DARABONBA_PTR_GET_DEFAULT(whitelistValue_, "") };
    inline DeleteCubecardWhitelistContentRequest& setWhitelistValue(string whitelistValue) { DARABONBA_PTR_SET_VALUE(whitelistValue_, whitelistValue) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DeleteCubecardWhitelistContentRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> whitelistId_ = nullptr;
    std::shared_ptr<string> whitelistValue_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20200710
#endif
