// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYRECOGNIZERULEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYRECOGNIZERULEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class QueryRecognizeRuleDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRecognizeRuleDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SensitiveName, sensitiveName_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRecognizeRuleDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SensitiveName, sensitiveName_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
    };
    QueryRecognizeRuleDetailRequest() = default ;
    QueryRecognizeRuleDetailRequest(const QueryRecognizeRuleDetailRequest &) = default ;
    QueryRecognizeRuleDetailRequest(QueryRecognizeRuleDetailRequest &&) = default ;
    QueryRecognizeRuleDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRecognizeRuleDetailRequest() = default ;
    QueryRecognizeRuleDetailRequest& operator=(const QueryRecognizeRuleDetailRequest &) = default ;
    QueryRecognizeRuleDetailRequest& operator=(QueryRecognizeRuleDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sensitiveName_ != nullptr
        && this->tenantId_ != nullptr; };
    // sensitiveName Field Functions 
    bool hasSensitiveName() const { return this->sensitiveName_ != nullptr;};
    void deleteSensitiveName() { this->sensitiveName_ = nullptr;};
    inline string sensitiveName() const { DARABONBA_PTR_GET_DEFAULT(sensitiveName_, "") };
    inline QueryRecognizeRuleDetailRequest& setSensitiveName(string sensitiveName) { DARABONBA_PTR_SET_VALUE(sensitiveName_, sensitiveName) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline QueryRecognizeRuleDetailRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The name of the sensitive field. To obtain the name of the sensitive field, call the [QuerySensNodeInfo](https://help.aliyun.com/document_detail/2747189.html) operation or log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Data Category and Sensitivity Level page.
    // 
    // This parameter is required.
    std::shared_ptr<string> sensitiveName_ = nullptr;
    // The tenant ID. To obtain the tenant ID, perform the following steps: Log on to the [DataWorks console](https://workbench.data.aliyun.com/console). Find your workspace and go to the DataStudio page. On the DataStudio page, click the logon username in the upper-right corner and click User Info in the Menu section.
    // 
    // This parameter is required.
    std::shared_ptr<string> tenantId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
