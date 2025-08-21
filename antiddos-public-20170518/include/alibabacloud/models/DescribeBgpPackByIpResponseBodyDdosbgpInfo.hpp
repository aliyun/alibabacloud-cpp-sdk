// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPRESPONSEBODYDDOSBGPINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPACKBYIPRESPONSEBODYDDOSBGPINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeBgpPackByIpResponseBodyDdosbgpInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPackByIpResponseBodyDdosbgpInfo& obj) { 
      DARABONBA_PTR_TO_JSON(BaseThreshold, baseThreshold_);
      DARABONBA_PTR_TO_JSON(DdosbgpInstanceId, ddosbgpInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticThreshold, elasticThreshold_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPackByIpResponseBodyDdosbgpInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseThreshold, baseThreshold_);
      DARABONBA_PTR_FROM_JSON(DdosbgpInstanceId, ddosbgpInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticThreshold, elasticThreshold_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
    };
    DescribeBgpPackByIpResponseBodyDdosbgpInfo() = default ;
    DescribeBgpPackByIpResponseBodyDdosbgpInfo(const DescribeBgpPackByIpResponseBodyDdosbgpInfo &) = default ;
    DescribeBgpPackByIpResponseBodyDdosbgpInfo(DescribeBgpPackByIpResponseBodyDdosbgpInfo &&) = default ;
    DescribeBgpPackByIpResponseBodyDdosbgpInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPackByIpResponseBodyDdosbgpInfo() = default ;
    DescribeBgpPackByIpResponseBodyDdosbgpInfo& operator=(const DescribeBgpPackByIpResponseBodyDdosbgpInfo &) = default ;
    DescribeBgpPackByIpResponseBodyDdosbgpInfo& operator=(DescribeBgpPackByIpResponseBodyDdosbgpInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baseThreshold_ != nullptr
        && this->ddosbgpInstanceId_ != nullptr && this->elasticThreshold_ != nullptr && this->expireTime_ != nullptr && this->ip_ != nullptr; };
    // baseThreshold Field Functions 
    bool hasBaseThreshold() const { return this->baseThreshold_ != nullptr;};
    void deleteBaseThreshold() { this->baseThreshold_ = nullptr;};
    inline int32_t baseThreshold() const { DARABONBA_PTR_GET_DEFAULT(baseThreshold_, 0) };
    inline DescribeBgpPackByIpResponseBodyDdosbgpInfo& setBaseThreshold(int32_t baseThreshold) { DARABONBA_PTR_SET_VALUE(baseThreshold_, baseThreshold) };


    // ddosbgpInstanceId Field Functions 
    bool hasDdosbgpInstanceId() const { return this->ddosbgpInstanceId_ != nullptr;};
    void deleteDdosbgpInstanceId() { this->ddosbgpInstanceId_ = nullptr;};
    inline string ddosbgpInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ddosbgpInstanceId_, "") };
    inline DescribeBgpPackByIpResponseBodyDdosbgpInfo& setDdosbgpInstanceId(string ddosbgpInstanceId) { DARABONBA_PTR_SET_VALUE(ddosbgpInstanceId_, ddosbgpInstanceId) };


    // elasticThreshold Field Functions 
    bool hasElasticThreshold() const { return this->elasticThreshold_ != nullptr;};
    void deleteElasticThreshold() { this->elasticThreshold_ = nullptr;};
    inline int32_t elasticThreshold() const { DARABONBA_PTR_GET_DEFAULT(elasticThreshold_, 0) };
    inline DescribeBgpPackByIpResponseBodyDdosbgpInfo& setElasticThreshold(int32_t elasticThreshold) { DARABONBA_PTR_SET_VALUE(elasticThreshold_, elasticThreshold) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline DescribeBgpPackByIpResponseBodyDdosbgpInfo& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeBgpPackByIpResponseBodyDdosbgpInfo& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


  protected:
    // The basic protection threshold of the instance. Unit: Gbit/s.
    std::shared_ptr<int32_t> baseThreshold_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> ddosbgpInstanceId_ = nullptr;
    // The burstable protection threshold of the instance. Unit: Gbit/s.
    std::shared_ptr<int32_t> elasticThreshold_ = nullptr;
    // The expiration time of the instance. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> expireTime_ = nullptr;
    // The IP address of the asset.
    std::shared_ptr<string> ip_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
