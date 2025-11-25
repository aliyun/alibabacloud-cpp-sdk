// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSRESPONSEBODYPRIVATEDNSREGIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSRESPONSEBODYPRIVATEDNSREGIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNameCount, domainNameCount_);
      DARABONBA_PTR_TO_JSON(NewDomainNameCount, newDomainNameCount_);
      DARABONBA_PTR_TO_JSON(PrivateDnsCount, privateDnsCount_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNameCount, domainNameCount_);
      DARABONBA_PTR_FROM_JSON(NewDomainNameCount, newDomainNameCount_);
      DARABONBA_PTR_FROM_JSON(PrivateDnsCount, privateDnsCount_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList() = default ;
    DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList(const DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList &) = default ;
    DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList(DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList &&) = default ;
    DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList() = default ;
    DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& operator=(const DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList &) = default ;
    DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& operator=(DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNameCount_ == nullptr
        && return this->newDomainNameCount_ == nullptr && return this->privateDnsCount_ == nullptr && return this->regionNo_ == nullptr; };
    // domainNameCount Field Functions 
    bool hasDomainNameCount() const { return this->domainNameCount_ != nullptr;};
    void deleteDomainNameCount() { this->domainNameCount_ = nullptr;};
    inline int64_t domainNameCount() const { DARABONBA_PTR_GET_DEFAULT(domainNameCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& setDomainNameCount(int64_t domainNameCount) { DARABONBA_PTR_SET_VALUE(domainNameCount_, domainNameCount) };


    // newDomainNameCount Field Functions 
    bool hasNewDomainNameCount() const { return this->newDomainNameCount_ != nullptr;};
    void deleteNewDomainNameCount() { this->newDomainNameCount_ = nullptr;};
    inline int64_t newDomainNameCount() const { DARABONBA_PTR_GET_DEFAULT(newDomainNameCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& setNewDomainNameCount(int64_t newDomainNameCount) { DARABONBA_PTR_SET_VALUE(newDomainNameCount_, newDomainNameCount) };


    // privateDnsCount Field Functions 
    bool hasPrivateDnsCount() const { return this->privateDnsCount_ != nullptr;};
    void deletePrivateDnsCount() { this->privateDnsCount_ = nullptr;};
    inline int64_t privateDnsCount() const { DARABONBA_PTR_GET_DEFAULT(privateDnsCount_, 0L) };
    inline DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& setPrivateDnsCount(int64_t privateDnsCount) { DARABONBA_PTR_SET_VALUE(privateDnsCount_, privateDnsCount) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribePrivateDnsStatisticsResponseBodyPrivateDnsRegionList& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    std::shared_ptr<int64_t> domainNameCount_ = nullptr;
    std::shared_ptr<int64_t> newDomainNameCount_ = nullptr;
    std::shared_ptr<int64_t> privateDnsCount_ = nullptr;
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
