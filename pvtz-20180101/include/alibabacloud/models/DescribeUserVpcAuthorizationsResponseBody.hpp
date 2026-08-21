// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERVPCAUTHORIZATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERVPCAUTHORIZATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Pvtz20180101
{
namespace Models
{
  class DescribeUserVpcAuthorizationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserVpcAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserVpcAuthorizationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalItems, totalItems_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    DescribeUserVpcAuthorizationsResponseBody() = default ;
    DescribeUserVpcAuthorizationsResponseBody(const DescribeUserVpcAuthorizationsResponseBody &) = default ;
    DescribeUserVpcAuthorizationsResponseBody(DescribeUserVpcAuthorizationsResponseBody &&) = default ;
    DescribeUserVpcAuthorizationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserVpcAuthorizationsResponseBody() = default ;
    DescribeUserVpcAuthorizationsResponseBody& operator=(const DescribeUserVpcAuthorizationsResponseBody &) = default ;
    DescribeUserVpcAuthorizationsResponseBody& operator=(DescribeUserVpcAuthorizationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(AuthType, authType_);
        DARABONBA_PTR_TO_JSON(AuthorizedAliyunId, authorizedAliyunId_);
        DARABONBA_PTR_TO_JSON(AuthorizedUserId, authorizedUserId_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthType, authType_);
        DARABONBA_PTR_FROM_JSON(AuthorizedAliyunId, authorizedAliyunId_);
        DARABONBA_PTR_FROM_JSON(AuthorizedUserId, authorizedUserId_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authType_ == nullptr
        && this->authorizedAliyunId_ == nullptr && this->authorizedUserId_ == nullptr && this->createTime_ == nullptr && this->createTimestamp_ == nullptr; };
      // authType Field Functions 
      bool hasAuthType() const { return this->authType_ != nullptr;};
      void deleteAuthType() { this->authType_ = nullptr;};
      inline string getAuthType() const { DARABONBA_PTR_GET_DEFAULT(authType_, "") };
      inline Users& setAuthType(string authType) { DARABONBA_PTR_SET_VALUE(authType_, authType) };


      // authorizedAliyunId Field Functions 
      bool hasAuthorizedAliyunId() const { return this->authorizedAliyunId_ != nullptr;};
      void deleteAuthorizedAliyunId() { this->authorizedAliyunId_ = nullptr;};
      inline string getAuthorizedAliyunId() const { DARABONBA_PTR_GET_DEFAULT(authorizedAliyunId_, "") };
      inline Users& setAuthorizedAliyunId(string authorizedAliyunId) { DARABONBA_PTR_SET_VALUE(authorizedAliyunId_, authorizedAliyunId) };


      // authorizedUserId Field Functions 
      bool hasAuthorizedUserId() const { return this->authorizedUserId_ != nullptr;};
      void deleteAuthorizedUserId() { this->authorizedUserId_ = nullptr;};
      inline int64_t getAuthorizedUserId() const { DARABONBA_PTR_GET_DEFAULT(authorizedUserId_, 0L) };
      inline Users& setAuthorizedUserId(int64_t authorizedUserId) { DARABONBA_PTR_SET_VALUE(authorizedUserId_, authorizedUserId) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Users& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline Users& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    protected:
      // The authorization type. Valid values:
      // 
      // - NORMAL: A regular authorization.
      // 
      // - CLOUD_PRODUCT: An authorization for an Alibaba Cloud service.
      shared_ptr<string> authType_ {};
      // The name of the Alibaba Cloud account that owns the authorized resources.
      shared_ptr<string> authorizedAliyunId_ {};
      // The ID of the Alibaba Cloud account that owns the authorized resources.
      shared_ptr<int64_t> authorizedUserId_ {};
      // The time when the authorization was created.
      shared_ptr<string> createTime_ {};
      // The timestamp that indicates when the authorization was created.
      shared_ptr<int64_t> createTimestamp_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalItems_ == nullptr && this->totalPages_ == nullptr && this->users_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUserVpcAuthorizationsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUserVpcAuthorizationsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserVpcAuthorizationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalItems Field Functions 
    bool hasTotalItems() const { return this->totalItems_ != nullptr;};
    void deleteTotalItems() { this->totalItems_ = nullptr;};
    inline int32_t getTotalItems() const { DARABONBA_PTR_GET_DEFAULT(totalItems_, 0) };
    inline DescribeUserVpcAuthorizationsResponseBody& setTotalItems(int32_t totalItems) { DARABONBA_PTR_SET_VALUE(totalItems_, totalItems) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t getTotalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline DescribeUserVpcAuthorizationsResponseBody& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<DescribeUserVpcAuthorizationsResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<DescribeUserVpcAuthorizationsResponseBody::Users>) };
    inline vector<DescribeUserVpcAuthorizationsResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<DescribeUserVpcAuthorizationsResponseBody::Users>) };
    inline DescribeUserVpcAuthorizationsResponseBody& setUsers(const vector<DescribeUserVpcAuthorizationsResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline DescribeUserVpcAuthorizationsResponseBody& setUsers(vector<DescribeUserVpcAuthorizationsResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The page number of the returned data.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> pageSize_ {};
    // The unique request ID.
    shared_ptr<string> requestId_ {};
    // The total number of authorizations.
    shared_ptr<int32_t> totalItems_ {};
    // The total number of pages returned.
    shared_ptr<int32_t> totalPages_ {};
    // The information about the Alibaba Cloud accounts that own the authorized resources.
    shared_ptr<vector<DescribeUserVpcAuthorizationsResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Pvtz20180101
#endif
