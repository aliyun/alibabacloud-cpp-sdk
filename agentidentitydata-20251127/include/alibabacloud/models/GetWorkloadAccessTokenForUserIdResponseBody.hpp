// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORUSERIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORUSERIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetWorkloadAccessTokenForUserIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkloadAccessTokenForUserIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkloadAccessTokenForUserIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WorkloadAccessToken, workloadAccessToken_);
    };
    GetWorkloadAccessTokenForUserIdResponseBody() = default ;
    GetWorkloadAccessTokenForUserIdResponseBody(const GetWorkloadAccessTokenForUserIdResponseBody &) = default ;
    GetWorkloadAccessTokenForUserIdResponseBody(GetWorkloadAccessTokenForUserIdResponseBody &&) = default ;
    GetWorkloadAccessTokenForUserIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkloadAccessTokenForUserIdResponseBody() = default ;
    GetWorkloadAccessTokenForUserIdResponseBody& operator=(const GetWorkloadAccessTokenForUserIdResponseBody &) = default ;
    GetWorkloadAccessTokenForUserIdResponseBody& operator=(GetWorkloadAccessTokenForUserIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->workloadAccessToken_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetWorkloadAccessTokenForUserIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // workloadAccessToken Field Functions 
    bool hasWorkloadAccessToken() const { return this->workloadAccessToken_ != nullptr;};
    void deleteWorkloadAccessToken() { this->workloadAccessToken_ = nullptr;};
    inline string workloadAccessToken() const { DARABONBA_PTR_GET_DEFAULT(workloadAccessToken_, "") };
    inline GetWorkloadAccessTokenForUserIdResponseBody& setWorkloadAccessToken(string workloadAccessToken) { DARABONBA_PTR_SET_VALUE(workloadAccessToken_, workloadAccessToken) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> workloadAccessToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
