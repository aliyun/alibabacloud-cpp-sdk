// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUMMARYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUMMARYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeSummaryInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisClientOfflineCount, aegisClientOfflineCount_);
      DARABONBA_PTR_TO_JSON(AegisClientOnlineCount, aegisClientOnlineCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityScore, securityScore_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisClientOfflineCount, aegisClientOfflineCount_);
      DARABONBA_PTR_FROM_JSON(AegisClientOnlineCount, aegisClientOnlineCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityScore, securityScore_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSummaryInfoResponseBody() = default ;
    DescribeSummaryInfoResponseBody(const DescribeSummaryInfoResponseBody &) = default ;
    DescribeSummaryInfoResponseBody(DescribeSummaryInfoResponseBody &&) = default ;
    DescribeSummaryInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSummaryInfoResponseBody() = default ;
    DescribeSummaryInfoResponseBody& operator=(const DescribeSummaryInfoResponseBody &) = default ;
    DescribeSummaryInfoResponseBody& operator=(DescribeSummaryInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aegisClientOfflineCount_ == nullptr
        && return this->aegisClientOnlineCount_ == nullptr && return this->requestId_ == nullptr && return this->securityScore_ == nullptr && return this->success_ == nullptr; };
    // aegisClientOfflineCount Field Functions 
    bool hasAegisClientOfflineCount() const { return this->aegisClientOfflineCount_ != nullptr;};
    void deleteAegisClientOfflineCount() { this->aegisClientOfflineCount_ = nullptr;};
    inline int32_t aegisClientOfflineCount() const { DARABONBA_PTR_GET_DEFAULT(aegisClientOfflineCount_, 0) };
    inline DescribeSummaryInfoResponseBody& setAegisClientOfflineCount(int32_t aegisClientOfflineCount) { DARABONBA_PTR_SET_VALUE(aegisClientOfflineCount_, aegisClientOfflineCount) };


    // aegisClientOnlineCount Field Functions 
    bool hasAegisClientOnlineCount() const { return this->aegisClientOnlineCount_ != nullptr;};
    void deleteAegisClientOnlineCount() { this->aegisClientOnlineCount_ = nullptr;};
    inline int32_t aegisClientOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(aegisClientOnlineCount_, 0) };
    inline DescribeSummaryInfoResponseBody& setAegisClientOnlineCount(int32_t aegisClientOnlineCount) { DARABONBA_PTR_SET_VALUE(aegisClientOnlineCount_, aegisClientOnlineCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSummaryInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityScore Field Functions 
    bool hasSecurityScore() const { return this->securityScore_ != nullptr;};
    void deleteSecurityScore() { this->securityScore_ = nullptr;};
    inline int32_t securityScore() const { DARABONBA_PTR_GET_DEFAULT(securityScore_, 0) };
    inline DescribeSummaryInfoResponseBody& setSecurityScore(int32_t securityScore) { DARABONBA_PTR_SET_VALUE(securityScore_, securityScore) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSummaryInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The number of unprotected assets.
    std::shared_ptr<int32_t> aegisClientOfflineCount_ = nullptr;
    // The number of protected assets.
    std::shared_ptr<int32_t> aegisClientOnlineCount_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The security score of the assets. Valid values:
    // 
    // *   95 to 100: The assets are secure.
    // *   85 to 94: The assets are exposed to a few security risks. We recommend that you reinforce your security system in a timely manner.
    // *   70 to 84: The assets are exposed to multiple security risks. We recommend that you reinforce your security system in a timely manner.
    // *   69 or lower: The current security system is unable to protect the assets against intrusions. We recommend that you reinforce your security system at the earliest opportunity.
    std::shared_ptr<int32_t> securityScore_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
