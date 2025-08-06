// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENTREALTIMELOGDELIVERYINFOS_HPP_
#define ALIBABACLOUD_MODELS_LISTVODREALTIMELOGDELIVERYINFOSRESPONSEBODYCONTENTREALTIMELOGDELIVERYINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Logstore, logstore_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(Region, region_);
    };
    friend void from_json(const Darabonba::Json& j, ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
    };
    ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos() = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos(const ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos(ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &&) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos() = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& operator=(const ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &) = default ;
    ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& operator=(ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos &&) = default ;
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
    inline ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListVodRealtimeLogDeliveryInfosResponseBodyContentRealtimeLogDeliveryInfos& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


  protected:
    std::shared_ptr<string> logstore_ = nullptr;
    std::shared_ptr<string> project_ = nullptr;
    std::shared_ptr<string> region_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
