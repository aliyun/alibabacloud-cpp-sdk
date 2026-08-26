// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDETECTPORNDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDetectPornDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDetectPornDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(App, app_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Fee, fee_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Stream, stream_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDetectPornDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(App, app_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Fee, fee_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SplitBy, splitBy_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Stream, stream_);
    };
    DescribeLiveDetectPornDataRequest() = default ;
    DescribeLiveDetectPornDataRequest(const DescribeLiveDetectPornDataRequest &) = default ;
    DescribeLiveDetectPornDataRequest(DescribeLiveDetectPornDataRequest &&) = default ;
    DescribeLiveDetectPornDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDetectPornDataRequest() = default ;
    DescribeLiveDetectPornDataRequest& operator=(const DescribeLiveDetectPornDataRequest &) = default ;
    DescribeLiveDetectPornDataRequest& operator=(DescribeLiveDetectPornDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->app_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->fee_ == nullptr && this->ownerId_ == nullptr && this->region_ == nullptr
        && this->regionId_ == nullptr && this->scene_ == nullptr && this->splitBy_ == nullptr && this->startTime_ == nullptr && this->stream_ == nullptr; };
    // app Field Functions 
    bool hasApp() const { return this->app_ != nullptr;};
    void deleteApp() { this->app_ = nullptr;};
    inline string getApp() const { DARABONBA_PTR_GET_DEFAULT(app_, "") };
    inline DescribeLiveDetectPornDataRequest& setApp(string app) { DARABONBA_PTR_SET_VALUE(app_, app) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveDetectPornDataRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveDetectPornDataRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // fee Field Functions 
    bool hasFee() const { return this->fee_ != nullptr;};
    void deleteFee() { this->fee_ = nullptr;};
    inline string getFee() const { DARABONBA_PTR_GET_DEFAULT(fee_, "") };
    inline DescribeLiveDetectPornDataRequest& setFee(string fee) { DARABONBA_PTR_SET_VALUE(fee_, fee) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveDetectPornDataRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDetectPornDataRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveDetectPornDataRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeLiveDetectPornDataRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // splitBy Field Functions 
    bool hasSplitBy() const { return this->splitBy_ != nullptr;};
    void deleteSplitBy() { this->splitBy_ = nullptr;};
    inline string getSplitBy() const { DARABONBA_PTR_GET_DEFAULT(splitBy_, "") };
    inline DescribeLiveDetectPornDataRequest& setSplitBy(string splitBy) { DARABONBA_PTR_SET_VALUE(splitBy_, splitBy) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveDetectPornDataRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stream Field Functions 
    bool hasStream() const { return this->stream_ != nullptr;};
    void deleteStream() { this->stream_ = nullptr;};
    inline string getStream() const { DARABONBA_PTR_GET_DEFAULT(stream_, "") };
    inline DescribeLiveDetectPornDataRequest& setStream(string stream) { DARABONBA_PTR_SET_VALUE(stream_, stream) };


  protected:
    // The name of the application to which the stream belongs.
    shared_ptr<string> app_ {};
    // The streaming domain to query.
    // 
    // - You can query one or more domain names. To query multiple domain names, separate them with commas (,).
    // 
    // - If you do not specify this parameter, the service returns the merged data for all streaming domains.
    shared_ptr<string> domainName_ {};
    // The end of the time range to query. Specify the time in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    shared_ptr<string> endTime_ {};
    // You have a daily free quota for image scans. Valid values:
    // 
    // - **free**
    // 
    // - **charge**
    shared_ptr<string> fee_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region where the domain name is located.
    shared_ptr<string> region_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The detection scenario. Valid values:
    // 
    // - **porn** (default): pornography detection.
    // 
    // - **terrorism**: terrorism and political content detection.
    // 
    // - **ad**: ad and text violation detection.
    // 
    // - **live**: undesirable live streaming scenario detection.
    // 
    // - **logo**: logo detection.
    shared_ptr<string> scene_ {};
    // The list of grouping fields. Separate multiple fields with commas (,).
    // 
    // > If you leave this parameter empty, the service returns only TimeStamp and Count.
    shared_ptr<string> splitBy_ {};
    // The start of the time range to query. Specify the time in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time must be in UTC.
    // 
    // > - You can query data from the last 90 days.
    // 
    // - The minimum data granularity is 5 minutes. If you leave this parameter empty, the service queries data from the last 24 hours by default.
    shared_ptr<string> startTime_ {};
    // The stream name.
    shared_ptr<string> stream_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
