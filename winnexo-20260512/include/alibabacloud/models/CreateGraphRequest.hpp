// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEGRAPHREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEGRAPHREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateGraphRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateGraphRequest& obj) { 
      DARABONBA_PTR_TO_JSON(businessProfile, businessProfile_);
      DARABONBA_PTR_TO_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(graphName, graphName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateGraphRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(businessProfile, businessProfile_);
      DARABONBA_PTR_FROM_JSON(dataSourceId, dataSourceId_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(graphName, graphName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateGraphRequest() = default ;
    CreateGraphRequest(const CreateGraphRequest &) = default ;
    CreateGraphRequest(CreateGraphRequest &&) = default ;
    CreateGraphRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateGraphRequest() = default ;
    CreateGraphRequest& operator=(const CreateGraphRequest &) = default ;
    CreateGraphRequest& operator=(CreateGraphRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->businessProfile_ == nullptr
        && this->dataSourceId_ == nullptr && this->displayName_ == nullptr && this->graphName_ == nullptr && this->tenantId_ == nullptr; };
    // businessProfile Field Functions 
    bool hasBusinessProfile() const { return this->businessProfile_ != nullptr;};
    void deleteBusinessProfile() { this->businessProfile_ = nullptr;};
    inline string getBusinessProfile() const { DARABONBA_PTR_GET_DEFAULT(businessProfile_, "") };
    inline CreateGraphRequest& setBusinessProfile(string businessProfile) { DARABONBA_PTR_SET_VALUE(businessProfile_, businessProfile) };


    // dataSourceId Field Functions 
    bool hasDataSourceId() const { return this->dataSourceId_ != nullptr;};
    void deleteDataSourceId() { this->dataSourceId_ = nullptr;};
    inline int64_t getDataSourceId() const { DARABONBA_PTR_GET_DEFAULT(dataSourceId_, 0L) };
    inline CreateGraphRequest& setDataSourceId(int64_t dataSourceId) { DARABONBA_PTR_SET_VALUE(dataSourceId_, dataSourceId) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateGraphRequest& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // graphName Field Functions 
    bool hasGraphName() const { return this->graphName_ != nullptr;};
    void deleteGraphName() { this->graphName_ = nullptr;};
    inline string getGraphName() const { DARABONBA_PTR_GET_DEFAULT(graphName_, "") };
    inline CreateGraphRequest& setGraphName(string graphName) { DARABONBA_PTR_SET_VALUE(graphName_, graphName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateGraphRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 业务说明（可选）
    shared_ptr<string> businessProfile_ {};
    // 绑定的数据源 ID（控制台已创建的 RDB 类数据源）
    // 
    // This parameter is required.
    shared_ptr<int64_t> dataSourceId_ {};
    // 图谱展示名（可选，租户内大小写不敏感唯一，最多200字）
    shared_ptr<string> displayName_ {};
    // 图谱名称，字母开头+字母/数字/下划线，长度不超过64，租户内唯一
    // 
    // This parameter is required.
    shared_ptr<string> graphName_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
