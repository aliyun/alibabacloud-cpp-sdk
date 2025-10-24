// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESENSITIVEREQUESTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSensitiveRequestsResponseBodyDataInfoCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeSensitiveRequestsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSensitiveRequestsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AbnormalCount, abnormalCount_);
      DARABONBA_PTR_TO_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_TO_JSON(ApiId, apiId_);
      DARABONBA_PTR_TO_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_TO_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_TO_JSON(EventCount, eventCount_);
      DARABONBA_PTR_TO_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_TO_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_TO_JSON(SensitiveList, sensitiveList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSensitiveRequestsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AbnormalCount, abnormalCount_);
      DARABONBA_PTR_FROM_JSON(ApiFormat, apiFormat_);
      DARABONBA_PTR_FROM_JSON(ApiId, apiId_);
      DARABONBA_PTR_FROM_JSON(ClientIP, clientIP_);
      DARABONBA_PTR_FROM_JSON(DetectionResult, detectionResult_);
      DARABONBA_PTR_FROM_JSON(EventCount, eventCount_);
      DARABONBA_PTR_FROM_JSON(InfoCount, infoCount_);
      DARABONBA_PTR_FROM_JSON(MatchedHost, matchedHost_);
      DARABONBA_PTR_FROM_JSON(SensitiveList, sensitiveList_);
    };
    DescribeSensitiveRequestsResponseBodyData() = default ;
    DescribeSensitiveRequestsResponseBodyData(const DescribeSensitiveRequestsResponseBodyData &) = default ;
    DescribeSensitiveRequestsResponseBodyData(DescribeSensitiveRequestsResponseBodyData &&) = default ;
    DescribeSensitiveRequestsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSensitiveRequestsResponseBodyData() = default ;
    DescribeSensitiveRequestsResponseBodyData& operator=(const DescribeSensitiveRequestsResponseBodyData &) = default ;
    DescribeSensitiveRequestsResponseBodyData& operator=(DescribeSensitiveRequestsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormalCount_ == nullptr
        && return this->apiFormat_ == nullptr && return this->apiId_ == nullptr && return this->clientIP_ == nullptr && return this->detectionResult_ == nullptr && return this->eventCount_ == nullptr
        && return this->infoCount_ == nullptr && return this->matchedHost_ == nullptr && return this->sensitiveList_ == nullptr; };
    // abnormalCount Field Functions 
    bool hasAbnormalCount() const { return this->abnormalCount_ != nullptr;};
    void deleteAbnormalCount() { this->abnormalCount_ = nullptr;};
    inline int64_t abnormalCount() const { DARABONBA_PTR_GET_DEFAULT(abnormalCount_, 0L) };
    inline DescribeSensitiveRequestsResponseBodyData& setAbnormalCount(int64_t abnormalCount) { DARABONBA_PTR_SET_VALUE(abnormalCount_, abnormalCount) };


    // apiFormat Field Functions 
    bool hasApiFormat() const { return this->apiFormat_ != nullptr;};
    void deleteApiFormat() { this->apiFormat_ = nullptr;};
    inline string apiFormat() const { DARABONBA_PTR_GET_DEFAULT(apiFormat_, "") };
    inline DescribeSensitiveRequestsResponseBodyData& setApiFormat(string apiFormat) { DARABONBA_PTR_SET_VALUE(apiFormat_, apiFormat) };


    // apiId Field Functions 
    bool hasApiId() const { return this->apiId_ != nullptr;};
    void deleteApiId() { this->apiId_ = nullptr;};
    inline string apiId() const { DARABONBA_PTR_GET_DEFAULT(apiId_, "") };
    inline DescribeSensitiveRequestsResponseBodyData& setApiId(string apiId) { DARABONBA_PTR_SET_VALUE(apiId_, apiId) };


    // clientIP Field Functions 
    bool hasClientIP() const { return this->clientIP_ != nullptr;};
    void deleteClientIP() { this->clientIP_ = nullptr;};
    inline string clientIP() const { DARABONBA_PTR_GET_DEFAULT(clientIP_, "") };
    inline DescribeSensitiveRequestsResponseBodyData& setClientIP(string clientIP) { DARABONBA_PTR_SET_VALUE(clientIP_, clientIP) };


    // detectionResult Field Functions 
    bool hasDetectionResult() const { return this->detectionResult_ != nullptr;};
    void deleteDetectionResult() { this->detectionResult_ = nullptr;};
    inline string detectionResult() const { DARABONBA_PTR_GET_DEFAULT(detectionResult_, "") };
    inline DescribeSensitiveRequestsResponseBodyData& setDetectionResult(string detectionResult) { DARABONBA_PTR_SET_VALUE(detectionResult_, detectionResult) };


    // eventCount Field Functions 
    bool hasEventCount() const { return this->eventCount_ != nullptr;};
    void deleteEventCount() { this->eventCount_ = nullptr;};
    inline int64_t eventCount() const { DARABONBA_PTR_GET_DEFAULT(eventCount_, 0L) };
    inline DescribeSensitiveRequestsResponseBodyData& setEventCount(int64_t eventCount) { DARABONBA_PTR_SET_VALUE(eventCount_, eventCount) };


    // infoCount Field Functions 
    bool hasInfoCount() const { return this->infoCount_ != nullptr;};
    void deleteInfoCount() { this->infoCount_ = nullptr;};
    inline const vector<Models::DescribeSensitiveRequestsResponseBodyDataInfoCount> & infoCount() const { DARABONBA_PTR_GET_CONST(infoCount_, vector<Models::DescribeSensitiveRequestsResponseBodyDataInfoCount>) };
    inline vector<Models::DescribeSensitiveRequestsResponseBodyDataInfoCount> infoCount() { DARABONBA_PTR_GET(infoCount_, vector<Models::DescribeSensitiveRequestsResponseBodyDataInfoCount>) };
    inline DescribeSensitiveRequestsResponseBodyData& setInfoCount(const vector<Models::DescribeSensitiveRequestsResponseBodyDataInfoCount> & infoCount) { DARABONBA_PTR_SET_VALUE(infoCount_, infoCount) };
    inline DescribeSensitiveRequestsResponseBodyData& setInfoCount(vector<Models::DescribeSensitiveRequestsResponseBodyDataInfoCount> && infoCount) { DARABONBA_PTR_SET_RVALUE(infoCount_, infoCount) };


    // matchedHost Field Functions 
    bool hasMatchedHost() const { return this->matchedHost_ != nullptr;};
    void deleteMatchedHost() { this->matchedHost_ = nullptr;};
    inline string matchedHost() const { DARABONBA_PTR_GET_DEFAULT(matchedHost_, "") };
    inline DescribeSensitiveRequestsResponseBodyData& setMatchedHost(string matchedHost) { DARABONBA_PTR_SET_VALUE(matchedHost_, matchedHost) };


    // sensitiveList Field Functions 
    bool hasSensitiveList() const { return this->sensitiveList_ != nullptr;};
    void deleteSensitiveList() { this->sensitiveList_ = nullptr;};
    inline const vector<string> & sensitiveList() const { DARABONBA_PTR_GET_CONST(sensitiveList_, vector<string>) };
    inline vector<string> sensitiveList() { DARABONBA_PTR_GET(sensitiveList_, vector<string>) };
    inline DescribeSensitiveRequestsResponseBodyData& setSensitiveList(const vector<string> & sensitiveList) { DARABONBA_PTR_SET_VALUE(sensitiveList_, sensitiveList) };
    inline DescribeSensitiveRequestsResponseBodyData& setSensitiveList(vector<string> && sensitiveList) { DARABONBA_PTR_SET_RVALUE(sensitiveList_, sensitiveList) };


  protected:
    // The number of risks in the previous 30 days.
    std::shared_ptr<int64_t> abnormalCount_ = nullptr;
    // The API.
    std::shared_ptr<string> apiFormat_ = nullptr;
    // The ID of the API.
    std::shared_ptr<string> apiId_ = nullptr;
    // The IP address.
    std::shared_ptr<string> clientIP_ = nullptr;
    // The evaluation result. Valid values:
    // 
    // *   **leak**: Data leaks may occur.
    // *   **none**: No data leak can occur.
    std::shared_ptr<string> detectionResult_ = nullptr;
    // The number of events in the previous 30 days.
    std::shared_ptr<int64_t> eventCount_ = nullptr;
    // The statistics of the sensitive data.
    std::shared_ptr<vector<Models::DescribeSensitiveRequestsResponseBodyDataInfoCount>> infoCount_ = nullptr;
    // The domain name of the API.
    std::shared_ptr<string> matchedHost_ = nullptr;
    // The sensitive data.
    std::shared_ptr<vector<string>> sensitiveList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
