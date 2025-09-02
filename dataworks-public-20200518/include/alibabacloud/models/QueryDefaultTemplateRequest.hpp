// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDEFAULTTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDEFAULTTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryDefaultTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDefaultTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDefaultTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    QueryDefaultTemplateRequest() = default ;
    QueryDefaultTemplateRequest(const QueryDefaultTemplateRequest &) = default ;
    QueryDefaultTemplateRequest(QueryDefaultTemplateRequest &&) = default ;
    QueryDefaultTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDefaultTemplateRequest() = default ;
    QueryDefaultTemplateRequest& operator=(const QueryDefaultTemplateRequest &) = default ;
    QueryDefaultTemplateRequest& operator=(QueryDefaultTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tenantId_ != nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryDefaultTemplateRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
