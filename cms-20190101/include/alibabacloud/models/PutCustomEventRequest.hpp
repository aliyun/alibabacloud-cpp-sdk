// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTCUSTOMEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTCUSTOMEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PutCustomEventRequestEventInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutCustomEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutCustomEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, PutCustomEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventInfo, eventInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    PutCustomEventRequest() = default ;
    PutCustomEventRequest(const PutCustomEventRequest &) = default ;
    PutCustomEventRequest(PutCustomEventRequest &&) = default ;
    PutCustomEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutCustomEventRequest() = default ;
    PutCustomEventRequest& operator=(const PutCustomEventRequest &) = default ;
    PutCustomEventRequest& operator=(PutCustomEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventInfo_ == nullptr
        && return this->regionId_ == nullptr; };
    // eventInfo Field Functions 
    bool hasEventInfo() const { return this->eventInfo_ != nullptr;};
    void deleteEventInfo() { this->eventInfo_ = nullptr;};
    inline const vector<PutCustomEventRequestEventInfo> & eventInfo() const { DARABONBA_PTR_GET_CONST(eventInfo_, vector<PutCustomEventRequestEventInfo>) };
    inline vector<PutCustomEventRequestEventInfo> eventInfo() { DARABONBA_PTR_GET(eventInfo_, vector<PutCustomEventRequestEventInfo>) };
    inline PutCustomEventRequest& setEventInfo(const vector<PutCustomEventRequestEventInfo> & eventInfo) { DARABONBA_PTR_SET_VALUE(eventInfo_, eventInfo) };
    inline PutCustomEventRequest& setEventInfo(vector<PutCustomEventRequestEventInfo> && eventInfo) { DARABONBA_PTR_SET_RVALUE(eventInfo_, eventInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutCustomEventRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The event details.
    // 
    // This parameter is required.
    std::shared_ptr<vector<PutCustomEventRequestEventInfo>> eventInfo_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
