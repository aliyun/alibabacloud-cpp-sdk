// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADDRESSBOOKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAddressBookShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAddressBookShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssetMemberUids, assetMemberUidsShrink_);
      DARABONBA_PTR_TO_JSON(ContainPort, containPort_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Query, query_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAddressBookShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetMemberUids, assetMemberUidsShrink_);
      DARABONBA_PTR_FROM_JSON(ContainPort, containPort_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(GroupUuid, groupUuid_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
    };
    DescribeAddressBookShrinkRequest() = default ;
    DescribeAddressBookShrinkRequest(const DescribeAddressBookShrinkRequest &) = default ;
    DescribeAddressBookShrinkRequest(DescribeAddressBookShrinkRequest &&) = default ;
    DescribeAddressBookShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAddressBookShrinkRequest() = default ;
    DescribeAddressBookShrinkRequest& operator=(const DescribeAddressBookShrinkRequest &) = default ;
    DescribeAddressBookShrinkRequest& operator=(DescribeAddressBookShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetMemberUidsShrink_ == nullptr
        && this->containPort_ == nullptr && this->currentPage_ == nullptr && this->groupType_ == nullptr && this->groupUuid_ == nullptr && this->lang_ == nullptr
        && this->pageSize_ == nullptr && this->query_ == nullptr; };
    // assetMemberUidsShrink Field Functions 
    bool hasAssetMemberUidsShrink() const { return this->assetMemberUidsShrink_ != nullptr;};
    void deleteAssetMemberUidsShrink() { this->assetMemberUidsShrink_ = nullptr;};
    inline string getAssetMemberUidsShrink() const { DARABONBA_PTR_GET_DEFAULT(assetMemberUidsShrink_, "") };
    inline DescribeAddressBookShrinkRequest& setAssetMemberUidsShrink(string assetMemberUidsShrink) { DARABONBA_PTR_SET_VALUE(assetMemberUidsShrink_, assetMemberUidsShrink) };


    // containPort Field Functions 
    bool hasContainPort() const { return this->containPort_ != nullptr;};
    void deleteContainPort() { this->containPort_ = nullptr;};
    inline string getContainPort() const { DARABONBA_PTR_GET_DEFAULT(containPort_, "") };
    inline DescribeAddressBookShrinkRequest& setContainPort(string containPort) { DARABONBA_PTR_SET_VALUE(containPort_, containPort) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeAddressBookShrinkRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeAddressBookShrinkRequest& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // groupUuid Field Functions 
    bool hasGroupUuid() const { return this->groupUuid_ != nullptr;};
    void deleteGroupUuid() { this->groupUuid_ = nullptr;};
    inline string getGroupUuid() const { DARABONBA_PTR_GET_DEFAULT(groupUuid_, "") };
    inline DescribeAddressBookShrinkRequest& setGroupUuid(string groupUuid) { DARABONBA_PTR_SET_VALUE(groupUuid_, groupUuid) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAddressBookShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAddressBookShrinkRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline DescribeAddressBookShrinkRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


  protected:
    // The list of member accounts for the asset address book.
    shared_ptr<string> assetMemberUidsShrink_ {};
    // Queries address books that contain the specified port. This parameter takes effect only when the **GroupType** parameter is set to **port**.
    shared_ptr<string> containPort_ {};
    // The page number in a paged query.
    // 
    // Default value: 1, which indicates that the first page of data is returned.
    shared_ptr<string> currentPage_ {};
    // The type of the address book.
    // 
    // > If you do not set this parameter, IP address books and ECS tag-based address books are queried.
    shared_ptr<string> groupType_ {};
    // The unique ID of the address book.
    shared_ptr<string> groupUuid_ {};
    // The language type for the address book description. Valid values:
    // - **en**: English.
    // - **zh**: Chinese (default).
    shared_ptr<string> lang_ {};
    // The number of address books on each page in a paged query.
    // 
    // Default value: 10, which indicates that each page contains 10 results. Maximum value: 50.
    shared_ptr<string> pageSize_ {};
    // The search condition. Enter the address book information that you want to query.
    shared_ptr<string> query_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
