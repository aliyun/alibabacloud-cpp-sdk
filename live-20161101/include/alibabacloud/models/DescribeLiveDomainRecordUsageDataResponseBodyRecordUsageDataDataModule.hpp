// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODYRECORDUSAGEDATADATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEDOMAINRECORDUSAGEDATARESPONSEBODYRECORDUSAGEDATADATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule() = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule(const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule(DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule &&) = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule() = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& operator=(const DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule &) = default ;
    DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& operator=(DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->domain_ != nullptr && this->duration_ != nullptr && this->region_ != nullptr && this->timeStamp_ != nullptr && this->type_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeLiveDomainRecordUsageDataResponseBodyRecordUsageDataDataModule& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of peak channels.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The main streaming domain. This parameter is returned if the value of the request parameter SplitBy contains `domain`.
    std::shared_ptr<string> domain_ = nullptr;
    // The recording length. Unit: seconds.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The time when recording started.
    std::shared_ptr<string> timeStamp_ = nullptr;
    // The recording file type. This parameter is returned if the value of the request parameter SplitBy contains `record_fmt`.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
