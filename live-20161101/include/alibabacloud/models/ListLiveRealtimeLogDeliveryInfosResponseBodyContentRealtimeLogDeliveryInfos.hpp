// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENTREALTIMELOGDELIVERYINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTLIVEREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENTREALTIMELOGDELIVERYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos(const ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos(ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &&) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos() = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& operator=(const ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &) = default ;
    ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& operator=(ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logstore_ != nullptr
        && this->project_ != nullptr && this->region_ != nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string logstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListLiveRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    // The name of the Logstore to which log entries are delivered.
    std::shared_ptr<string> logstore_ = nullptr;
    // The name of the Log Service project that is used for real-time log delivery.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the region where the Log Service project is deployed.
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
