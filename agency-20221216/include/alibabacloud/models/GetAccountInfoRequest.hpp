// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCOUNTINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCOUNTINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetAccountInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccountInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Uid, uid_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccountInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Uid, uid_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    GetAccountInfoRequest() = default ;
    GetAccountInfoRequest(const GetAccountInfoRequest &) = default ;
    GetAccountInfoRequest(GetAccountInfoRequest &&) = default ;
    GetAccountInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccountInfoRequest() = default ;
    GetAccountInfoRequest& operator=(const GetAccountInfoRequest &) = default ;
    GetAccountInfoRequest& operator=(GetAccountInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->uid_ == nullptr && this->userType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline GetAccountInfoRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline GetAccountInfoRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // uid Field Functions 
    bool hasUid() const { return this->uid_ != nullptr;};
    void deleteUid() { this->uid_ = nullptr;};
    inline int64_t getUid() const { DARABONBA_PTR_GET_DEFAULT(uid_, 0L) };
    inline GetAccountInfoRequest& setUid(int64_t uid) { DARABONBA_PTR_SET_VALUE(uid_, uid) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline GetAccountInfoRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // Pagination, current page.
    // 
    // This parameter is required.
    shared_ptr<int32_t> currentPage_ {};
    // Pagination, record number on each page, maximum 20.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // Account UID of Distribution Customer. This parameter and the UserType parameter must have one filled. If this parameter is empty, then check all Distribution Customer accounts of the selected UserType.
    shared_ptr<int64_t> uid_ {};
    // Distribution Customer\\"s Account Type:
    // - 1 End User
    // - 2 Enterprise
    // - 3 T2 Partner
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
