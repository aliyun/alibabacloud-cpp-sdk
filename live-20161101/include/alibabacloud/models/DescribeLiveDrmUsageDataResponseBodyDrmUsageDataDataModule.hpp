// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODYDRMUSAGEDATADATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDRMUSAGEDATARESPONSEBODYDRMUSAGEDATADATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DrmType, drmType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DrmType, drmType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule() = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule(const DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule &) = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule(DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule &&) = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule() = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& operator=(const DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule &) = default ;
    DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& operator=(DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->domain_ != nullptr && this->drmType_ != nullptr && this->region_ != nullptr && this->timeStamp_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // drmType Field Functions 
    bool hasDrmType() const { return this->drmType_ != nullptr;};
    void deleteDrmType() { this->drmType_ = nullptr;};
    inline string drmType() const { DARABONBA_PTR_GET_DEFAULT(drmType_, "") };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& setDrmType(string drmType) { DARABONBA_PTR_SET_VALUE(drmType_, drmType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDrmUsageDataResponseBodyDrmUsageDataDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of times DRM-encrypted live streams are requested.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The domain name. If the value of SplitBy includes domain, the returned data is grouped by domain name.
    std::shared_ptr<string> domain_ = nullptr;
    // The DRM type. If the value of SplitBy includes drm_type, the returned data is grouped by DRM type.
    std::shared_ptr<string> drmType_ = nullptr;
    // The ID of the region. If the value of SplitBy includes region, the returned data is grouped by region.
    std::shared_ptr<string> region_ = nullptr;
    // The timestamp of the returned data.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
