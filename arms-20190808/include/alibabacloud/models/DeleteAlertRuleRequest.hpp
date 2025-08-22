// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DeleteAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
    };
    DeleteAlertRuleRequest() = default ;
    DeleteAlertRuleRequest(const DeleteAlertRuleRequest &) = default ;
    DeleteAlertRuleRequest(DeleteAlertRuleRequest &&) = default ;
    DeleteAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAlertRuleRequest() = default ;
    DeleteAlertRuleRequest& operator=(const DeleteAlertRuleRequest &) = default ;
    DeleteAlertRuleRequest& operator=(DeleteAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline DeleteAlertRuleRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


  protected:
    // The alert rule ID.
    // 
    // For more information about how to obtain the ID of an alert rule, see [GetAlertRules](https://help.aliyun.com/document_detail/2612348.html).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> alertId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
