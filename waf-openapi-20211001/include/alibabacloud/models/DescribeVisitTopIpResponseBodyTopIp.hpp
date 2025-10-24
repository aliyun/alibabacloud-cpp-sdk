// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVISITTOPIPRESPONSEBODYTOPIP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVISITTOPIPRESPONSEBODYTOPIP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVisitTopIpResponseBodyTopIp : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVisitTopIpResponseBodyTopIp& obj) { 
      DARABONBA_PTR_TO_JSON(Area, area_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Isp, isp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVisitTopIpResponseBodyTopIp& obj) { 
      DARABONBA_PTR_FROM_JSON(Area, area_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Isp, isp_);
    };
    DescribeVisitTopIpResponseBodyTopIp() = default ;
    DescribeVisitTopIpResponseBodyTopIp(const DescribeVisitTopIpResponseBodyTopIp &) = default ;
    DescribeVisitTopIpResponseBodyTopIp(DescribeVisitTopIpResponseBodyTopIp &&) = default ;
    DescribeVisitTopIpResponseBodyTopIp(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVisitTopIpResponseBodyTopIp() = default ;
    DescribeVisitTopIpResponseBodyTopIp& operator=(const DescribeVisitTopIpResponseBodyTopIp &) = default ;
    DescribeVisitTopIpResponseBodyTopIp& operator=(DescribeVisitTopIpResponseBodyTopIp &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->area_ == nullptr
        && return this->count_ == nullptr && return this->ip_ == nullptr && return this->isp_ == nullptr; };
    // area Field Functions 
    bool hasArea() const { return this->area_ != nullptr;};
    void deleteArea() { this->area_ = nullptr;};
    inline string area() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
    inline DescribeVisitTopIpResponseBodyTopIp& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeVisitTopIpResponseBodyTopIp& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeVisitTopIpResponseBodyTopIp& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // isp Field Functions 
    bool hasIsp() const { return this->isp_ != nullptr;};
    void deleteIsp() { this->isp_ = nullptr;};
    inline string isp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
    inline DescribeVisitTopIpResponseBodyTopIp& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


  protected:
    // The ordinal number of the area to which the IP address belongs.
    std::shared_ptr<string> area_ = nullptr;
    // The total number of requests that are sent from the IP address.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The IP address.
    std::shared_ptr<string> ip_ = nullptr;
    // The ISP.
    std::shared_ptr<string> isp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
