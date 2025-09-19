// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEVULSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEVULSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceVulStatisticsResponseBodyVulStat.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstanceVulStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceVulStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(VulStat, vulStat_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceVulStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(VulStat, vulStat_);
    };
    DescribeInstanceVulStatisticsResponseBody() = default ;
    DescribeInstanceVulStatisticsResponseBody(const DescribeInstanceVulStatisticsResponseBody &) = default ;
    DescribeInstanceVulStatisticsResponseBody(DescribeInstanceVulStatisticsResponseBody &&) = default ;
    DescribeInstanceVulStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceVulStatisticsResponseBody() = default ;
    DescribeInstanceVulStatisticsResponseBody& operator=(const DescribeInstanceVulStatisticsResponseBody &) = default ;
    DescribeInstanceVulStatisticsResponseBody& operator=(DescribeInstanceVulStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->vulStat_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceVulStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // vulStat Field Functions 
    bool hasVulStat() const { return this->vulStat_ != nullptr;};
    void deleteVulStat() { this->vulStat_ = nullptr;};
    inline const DescribeInstanceVulStatisticsResponseBodyVulStat & vulStat() const { DARABONBA_PTR_GET_CONST(vulStat_, DescribeInstanceVulStatisticsResponseBodyVulStat) };
    inline DescribeInstanceVulStatisticsResponseBodyVulStat vulStat() { DARABONBA_PTR_GET(vulStat_, DescribeInstanceVulStatisticsResponseBodyVulStat) };
    inline DescribeInstanceVulStatisticsResponseBody& setVulStat(const DescribeInstanceVulStatisticsResponseBodyVulStat & vulStat) { DARABONBA_PTR_SET_VALUE(vulStat_, vulStat) };
    inline DescribeInstanceVulStatisticsResponseBody& setVulStat(DescribeInstanceVulStatisticsResponseBodyVulStat && vulStat) { DARABONBA_PTR_SET_RVALUE(vulStat_, vulStat) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The statistics of the vulnerabilities.
    std::shared_ptr<DescribeInstanceVulStatisticsResponseBodyVulStat> vulStat_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
