// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTORGANIZATIONMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class ListOrganizationMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOrganizationMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListOrganizationMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListOrganizationMembersResponseBody() = default ;
    ListOrganizationMembersResponseBody(const ListOrganizationMembersResponseBody &) = default ;
    ListOrganizationMembersResponseBody(ListOrganizationMembersResponseBody &&) = default ;
    ListOrganizationMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOrganizationMembersResponseBody() = default ;
    ListOrganizationMembersResponseBody& operator=(const ListOrganizationMembersResponseBody &) = default ;
    ListOrganizationMembersResponseBody& operator=(ListOrganizationMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AccountBizId, accountBizId_);
        DARABONBA_PTR_TO_JSON(AccountId, accountId_);
        DARABONBA_PTR_TO_JSON(AccountName, accountName_);
        DARABONBA_PTR_TO_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(MaskedApiKey, maskedApiKey_);
        DARABONBA_PTR_TO_JSON(OrgId, orgId_);
        DARABONBA_PTR_TO_JSON(Roles, roles_);
        DARABONBA_PTR_TO_JSON(SeatId, seatId_);
        DARABONBA_PTR_TO_JSON(SpecType, specType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccountBizId, accountBizId_);
        DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
        DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
        DARABONBA_PTR_FROM_JSON(ApiKeyId, apiKeyId_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(MaskedApiKey, maskedApiKey_);
        DARABONBA_PTR_FROM_JSON(OrgId, orgId_);
        DARABONBA_PTR_FROM_JSON(Roles, roles_);
        DARABONBA_PTR_FROM_JSON(SeatId, seatId_);
        DARABONBA_PTR_FROM_JSON(SpecType, specType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->accountBizId_ == nullptr
        && this->accountId_ == nullptr && this->accountName_ == nullptr && this->apiKeyId_ == nullptr && this->email_ == nullptr && this->gmtCreate_ == nullptr
        && this->maskedApiKey_ == nullptr && this->orgId_ == nullptr && this->roles_ == nullptr && this->seatId_ == nullptr && this->specType_ == nullptr
        && this->status_ == nullptr; };
      // accountBizId Field Functions 
      bool hasAccountBizId() const { return this->accountBizId_ != nullptr;};
      void deleteAccountBizId() { this->accountBizId_ = nullptr;};
      inline string getAccountBizId() const { DARABONBA_PTR_GET_DEFAULT(accountBizId_, "") };
      inline Data& setAccountBizId(string accountBizId) { DARABONBA_PTR_SET_VALUE(accountBizId_, accountBizId) };


      // accountId Field Functions 
      bool hasAccountId() const { return this->accountId_ != nullptr;};
      void deleteAccountId() { this->accountId_ = nullptr;};
      inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
      inline Data& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


      // accountName Field Functions 
      bool hasAccountName() const { return this->accountName_ != nullptr;};
      void deleteAccountName() { this->accountName_ = nullptr;};
      inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
      inline Data& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


      // apiKeyId Field Functions 
      bool hasApiKeyId() const { return this->apiKeyId_ != nullptr;};
      void deleteApiKeyId() { this->apiKeyId_ = nullptr;};
      inline string getApiKeyId() const { DARABONBA_PTR_GET_DEFAULT(apiKeyId_, "") };
      inline Data& setApiKeyId(string apiKeyId) { DARABONBA_PTR_SET_VALUE(apiKeyId_, apiKeyId) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline Data& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
      inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // maskedApiKey Field Functions 
      bool hasMaskedApiKey() const { return this->maskedApiKey_ != nullptr;};
      void deleteMaskedApiKey() { this->maskedApiKey_ = nullptr;};
      inline string getMaskedApiKey() const { DARABONBA_PTR_GET_DEFAULT(maskedApiKey_, "") };
      inline Data& setMaskedApiKey(string maskedApiKey) { DARABONBA_PTR_SET_VALUE(maskedApiKey_, maskedApiKey) };


      // orgId Field Functions 
      bool hasOrgId() const { return this->orgId_ != nullptr;};
      void deleteOrgId() { this->orgId_ = nullptr;};
      inline string getOrgId() const { DARABONBA_PTR_GET_DEFAULT(orgId_, "") };
      inline Data& setOrgId(string orgId) { DARABONBA_PTR_SET_VALUE(orgId_, orgId) };


      // roles Field Functions 
      bool hasRoles() const { return this->roles_ != nullptr;};
      void deleteRoles() { this->roles_ = nullptr;};
      inline const vector<string> & getRoles() const { DARABONBA_PTR_GET_CONST(roles_, vector<string>) };
      inline vector<string> getRoles() { DARABONBA_PTR_GET(roles_, vector<string>) };
      inline Data& setRoles(const vector<string> & roles) { DARABONBA_PTR_SET_VALUE(roles_, roles) };
      inline Data& setRoles(vector<string> && roles) { DARABONBA_PTR_SET_RVALUE(roles_, roles) };


      // seatId Field Functions 
      bool hasSeatId() const { return this->seatId_ != nullptr;};
      void deleteSeatId() { this->seatId_ = nullptr;};
      inline string getSeatId() const { DARABONBA_PTR_GET_DEFAULT(seatId_, "") };
      inline Data& setSeatId(string seatId) { DARABONBA_PTR_SET_VALUE(seatId_, seatId) };


      // specType Field Functions 
      bool hasSpecType() const { return this->specType_ != nullptr;};
      void deleteSpecType() { this->specType_ = nullptr;};
      inline string getSpecType() const { DARABONBA_PTR_GET_DEFAULT(specType_, "") };
      inline Data& setSpecType(string specType) { DARABONBA_PTR_SET_VALUE(specType_, specType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The member business ID.
      shared_ptr<string> accountBizId_ {};
      // The ID of the member account.
      shared_ptr<string> accountId_ {};
      // The name of the member account.
      shared_ptr<string> accountName_ {};
      // API Key ID
      shared_ptr<string> apiKeyId_ {};
      // The email address of the member.
      shared_ptr<string> email_ {};
      // The time when the member joined.
      shared_ptr<string> gmtCreate_ {};
      // The masked API key.
      shared_ptr<string> maskedApiKey_ {};
      // The organization ID.
      shared_ptr<string> orgId_ {};
      // The list of member roles.
      shared_ptr<vector<string>> roles_ {};
      // The ID used to allocate the seat resource.
      shared_ptr<string> seatId_ {};
      // The seat specification type. Valid values:
      // - standard: Standard seat.
      // - pro: Pro seat.
      // - max: Premium seat.
      shared_ptr<string> specType_ {};
      // The member status.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->success_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListOrganizationMembersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListOrganizationMembersResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListOrganizationMembersResponseBody::Data>) };
    inline vector<ListOrganizationMembersResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListOrganizationMembersResponseBody::Data>) };
    inline ListOrganizationMembersResponseBody& setData(const vector<ListOrganizationMembersResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListOrganizationMembersResponseBody& setData(vector<ListOrganizationMembersResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListOrganizationMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListOrganizationMembersResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListOrganizationMembersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListOrganizationMembersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListOrganizationMembersResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response status code.
    shared_ptr<string> code_ {};
    // The business data.
    shared_ptr<vector<ListOrganizationMembersResponseBody::Data>> data_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int32_t> pageNo_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
    // The total number of records.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
