// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVESTREAMSTOTALCOUNTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveStreamsTotalCountRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveStreamsTotalCountRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Typ, typ_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveStreamsTotalCountRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Typ, typ_);
    };
    DescribeLiveStreamsTotalCountRequest() = default ;
    DescribeLiveStreamsTotalCountRequest(const DescribeLiveStreamsTotalCountRequest &) = default ;
    DescribeLiveStreamsTotalCountRequest(DescribeLiveStreamsTotalCountRequest &&) = default ;
    DescribeLiveStreamsTotalCountRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveStreamsTotalCountRequest() = default ;
    DescribeLiveStreamsTotalCountRequest& operator=(const DescribeLiveStreamsTotalCountRequest &) = default ;
    DescribeLiveStreamsTotalCountRequest& operator=(DescribeLiveStreamsTotalCountRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainName_ == nullptr
        && this->endTime_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->startTime_ == nullptr && this->typ_ == nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeLiveStreamsTotalCountRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeLiveStreamsTotalCountRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeLiveStreamsTotalCountRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeLiveStreamsTotalCountRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeLiveStreamsTotalCountRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // typ Field Functions 
    bool hasTyp() const { return this->typ_ != nullptr;};
    void deleteTyp() { this->typ_ = nullptr;};
    inline string getTyp() const { DARABONBA_PTR_GET_DEFAULT(typ_, "") };
    inline DescribeLiveStreamsTotalCountRequest& setTyp(string typ) { DARABONBA_PTR_SET_VALUE(typ_, typ) };


  protected:
    // The ingest domain or streaming domain. This parameter is required when you query domain-level data. You can specify up to 10 domain names in a batch query. Separate multiple domain names with commas (,).
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The end time. The end time must be later than the start time. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format (UTC).
    // > The interval between StartTime and EndTime must be within 15 days, and EndTime cannot be later than the current time. Data for the current day can be queried only on the next day.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The start time. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format (UTC).
    // > The maximum query range is the last 1.5 years.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // If you leave this parameter empty, domain-level data is queried by default. Set this parameter to aliuid to query UID-level data.
    shared_ptr<string> typ_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
