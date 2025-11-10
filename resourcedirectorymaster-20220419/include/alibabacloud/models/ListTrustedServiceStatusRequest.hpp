// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRUSTEDSERVICESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTrustedServiceStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrustedServiceStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdminAccountId, adminAccountId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrustedServiceStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdminAccountId, adminAccountId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
    };
    ListTrustedServiceStatusRequest() = default ;
    ListTrustedServiceStatusRequest(const ListTrustedServiceStatusRequest &) = default ;
    ListTrustedServiceStatusRequest(ListTrustedServiceStatusRequest &&) = default ;
    ListTrustedServiceStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrustedServiceStatusRequest() = default ;
    ListTrustedServiceStatusRequest& operator=(const ListTrustedServiceStatusRequest &) = default ;
    ListTrustedServiceStatusRequest& operator=(ListTrustedServiceStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adminAccountId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr; };
    // adminAccountId Field Functions 
    bool hasAdminAccountId() const { return this->adminAccountId_ != nullptr;};
    void deleteAdminAccountId() { this->adminAccountId_ = nullptr;};
    inline string adminAccountId() const { DARABONBA_PTR_GET_DEFAULT(adminAccountId_, "") };
    inline ListTrustedServiceStatusRequest& setAdminAccountId(string adminAccountId) { DARABONBA_PTR_SET_VALUE(adminAccountId_, adminAccountId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTrustedServiceStatusRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTrustedServiceStatusRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    // The ID of the management account or delegated administrator account.
    // 
    // *   If you set this parameter to the ID of a management account, the trusted services that are enabled within the management account are queried. The default value of this parameter is the ID of an management account.
    // *   If you set this parameter to the ID of a delegated administrator account, the trusted services that are enabled within the delegated administrator account are queried.
    // 
    // For more information about trusted services and delegated administrator accounts, see [Overview of trusted services](https://help.aliyun.com/document_detail/208133.html) and [Delegated administrator accounts](https://help.aliyun.com/document_detail/208117.html).
    std::shared_ptr<string> adminAccountId_ = nullptr;
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
