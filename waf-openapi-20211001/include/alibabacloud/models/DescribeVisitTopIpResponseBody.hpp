// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVISITTOPIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVISITTOPIPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeVisitTopIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVisitTopIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TopIp, topIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVisitTopIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TopIp, topIp_);
    };
    DescribeVisitTopIpResponseBody() = default ;
    DescribeVisitTopIpResponseBody(const DescribeVisitTopIpResponseBody &) = default ;
    DescribeVisitTopIpResponseBody(DescribeVisitTopIpResponseBody &&) = default ;
    DescribeVisitTopIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVisitTopIpResponseBody() = default ;
    DescribeVisitTopIpResponseBody& operator=(const DescribeVisitTopIpResponseBody &) = default ;
    DescribeVisitTopIpResponseBody& operator=(DescribeVisitTopIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TopIp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TopIp& obj) { 
        DARABONBA_PTR_TO_JSON(Area, area_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Isp, isp_);
      };
      friend void from_json(const Darabonba::Json& j, TopIp& obj) { 
        DARABONBA_PTR_FROM_JSON(Area, area_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Isp, isp_);
      };
      TopIp() = default ;
      TopIp(const TopIp &) = default ;
      TopIp(TopIp &&) = default ;
      TopIp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TopIp() = default ;
      TopIp& operator=(const TopIp &) = default ;
      TopIp& operator=(TopIp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->area_ == nullptr
        && this->count_ == nullptr && this->ip_ == nullptr && this->isp_ == nullptr; };
      // area Field Functions 
      bool hasArea() const { return this->area_ != nullptr;};
      void deleteArea() { this->area_ = nullptr;};
      inline string getArea() const { DARABONBA_PTR_GET_DEFAULT(area_, "") };
      inline TopIp& setArea(string area) { DARABONBA_PTR_SET_VALUE(area_, area) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline TopIp& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline TopIp& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // isp Field Functions 
      bool hasIsp() const { return this->isp_ != nullptr;};
      void deleteIsp() { this->isp_ = nullptr;};
      inline string getIsp() const { DARABONBA_PTR_GET_DEFAULT(isp_, "") };
      inline TopIp& setIsp(string isp) { DARABONBA_PTR_SET_VALUE(isp_, isp) };


    protected:
      // The ordinal number of the area to which the IP address belongs.
      shared_ptr<string> area_ {};
      // The total number of requests that are sent from the IP address.
      shared_ptr<int64_t> count_ {};
      // The IP address.
      shared_ptr<string> ip_ {};
      // The ISP.
      shared_ptr<string> isp_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->topIp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVisitTopIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // topIp Field Functions 
    bool hasTopIp() const { return this->topIp_ != nullptr;};
    void deleteTopIp() { this->topIp_ = nullptr;};
    inline const vector<DescribeVisitTopIpResponseBody::TopIp> & getTopIp() const { DARABONBA_PTR_GET_CONST(topIp_, vector<DescribeVisitTopIpResponseBody::TopIp>) };
    inline vector<DescribeVisitTopIpResponseBody::TopIp> getTopIp() { DARABONBA_PTR_GET(topIp_, vector<DescribeVisitTopIpResponseBody::TopIp>) };
    inline DescribeVisitTopIpResponseBody& setTopIp(const vector<DescribeVisitTopIpResponseBody::TopIp> & topIp) { DARABONBA_PTR_SET_VALUE(topIp_, topIp) };
    inline DescribeVisitTopIpResponseBody& setTopIp(vector<DescribeVisitTopIpResponseBody::TopIp> && topIp) { DARABONBA_PTR_SET_RVALUE(topIp_, topIp) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the top 10 IP addresses from which requests are sent.
    shared_ptr<vector<DescribeVisitTopIpResponseBody::TopIp>> topIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
