// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMELOGAUTHORIZEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIVEREALTIMELOGAUTHORIZEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeLiveRealtimeLogAuthorizedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLiveRealtimeLogAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizedStatus, authorizedStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLiveRealtimeLogAuthorizedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizedStatus, authorizedStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeLiveRealtimeLogAuthorizedResponseBody() = default ;
    DescribeLiveRealtimeLogAuthorizedResponseBody(const DescribeLiveRealtimeLogAuthorizedResponseBody &) = default ;
    DescribeLiveRealtimeLogAuthorizedResponseBody(DescribeLiveRealtimeLogAuthorizedResponseBody &&) = default ;
    DescribeLiveRealtimeLogAuthorizedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLiveRealtimeLogAuthorizedResponseBody() = default ;
    DescribeLiveRealtimeLogAuthorizedResponseBody& operator=(const DescribeLiveRealtimeLogAuthorizedResponseBody &) = default ;
    DescribeLiveRealtimeLogAuthorizedResponseBody& operator=(DescribeLiveRealtimeLogAuthorizedResponseBody &&) = default ;
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
    inline DescribeLiveRealtimeLogAuthorizedResponseBody& setAuthorizedStatus(string authorizedStatus) { DARABONBA_PTR_SET_VALUE(authorizedStatus_, authorizedStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLiveRealtimeLogAuthorizedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The authorization status. **true**: authorized **false**: not authorized
    std::shared_ptr<string> authorizedStatus_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
