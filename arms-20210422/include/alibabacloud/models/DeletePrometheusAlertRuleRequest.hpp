// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEPROMETHEUSALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEPROMETHEUSALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class DeletePrometheusAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeletePrometheusAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
    };
    friend void from_json(const Darabonba::Json& j, DeletePrometheusAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
    };
    DeletePrometheusAlertRuleRequest() = default ;
    DeletePrometheusAlertRuleRequest(const DeletePrometheusAlertRuleRequest &) = default ;
    DeletePrometheusAlertRuleRequest(DeletePrometheusAlertRuleRequest &&) = default ;
    DeletePrometheusAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeletePrometheusAlertRuleRequest() = default ;
    DeletePrometheusAlertRuleRequest& operator=(const DeletePrometheusAlertRuleRequest &) = default ;
    DeletePrometheusAlertRuleRequest& operator=(DeletePrometheusAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertId_ == nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t getAlertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline DeletePrometheusAlertRuleRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> alertId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
