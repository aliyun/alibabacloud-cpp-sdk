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
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(IsRoot, isRoot_);
      DARABONBA_PTR_FROM_JSON(LastLoginTimeEnd, lastLoginTimeEnd_);
      DARABONBA_PTR_FROM_JSON(LastLoginTimeStart, lastLoginTimeStart_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
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
        && return this->extend_ == nullptr && return this->isRoot_ == nullptr && return this->lastLoginTimeEnd_ == nullptr && return this->lastLoginTimeStart_ == nullptr && return this->pageSize_ == nullptr
        && return this->remark_ == nullptr && return this->user_ == nullptr && return this->uuid_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyUserDetailRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline DescribePropertyUserDetailRequest& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // isRoot Field Functions 
    bool hasIsRoot() const { return this->isRoot_ != nullptr;};
    void deleteIsRoot() { this->isRoot_ = nullptr;};
    inline string isRoot() const { DARABONBA_PTR_GET_DEFAULT(isRoot_, "") };
    inline DescribePropertyUserDetailRequest& setIsRoot(string isRoot) { DARABONBA_PTR_SET_VALUE(isRoot_, isRoot) };


    // lastLoginTimeEnd Field Functions 
    bool hasLastLoginTimeEnd() const { return this->lastLoginTimeEnd_ != nullptr;};
    void deleteLastLoginTimeEnd() { this->lastLoginTimeEnd_ = nullptr;};
    inline int64_t lastLoginTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimeEnd_, 0L) };
    inline DescribePropertyUserDetailRequest& setLastLoginTimeEnd(int64_t lastLoginTimeEnd) { DARABONBA_PTR_SET_VALUE(lastLoginTimeEnd_, lastLoginTimeEnd) };


    // lastLoginTimeStart Field Functions 
    bool hasLastLoginTimeStart() const { return this->lastLoginTimeStart_ != nullptr;};
    void deleteLastLoginTimeStart() { this->lastLoginTimeStart_ = nullptr;};
    inline int64_t lastLoginTimeStart() const { DARABONBA_PTR_GET_DEFAULT(lastLoginTimeStart_, 0L) };
    inline DescribePropertyUserDetailRequest& setLastLoginTimeStart(int64_t lastLoginTimeStart) { DARABONBA_PTR_SET_VALUE(lastLoginTimeStart_, lastLoginTimeStart) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyUserDetailRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribePropertyUserDetailRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyUserDetailRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribePropertyUserDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The number of the page to return. Default value: **1**.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether the fuzzy search by account name is supported. If you want to use fuzzy search, set the parameter to **1**. If you set the parameter to a different value or leave the parameter empty, fuzzy search is not supported.
    std::shared_ptr<string> extend_ = nullptr;
    // Specifies whether the account has root permissions. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    std::shared_ptr<string> isRoot_ = nullptr;
    // The timestamp of the last logoff from the account. Unit: milliseconds.
    std::shared_ptr<int64_t> lastLoginTimeEnd_ = nullptr;
    // The timestamp of the last logon to the account. Unit: milliseconds.
    std::shared_ptr<int64_t> lastLoginTimeStart_ = nullptr;
    // The number of entries to return on each page. Default value: **10**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name or IP address of the server.
    std::shared_ptr<string> remark_ = nullptr;
    // The name of the account to which the server belongs.
    std::shared_ptr<string> user_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
