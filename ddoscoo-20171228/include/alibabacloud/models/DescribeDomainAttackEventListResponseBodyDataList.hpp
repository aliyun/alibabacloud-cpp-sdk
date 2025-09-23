// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINATTACKEVENTLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeDomainAttackEventListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainAttackEventListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainAttackEventListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxQps, maxQps_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeDomainAttackEventListResponseBodyDataList() = default ;
    DescribeDomainAttackEventListResponseBodyDataList(const DescribeDomainAttackEventListResponseBodyDataList &) = default ;
    DescribeDomainAttackEventListResponseBodyDataList(DescribeDomainAttackEventListResponseBodyDataList &&) = default ;
    DescribeDomainAttackEventListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainAttackEventListResponseBodyDataList() = default ;
    DescribeDomainAttackEventListResponseBodyDataList& operator=(const DescribeDomainAttackEventListResponseBodyDataList &) = default ;
    DescribeDomainAttackEventListResponseBodyDataList& operator=(DescribeDomainAttackEventListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domain_ != nullptr
        && this->endTime_ != nullptr && this->maxQps_ != nullptr && this->startTime_ != nullptr; };
    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainAttackEventListResponseBodyDataList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDomainAttackEventListResponseBodyDataList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxQps Field Functions 
    bool hasMaxQps() const { return this->maxQps_ != nullptr;};
    void deleteMaxQps() { this->maxQps_ = nullptr;};
    inline int64_t maxQps() const { DARABONBA_PTR_GET_DEFAULT(maxQps_, 0L) };
    inline DescribeDomainAttackEventListResponseBodyDataList& setMaxQps(int64_t maxQps) { DARABONBA_PTR_SET_VALUE(maxQps_, maxQps) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDomainAttackEventListResponseBodyDataList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<int64_t> endTime_ = nullptr;
    std::shared_ptr<int64_t> maxQps_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
