// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMELOGDELIVERYDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class ListRealtimeLogDeliveryDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeLogDeliveryDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeLogDeliveryDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    ListRealtimeLogDeliveryDomainsRequest() = default ;
    ListRealtimeLogDeliveryDomainsRequest(const ListRealtimeLogDeliveryDomainsRequest &) = default ;
    ListRealtimeLogDeliveryDomainsRequest(ListRealtimeLogDeliveryDomainsRequest &&) = default ;
    ListRealtimeLogDeliveryDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeLogDeliveryDomainsRequest() = default ;
    ListRealtimeLogDeliveryDomainsRequest& operator=(const ListRealtimeLogDeliveryDomainsRequest &) = default ;
    ListRealtimeLogDeliveryDomainsRequest& operator=(ListRealtimeLogDeliveryDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && return this->project_ == nullptr && return this->region_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline ListRealtimeLogDeliveryDomainsRequest& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListRealtimeLogDeliveryDomainsRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListRealtimeLogDeliveryDomainsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The name of the Logstore that collects log data from Alibaba Cloud CDN in real time. You can specify multiple Logstore names and separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> logstore_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery. You can specify multiple project names and separate them with commas (,).
    // 
    // This parameter is required.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region where the Log Service project is deployed. You can specify multiple region IDs and separate them with commas (,).
    // 
    // For more information about regions, see [Regions that support real-time log delivery](https://help.aliyun.com/document_detail/144883.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
