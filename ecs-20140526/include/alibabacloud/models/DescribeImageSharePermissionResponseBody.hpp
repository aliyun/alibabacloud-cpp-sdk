// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGESHAREPERMISSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeImageSharePermissionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageSharePermissionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Accounts, accounts_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShareGroups, shareGroups_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageSharePermissionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Accounts, accounts_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShareGroups, shareGroups_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImageSharePermissionResponseBody() = default ;
    DescribeImageSharePermissionResponseBody(const DescribeImageSharePermissionResponseBody &) = default ;
    DescribeImageSharePermissionResponseBody(DescribeImageSharePermissionResponseBody &&) = default ;
    DescribeImageSharePermissionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageSharePermissionResponseBody() = default ;
    DescribeImageSharePermissionResponseBody& operator=(const DescribeImageSharePermissionResponseBody &) = default ;
    DescribeImageSharePermissionResponseBody& operator=(DescribeImageSharePermissionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ShareGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ShareGroups& obj) { 
        DARABONBA_PTR_TO_JSON(ShareGroup, shareGroup_);
      };
      friend void from_json(const Darabonba::Json& j, ShareGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(ShareGroup, shareGroup_);
      };
      ShareGroups() = default ;
      ShareGroups(const ShareGroups &) = default ;
      ShareGroups(ShareGroups &&) = default ;
      ShareGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ShareGroups() = default ;
      ShareGroups& operator=(const ShareGroups &) = default ;
      ShareGroups& operator=(ShareGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ShareGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ShareGroup& obj) { 
          DARABONBA_PTR_TO_JSON(Group, group_);
        };
        friend void from_json(const Darabonba::Json& j, ShareGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(Group, group_);
        };
        ShareGroup() = default ;
        ShareGroup(const ShareGroup &) = default ;
        ShareGroup(ShareGroup &&) = default ;
        ShareGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ShareGroup() = default ;
        ShareGroup& operator=(const ShareGroup &) = default ;
        ShareGroup& operator=(ShareGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->group_ == nullptr; };
        // group Field Functions 
        bool hasGroup() const { return this->group_ != nullptr;};
        void deleteGroup() { this->group_ = nullptr;};
        inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
        inline ShareGroup& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      protected:
        // The shared group.
        shared_ptr<string> group_ {};
      };

      virtual bool empty() const override { return this->shareGroup_ == nullptr; };
      // shareGroup Field Functions 
      bool hasShareGroup() const { return this->shareGroup_ != nullptr;};
      void deleteShareGroup() { this->shareGroup_ = nullptr;};
      inline const vector<ShareGroups::ShareGroup> & getShareGroup() const { DARABONBA_PTR_GET_CONST(shareGroup_, vector<ShareGroups::ShareGroup>) };
      inline vector<ShareGroups::ShareGroup> getShareGroup() { DARABONBA_PTR_GET(shareGroup_, vector<ShareGroups::ShareGroup>) };
      inline ShareGroups& setShareGroup(const vector<ShareGroups::ShareGroup> & shareGroup) { DARABONBA_PTR_SET_VALUE(shareGroup_, shareGroup) };
      inline ShareGroups& setShareGroup(vector<ShareGroups::ShareGroup> && shareGroup) { DARABONBA_PTR_SET_RVALUE(shareGroup_, shareGroup) };


    protected:
      shared_ptr<vector<ShareGroups::ShareGroup>> shareGroup_ {};
    };

    class Accounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Accounts& obj) { 
        DARABONBA_PTR_TO_JSON(Account, account_);
      };
      friend void from_json(const Darabonba::Json& j, Accounts& obj) { 
        DARABONBA_PTR_FROM_JSON(Account, account_);
      };
      Accounts() = default ;
      Accounts(const Accounts &) = default ;
      Accounts(Accounts &&) = default ;
      Accounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Accounts() = default ;
      Accounts& operator=(const Accounts &) = default ;
      Accounts& operator=(Accounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Account : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Account& obj) { 
          DARABONBA_PTR_TO_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_TO_JSON(SharedTime, sharedTime_);
        };
        friend void from_json(const Darabonba::Json& j, Account& obj) { 
          DARABONBA_PTR_FROM_JSON(AliyunId, aliyunId_);
          DARABONBA_PTR_FROM_JSON(SharedTime, sharedTime_);
        };
        Account() = default ;
        Account(const Account &) = default ;
        Account(Account &&) = default ;
        Account(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Account() = default ;
        Account& operator=(const Account &) = default ;
        Account& operator=(Account &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->aliyunId_ == nullptr
        && this->sharedTime_ == nullptr; };
        // aliyunId Field Functions 
        bool hasAliyunId() const { return this->aliyunId_ != nullptr;};
        void deleteAliyunId() { this->aliyunId_ = nullptr;};
        inline string getAliyunId() const { DARABONBA_PTR_GET_DEFAULT(aliyunId_, "") };
        inline Account& setAliyunId(string aliyunId) { DARABONBA_PTR_SET_VALUE(aliyunId_, aliyunId) };


        // sharedTime Field Functions 
        bool hasSharedTime() const { return this->sharedTime_ != nullptr;};
        void deleteSharedTime() { this->sharedTime_ = nullptr;};
        inline string getSharedTime() const { DARABONBA_PTR_GET_DEFAULT(sharedTime_, "") };
        inline Account& setSharedTime(string sharedTime) { DARABONBA_PTR_SET_VALUE(sharedTime_, sharedTime) };


      protected:
        // The ID of the Alibaba Cloud account.
        shared_ptr<string> aliyunId_ {};
        // The time when the image was shared. The time follows the [ISO 8601](https://help.aliyun.com/document_detail/25696.html) standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> sharedTime_ {};
      };

      virtual bool empty() const override { return this->account_ == nullptr; };
      // account Field Functions 
      bool hasAccount() const { return this->account_ != nullptr;};
      void deleteAccount() { this->account_ = nullptr;};
      inline const vector<Accounts::Account> & getAccount() const { DARABONBA_PTR_GET_CONST(account_, vector<Accounts::Account>) };
      inline vector<Accounts::Account> getAccount() { DARABONBA_PTR_GET(account_, vector<Accounts::Account>) };
      inline Accounts& setAccount(const vector<Accounts::Account> & account) { DARABONBA_PTR_SET_VALUE(account_, account) };
      inline Accounts& setAccount(vector<Accounts::Account> && account) { DARABONBA_PTR_SET_RVALUE(account_, account) };


    protected:
      shared_ptr<vector<Accounts::Account>> account_ {};
    };

    virtual bool empty() const override { return this->accounts_ == nullptr
        && this->imageId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->requestId_ == nullptr
        && this->shareGroups_ == nullptr && this->totalCount_ == nullptr; };
    // accounts Field Functions 
    bool hasAccounts() const { return this->accounts_ != nullptr;};
    void deleteAccounts() { this->accounts_ = nullptr;};
    inline const DescribeImageSharePermissionResponseBody::Accounts & getAccounts() const { DARABONBA_PTR_GET_CONST(accounts_, DescribeImageSharePermissionResponseBody::Accounts) };
    inline DescribeImageSharePermissionResponseBody::Accounts getAccounts() { DARABONBA_PTR_GET(accounts_, DescribeImageSharePermissionResponseBody::Accounts) };
    inline DescribeImageSharePermissionResponseBody& setAccounts(const DescribeImageSharePermissionResponseBody::Accounts & accounts) { DARABONBA_PTR_SET_VALUE(accounts_, accounts) };
    inline DescribeImageSharePermissionResponseBody& setAccounts(DescribeImageSharePermissionResponseBody::Accounts && accounts) { DARABONBA_PTR_SET_RVALUE(accounts_, accounts) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string getImageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline DescribeImageSharePermissionResponseBody& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeImageSharePermissionResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageSharePermissionResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeImageSharePermissionResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageSharePermissionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shareGroups Field Functions 
    bool hasShareGroups() const { return this->shareGroups_ != nullptr;};
    void deleteShareGroups() { this->shareGroups_ = nullptr;};
    inline const DescribeImageSharePermissionResponseBody::ShareGroups & getShareGroups() const { DARABONBA_PTR_GET_CONST(shareGroups_, DescribeImageSharePermissionResponseBody::ShareGroups) };
    inline DescribeImageSharePermissionResponseBody::ShareGroups getShareGroups() { DARABONBA_PTR_GET(shareGroups_, DescribeImageSharePermissionResponseBody::ShareGroups) };
    inline DescribeImageSharePermissionResponseBody& setShareGroups(const DescribeImageSharePermissionResponseBody::ShareGroups & shareGroups) { DARABONBA_PTR_SET_VALUE(shareGroups_, shareGroups) };
    inline DescribeImageSharePermissionResponseBody& setShareGroups(DescribeImageSharePermissionResponseBody::ShareGroups && shareGroups) { DARABONBA_PTR_SET_RVALUE(shareGroups_, shareGroups) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageSharePermissionResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The Alibaba Cloud accounts.
    shared_ptr<DescribeImageSharePermissionResponseBody::Accounts> accounts_ {};
    // The ID of the custom image.
    shared_ptr<string> imageId_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The region ID of the custom image.
    shared_ptr<string> regionId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The shared groups.
    shared_ptr<DescribeImageSharePermissionResponseBody::ShareGroups> shareGroups_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
