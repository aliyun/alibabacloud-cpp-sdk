// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYRESPONSEBODYCONTENTREALTIMELOGDELIVERYINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYRESPONSEBODYCONTENTREALTIMELOGDELIVERYINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& obj) { 
      DARABONBA_PTR_TO_JSON(DmId, dmId_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(DmId, dmId_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo() = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo(const ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo &) = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo(ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo &&) = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo() = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& operator=(const ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo &) = default ;
    ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& operator=(ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dmId_ != nullptr
        && this->domainName_ != nullptr && this->logstore_ != nullptr && this->project_ != nullptr && this->region_ != nullptr && this->status_ != nullptr; };
    // dmId Field Functions 
    bool hasDmId() const { return this->dmId_ != nullptr;};
    void deleteDmId() { this->dmId_ = nullptr;};
    inline int32_t dmId() const { DARABONBA_PTR_GET_DEFAULT(dmId_, 0) };
    inline ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& setDmId(int32_t dmId) { DARABONBA_PTR_SET_VALUE(dmId_, dmId) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListLiveRealtimeLogDeliveryResponseBodyContentRealtimeLogDeliveryInfo& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the domain name.
    std::shared_ptr<int32_t> dmId_ = nullptr;
    // The streaming domain.
    std::shared_ptr<string> domainName_ = nullptr;
    // The name of the Logstore to which log entries are delivered.
    std::shared_ptr<string> logstore_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region where the Log Service project is deployed.
    std::shared_ptr<string> region_ = nullptr;
    // The status of real-time log delivery. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
