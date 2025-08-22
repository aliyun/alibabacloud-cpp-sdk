// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODYWAFUSAGEDATAWAFUSAGEDATAITEM_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNWAFUSAGEDATARESPONSEBODYWAFUSAGEDATAWAFUSAGEDATAITEM_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& obj) { 
      DARABONBA_PTR_TO_JSON(AccessCnt, accessCnt_);
      DARABONBA_PTR_TO_JSON(BlockCnt, blockCnt_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(ObserveCnt, observeCnt_);
      DARABONBA_PTR_TO_JSON(SecCu, secCu_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessCnt, accessCnt_);
      DARABONBA_PTR_FROM_JSON(BlockCnt, blockCnt_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(ObserveCnt, observeCnt_);
      DARABONBA_PTR_FROM_JSON(SecCu, secCu_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem() = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem(const DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem &) = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem(DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem &&) = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem() = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& operator=(const DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem &) = default ;
    DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& operator=(DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accessCnt_ != nullptr
        && this->blockCnt_ != nullptr && this->domain_ != nullptr && this->observeCnt_ != nullptr && this->secCu_ != nullptr && this->timeStamp_ != nullptr; };
    // accessCnt Field Functions 
    bool hasAccessCnt() const { return this->accessCnt_ != nullptr;};
    void deleteAccessCnt() { this->accessCnt_ = nullptr;};
    inline int64_t accessCnt() const { DARABONBA_PTR_GET_DEFAULT(accessCnt_, 0L) };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& setAccessCnt(int64_t accessCnt) { DARABONBA_PTR_SET_VALUE(accessCnt_, accessCnt) };


    // blockCnt Field Functions 
    bool hasBlockCnt() const { return this->blockCnt_ != nullptr;};
    void deleteBlockCnt() { this->blockCnt_ = nullptr;};
    inline int64_t blockCnt() const { DARABONBA_PTR_GET_DEFAULT(blockCnt_, 0L) };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& setBlockCnt(int64_t blockCnt) { DARABONBA_PTR_SET_VALUE(blockCnt_, blockCnt) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // observeCnt Field Functions 
    bool hasObserveCnt() const { return this->observeCnt_ != nullptr;};
    void deleteObserveCnt() { this->observeCnt_ = nullptr;};
    inline int64_t observeCnt() const { DARABONBA_PTR_GET_DEFAULT(observeCnt_, 0L) };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& setObserveCnt(int64_t observeCnt) { DARABONBA_PTR_SET_VALUE(observeCnt_, observeCnt) };


    // secCu Field Functions 
    bool hasSecCu() const { return this->secCu_ != nullptr;};
    void deleteSecCu() { this->secCu_ = nullptr;};
    inline int64_t secCu() const { DARABONBA_PTR_GET_DEFAULT(secCu_, 0L) };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& setSecCu(int64_t secCu) { DARABONBA_PTR_SET_VALUE(secCu_, secCu) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeDcdnWafUsageDataResponseBodyWafUsageDataWafUsageDataItem& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    // The number of blocked requests.
    std::shared_ptr<int64_t> accessCnt_ = nullptr;
    // The number of allowed requests.
    std::shared_ptr<int64_t> blockCnt_ = nullptr;
    // The domain name that you want to query. If you do not specify an accelerated domain name, all accelerated domain names are queried by default.
    std::shared_ptr<string> domain_ = nullptr;
    // The end of the time range during which data was queried.
    std::shared_ptr<int64_t> observeCnt_ = nullptr;
    // The time granularity for a query. Unit: seconds.
    // 
    // The time granularity varies with the maximum time range per query. Valid values: 300 (5 minutes), 3600 (1 hour), and 86400 (1 day).
    std::shared_ptr<int64_t> secCu_ = nullptr;
    // The beginning of the time range during which data was queried.
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
