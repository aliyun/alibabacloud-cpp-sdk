// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATAAVAILABLEASSERTIONS_HPP_
#define ALIBABACLOUD_MODELS_GETTIMINGSYNTHETICTASKRESPONSEBODYDATAAVAILABLEASSERTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetTimingSyntheticTaskResponseBodyDataAvailableAssertions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& obj) { 
      DARABONBA_PTR_TO_JSON(Expect, expect_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& obj) { 
      DARABONBA_PTR_FROM_JSON(Expect, expect_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetTimingSyntheticTaskResponseBodyDataAvailableAssertions() = default ;
    GetTimingSyntheticTaskResponseBodyDataAvailableAssertions(const GetTimingSyntheticTaskResponseBodyDataAvailableAssertions &) = default ;
    GetTimingSyntheticTaskResponseBodyDataAvailableAssertions(GetTimingSyntheticTaskResponseBodyDataAvailableAssertions &&) = default ;
    GetTimingSyntheticTaskResponseBodyDataAvailableAssertions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTimingSyntheticTaskResponseBodyDataAvailableAssertions() = default ;
    GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& operator=(const GetTimingSyntheticTaskResponseBodyDataAvailableAssertions &) = default ;
    GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& operator=(GetTimingSyntheticTaskResponseBodyDataAvailableAssertions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expect_ != nullptr
        && this->operator_ != nullptr && this->target_ != nullptr && this->type_ != nullptr; };
    // expect Field Functions 
    bool hasExpect() const { return this->expect_ != nullptr;};
    void deleteExpect() { this->expect_ = nullptr;};
    inline string expect() const { DARABONBA_PTR_GET_DEFAULT(expect_, "") };
    inline GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& setExpect(string expect) { DARABONBA_PTR_SET_VALUE(expect_, expect) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetTimingSyntheticTaskResponseBodyDataAvailableAssertions& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The expected value.
    std::shared_ptr<string> expect_ = nullptr;
    // The condition. gt: greater than. gte: greater than or equal to. lt: less than. lte: less than or equal to. eq: equal to. neq: not equal to. ctn: contain. nctn: does not contain. exist: exist. n_exist: does not exist. belong: belong to. n_belong: does not belong to. reg_match: regular expression.
    std::shared_ptr<string> operator_ = nullptr;
    // The check target. If you set the type parameter to HttpResCode, HttpResBody, or HttpResponseTime, you do not need to set the target parameter. If you set the type parameter to HttpResHead, you must specify the key in the header. If you set the type parameter to HttpResBodyJson, use jsonPath.
    std::shared_ptr<string> target_ = nullptr;
    // The assertion type. Valid values: HttpResCode, HttpResHead, HttpResBody, HttpResBodyJson, HttpResponseTime, IcmpPackLoss (packet loss rate), IcmpPackMaxLatency (maximum packet latency), IcmpPackAvgLatency (average packet latency), TraceRouteHops (number of hops), DnsARecord (A record), DnsCName (CNAME), websiteTTFB (time to first packet), websiteTTLB (time to last packet), websiteFST (first paint time), websiteFFST (first meaningful paint), websiteOnload (full loaded time). For more information, see the following description.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
