// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUserDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUserDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(IsRoot, isRoot_);
      DARABONBA_PTR_TO_JSON(LastLoginTimeEnd, lastLoginTimeEnd_);
      DARABONBA_PTR_TO_JSON(LastLoginTimeStart, lastLoginTimeStart_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(IsRoot, isRoot_);
      DARABONBA_PTR_FROM_JSON(LastLoginTimeEnd, lastLoginTimeEnd_);
      DARABONBA_PTR_FROM_JSON(LastLoginTimeStart, lastLoginTimeStart_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(UseNextToken, useNextToken_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    DescribePropertyUserDetailRequest() = default ;
    DescribePropertyUserDetailRequest(const DescribePropertyUserDetailRequest &) = default ;
    DescribePropertyUserDetailRequest(DescribePropertyUserDetailRequest &&) = default ;
    DescribePropertyUserDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUserDetailRequest() = default ;
    DescribePropertyUserDetailRequest& operator=(const DescribePropertyUserDetailRequest &) = default ;
    DescribePropertyUserDetailRequest& operator=(DescribePropertyUserDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->extend_ == nullptr && this->isRoot_ == nullptr && this->lastLoginTimeEnd_ == nullptr && this->lastLoginTimeStart_ == nullptr && this->nextToken_ == nullptr
        && this->pageSize_ == nullptr && this->remark_ == nullptr && this->useNextToken_ == nullptr && this->user_ == nullptr && this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyUserDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string getExtend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribePropertyUserDetailRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // isRoot Field Functions 
    bool hasIsRoot() const { return this->isRoot_ != nullptr;};
    void deleteIsRoot() { this->isRoot_ = nullptr;};
    inline string getIsRoot() const { DARABONBA_PTR_GET_DEFAULT(isRoot_, "") };
    inline DescribePropertyUserDetailRequest& setIsRoot(string isRoot) { DARABONBA_PTR_SET_VALUE(isRoot_, isRoot) };


    // lastLoginTimeEnd Field Functions 
    bool hasLastLoginTimeEnd() const { return this->lastLoginTimeEnd_ != nullptr;};
    void deleteLastLoginTimeEnd() { this->lastLoginTimeEnd_ = nullptr;};
    inline int64_t getLastLoginTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimeEnd_, 0L) };
    inline DescribePropertyUserDetailRequest& setLastLoginTimeEnd(int64_t lastLoginTimeEnd) { DARABONBA_PTR_SET_VALUE(lastLoginTimeEnd_, lastLoginTimeEnd) };


    // lastLoginTimeStart Field Functions 
    bool hasLastLoginTimeStart() const { return this->lastLoginTimeStart_ != nullptr;};
    void deleteLastLoginTimeStart() { this->lastLoginTimeStart_ = nullptr;};
    inline int64_t getLastLoginTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimeStart_, 0L) };
    inline DescribePropertyUserDetailRequest& setLastLoginTimeStart(int64_t lastLoginTimeStart) { DARABONBA_PTR_SET_VALUE(lastLoginTimeStart_, lastLoginTimeStart) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePropertyUserDetailRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyUserDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePropertyUserDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // useNextToken Field Functions 
    bool hasUseNextToken() const { return this->useNextToken_ != nullptr;};
    void deleteUseNextToken() { this->useNextToken_ = nullptr;};
    inline bool getUseNextToken() const { DARABONBA_PTR_GET_DEFAULT(useNextToken_, false) };
    inline DescribePropertyUserDetailRequest& setUseNextToken(bool useNextToken) { DARABONBA_PTR_SET_VALUE(useNextToken_, useNextToken) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyUserDetailRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyUserDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Set which page of the returned results to start displaying the query results. The default value is **1**, indicating that the display starts from the first page.
    shared_ptr<int32_t> currentPage_ {};
    // Whether the account name supports fuzzy search. To enable fuzzy search, set this parameter\\"s value to **1**; other values or an empty value indicate that fuzzy search is not supported.
    shared_ptr<string> extend_ {};
    // Whether the queried account has ROOT privileges. Possible values include:
    // 
    // - **0**: No
    // - **1**: Yes
    shared_ptr<string> isRoot_ {};
    // The end timestamp for the last login retrieval. The unit is milliseconds.
    shared_ptr<int64_t> lastLoginTimeEnd_ {};
    // The start timestamp for the last login retrieval. The unit is milliseconds.
    shared_ptr<int64_t> lastLoginTimeStart_ {};
    // Used to mark the starting position for reading. Leave it empty to start from the beginning.
    // 
    // > For the first call, you do not need to fill in this field. The response will include the NextToken for the second call, and each subsequent call will include the NextToken for the next call.
    shared_ptr<string> nextToken_ {};
    // Set the number of account asset fingerprint information items to display per page during pagination. The default value is **10**, indicating that 10 items of account asset fingerprint information are displayed per page.
    shared_ptr<int32_t> pageSize_ {};
    // The name or IP address of the server to be queried.
    shared_ptr<string> remark_ {};
    // Whether to use the NextToken method to fetch vulnerability list data. If this parameter is used, TotalCount will no longer be returned. Possible values:
    // 
    // - **true**: Use the NextToken method.
    // - **false**: Do not use the NextToken method.
    shared_ptr<bool> useNextToken_ {};
    // The account name of the server to be queried.
    shared_ptr<string> user_ {};
    // The UUID of the server to be queried.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
