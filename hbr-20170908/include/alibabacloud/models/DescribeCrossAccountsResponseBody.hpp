// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECROSSACCOUNTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECROSSACCOUNTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeCrossAccountsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCrossAccountsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CrossAccounts, crossAccounts_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCrossAccountsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CrossAccounts, crossAccounts_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeCrossAccountsResponseBody() = default ;
    DescribeCrossAccountsResponseBody(const DescribeCrossAccountsResponseBody &) = default ;
    DescribeCrossAccountsResponseBody(DescribeCrossAccountsResponseBody &&) = default ;
    DescribeCrossAccountsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCrossAccountsResponseBody() = default ;
    DescribeCrossAccountsResponseBody& operator=(const DescribeCrossAccountsResponseBody &) = default ;
    DescribeCrossAccountsResponseBody& operator=(DescribeCrossAccountsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CrossAccounts : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CrossAccounts& obj) { 
        DARABONBA_PTR_TO_JSON(CrossAccount, crossAccount_);
      };
      friend void from_json(const Darabonba::Json& j, CrossAccounts& obj) { 
        DARABONBA_PTR_FROM_JSON(CrossAccount, crossAccount_);
      };
      CrossAccounts() = default ;
      CrossAccounts(const CrossAccounts &) = default ;
      CrossAccounts(CrossAccounts &&) = default ;
      CrossAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CrossAccounts() = default ;
      CrossAccounts& operator=(const CrossAccounts &) = default ;
      CrossAccounts& operator=(CrossAccounts &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CrossAccount : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CrossAccount& obj) { 
          DARABONBA_PTR_TO_JSON(Alias, alias_);
          DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_TO_JSON(CrossAccountRoleName, crossAccountRoleName_);
          DARABONBA_PTR_TO_JSON(CrossAccountType, crossAccountType_);
          DARABONBA_PTR_TO_JSON(CrossAccountUserId, crossAccountUserId_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
        };
        friend void from_json(const Darabonba::Json& j, CrossAccount& obj) { 
          DARABONBA_PTR_FROM_JSON(Alias, alias_);
          DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
          DARABONBA_PTR_FROM_JSON(CrossAccountRoleName, crossAccountRoleName_);
          DARABONBA_PTR_FROM_JSON(CrossAccountType, crossAccountType_);
          DARABONBA_PTR_FROM_JSON(CrossAccountUserId, crossAccountUserId_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
          DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
        };
        CrossAccount() = default ;
        CrossAccount(const CrossAccount &) = default ;
        CrossAccount(CrossAccount &&) = default ;
        CrossAccount(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CrossAccount() = default ;
        CrossAccount& operator=(const CrossAccount &) = default ;
        CrossAccount& operator=(CrossAccount &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alias_ == nullptr
        && this->createdTime_ == nullptr && this->crossAccountRoleName_ == nullptr && this->crossAccountType_ == nullptr && this->crossAccountUserId_ == nullptr && this->id_ == nullptr
        && this->ownerId_ == nullptr && this->updatedTime_ == nullptr; };
        // alias Field Functions 
        bool hasAlias() const { return this->alias_ != nullptr;};
        void deleteAlias() { this->alias_ = nullptr;};
        inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
        inline CrossAccount& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


        // createdTime Field Functions 
        bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
        void deleteCreatedTime() { this->createdTime_ = nullptr;};
        inline int64_t getCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
        inline CrossAccount& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


        // crossAccountRoleName Field Functions 
        bool hasCrossAccountRoleName() const { return this->crossAccountRoleName_ != nullptr;};
        void deleteCrossAccountRoleName() { this->crossAccountRoleName_ = nullptr;};
        inline string getCrossAccountRoleName() const { DARABONBA_PTR_GET_DEFAULT(crossAccountRoleName_, "") };
        inline CrossAccount& setCrossAccountRoleName(string crossAccountRoleName) { DARABONBA_PTR_SET_VALUE(crossAccountRoleName_, crossAccountRoleName) };


        // crossAccountType Field Functions 
        bool hasCrossAccountType() const { return this->crossAccountType_ != nullptr;};
        void deleteCrossAccountType() { this->crossAccountType_ = nullptr;};
        inline string getCrossAccountType() const { DARABONBA_PTR_GET_DEFAULT(crossAccountType_, "") };
        inline CrossAccount& setCrossAccountType(string crossAccountType) { DARABONBA_PTR_SET_VALUE(crossAccountType_, crossAccountType) };


        // crossAccountUserId Field Functions 
        bool hasCrossAccountUserId() const { return this->crossAccountUserId_ != nullptr;};
        void deleteCrossAccountUserId() { this->crossAccountUserId_ = nullptr;};
        inline int64_t getCrossAccountUserId() const { DARABONBA_PTR_GET_DEFAULT(crossAccountUserId_, 0L) };
        inline CrossAccount& setCrossAccountUserId(int64_t crossAccountUserId) { DARABONBA_PTR_SET_VALUE(crossAccountUserId_, crossAccountUserId) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline CrossAccount& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // ownerId Field Functions 
        bool hasOwnerId() const { return this->ownerId_ != nullptr;};
        void deleteOwnerId() { this->ownerId_ = nullptr;};
        inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
        inline CrossAccount& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


        // updatedTime Field Functions 
        bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
        void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
        inline int64_t getUpdatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
        inline CrossAccount& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


      protected:
        // The account alias. The value can be up to 32 bits in length.
        shared_ptr<string> alias_ {};
        // The time when the account was created. This value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> createdTime_ {};
        // The name of the RAM role that is created within the source Alibaba Cloud account and assigned to the current Alibaba Cloud account to authorize the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<string> crossAccountRoleName_ {};
        shared_ptr<string> crossAccountType_ {};
        // The ID of the source Alibaba Cloud account that authorizes the current Alibaba Cloud account to back up data across Alibaba Cloud accounts.
        shared_ptr<int64_t> crossAccountUserId_ {};
        // The ID of the backup type.
        shared_ptr<int64_t> id_ {};
        // The ID of the current account.
        shared_ptr<int64_t> ownerId_ {};
        // The time when the account information was updated. The value is a UNIX timestamp. Unit: seconds.
        shared_ptr<int64_t> updatedTime_ {};
      };

      virtual bool empty() const override { return this->crossAccount_ == nullptr; };
      // crossAccount Field Functions 
      bool hasCrossAccount() const { return this->crossAccount_ != nullptr;};
      void deleteCrossAccount() { this->crossAccount_ = nullptr;};
      inline const vector<CrossAccounts::CrossAccount> & getCrossAccount() const { DARABONBA_PTR_GET_CONST(crossAccount_, vector<CrossAccounts::CrossAccount>) };
      inline vector<CrossAccounts::CrossAccount> getCrossAccount() { DARABONBA_PTR_GET(crossAccount_, vector<CrossAccounts::CrossAccount>) };
      inline CrossAccounts& setCrossAccount(const vector<CrossAccounts::CrossAccount> & crossAccount) { DARABONBA_PTR_SET_VALUE(crossAccount_, crossAccount) };
      inline CrossAccounts& setCrossAccount(vector<CrossAccounts::CrossAccount> && crossAccount) { DARABONBA_PTR_SET_RVALUE(crossAccount_, crossAccount) };


    protected:
      shared_ptr<vector<CrossAccounts::CrossAccount>> crossAccount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->crossAccounts_ == nullptr && this->message_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeCrossAccountsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // crossAccounts Field Functions 
    bool hasCrossAccounts() const { return this->crossAccounts_ != nullptr;};
    void deleteCrossAccounts() { this->crossAccounts_ = nullptr;};
    inline const DescribeCrossAccountsResponseBody::CrossAccounts & getCrossAccounts() const { DARABONBA_PTR_GET_CONST(crossAccounts_, DescribeCrossAccountsResponseBody::CrossAccounts) };
    inline DescribeCrossAccountsResponseBody::CrossAccounts getCrossAccounts() { DARABONBA_PTR_GET(crossAccounts_, DescribeCrossAccountsResponseBody::CrossAccounts) };
    inline DescribeCrossAccountsResponseBody& setCrossAccounts(const DescribeCrossAccountsResponseBody::CrossAccounts & crossAccounts) { DARABONBA_PTR_SET_VALUE(crossAccounts_, crossAccounts) };
    inline DescribeCrossAccountsResponseBody& setCrossAccounts(DescribeCrossAccountsResponseBody::CrossAccounts && crossAccounts) { DARABONBA_PTR_SET_RVALUE(crossAccounts_, crossAccounts) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeCrossAccountsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCrossAccountsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCrossAccountsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCrossAccountsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeCrossAccountsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeCrossAccountsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code. The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The information about the accounts used in cross-account backup.
    shared_ptr<DescribeCrossAccountsResponseBody::CrossAccounts> crossAccounts_ {};
    // The returned message. If the request was successful, "successful" is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The page number. Pages start from page 1. Default value: 1.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Valid values: 1 to 99. Default value: 10.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
