// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHONEYPOTSUSPSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeHoneyPotSuspStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHoneyPotSuspStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuspHoneyPotStatisticsResponse, suspHoneyPotStatisticsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHoneyPotSuspStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuspHoneyPotStatisticsResponse, suspHoneyPotStatisticsResponse_);
    };
    DescribeHoneyPotSuspStatisticsResponseBody() = default ;
    DescribeHoneyPotSuspStatisticsResponseBody(const DescribeHoneyPotSuspStatisticsResponseBody &) = default ;
    DescribeHoneyPotSuspStatisticsResponseBody(DescribeHoneyPotSuspStatisticsResponseBody &&) = default ;
    DescribeHoneyPotSuspStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHoneyPotSuspStatisticsResponseBody() = default ;
    DescribeHoneyPotSuspStatisticsResponseBody& operator=(const DescribeHoneyPotSuspStatisticsResponseBody &) = default ;
    DescribeHoneyPotSuspStatisticsResponseBody& operator=(DescribeHoneyPotSuspStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->suspHoneyPotStatisticsResponse_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHoneyPotSuspStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspHoneyPotStatisticsResponse Field Functions 
    bool hasSuspHoneyPotStatisticsResponse() const { return this->suspHoneyPotStatisticsResponse_ != nullptr;};
    void deleteSuspHoneyPotStatisticsResponse() { this->suspHoneyPotStatisticsResponse_ = nullptr;};
    inline const vector<DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse> & suspHoneyPotStatisticsResponse() const { DARABONBA_PTR_GET_CONST(suspHoneyPotStatisticsResponse_, vector<DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse>) };
    inline vector<DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse> suspHoneyPotStatisticsResponse() { DARABONBA_PTR_GET(suspHoneyPotStatisticsResponse_, vector<DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse>) };
    inline DescribeHoneyPotSuspStatisticsResponseBody& setSuspHoneyPotStatisticsResponse(const vector<DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse> & suspHoneyPotStatisticsResponse) { DARABONBA_PTR_SET_VALUE(suspHoneyPotStatisticsResponse_, suspHoneyPotStatisticsResponse) };
    inline DescribeHoneyPotSuspStatisticsResponseBody& setSuspHoneyPotStatisticsResponse(vector<DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse> && suspHoneyPotStatisticsResponse) { DARABONBA_PTR_SET_RVALUE(suspHoneyPotStatisticsResponse_, suspHoneyPotStatisticsResponse) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the top 5 VPCs or assets for which alerts are most frequently generated.
    std::shared_ptr<vector<DescribeHoneyPotSuspStatisticsResponseBodySuspHoneyPotStatisticsResponse>> suspHoneyPotStatisticsResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
