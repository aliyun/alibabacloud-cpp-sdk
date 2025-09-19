// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERSUSPEVENTSTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterSuspEventStatisticsResponseBodySuspStatistics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetClusterSuspEventStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterSuspEventStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SuspStatistics, suspStatistics_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterSuspEventStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SuspStatistics, suspStatistics_);
    };
    GetClusterSuspEventStatisticsResponseBody() = default ;
    GetClusterSuspEventStatisticsResponseBody(const GetClusterSuspEventStatisticsResponseBody &) = default ;
    GetClusterSuspEventStatisticsResponseBody(GetClusterSuspEventStatisticsResponseBody &&) = default ;
    GetClusterSuspEventStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterSuspEventStatisticsResponseBody() = default ;
    GetClusterSuspEventStatisticsResponseBody& operator=(const GetClusterSuspEventStatisticsResponseBody &) = default ;
    GetClusterSuspEventStatisticsResponseBody& operator=(GetClusterSuspEventStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->suspStatistics_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClusterSuspEventStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // suspStatistics Field Functions 
    bool hasSuspStatistics() const { return this->suspStatistics_ != nullptr;};
    void deleteSuspStatistics() { this->suspStatistics_ = nullptr;};
    inline const GetClusterSuspEventStatisticsResponseBodySuspStatistics & suspStatistics() const { DARABONBA_PTR_GET_CONST(suspStatistics_, GetClusterSuspEventStatisticsResponseBodySuspStatistics) };
    inline GetClusterSuspEventStatisticsResponseBodySuspStatistics suspStatistics() { DARABONBA_PTR_GET(suspStatistics_, GetClusterSuspEventStatisticsResponseBodySuspStatistics) };
    inline GetClusterSuspEventStatisticsResponseBody& setSuspStatistics(const GetClusterSuspEventStatisticsResponseBodySuspStatistics & suspStatistics) { DARABONBA_PTR_SET_VALUE(suspStatistics_, suspStatistics) };
    inline GetClusterSuspEventStatisticsResponseBody& setSuspStatistics(GetClusterSuspEventStatisticsResponseBodySuspStatistics && suspStatistics) { DARABONBA_PTR_SET_RVALUE(suspStatistics_, suspStatistics) };


  protected:
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of alerts by risk level.
    std::shared_ptr<GetClusterSuspEventStatisticsResponseBodySuspStatistics> suspStatistics_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
