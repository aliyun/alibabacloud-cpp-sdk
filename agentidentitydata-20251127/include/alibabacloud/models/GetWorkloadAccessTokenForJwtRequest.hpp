// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORJWTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETWORKLOADACCESSTOKENFORJWTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
namespace Models
{
  class GetWorkloadAccessTokenForJWTRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetWorkloadAccessTokenForJWTRequest& obj) { 
      DARABONBA_PTR_TO_JSON(UserToken, userToken_);
      DARABONBA_PTR_TO_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    friend void from_json(const Darabonba::Json& j, GetWorkloadAccessTokenForJWTRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(UserToken, userToken_);
      DARABONBA_PTR_FROM_JSON(WorkloadIdentityName, workloadIdentityName_);
    };
    GetWorkloadAccessTokenForJWTRequest() = default ;
    GetWorkloadAccessTokenForJWTRequest(const GetWorkloadAccessTokenForJWTRequest &) = default ;
    GetWorkloadAccessTokenForJWTRequest(GetWorkloadAccessTokenForJWTRequest &&) = default ;
    GetWorkloadAccessTokenForJWTRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetWorkloadAccessTokenForJWTRequest() = default ;
    GetWorkloadAccessTokenForJWTRequest& operator=(const GetWorkloadAccessTokenForJWTRequest &) = default ;
    GetWorkloadAccessTokenForJWTRequest& operator=(GetWorkloadAccessTokenForJWTRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->userToken_ == nullptr
        && return this->workloadIdentityName_ == nullptr; };
    // userToken Field Functions 
    bool hasUserToken() const { return this->userToken_ != nullptr;};
    void deleteUserToken() { this->userToken_ = nullptr;};
    inline string userToken() const { DARABONBA_PTR_GET_DEFAULT(userToken_, "") };
    inline GetWorkloadAccessTokenForJWTRequest& setUserToken(string userToken) { DARABONBA_PTR_SET_VALUE(userToken_, userToken) };


    // workloadIdentityName Field Functions 
    bool hasWorkloadIdentityName() const { return this->workloadIdentityName_ != nullptr;};
    void deleteWorkloadIdentityName() { this->workloadIdentityName_ = nullptr;};
    inline string workloadIdentityName() const { DARABONBA_PTR_GET_DEFAULT(workloadIdentityName_, "") };
    inline GetWorkloadAccessTokenForJWTRequest& setWorkloadIdentityName(string workloadIdentityName) { DARABONBA_PTR_SET_VALUE(workloadIdentityName_, workloadIdentityName) };


  protected:
    std::shared_ptr<string> userToken_ = nullptr;
    std::shared_ptr<string> workloadIdentityName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
