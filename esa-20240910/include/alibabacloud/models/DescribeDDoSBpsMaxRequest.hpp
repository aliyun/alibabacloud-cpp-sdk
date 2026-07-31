// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSMAXREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSBPSMAXREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class DescribeDDoSBpsMaxRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDDoSBpsMaxRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDDoSBpsMaxRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDDoSBpsMaxRequest() = default ;
    DescribeDDoSBpsMaxRequest(const DescribeDDoSBpsMaxRequest &) = default ;
    DescribeDDoSBpsMaxRequest(DescribeDDoSBpsMaxRequest &&) = default ;
    DescribeDDoSBpsMaxRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDDoSBpsMaxRequest() = default ;
    DescribeDDoSBpsMaxRequest& operator=(const DescribeDDoSBpsMaxRequest &) = default ;
    DescribeDDoSBpsMaxRequest& operator=(DescribeDDoSBpsMaxRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->coverage_ == nullptr
        && this->endTime_ == nullptr && this->siteId_ == nullptr && this->startTime_ == nullptr; };
    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline DescribeDDoSBpsMaxRequest& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeDDoSBpsMaxRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline DescribeDDoSBpsMaxRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeDDoSBpsMaxRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The protection region. If this parameter is not specified, the default value global is used. Valid values:
    // 
    // - domestic: the Chinese mainland.
    // 
    // - overseas: global (excluding the Chinese mainland).
    // 
    // - global: global.
    shared_ptr<string> coverage_ {};
    // The end of the time range to query. Specify the time in ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    // 
    // >The end time must be later than the start time.
    shared_ptr<string> endTime_ {};
    // The site ID, which can be obtained by calling the [ListSites](url) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The beginning of the time range to query. Specify the time in ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
