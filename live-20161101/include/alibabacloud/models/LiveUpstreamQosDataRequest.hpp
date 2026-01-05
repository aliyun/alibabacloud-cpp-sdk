// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LIVEUPSTREAMQOSDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class LiveUpstreamQosDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiveUpstreamQosDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdnDomains, cdnDomains_);
      DARABONBA_PTR_TO_JSON(CdnIsps, cdnIsps_);
      DARABONBA_PTR_TO_JSON(CdnProvinces, cdnProvinces_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(KwaiSidcs, kwaiSidcs_);
      DARABONBA_PTR_TO_JSON(KwaiTsc, kwaiTsc_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UpstreamDomains, upstreamDomains_);
    };
    friend void from_json(const Darabonba::Json& j, LiveUpstreamQosDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnDomains, cdnDomains_);
      DARABONBA_PTR_FROM_JSON(CdnIsps, cdnIsps_);
      DARABONBA_PTR_FROM_JSON(CdnProvinces, cdnProvinces_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(KwaiSidcs, kwaiSidcs_);
      DARABONBA_PTR_FROM_JSON(KwaiTsc, kwaiTsc_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UpstreamDomains, upstreamDomains_);
    };
    LiveUpstreamQosDataRequest() = default ;
    LiveUpstreamQosDataRequest(const LiveUpstreamQosDataRequest &) = default ;
    LiveUpstreamQosDataRequest(LiveUpstreamQosDataRequest &&) = default ;
    LiveUpstreamQosDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiveUpstreamQosDataRequest() = default ;
    LiveUpstreamQosDataRequest& operator=(const LiveUpstreamQosDataRequest &) = default ;
    LiveUpstreamQosDataRequest& operator=(LiveUpstreamQosDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnDomains_ == nullptr
        && this->cdnIsps_ == nullptr && this->cdnProvinces_ == nullptr && this->endTime_ == nullptr && this->kwaiSidcs_ == nullptr && this->kwaiTsc_ == nullptr
        && this->ownerId_ == nullptr && this->region_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->upstreamDomains_ == nullptr; };
    // cdnDomains Field Functions 
    bool hasCdnDomains() const { return this->cdnDomains_ != nullptr;};
    void deleteCdnDomains() { this->cdnDomains_ = nullptr;};
    inline const vector<string> & getCdnDomains() const { DARABONBA_PTR_GET_CONST(cdnDomains_, vector<string>) };
    inline vector<string> getCdnDomains() { DARABONBA_PTR_GET(cdnDomains_, vector<string>) };
    inline LiveUpstreamQosDataRequest& setCdnDomains(const vector<string> & cdnDomains) { DARABONBA_PTR_SET_VALUE(cdnDomains_, cdnDomains) };
    inline LiveUpstreamQosDataRequest& setCdnDomains(vector<string> && cdnDomains) { DARABONBA_PTR_SET_RVALUE(cdnDomains_, cdnDomains) };


    // cdnIsps Field Functions 
    bool hasCdnIsps() const { return this->cdnIsps_ != nullptr;};
    void deleteCdnIsps() { this->cdnIsps_ = nullptr;};
    inline const vector<string> & getCdnIsps() const { DARABONBA_PTR_GET_CONST(cdnIsps_, vector<string>) };
    inline vector<string> getCdnIsps() { DARABONBA_PTR_GET(cdnIsps_, vector<string>) };
    inline LiveUpstreamQosDataRequest& setCdnIsps(const vector<string> & cdnIsps) { DARABONBA_PTR_SET_VALUE(cdnIsps_, cdnIsps) };
    inline LiveUpstreamQosDataRequest& setCdnIsps(vector<string> && cdnIsps) { DARABONBA_PTR_SET_RVALUE(cdnIsps_, cdnIsps) };


    // cdnProvinces Field Functions 
    bool hasCdnProvinces() const { return this->cdnProvinces_ != nullptr;};
    void deleteCdnProvinces() { this->cdnProvinces_ = nullptr;};
    inline const vector<string> & getCdnProvinces() const { DARABONBA_PTR_GET_CONST(cdnProvinces_, vector<string>) };
    inline vector<string> getCdnProvinces() { DARABONBA_PTR_GET(cdnProvinces_, vector<string>) };
    inline LiveUpstreamQosDataRequest& setCdnProvinces(const vector<string> & cdnProvinces) { DARABONBA_PTR_SET_VALUE(cdnProvinces_, cdnProvinces) };
    inline LiveUpstreamQosDataRequest& setCdnProvinces(vector<string> && cdnProvinces) { DARABONBA_PTR_SET_RVALUE(cdnProvinces_, cdnProvinces) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline LiveUpstreamQosDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // kwaiSidcs Field Functions 
    bool hasKwaiSidcs() const { return this->kwaiSidcs_ != nullptr;};
    void deleteKwaiSidcs() { this->kwaiSidcs_ = nullptr;};
    inline const vector<string> & getKwaiSidcs() const { DARABONBA_PTR_GET_CONST(kwaiSidcs_, vector<string>) };
    inline vector<string> getKwaiSidcs() { DARABONBA_PTR_GET(kwaiSidcs_, vector<string>) };
    inline LiveUpstreamQosDataRequest& setKwaiSidcs(const vector<string> & kwaiSidcs) { DARABONBA_PTR_SET_VALUE(kwaiSidcs_, kwaiSidcs) };
    inline LiveUpstreamQosDataRequest& setKwaiSidcs(vector<string> && kwaiSidcs) { DARABONBA_PTR_SET_RVALUE(kwaiSidcs_, kwaiSidcs) };


    // kwaiTsc Field Functions 
    bool hasKwaiTsc() const { return this->kwaiTsc_ != nullptr;};
    void deleteKwaiTsc() { this->kwaiTsc_ = nullptr;};
    inline const vector<int32_t> & getKwaiTsc() const { DARABONBA_PTR_GET_CONST(kwaiTsc_, vector<int32_t>) };
    inline vector<int32_t> getKwaiTsc() { DARABONBA_PTR_GET(kwaiTsc_, vector<int32_t>) };
    inline LiveUpstreamQosDataRequest& setKwaiTsc(const vector<int32_t> & kwaiTsc) { DARABONBA_PTR_SET_VALUE(kwaiTsc_, kwaiTsc) };
    inline LiveUpstreamQosDataRequest& setKwaiTsc(vector<int32_t> && kwaiTsc) { DARABONBA_PTR_SET_RVALUE(kwaiTsc_, kwaiTsc) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline LiveUpstreamQosDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline LiveUpstreamQosDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline LiveUpstreamQosDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline LiveUpstreamQosDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // upstreamDomains Field Functions 
    bool hasUpstreamDomains() const { return this->upstreamDomains_ != nullptr;};
    void deleteUpstreamDomains() { this->upstreamDomains_ = nullptr;};
    inline const vector<string> & getUpstreamDomains() const { DARABONBA_PTR_GET_CONST(upstreamDomains_, vector<string>) };
    inline vector<string> getUpstreamDomains() { DARABONBA_PTR_GET(upstreamDomains_, vector<string>) };
    inline LiveUpstreamQosDataRequest& setUpstreamDomains(const vector<string> & upstreamDomains) { DARABONBA_PTR_SET_VALUE(upstreamDomains_, upstreamDomains) };
    inline LiveUpstreamQosDataRequest& setUpstreamDomains(vector<string> && upstreamDomains) { DARABONBA_PTR_SET_RVALUE(upstreamDomains_, upstreamDomains) };


  protected:
    shared_ptr<vector<string>> cdnDomains_ {};
    shared_ptr<vector<string>> cdnIsps_ {};
    shared_ptr<vector<string>> cdnProvinces_ {};
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<vector<string>> kwaiSidcs_ {};
    shared_ptr<vector<int32_t>> kwaiTsc_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> region_ {};
    shared_ptr<string> regionId_ {};
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    shared_ptr<vector<string>> upstreamDomains_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
