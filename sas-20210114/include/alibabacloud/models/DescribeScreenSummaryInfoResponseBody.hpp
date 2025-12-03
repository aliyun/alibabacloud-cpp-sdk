// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCREENSUMMARYINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCREENSUMMARYINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20210114
{
namespace Models
{
  class DescribeScreenSummaryInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScreenSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AegisClientOfflineCount, aegisClientOfflineCount_);
      DARABONBA_PTR_TO_JSON(AegisClientOnlineCount, aegisClientOnlineCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SecurityScore, securityScore_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScreenSummaryInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AegisClientOfflineCount, aegisClientOfflineCount_);
      DARABONBA_PTR_FROM_JSON(AegisClientOnlineCount, aegisClientOnlineCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SecurityScore, securityScore_);
    };
    DescribeScreenSummaryInfoResponseBody() = default ;
    DescribeScreenSummaryInfoResponseBody(const DescribeScreenSummaryInfoResponseBody &) = default ;
    DescribeScreenSummaryInfoResponseBody(DescribeScreenSummaryInfoResponseBody &&) = default ;
    DescribeScreenSummaryInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScreenSummaryInfoResponseBody() = default ;
    DescribeScreenSummaryInfoResponseBody& operator=(const DescribeScreenSummaryInfoResponseBody &) = default ;
    DescribeScreenSummaryInfoResponseBody& operator=(DescribeScreenSummaryInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aegisClientOfflineCount_ == nullptr
        && return this->aegisClientOnlineCount_ == nullptr && return this->requestId_ == nullptr && return this->securityScore_ == nullptr; };
    // aegisClientOfflineCount Field Functions 
    bool hasAegisClientOfflineCount() const { return this->aegisClientOfflineCount_ != nullptr;};
    void deleteAegisClientOfflineCount() { this->aegisClientOfflineCount_ = nullptr;};
    inline int32_t aegisClientOfflineCount() const { DARABONBA_PTR_GET_DEFAULT(aegisClientOfflineCount_, 0) };
    inline DescribeScreenSummaryInfoResponseBody& setAegisClientOfflineCount(int32_t aegisClientOfflineCount) { DARABONBA_PTR_SET_VALUE(aegisClientOfflineCount_, aegisClientOfflineCount) };


    // aegisClientOnlineCount Field Functions 
    bool hasAegisClientOnlineCount() const { return this->aegisClientOnlineCount_ != nullptr;};
    void deleteAegisClientOnlineCount() { this->aegisClientOnlineCount_ = nullptr;};
    inline int32_t aegisClientOnlineCount() const { DARABONBA_PTR_GET_DEFAULT(aegisClientOnlineCount_, 0) };
    inline DescribeScreenSummaryInfoResponseBody& setAegisClientOnlineCount(int32_t aegisClientOnlineCount) { DARABONBA_PTR_SET_VALUE(aegisClientOnlineCount_, aegisClientOnlineCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeScreenSummaryInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // securityScore Field Functions 
    bool hasSecurityScore() const { return this->securityScore_ != nullptr;};
    void deleteSecurityScore() { this->securityScore_ = nullptr;};
    inline int32_t securityScore() const { DARABONBA_PTR_GET_DEFAULT(securityScore_, 0) };
    inline DescribeScreenSummaryInfoResponseBody& setSecurityScore(int32_t securityScore) { DARABONBA_PTR_SET_VALUE(securityScore_, securityScore) };


  protected:
    std::shared_ptr<int32_t> aegisClientOfflineCount_ = nullptr;
    std::shared_ptr<int32_t> aegisClientOnlineCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> securityScore_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20210114
#endif
