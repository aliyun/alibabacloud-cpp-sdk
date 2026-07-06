// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICECREDENTIALSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICECREDENTIALSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListServiceCredentialsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceCredentialsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllUsers, allUsers_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceCredentialsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllUsers, allUsers_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    ListServiceCredentialsRequest() = default ;
    ListServiceCredentialsRequest(const ListServiceCredentialsRequest &) = default ;
    ListServiceCredentialsRequest(ListServiceCredentialsRequest &&) = default ;
    ListServiceCredentialsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceCredentialsRequest() = default ;
    ListServiceCredentialsRequest& operator=(const ListServiceCredentialsRequest &) = default ;
    ListServiceCredentialsRequest& operator=(ListServiceCredentialsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allUsers_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->serviceName_ == nullptr && this->userPrincipalName_ == nullptr; };
    // allUsers Field Functions 
    bool hasAllUsers() const { return this->allUsers_ != nullptr;};
    void deleteAllUsers() { this->allUsers_ = nullptr;};
    inline bool getAllUsers() const { DARABONBA_PTR_GET_DEFAULT(allUsers_, false) };
    inline ListServiceCredentialsRequest& setAllUsers(bool allUsers) { DARABONBA_PTR_SET_VALUE(allUsers_, allUsers) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceCredentialsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceCredentialsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline ListServiceCredentialsRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline ListServiceCredentialsRequest& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // Specifies whether to query service credentials for all Resource Access Management (RAM) users under the Alibaba Cloud account.
    // 
    // If this parameter is set to true, you cannot specify UserPrincipalName at the same time.
    shared_ptr<bool> allUsers_ {};
    // The maximum number of entries per page. Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. You do not need to specify this parameter for the first API call.
    shared_ptr<string> nextToken_ {};
    // The service name of the Alibaba Cloud service.
    shared_ptr<string> serviceName_ {};
    // The logon name of the Resource Access Management (RAM) user.
    // 
    // Queries the service credentials of the specified RAM user.
    shared_ptr<string> userPrincipalName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
