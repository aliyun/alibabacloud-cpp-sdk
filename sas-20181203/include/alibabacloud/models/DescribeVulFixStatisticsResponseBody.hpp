// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVULFIXSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVULFIXSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVulFixStatisticsResponseBodyFixStat.hpp>
#include <alibabacloud/models/DescribeVulFixStatisticsResponseBodyFixTotal.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVulFixStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVulFixStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FixStat, fixStat_);
      DARABONBA_PTR_TO_JSON(FixTotal, fixTotal_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVulFixStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FixStat, fixStat_);
      DARABONBA_PTR_FROM_JSON(FixTotal, fixTotal_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVulFixStatisticsResponseBody() = default ;
    DescribeVulFixStatisticsResponseBody(const DescribeVulFixStatisticsResponseBody &) = default ;
    DescribeVulFixStatisticsResponseBody(DescribeVulFixStatisticsResponseBody &&) = default ;
    DescribeVulFixStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVulFixStatisticsResponseBody() = default ;
    DescribeVulFixStatisticsResponseBody& operator=(const DescribeVulFixStatisticsResponseBody &) = default ;
    DescribeVulFixStatisticsResponseBody& operator=(DescribeVulFixStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fixStat_ != nullptr
        && this->fixTotal_ != nullptr && this->requestId_ != nullptr; };
    // fixStat Field Functions 
    bool hasFixStat() const { return this->fixStat_ != nullptr;};
    void deleteFixStat() { this->fixStat_ = nullptr;};
    inline const vector<DescribeVulFixStatisticsResponseBodyFixStat> & fixStat() const { DARABONBA_PTR_GET_CONST(fixStat_, vector<DescribeVulFixStatisticsResponseBodyFixStat>) };
    inline vector<DescribeVulFixStatisticsResponseBodyFixStat> fixStat() { DARABONBA_PTR_GET(fixStat_, vector<DescribeVulFixStatisticsResponseBodyFixStat>) };
    inline DescribeVulFixStatisticsResponseBody& setFixStat(const vector<DescribeVulFixStatisticsResponseBodyFixStat> & fixStat) { DARABONBA_PTR_SET_VALUE(fixStat_, fixStat) };
    inline DescribeVulFixStatisticsResponseBody& setFixStat(vector<DescribeVulFixStatisticsResponseBodyFixStat> && fixStat) { DARABONBA_PTR_SET_RVALUE(fixStat_, fixStat) };


    // fixTotal Field Functions 
    bool hasFixTotal() const { return this->fixTotal_ != nullptr;};
    void deleteFixTotal() { this->fixTotal_ = nullptr;};
    inline const DescribeVulFixStatisticsResponseBodyFixTotal & fixTotal() const { DARABONBA_PTR_GET_CONST(fixTotal_, DescribeVulFixStatisticsResponseBodyFixTotal) };
    inline DescribeVulFixStatisticsResponseBodyFixTotal fixTotal() { DARABONBA_PTR_GET(fixTotal_, DescribeVulFixStatisticsResponseBodyFixTotal) };
    inline DescribeVulFixStatisticsResponseBody& setFixTotal(const DescribeVulFixStatisticsResponseBodyFixTotal & fixTotal) { DARABONBA_PTR_SET_VALUE(fixTotal_, fixTotal) };
    inline DescribeVulFixStatisticsResponseBody& setFixTotal(DescribeVulFixStatisticsResponseBodyFixTotal && fixTotal) { DARABONBA_PTR_SET_RVALUE(fixTotal_, fixTotal) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVulFixStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // An array that consists of the statistics of vulnerability fixes by vulnerability type.
    std::shared_ptr<vector<DescribeVulFixStatisticsResponseBodyFixStat>> fixStat_ = nullptr;
    // The total statistics of vulnerability fixes.
    std::shared_ptr<DescribeVulFixStatisticsResponseBodyFixTotal> fixTotal_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
