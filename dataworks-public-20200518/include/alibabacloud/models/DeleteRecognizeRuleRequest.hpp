// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETERECOGNIZERULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETERECOGNIZERULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DeleteRecognizeRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteRecognizeRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveId, sensitiveId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteRecognizeRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveId, sensitiveId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    DeleteRecognizeRuleRequest() = default ;
    DeleteRecognizeRuleRequest(const DeleteRecognizeRuleRequest &) = default ;
    DeleteRecognizeRuleRequest(DeleteRecognizeRuleRequest &&) = default ;
    DeleteRecognizeRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteRecognizeRuleRequest() = default ;
    DeleteRecognizeRuleRequest& operator=(const DeleteRecognizeRuleRequest &) = default ;
    DeleteRecognizeRuleRequest& operator=(DeleteRecognizeRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sensitiveId_ != nullptr
        && this->tenantId_ != nullptr; };
    // sensitiveId Field Functions 
    bool hasSensitiveId() const { return this->sensitiveId_ != nullptr;};
    void deleteSensitiveId() { this->sensitiveId_ = nullptr;};
    inline string sensitiveId() const { DARABONBA_PTR_GET_DEFAULT(sensitiveId_, "") };
    inline DeleteRecognizeRuleRequest& setSensitiveId(string sensitiveId) { DARABONBA_PTR_SET_VALUE(sensitiveId_, sensitiveId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DeleteRecognizeRuleRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The ID of the sensitive field. You can call the [QuerySensNodeInfo](https://help.aliyun.com/document_detail/2747189.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> sensitiveId_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
