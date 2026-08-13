// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMORGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMORGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateCustomOrgRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomOrgRequest& obj) { 
      DARABONBA_PTR_TO_JSON(corpId, corpId_);
      DARABONBA_PTR_TO_JSON(corpName, corpName_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomOrgRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(corpId, corpId_);
      DARABONBA_PTR_FROM_JSON(corpName, corpName_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    CreateCustomOrgRequest() = default ;
    CreateCustomOrgRequest(const CreateCustomOrgRequest &) = default ;
    CreateCustomOrgRequest(CreateCustomOrgRequest &&) = default ;
    CreateCustomOrgRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomOrgRequest() = default ;
    CreateCustomOrgRequest& operator=(const CreateCustomOrgRequest &) = default ;
    CreateCustomOrgRequest& operator=(CreateCustomOrgRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->corpId_ == nullptr
        && this->corpName_ == nullptr && this->tenantId_ == nullptr; };
    // corpId Field Functions 
    bool hasCorpId() const { return this->corpId_ != nullptr;};
    void deleteCorpId() { this->corpId_ = nullptr;};
    inline string getCorpId() const { DARABONBA_PTR_GET_DEFAULT(corpId_, "") };
    inline CreateCustomOrgRequest& setCorpId(string corpId) { DARABONBA_PTR_SET_VALUE(corpId_, corpId) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline CreateCustomOrgRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline CreateCustomOrgRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 自定义组织标识，格式：^[a-z0-9][a-z0-9\-]{2,63}$
    // 
    // This parameter is required.
    shared_ptr<string> corpId_ {};
    // 组织展示名称（可选，不传则与 corpId 相同）
    shared_ptr<string> corpName_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
