// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEREALTIMELOGDELIVERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEREALTIMELOGDELIVERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DisableRealtimeLogDeliveryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, DisableRealtimeLogDeliveryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    DisableRealtimeLogDeliveryRequest() = default ;
    DisableRealtimeLogDeliveryRequest(const DisableRealtimeLogDeliveryRequest &) = default ;
    DisableRealtimeLogDeliveryRequest(DisableRealtimeLogDeliveryRequest &&) = default ;
    DisableRealtimeLogDeliveryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableRealtimeLogDeliveryRequest() = default ;
    DisableRealtimeLogDeliveryRequest& operator=(const DisableRealtimeLogDeliveryRequest &) = default ;
    DisableRealtimeLogDeliveryRequest& operator=(DisableRealtimeLogDeliveryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->logstore_ != nullptr && this->project_ != nullptr && this->region_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DisableRealtimeLogDeliveryRequest& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline DisableRealtimeLogDeliveryRequest& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline DisableRealtimeLogDeliveryRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DisableRealtimeLogDeliveryRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The accelerated domain name for which you want to disable real-time log delivery. You can specify multiple domain names and separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> domain_ = nullptr;
    // The name of the Logstore where log entries are stored.
    std::shared_ptr<string> logstore_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region where the Log Service project is deployed.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
