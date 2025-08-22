// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTALERTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTALERTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class StartAlertRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAlertRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAlertRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StartAlertRequest() = default ;
    StartAlertRequest(const StartAlertRequest &) = default ;
    StartAlertRequest(StartAlertRequest &&) = default ;
    StartAlertRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAlertRequest() = default ;
    StartAlertRequest& operator=(const StartAlertRequest &) = default ;
    StartAlertRequest& operator=(StartAlertRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->regionId_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline string alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, "") };
    inline StartAlertRequest& setAlertId(string alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartAlertRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the alert rule. You can call the SearchAlertRules operation and view the `Id` parameter in the response. For more information, see [SearchAlertRules](https://help.aliyun.com/document_detail/175825.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> alertId_ = nullptr;
    // The ID of the region. Set the value to `cn-hangzhou`.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
