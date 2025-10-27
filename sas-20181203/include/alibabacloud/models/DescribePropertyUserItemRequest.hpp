// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERITEMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROPERTYUSERITEMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribePropertyUserItemRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePropertyUserItemRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePropertyUserItemRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(ForceFlush, forceFlush_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    DescribePropertyUserItemRequest() = default ;
    DescribePropertyUserItemRequest(const DescribePropertyUserItemRequest &) = default ;
    DescribePropertyUserItemRequest(DescribePropertyUserItemRequest &&) = default ;
    DescribePropertyUserItemRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePropertyUserItemRequest() = default ;
    DescribePropertyUserItemRequest& operator=(const DescribePropertyUserItemRequest &) = default ;
    DescribePropertyUserItemRequest& operator=(DescribePropertyUserItemRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->forceFlush_ == nullptr && return this->pageSize_ == nullptr && return this->user_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribePropertyUserItemRequest& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // forceFlush Field Functions 
    bool hasForceFlush() const { return this->forceFlush_ != nullptr;};
    void deleteForceFlush() { this->forceFlush_ = nullptr;};
    inline bool forceFlush() const { DARABONBA_PTR_GET_DEFAULT(forceFlush_, false) };
    inline DescribePropertyUserItemRequest& setForceFlush(bool forceFlush) { DARABONBA_PTR_SET_VALUE(forceFlush_, forceFlush) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribePropertyUserItemRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline DescribePropertyUserItemRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The number of the page to return.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // Specifies whether to forcefully refresh the data that you want to query. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> forceFlush_ = nullptr;
    // The number of entries to return on each page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The information about the account.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
