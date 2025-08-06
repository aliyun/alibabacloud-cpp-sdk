// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMELOGAUTHORIZEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODREALTIMELOGAUTHORIZEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodRealtimeLogAuthorizedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodRealtimeLogAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedStatus, authorizedStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodRealtimeLogAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedStatus, authorizedStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVodRealtimeLogAuthorizedResponseBody() = default ;
    DescribeVodRealtimeLogAuthorizedResponseBody(const DescribeVodRealtimeLogAuthorizedResponseBody &) = default ;
    DescribeVodRealtimeLogAuthorizedResponseBody(DescribeVodRealtimeLogAuthorizedResponseBody &&) = default ;
    DescribeVodRealtimeLogAuthorizedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodRealtimeLogAuthorizedResponseBody() = default ;
    DescribeVodRealtimeLogAuthorizedResponseBody& operator=(const DescribeVodRealtimeLogAuthorizedResponseBody &) = default ;
    DescribeVodRealtimeLogAuthorizedResponseBody& operator=(DescribeVodRealtimeLogAuthorizedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authorizedStatus_ != nullptr
        && this->requestId_ != nullptr; };
    // authorizedStatus Field Functions 
    bool hasAuthorizedStatus() const { return this->authorizedStatus_ != nullptr;};
    void deleteAuthorizedStatus() { this->authorizedStatus_ = nullptr;};
    inline string authorizedStatus() const { DARABONBA_PTR_GET_DEFAULT(authorizedStatus_, "") };
    inline DescribeVodRealtimeLogAuthorizedResponseBody& setAuthorizedStatus(string authorizedStatus) { DARABONBA_PTR_SET_VALUE(authorizedStatus_, authorizedStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVodRealtimeLogAuthorizedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> authorizedStatus_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
