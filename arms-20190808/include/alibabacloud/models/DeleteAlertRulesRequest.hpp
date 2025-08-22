// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteAlertRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertIds, alertIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteAlertRulesRequest() = default ;
    DeleteAlertRulesRequest(const DeleteAlertRulesRequest &) = default ;
    DeleteAlertRulesRequest(DeleteAlertRulesRequest &&) = default ;
    DeleteAlertRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertRulesRequest() = default ;
    DeleteAlertRulesRequest& operator=(const DeleteAlertRulesRequest &) = default ;
    DeleteAlertRulesRequest& operator=(DeleteAlertRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertIds_ != nullptr
        && this->regionId_ != nullptr; };
    // alertIds Field Functions 
    bool hasAlertIds() const { return this->alertIds_ != nullptr;};
    void deleteAlertIds() { this->alertIds_ = nullptr;};
    inline string alertIds() const { DARABONBA_PTR_GET_DEFAULT(alertIds_, "") };
    inline DeleteAlertRulesRequest& setAlertIds(string alertIds) { DARABONBA_PTR_SET_VALUE(alertIds_, alertIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the alert rules that you want to delete. The value is a JSON array, for example, `[123, 234]`. You can call the SearchAlertRules operation and view the `Id` parameter in the response to obtain the alert rule ID. For more information, see [SearchAlertRules](https://help.aliyun.com/document_detail/175825.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> alertIds_ = nullptr;
    // The region ID. Default value: `cn-hangzhou`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
