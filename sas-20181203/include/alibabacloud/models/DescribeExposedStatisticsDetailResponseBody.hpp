// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEXPOSEDSTATISTICSDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeExposedStatisticsDetailResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeExposedStatisticsDetailResponseBodyStatisticsDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeExposedStatisticsDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeExposedStatisticsDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(StatisticsDetails, statisticsDetails_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeExposedStatisticsDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(StatisticsDetails, statisticsDetails_);
    };
    DescribeExposedStatisticsDetailResponseBody() = default ;
    DescribeExposedStatisticsDetailResponseBody(const DescribeExposedStatisticsDetailResponseBody &) = default ;
    DescribeExposedStatisticsDetailResponseBody(DescribeExposedStatisticsDetailResponseBody &&) = default ;
    DescribeExposedStatisticsDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeExposedStatisticsDetailResponseBody() = default ;
    DescribeExposedStatisticsDetailResponseBody& operator=(const DescribeExposedStatisticsDetailResponseBody &) = default ;
    DescribeExposedStatisticsDetailResponseBody& operator=(DescribeExposedStatisticsDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->statisticsDetails_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeExposedStatisticsDetailResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeExposedStatisticsDetailResponseBodyPageInfo) };
    inline DescribeExposedStatisticsDetailResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeExposedStatisticsDetailResponseBodyPageInfo) };
    inline DescribeExposedStatisticsDetailResponseBody& setPageInfo(const DescribeExposedStatisticsDetailResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeExposedStatisticsDetailResponseBody& setPageInfo(DescribeExposedStatisticsDetailResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeExposedStatisticsDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statisticsDetails Field Functions 
    bool hasStatisticsDetails() const { return this->statisticsDetails_ != nullptr;};
    void deleteStatisticsDetails() { this->statisticsDetails_ = nullptr;};
    inline const vector<DescribeExposedStatisticsDetailResponseBodyStatisticsDetails> & statisticsDetails() const { DARABONBA_PTR_GET_CONST(statisticsDetails_, vector<DescribeExposedStatisticsDetailResponseBodyStatisticsDetails>) };
    inline vector<DescribeExposedStatisticsDetailResponseBodyStatisticsDetails> statisticsDetails() { DARABONBA_PTR_GET(statisticsDetails_, vector<DescribeExposedStatisticsDetailResponseBodyStatisticsDetails>) };
    inline DescribeExposedStatisticsDetailResponseBody& setStatisticsDetails(const vector<DescribeExposedStatisticsDetailResponseBodyStatisticsDetails> & statisticsDetails) { DARABONBA_PTR_SET_VALUE(statisticsDetails_, statisticsDetails) };
    inline DescribeExposedStatisticsDetailResponseBody& setStatisticsDetails(vector<DescribeExposedStatisticsDetailResponseBodyStatisticsDetails> && statisticsDetails) { DARABONBA_PTR_SET_RVALUE(statisticsDetails_, statisticsDetails) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeExposedStatisticsDetailResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the gateway assets, ports, system components, or public IP addresses that are exposed on the Internet and are returned.
    std::shared_ptr<vector<DescribeExposedStatisticsDetailResponseBodyStatisticsDetails>> statisticsDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
