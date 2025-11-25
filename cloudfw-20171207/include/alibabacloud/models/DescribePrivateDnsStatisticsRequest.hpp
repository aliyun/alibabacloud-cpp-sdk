// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRIVATEDNSSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePrivateDnsStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePrivateDnsStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainNameCreatedEndTime, domainNameCreatedEndTime_);
      DARABONBA_PTR_TO_JSON(DomainNameCreatedStartTime, domainNameCreatedStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePrivateDnsStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainNameCreatedEndTime, domainNameCreatedEndTime_);
      DARABONBA_PTR_FROM_JSON(DomainNameCreatedStartTime, domainNameCreatedStartTime_);
    };
    DescribePrivateDnsStatisticsRequest() = default ;
    DescribePrivateDnsStatisticsRequest(const DescribePrivateDnsStatisticsRequest &) = default ;
    DescribePrivateDnsStatisticsRequest(DescribePrivateDnsStatisticsRequest &&) = default ;
    DescribePrivateDnsStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePrivateDnsStatisticsRequest() = default ;
    DescribePrivateDnsStatisticsRequest& operator=(const DescribePrivateDnsStatisticsRequest &) = default ;
    DescribePrivateDnsStatisticsRequest& operator=(DescribePrivateDnsStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainNameCreatedEndTime_ == nullptr
        && return this->domainNameCreatedStartTime_ == nullptr; };
    // domainNameCreatedEndTime Field Functions 
    bool hasDomainNameCreatedEndTime() const { return this->domainNameCreatedEndTime_ != nullptr;};
    void deleteDomainNameCreatedEndTime() { this->domainNameCreatedEndTime_ = nullptr;};
    inline int64_t domainNameCreatedEndTime() const { DARABONBA_PTR_GET_DEFAULT(domainNameCreatedEndTime_, 0L) };
    inline DescribePrivateDnsStatisticsRequest& setDomainNameCreatedEndTime(int64_t domainNameCreatedEndTime) { DARABONBA_PTR_SET_VALUE(domainNameCreatedEndTime_, domainNameCreatedEndTime) };


    // domainNameCreatedStartTime Field Functions 
    bool hasDomainNameCreatedStartTime() const { return this->domainNameCreatedStartTime_ != nullptr;};
    void deleteDomainNameCreatedStartTime() { this->domainNameCreatedStartTime_ = nullptr;};
    inline int64_t domainNameCreatedStartTime() const { DARABONBA_PTR_GET_DEFAULT(domainNameCreatedStartTime_, 0L) };
    inline DescribePrivateDnsStatisticsRequest& setDomainNameCreatedStartTime(int64_t domainNameCreatedStartTime) { DARABONBA_PTR_SET_VALUE(domainNameCreatedStartTime_, domainNameCreatedStartTime) };


  protected:
    std::shared_ptr<int64_t> domainNameCreatedEndTime_ = nullptr;
    std::shared_ptr<int64_t> domainNameCreatedStartTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
