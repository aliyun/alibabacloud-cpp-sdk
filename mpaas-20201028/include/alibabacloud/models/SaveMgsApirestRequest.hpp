// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEMGSAPIRESTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEMGSAPIRESTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MPaaS20201028
{
namespace Models
{
  class SaveMgsApirestRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveMgsApirestRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(MpaasMappcenterMgsApirestSaveJsonStr, mpaasMappcenterMgsApirestSaveJsonStr_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SaveMgsApirestRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(MpaasMappcenterMgsApirestSaveJsonStr, mpaasMappcenterMgsApirestSaveJsonStr_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SaveMgsApirestRequest() = default ;
    SaveMgsApirestRequest(const SaveMgsApirestRequest &) = default ;
    SaveMgsApirestRequest(SaveMgsApirestRequest &&) = default ;
    SaveMgsApirestRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveMgsApirestRequest() = default ;
    SaveMgsApirestRequest& operator=(const SaveMgsApirestRequest &) = default ;
    SaveMgsApirestRequest& operator=(SaveMgsApirestRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->mpaasMappcenterMgsApirestSaveJsonStr_ != nullptr && this->tenantId_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline SaveMgsApirestRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // mpaasMappcenterMgsApirestSaveJsonStr Field Functions 
    bool hasMpaasMappcenterMgsApirestSaveJsonStr() const { return this->mpaasMappcenterMgsApirestSaveJsonStr_ != nullptr;};
    void deleteMpaasMappcenterMgsApirestSaveJsonStr() { this->mpaasMappcenterMgsApirestSaveJsonStr_ = nullptr;};
    inline string mpaasMappcenterMgsApirestSaveJsonStr() const { DARABONBA_PTR_GET_DEFAULT(mpaasMappcenterMgsApirestSaveJsonStr_, "") };
    inline SaveMgsApirestRequest& setMpaasMappcenterMgsApirestSaveJsonStr(string mpaasMappcenterMgsApirestSaveJsonStr) { DARABONBA_PTR_SET_VALUE(mpaasMappcenterMgsApirestSaveJsonStr_, mpaasMappcenterMgsApirestSaveJsonStr) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline SaveMgsApirestRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SaveMgsApirestRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> mpaasMappcenterMgsApirestSaveJsonStr_ = nullptr;
    std::shared_ptr<string> tenantId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MPaaS20201028
#endif
