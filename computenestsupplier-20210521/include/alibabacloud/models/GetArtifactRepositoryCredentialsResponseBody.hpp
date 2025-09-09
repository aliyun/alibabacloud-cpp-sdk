// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETARTIFACTREPOSITORYCREDENTIALSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetArtifactRepositoryCredentialsResponseBodyAvailableResources.hpp>
#include <alibabacloud/models/GetArtifactRepositoryCredentialsResponseBodyCredentials.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetArtifactRepositoryCredentialsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetArtifactRepositoryCredentialsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_TO_JSON(Credentials, credentials_);
      DARABONBA_PTR_TO_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetArtifactRepositoryCredentialsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResources, availableResources_);
      DARABONBA_PTR_FROM_JSON(Credentials, credentials_);
      DARABONBA_PTR_FROM_JSON(ExpireDate, expireDate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetArtifactRepositoryCredentialsResponseBody() = default ;
    GetArtifactRepositoryCredentialsResponseBody(const GetArtifactRepositoryCredentialsResponseBody &) = default ;
    GetArtifactRepositoryCredentialsResponseBody(GetArtifactRepositoryCredentialsResponseBody &&) = default ;
    GetArtifactRepositoryCredentialsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetArtifactRepositoryCredentialsResponseBody() = default ;
    GetArtifactRepositoryCredentialsResponseBody& operator=(const GetArtifactRepositoryCredentialsResponseBody &) = default ;
    GetArtifactRepositoryCredentialsResponseBody& operator=(GetArtifactRepositoryCredentialsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableResources_ != nullptr
        && this->credentials_ != nullptr && this->expireDate_ != nullptr && this->requestId_ != nullptr; };
    // availableResources Field Functions 
    bool hasAvailableResources() const { return this->availableResources_ != nullptr;};
    void deleteAvailableResources() { this->availableResources_ = nullptr;};
    inline const vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources> & availableResources() const { DARABONBA_PTR_GET_CONST(availableResources_, vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources>) };
    inline vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources> availableResources() { DARABONBA_PTR_GET(availableResources_, vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources>) };
    inline GetArtifactRepositoryCredentialsResponseBody& setAvailableResources(const vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources> & availableResources) { DARABONBA_PTR_SET_VALUE(availableResources_, availableResources) };
    inline GetArtifactRepositoryCredentialsResponseBody& setAvailableResources(vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources> && availableResources) { DARABONBA_PTR_SET_RVALUE(availableResources_, availableResources) };


    // credentials Field Functions 
    bool hasCredentials() const { return this->credentials_ != nullptr;};
    void deleteCredentials() { this->credentials_ = nullptr;};
    inline const GetArtifactRepositoryCredentialsResponseBodyCredentials & credentials() const { DARABONBA_PTR_GET_CONST(credentials_, GetArtifactRepositoryCredentialsResponseBodyCredentials) };
    inline GetArtifactRepositoryCredentialsResponseBodyCredentials credentials() { DARABONBA_PTR_GET(credentials_, GetArtifactRepositoryCredentialsResponseBodyCredentials) };
    inline GetArtifactRepositoryCredentialsResponseBody& setCredentials(const GetArtifactRepositoryCredentialsResponseBodyCredentials & credentials) { DARABONBA_PTR_SET_VALUE(credentials_, credentials) };
    inline GetArtifactRepositoryCredentialsResponseBody& setCredentials(GetArtifactRepositoryCredentialsResponseBodyCredentials && credentials) { DARABONBA_PTR_SET_RVALUE(credentials_, credentials) };


    // expireDate Field Functions 
    bool hasExpireDate() const { return this->expireDate_ != nullptr;};
    void deleteExpireDate() { this->expireDate_ = nullptr;};
    inline string expireDate() const { DARABONBA_PTR_GET_DEFAULT(expireDate_, "") };
    inline GetArtifactRepositoryCredentialsResponseBody& setExpireDate(string expireDate) { DARABONBA_PTR_SET_VALUE(expireDate_, expireDate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetArtifactRepositoryCredentialsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the resources that can be uploaded.
    std::shared_ptr<vector<GetArtifactRepositoryCredentialsResponseBodyAvailableResources>> availableResources_ = nullptr;
    // The credentials.
    std::shared_ptr<GetArtifactRepositoryCredentialsResponseBodyCredentials> credentials_ = nullptr;
    // The time when the credentials expired.
    std::shared_ptr<string> expireDate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
