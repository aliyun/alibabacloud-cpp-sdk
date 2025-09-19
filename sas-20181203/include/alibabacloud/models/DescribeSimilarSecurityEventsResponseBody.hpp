// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESIMILARSECURITYEVENTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESIMILARSECURITYEVENTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSimilarSecurityEventsResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSimilarSecurityEventsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSimilarSecurityEventsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityEventsResponse, securityEventsResponse_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSimilarSecurityEventsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityEventsResponse, securityEventsResponse_);
    };
    DescribeSimilarSecurityEventsResponseBody() = default ;
    DescribeSimilarSecurityEventsResponseBody(const DescribeSimilarSecurityEventsResponseBody &) = default ;
    DescribeSimilarSecurityEventsResponseBody(DescribeSimilarSecurityEventsResponseBody &&) = default ;
    DescribeSimilarSecurityEventsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSimilarSecurityEventsResponseBody() = default ;
    DescribeSimilarSecurityEventsResponseBody& operator=(const DescribeSimilarSecurityEventsResponseBody &) = default ;
    DescribeSimilarSecurityEventsResponseBody& operator=(DescribeSimilarSecurityEventsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->securityEventsResponse_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeSimilarSecurityEventsResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeSimilarSecurityEventsResponseBodyPageInfo) };
    inline DescribeSimilarSecurityEventsResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeSimilarSecurityEventsResponseBodyPageInfo) };
    inline DescribeSimilarSecurityEventsResponseBody& setPageInfo(const DescribeSimilarSecurityEventsResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeSimilarSecurityEventsResponseBody& setPageInfo(DescribeSimilarSecurityEventsResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSimilarSecurityEventsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityEventsResponse Field Functions 
    bool hasSecurityEventsResponse() const { return this->securityEventsResponse_ != nullptr;};
    void deleteSecurityEventsResponse() { this->securityEventsResponse_ = nullptr;};
    inline const vector<DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse> & securityEventsResponse() const { DARABONBA_PTR_GET_CONST(securityEventsResponse_, vector<DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse>) };
    inline vector<DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse> securityEventsResponse() { DARABONBA_PTR_GET(securityEventsResponse_, vector<DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse>) };
    inline DescribeSimilarSecurityEventsResponseBody& setSecurityEventsResponse(const vector<DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse> & securityEventsResponse) { DARABONBA_PTR_SET_VALUE(securityEventsResponse_, securityEventsResponse) };
    inline DescribeSimilarSecurityEventsResponseBody& setSecurityEventsResponse(vector<DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse> && securityEventsResponse) { DARABONBA_PTR_SET_RVALUE(securityEventsResponse_, securityEventsResponse) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeSimilarSecurityEventsResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the alert events that are triggered by the same rule or of the same alert type.
    std::shared_ptr<vector<DescribeSimilarSecurityEventsResponseBodySecurityEventsResponse>> securityEventsResponse_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
