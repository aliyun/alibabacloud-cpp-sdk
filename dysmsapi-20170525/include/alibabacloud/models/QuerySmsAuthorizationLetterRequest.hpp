// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSAUTHORIZATIONLETTERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsAuthorizationLetterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsAuthorizationLetterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationLetterIdList, authorizationLetterIdList_);
      DARABONBA_PTR_TO_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SignName, signName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsAuthorizationLetterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationLetterIdList, authorizationLetterIdList_);
      DARABONBA_PTR_FROM_JSON(OrganizationCode, organizationCode_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SignName, signName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QuerySmsAuthorizationLetterRequest() = default ;
    QuerySmsAuthorizationLetterRequest(const QuerySmsAuthorizationLetterRequest &) = default ;
    QuerySmsAuthorizationLetterRequest(QuerySmsAuthorizationLetterRequest &&) = default ;
    QuerySmsAuthorizationLetterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsAuthorizationLetterRequest() = default ;
    QuerySmsAuthorizationLetterRequest& operator=(const QuerySmsAuthorizationLetterRequest &) = default ;
    QuerySmsAuthorizationLetterRequest& operator=(QuerySmsAuthorizationLetterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizationLetterIdList_ == nullptr
        && this->organizationCode_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->signName_ == nullptr
        && this->state_ == nullptr && this->status_ == nullptr; };
    // authorizationLetterIdList Field Functions 
    bool hasAuthorizationLetterIdList() const { return this->authorizationLetterIdList_ != nullptr;};
    void deleteAuthorizationLetterIdList() { this->authorizationLetterIdList_ = nullptr;};
    inline const vector<int64_t> & getAuthorizationLetterIdList() const { DARABONBA_PTR_GET_CONST(authorizationLetterIdList_, vector<int64_t>) };
    inline vector<int64_t> getAuthorizationLetterIdList() { DARABONBA_PTR_GET(authorizationLetterIdList_, vector<int64_t>) };
    inline QuerySmsAuthorizationLetterRequest& setAuthorizationLetterIdList(const vector<int64_t> & authorizationLetterIdList) { DARABONBA_PTR_SET_VALUE(authorizationLetterIdList_, authorizationLetterIdList) };
    inline QuerySmsAuthorizationLetterRequest& setAuthorizationLetterIdList(vector<int64_t> && authorizationLetterIdList) { DARABONBA_PTR_SET_RVALUE(authorizationLetterIdList_, authorizationLetterIdList) };


    // organizationCode Field Functions 
    bool hasOrganizationCode() const { return this->organizationCode_ != nullptr;};
    void deleteOrganizationCode() { this->organizationCode_ = nullptr;};
    inline string getOrganizationCode() const { DARABONBA_PTR_GET_DEFAULT(organizationCode_, "") };
    inline QuerySmsAuthorizationLetterRequest& setOrganizationCode(string organizationCode) { DARABONBA_PTR_SET_VALUE(organizationCode_, organizationCode) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline QuerySmsAuthorizationLetterRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline QuerySmsAuthorizationLetterRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline QuerySmsAuthorizationLetterRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // signName Field Functions 
    bool hasSignName() const { return this->signName_ != nullptr;};
    void deleteSignName() { this->signName_ = nullptr;};
    inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
    inline QuerySmsAuthorizationLetterRequest& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QuerySmsAuthorizationLetterRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QuerySmsAuthorizationLetterRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The list of letter of authorization IDs.
    shared_ptr<vector<int64_t>> authorizationLetterIdList_ {};
    // The unified social credit code of the authorizing party. The length cannot exceed 150 characters.
    shared_ptr<string> organizationCode_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The signature name. If the authorization scope includes multiple signatures when you create the letter of authorization, the letters of authorization that contain the signature are returned.
    shared_ptr<string> signName_ {};
    // The review status of the letter of authorization, which is related to the review status of the signature. Valid values:
    // - **INT**: Pending review. The letter of authorization has been created. After you submit a signature application, it enters the review process.
    // - **PASSED**: Review passed. When a signature in the authorized signature scope of the letter of authorization passes the review, the status of the letter of authorization changes to PASSED.
    shared_ptr<string> state_ {};
    // The availability status of the letter of authorization, which is related to the validity period of the letter of authorization. Valid values:
    // 
    // - **VALID**: Available. The letter of authorization is within the validity period.
    // - **INVALID**: Unavailable. The letter of authorization has expired.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
