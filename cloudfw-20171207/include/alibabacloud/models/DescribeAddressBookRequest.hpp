// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAddressBookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddressBookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainPort, containPort_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddressBookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainPort, containPort_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    DescribeAddressBookRequest() = default ;
    DescribeAddressBookRequest(const DescribeAddressBookRequest &) = default ;
    DescribeAddressBookRequest(DescribeAddressBookRequest &&) = default ;
    DescribeAddressBookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddressBookRequest() = default ;
    DescribeAddressBookRequest& operator=(const DescribeAddressBookRequest &) = default ;
    DescribeAddressBookRequest& operator=(DescribeAddressBookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->containPort_ == nullptr
        && this->currentPage_ == nullptr && this->groupType_ == nullptr && this->groupUuid_ == nullptr && this->lang_ == nullptr && this->pageSize_ == nullptr
        && this->query_ == nullptr; };
    // containPort Field Functions 
    bool hasContainPort() const { return this->containPort_ != nullptr;};
    void deleteContainPort() { this->containPort_ = nullptr;};
    inline string getContainPort() const { DARABONBA_PTR_GET_DEFAULT(containPort_, "") };
    inline DescribeAddressBookRequest& setContainPort(string containPort) { DARABONBA_PTR_SET_VALUE(containPort_, containPort) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeAddressBookRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeAddressBookRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string getGroupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline DescribeAddressBookRequest& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAddressBookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAddressBookRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeAddressBookRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // Filters the query to return only address books that contain the specified port. This parameter is valid only when **GroupType** is set to **port**.
    shared_ptr<string> containPort_ {};
    // The page number for a paginated query.
    // 
    // Default value: 1.
    shared_ptr<string> currentPage_ {};
    // The type of the address book.
    // 
    // > If this parameter is not specified, the query returns both IPv4 and ECS tag address books.
    shared_ptr<string> groupType_ {};
    // The unique identifier of the address book.
    shared_ptr<string> groupUuid_ {};
    // The language of the content in the response.
    shared_ptr<string> lang_ {};
    // The number of address books per page.
    // 
    // Default value: 10. Maximum value: 50.
    shared_ptr<string> pageSize_ {};
    // The search keyword for address books.
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
