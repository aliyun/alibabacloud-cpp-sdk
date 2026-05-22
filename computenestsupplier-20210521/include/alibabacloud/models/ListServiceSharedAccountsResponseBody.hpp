// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESHAREDACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceSharedAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceSharedAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShareAccount, shareAccount_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceSharedAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShareAccount, shareAccount_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListServiceSharedAccountsResponseBody() = default ;
    ListServiceSharedAccountsResponseBody(const ListServiceSharedAccountsResponseBody &) = default ;
    ListServiceSharedAccountsResponseBody(ListServiceSharedAccountsResponseBody &&) = default ;
    ListServiceSharedAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceSharedAccountsResponseBody() = default ;
    ListServiceSharedAccountsResponseBody& operator=(const ListServiceSharedAccountsResponseBody &) = default ;
    ListServiceSharedAccountsResponseBody& operator=(ListServiceSharedAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ShareAccount : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ShareAccount& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Logo, logo_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Permission, permission_);
        DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserAliUid, userAliUid_);
      };
      friend void from_json(const Darabonba::Json& j, ShareAccount& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Logo, logo_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Permission, permission_);
        DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserAliUid, userAliUid_);
      };
      ShareAccount() = default ;
      ShareAccount(const ShareAccount &) = default ;
      ShareAccount(ShareAccount &&) = default ;
      ShareAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ShareAccount() = default ;
      ShareAccount& operator=(const ShareAccount &) = default ;
      ShareAccount& operator=(ShareAccount &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->logo_ == nullptr && this->name_ == nullptr && this->permission_ == nullptr && this->serviceId_ == nullptr && this->updateTime_ == nullptr
        && this->userAliUid_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ShareAccount& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // logo Field Functions 
      bool hasLogo() const { return this->logo_ != nullptr;};
      void deleteLogo() { this->logo_ = nullptr;};
      inline string getLogo() const { DARABONBA_PTR_GET_DEFAULT(logo_, "") };
      inline ShareAccount& setLogo(string logo) { DARABONBA_PTR_SET_VALUE(logo_, logo) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ShareAccount& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // permission Field Functions 
      bool hasPermission() const { return this->permission_ != nullptr;};
      void deletePermission() { this->permission_ = nullptr;};
      inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
      inline ShareAccount& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


      // serviceId Field Functions 
      bool hasServiceId() const { return this->serviceId_ != nullptr;};
      void deleteServiceId() { this->serviceId_ = nullptr;};
      inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
      inline ShareAccount& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ShareAccount& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userAliUid Field Functions 
      bool hasUserAliUid() const { return this->userAliUid_ != nullptr;};
      void deleteUserAliUid() { this->userAliUid_ = nullptr;};
      inline string getUserAliUid() const { DARABONBA_PTR_GET_DEFAULT(userAliUid_, "") };
      inline ShareAccount& setUserAliUid(string userAliUid) { DARABONBA_PTR_SET_VALUE(userAliUid_, userAliUid) };


    protected:
      // The time when the service was created.
      shared_ptr<string> createTime_ {};
      // Service logo.
      shared_ptr<string> logo_ {};
      // The name of the service instance. The value must meet the following requirements:
      // 
      // *   The name cannot exceed 64 characters in length.
      // *   It can contain digits, letters, hyphens (-), and underscores (_). It must start with a digit or a letter.
      shared_ptr<string> name_ {};
      // The permissions on the service. Valid values:
      // 
      // *   Deployable: Permissions to deploy the service.
      // *   Accessible: Permissions to access the service.
      shared_ptr<string> permission_ {};
      // The service ID.
      shared_ptr<string> serviceId_ {};
      // The time when the service was updated.
      shared_ptr<string> updateTime_ {};
      // The user aliUid.
      shared_ptr<string> userAliUid_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->shareAccount_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceSharedAccountsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceSharedAccountsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListServiceSharedAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shareAccount Field Functions 
    bool hasShareAccount() const { return this->shareAccount_ != nullptr;};
    void deleteShareAccount() { this->shareAccount_ = nullptr;};
    inline const vector<ListServiceSharedAccountsResponseBody::ShareAccount> & getShareAccount() const { DARABONBA_PTR_GET_CONST(shareAccount_, vector<ListServiceSharedAccountsResponseBody::ShareAccount>) };
    inline vector<ListServiceSharedAccountsResponseBody::ShareAccount> getShareAccount() { DARABONBA_PTR_GET(shareAccount_, vector<ListServiceSharedAccountsResponseBody::ShareAccount>) };
    inline ListServiceSharedAccountsResponseBody& setShareAccount(const vector<ListServiceSharedAccountsResponseBody::ShareAccount> & shareAccount) { DARABONBA_PTR_SET_VALUE(shareAccount_, shareAccount) };
    inline ListServiceSharedAccountsResponseBody& setShareAccount(vector<ListServiceSharedAccountsResponseBody::ShareAccount> && shareAccount) { DARABONBA_PTR_SET_RVALUE(shareAccount_, shareAccount) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListServiceSharedAccountsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Service shared account information.
    shared_ptr<vector<ListServiceSharedAccountsResponseBody::ShareAccount>> shareAccount_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
