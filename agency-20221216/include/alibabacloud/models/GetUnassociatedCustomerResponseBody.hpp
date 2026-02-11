// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUNASSOCIATEDCUSTOMERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetUnassociatedCustomerResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUnassociatedCustomerResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(InviteInfoList, inviteInfoList_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUnassociatedCustomerResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(InviteInfoList, inviteInfoList_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUnassociatedCustomerResponseBody() = default ;
    GetUnassociatedCustomerResponseBody(const GetUnassociatedCustomerResponseBody &) = default ;
    GetUnassociatedCustomerResponseBody(GetUnassociatedCustomerResponseBody &&) = default ;
    GetUnassociatedCustomerResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUnassociatedCustomerResponseBody() = default ;
    GetUnassociatedCustomerResponseBody& operator=(const GetUnassociatedCustomerResponseBody &) = default ;
    GetUnassociatedCustomerResponseBody& operator=(GetUnassociatedCustomerResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Page, page_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Page, page_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->page_ == nullptr
        && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // page Field Functions 
      bool hasPage() const { return this->page_ != nullptr;};
      void deletePage() { this->page_ = nullptr;};
      inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
      inline PageInfo& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
      inline PageInfo& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // Pagination, current page.
      shared_ptr<int32_t> page_ {};
      // Pagination, record number on each page.
      shared_ptr<int32_t> pageSize_ {};
      // Pagination, page volume in total.
      shared_ptr<int32_t> total_ {};
    };

    class InviteInfoList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InviteInfoList& obj) { 
        DARABONBA_PTR_TO_JSON(InviteInfo, inviteInfo_);
      };
      friend void from_json(const Darabonba::Json& j, InviteInfoList& obj) { 
        DARABONBA_PTR_FROM_JSON(InviteInfo, inviteInfo_);
      };
      InviteInfoList() = default ;
      InviteInfoList(const InviteInfoList &) = default ;
      InviteInfoList(InviteInfoList &&) = default ;
      InviteInfoList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InviteInfoList() = default ;
      InviteInfoList& operator=(const InviteInfoList &) = default ;
      InviteInfoList& operator=(InviteInfoList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class InviteInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const InviteInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AccountNickname, accountNickname_);
          DARABONBA_PTR_TO_JSON(Email, email_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(InviteId, inviteId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, InviteInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountNickname, accountNickname_);
          DARABONBA_PTR_FROM_JSON(Email, email_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(InviteId, inviteId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        InviteInfo() = default ;
        InviteInfo(const InviteInfo &) = default ;
        InviteInfo(InviteInfo &&) = default ;
        InviteInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~InviteInfo() = default ;
        InviteInfo& operator=(const InviteInfo &) = default ;
        InviteInfo& operator=(InviteInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountNickname_ == nullptr
        && this->email_ == nullptr && this->gmtCreate_ == nullptr && this->inviteId_ == nullptr && this->status_ == nullptr; };
        // accountNickname Field Functions 
        bool hasAccountNickname() const { return this->accountNickname_ != nullptr;};
        void deleteAccountNickname() { this->accountNickname_ = nullptr;};
        inline string getAccountNickname() const { DARABONBA_PTR_GET_DEFAULT(accountNickname_, "") };
        inline InviteInfo& setAccountNickname(string accountNickname) { DARABONBA_PTR_SET_VALUE(accountNickname_, accountNickname) };


        // email Field Functions 
        bool hasEmail() const { return this->email_ != nullptr;};
        void deleteEmail() { this->email_ = nullptr;};
        inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
        inline InviteInfo& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline InviteInfo& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // inviteId Field Functions 
        bool hasInviteId() const { return this->inviteId_ != nullptr;};
        void deleteInviteId() { this->inviteId_ = nullptr;};
        inline int64_t getInviteId() const { DARABONBA_PTR_GET_DEFAULT(inviteId_, 0L) };
        inline InviteInfo& setInviteId(int64_t inviteId) { DARABONBA_PTR_SET_VALUE(inviteId_, inviteId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline InviteInfo& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        shared_ptr<string> accountNickname_ {};
        shared_ptr<string> email_ {};
        shared_ptr<string> gmtCreate_ {};
        shared_ptr<int64_t> inviteId_ {};
        shared_ptr<int32_t> status_ {};
      };

      virtual bool empty() const override { return this->inviteInfo_ == nullptr; };
      // inviteInfo Field Functions 
      bool hasInviteInfo() const { return this->inviteInfo_ != nullptr;};
      void deleteInviteInfo() { this->inviteInfo_ = nullptr;};
      inline const vector<InviteInfoList::InviteInfo> & getInviteInfo() const { DARABONBA_PTR_GET_CONST(inviteInfo_, vector<InviteInfoList::InviteInfo>) };
      inline vector<InviteInfoList::InviteInfo> getInviteInfo() { DARABONBA_PTR_GET(inviteInfo_, vector<InviteInfoList::InviteInfo>) };
      inline InviteInfoList& setInviteInfo(const vector<InviteInfoList::InviteInfo> & inviteInfo) { DARABONBA_PTR_SET_VALUE(inviteInfo_, inviteInfo) };
      inline InviteInfoList& setInviteInfo(vector<InviteInfoList::InviteInfo> && inviteInfo) { DARABONBA_PTR_SET_RVALUE(inviteInfo_, inviteInfo) };


    protected:
      shared_ptr<vector<InviteInfoList::InviteInfo>> inviteInfo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->inviteInfoList_ == nullptr && this->message_ == nullptr && this->pageInfo_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUnassociatedCustomerResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // inviteInfoList Field Functions 
    bool hasInviteInfoList() const { return this->inviteInfoList_ != nullptr;};
    void deleteInviteInfoList() { this->inviteInfoList_ = nullptr;};
    inline const GetUnassociatedCustomerResponseBody::InviteInfoList & getInviteInfoList() const { DARABONBA_PTR_GET_CONST(inviteInfoList_, GetUnassociatedCustomerResponseBody::InviteInfoList) };
    inline GetUnassociatedCustomerResponseBody::InviteInfoList getInviteInfoList() { DARABONBA_PTR_GET(inviteInfoList_, GetUnassociatedCustomerResponseBody::InviteInfoList) };
    inline GetUnassociatedCustomerResponseBody& setInviteInfoList(const GetUnassociatedCustomerResponseBody::InviteInfoList & inviteInfoList) { DARABONBA_PTR_SET_VALUE(inviteInfoList_, inviteInfoList) };
    inline GetUnassociatedCustomerResponseBody& setInviteInfoList(GetUnassociatedCustomerResponseBody::InviteInfoList && inviteInfoList) { DARABONBA_PTR_SET_RVALUE(inviteInfoList_, inviteInfoList) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUnassociatedCustomerResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const GetUnassociatedCustomerResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, GetUnassociatedCustomerResponseBody::PageInfo) };
    inline GetUnassociatedCustomerResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, GetUnassociatedCustomerResponseBody::PageInfo) };
    inline GetUnassociatedCustomerResponseBody& setPageInfo(const GetUnassociatedCustomerResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline GetUnassociatedCustomerResponseBody& setPageInfo(GetUnassociatedCustomerResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUnassociatedCustomerResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUnassociatedCustomerResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error Code, Candidate Value：
    // * 200: OK
    // * 1109: System error
    shared_ptr<string> code_ {};
    shared_ptr<GetUnassociatedCustomerResponseBody::InviteInfoList> inviteInfoList_ {};
    // Message information
    shared_ptr<string> message_ {};
    // Pagination Information
    shared_ptr<GetUnassociatedCustomerResponseBody::PageInfo> pageInfo_ {};
    // Request ID, Alibaba Cloud will track errors with this.
    shared_ptr<string> requestId_ {};
    // Candidate Value: True/False, which indicates whether the current API call itself is successful. It does not guarantee the success of subsequent business operations.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
